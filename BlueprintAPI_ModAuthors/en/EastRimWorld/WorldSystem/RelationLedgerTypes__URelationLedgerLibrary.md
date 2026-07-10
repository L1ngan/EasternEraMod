# `class` `URelationLedgerLibrary`

**Source header:** `EastRimWorld/WorldSystem/RelationLedgerTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────
> 蓝图函数库 — 暴露 FRelationLedger 修改器给蓝图
> USTRUCT 成员函数无法直接 UFUNCTION, 通过伴生库转发
> ─────────────────────────────────────────────

## Blueprint-exposed functions

### Function `AddDelta`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Relation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `Axis` | [ERelationAxis](RelationLedgerTypes__ERelationAxis.md) |
| `Delta` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Relation") static void AddDelta(UPARAM(ref) FRelationLedger& Ledger, ERelationAxis Axis, float Delta);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 修改某轴数值, 自动 Clamp [0,100] 并同步 CombinedFavor

---

### Function `HasTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Relation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ledger` | const [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `Tag` | [ERelationTag](RelationLedgerTypes__ERelationTag.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Relation") static bool HasTag(const FRelationLedger& Ledger, ERelationTag Tag);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查是否含有指定标签

---

### Function `AddTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Relation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `Tag` | [ERelationTag](RelationLedgerTypes__ERelationTag.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Relation") static void AddTag(UPARAM(ref) FRelationLedger& Ledger, ERelationTag Tag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加标签 (去重)

---

### Function `RemoveTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Relation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `Tag` | [ERelationTag](RelationLedgerTypes__ERelationTag.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Relation") static void RemoveTag(UPARAM(ref) FRelationLedger& Ledger, ERelationTag Tag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除标签

---

### Function `Decay`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Relation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |
| `DeltaDays` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Relation") static void Decay(UPARAM(ref) FRelationLedger& Ledger, float DeltaDays);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 每游戏日衰减 — 恩仇随时间淡化

---

### Function `RecalcCombinedFavor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Relation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ledger` | UPARAM(ref) [FRelationLedger](RelationLedgerTypes__FRelationLedger.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Relation") static void RecalcCombinedFavor(UPARAM(ref) FRelationLedger& Ledger);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重算 CombinedFavor = Grace - Grudge (Romance 不参与合成, 走独立判定)

---
