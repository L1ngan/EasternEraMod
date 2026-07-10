# `struct` `FWarehouseCellLayerEmptyState`

**Source header:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## Functional description (from header comments)

> 单个坐标格在某一层的空余状态（用于缓存，避免 TMap 套 TMap）

## Blueprint-exposed variables

### Property `GridPosition`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGridPosition GridPosition;` |

**Notes:**

> 坐标格

---

### Property `LayerNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 LayerNumber = 0;` |

**Notes:**

> 层级索引

---

### Property `EmptySlotCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 EmptySlotCount = 0;` |

**Notes:**

> 该格该层空余小格数量（0~4），使用时若需判断是否可放 4 格物品可直接判断 EmptySlotCount == 4

---
