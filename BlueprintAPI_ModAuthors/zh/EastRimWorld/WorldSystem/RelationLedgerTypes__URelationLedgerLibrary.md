# `class` `URelationLedgerLibrary`

**源码头文件:** `EastRimWorld/WorldSystem/RelationLedgerTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────
> 蓝图函数库 — 暴露 FRelationLedger 修改器给蓝图
> USTRUCT 成员函数无法直接 UFUNCTION, 通过伴生库转发
> ─────────────────────────────────────────────

## 蓝图暴露函数

### 函数 `AddDelta`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Relation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `Axis` | [ERelationAxis](RelationLedgerTypes__ERelationAxis.md) |
| `Delta` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Relation") static void AddDelta(UPARAM(ref) FRelationLedger& Ledger, ERelationAxis Axis, float Delta);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 修改某轴数值, 自动 Clamp [0,100] 并同步 CombinedFavor

---

### 函数 `HasTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Relation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ledger` | const [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `Tag` | [ERelationTag](RelationLedgerTypes__ERelationTag.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Relation") static bool HasTag(const FRelationLedger& Ledger, ERelationTag Tag);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查是否含有指定标签

---

### 函数 `AddTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Relation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `Tag` | [ERelationTag](RelationLedgerTypes__ERelationTag.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Relation") static void AddTag(UPARAM(ref) FRelationLedger& Ledger, ERelationTag Tag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加标签 (去重)

---

### 函数 `RemoveTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Relation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `Tag` | [ERelationTag](RelationLedgerTypes__ERelationTag.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Relation") static void RemoveTag(UPARAM(ref) FRelationLedger& Ledger, ERelationTag Tag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除标签

---

### 函数 `Decay`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Relation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `DeltaDays` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Relation") static void Decay(UPARAM(ref) FRelationLedger& Ledger, float DeltaDays);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 每游戏日衰减 — 恩仇随时间淡化

---

### 函数 `RecalcCombinedFavor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Relation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Relation") static void RecalcCombinedFavor(UPARAM(ref) FRelationLedger& Ledger);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重算 CombinedFavor = Grace - Grudge (Romance 不参与合成, 走独立判定)

---
