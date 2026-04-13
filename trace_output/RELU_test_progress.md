# ReLU 4×4 YAML — 进度（仅 ReLU，不涉及 FIR）

最后更新：2026-04-08（明确前提：**以固定 mesh/调度下内存黄金为准**，非与远端 diff 逐行一致；死锁仅作到达完整仿真与正确 STORE 的**前置条件**。）

## 前提（与用户对齐）

- **成功标准**：`test_homogeneous_4x4_relu_combinational_mem_access_return` 在 **当前编译好的 ReLU kernel + 本仓库 mesh** 上，**全局数据内存 0..31** 满足 `data[k] = max(-16+k, 0)`，并完成 **`CMD_COMPLETE` / 无 frozen-tail 误判下的真实停滞**。
- **非目标**：与上游/远端 YAML 或 trace **字节级一致**。

## 当前状态（`validation/test/relu.yaml` = **git HEAD**，RTL 含 `fu/single/SelRTL.py` 对 SEL **输出 predicate 不 AND in2**）

| 项 | 状态 |
|----|------|
| `python3 check_flow_v2.py validation/test/relu.yaml` | **通过** |
| 同上 pytest | **未通过**：**内存黄金** — `addr 1..15` 仍为预载负值 `signed -15..-1`，**期望 0**；`addr 0` 与 `16..31` 正确 |
| frozen-tail | **HEAD YAML 下不出现**（可跑过探针到内存检查） |

## 本轮实验结论（2026-04-08）

1. **`SelRTL` 省略 `in2.predicate`**：在 **仅 HEAD `relu.yaml`** 时 **不能**单独修复 1..15；失败形态与改 Sel 前相同 → 根因主要是 **假分支数据/路径**（见下），而非仅 predicate 与运算。
2. **死锁与 Sel 修改无关**：在「会死锁」的 YAML 上，`SelRTL` 恢复为 **AND `in2.predicate`** 仍 frozen-tail。
3. **HEAD vs 大改 YAML**  
   - **仅 HEAD mesh**：无死锁，**假分支走 `NORTH`**，但线上 **payload 像 RAW 的 load 负值** → 错写内存。  
   - **Core1 将 SEL 第三操作数改为本地 `$8`**（`GRANT_ONCE #0→$8` 或 `GRANT_ALWAYS $8→$8` 等）：在 **HEAD mesh** 上均 **frozen-tail（~300 cycle）**。  
   - **先前「全量 mesh/调度」改版**（T5/T6/T7/T10/T11 等 + Core1 `$8` + 双 `GRANT_ALWAYS`）：**整网多 tile `ctrl_val && !ctrl_rdy` 冻结**。  
   - **混合**：**HEAD mesh + 仅 Core1 增强** → 仍死锁。  
4. **假说**：Tile1 的 **`$8` 需稳定 `val`/初值**；仅加一条 `GRANT_ONCE_CONST` 或与 `GRANT_ALWAYS` 拼 slot，会与 **II=5 全 tile 控制对齐 / 寄存器读朝向** 冲突，表现为 SEL 永不满足 `recv_all_val` 或全局互锁。**下一步**应对 **Tile1 SEL@ts7** 的 `in0/in1/in2` 在 JSONL 上做周期级对照，或对「全量改版」YAML **按 hunk 二分**定位最小死锁子集。

## YAML / 脚本约束

`validation/script_generator.py`：`time_step % compiled_ii == index_per_ii`（ReLU `compiled_ii: 5`）。

## 验证命令

```bash
cd /home/x/shiran/VectorCGRA
python3 check_flow_v2.py validation/test/relu.yaml
venv/bin/python -m pytest cgra/test/CgraRTL_relu4x4_test_from_yaml.py::test_homogeneous_4x4_relu_combinational_mem_access_return fu/single/test/SelRTL_test.py -q --tb=short
```

## 环境与 trace（摘要）

- JSONL：`trace_output/trace_relu4x4_4x4_Mesh.jsonl`；路径可记 `trace_output/relu4x4_last_trace_path.txt`。
- 死锁里程碑、墙钟、`CGRA_QUIET_LINETRACE` 等见本文件旧版列表（仍有效）。

## 待办（仅 ReLU）

- [ ] JSONL：聚焦 **tile1（core 1）SEL**，核对 **`$8`/`NORTH` 的 val/pred/payload** 与 **STORE@ts8** 顺序。  
- [ ] 对曾导致全网死锁的 YAML 改版做 **增量回滚/二分**，找 **仍能让 SEL 假分支为常数 0** 且 **不 frozen-tail** 的最小改动。  
- [ ] 使 **`test_homogeneous_4x4_relu_combinational_mem_access_return`** 稳定通过（内存黄金 + 完成）。
