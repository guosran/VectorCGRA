const express = require('express');
const fs = require('fs');
const path = require('path');

const app = express();
const PORT = 8765;

app.use(express.static(path.join(__dirname, 'public')));
app.use(express.json());

// API to list available trace files
app.get('/api/traces', (req, res) => {
  const traceDir = path.join(__dirname, '..', 'trace_output');
  if (!fs.existsSync(traceDir)) {
    return res.json([]);
  }
  const files = fs.readdirSync(traceDir)
    .filter(f => f.endsWith('.jsonl'))
    .map(f => ({
      name: f,
      path: path.join(traceDir, f),
      size: fs.statSync(path.join(traceDir, f)).size,
    }));
  res.json(files);
});

// API to load a trace file
// Cache parsed line offsets for large files
const lineOffsetCache = {};

function getLineOffsets(filepath) {
  if (lineOffsetCache[filepath]) return lineOffsetCache[filepath];
  const content = fs.readFileSync(filepath, 'utf-8');
  const lines = content.split('\n').filter(l => l.trim());
  const offsets = { totalLines: lines.length, lines: lines };
  lineOffsetCache[filepath] = offsets;
  return offsets;
}

// API: get trace metadata (total cycles) without loading all data
app.get('/api/trace/:filename/meta', (req, res) => {
  const traceDir = path.join(__dirname, '..', 'trace_output');
  const filepath = path.join(traceDir, req.params.filename);
  if (!fs.existsSync(filepath)) {
    return res.status(404).json({ error: 'File not found' });
  }
  const offsets = getLineOffsets(filepath);
  res.json({ filename: req.params.filename, totalCycles: offsets.totalLines });
});

// API: get a range of cycles
app.get('/api/trace/:filename/range', (req, res) => {
  const traceDir = path.join(__dirname, '..', 'trace_output');
  const filepath = path.join(traceDir, req.params.filename);
  if (!fs.existsSync(filepath)) {
    return res.status(404).json({ error: 'File not found' });
  }
  const offsets = getLineOffsets(filepath);
  const start = Math.max(0, parseInt(req.query.start) || 0);
  const end = Math.min(offsets.totalLines, parseInt(req.query.end) || (start + 1));
  const cycles = [];
  for (let i = start; i < end; i++) {
    try { cycles.push(JSON.parse(offsets.lines[i])); }
    catch(e) { cycles.push({ cycle: i, error: 'Parse error' }); }
  }
  res.json({ filename: req.params.filename, totalCycles: offsets.totalLines, start, end, cycles });
});

// Original full load (kept for backward compatibility, but may be slow for large files)
app.get('/api/trace/:filename', (req, res) => {
  const traceDir = path.join(__dirname, '..', 'trace_output');
  const filepath = path.join(traceDir, req.params.filename);

  if (!fs.existsSync(filepath)) {
    return res.status(404).json({ error: 'File not found' });
  }

  const offsets = getLineOffsets(filepath);
  const cycles = offsets.lines.map((line, idx) => {
    try { return JSON.parse(line); }
    catch (e) { return { cycle: idx, error: 'Parse error' }; }
  });

  res.json({
    filename: req.params.filename,
    totalCycles: cycles.length,
    cycles: cycles,
  });
});

// API to load a custom file path
app.post('/api/load', (req, res) => {
  const filepath = req.body.filepath;
  if (!filepath || !fs.existsSync(filepath)) {
    return res.status(404).json({ error: 'File not found' });
  }

  const content = fs.readFileSync(filepath, 'utf-8');
  const lines = content.trim().split('\n');
  const cycles = lines.map((line, idx) => {
    try {
      return JSON.parse(line);
    } catch (e) {
      return { cycle: idx, error: 'Parse error' };
    }
  });

  res.json({
    filename: path.basename(filepath),
    totalCycles: cycles.length,
    cycles: cycles,
  });
});

app.listen(PORT, () => {
  console.log(`CGRA Visualizer running at http://localhost:${PORT}`);
});
