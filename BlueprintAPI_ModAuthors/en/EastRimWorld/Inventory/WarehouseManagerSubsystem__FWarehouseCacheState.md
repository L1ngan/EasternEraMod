# `struct` `FWarehouseCacheState`

**Source header:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## Functional description (from header comments)

> 单个仓库在管理器中的缓存状态

## Blueprint-exposed variables

### Property `bIsFull`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bIsFull = false;` |

**Notes:**

> 是否已满仓

---

### Property `bIsKeepClear`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bIsKeepClear = false;` |

**Notes:**

> 是否保持清空

---

### Property `CellLayerEmptyStates`

| Field | Details |
|------|------|
| C++ type | TArray<[FWarehouseCellLayerEmptyState](WarehouseManagerSubsystem__FWarehouseCellLayerEmptyState.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FWarehouseCellLayerEmptyState> CellLayerEmptyStates;` |

**Notes:**

> 每个坐标格对应层数的空余状态列表（无嵌套 TMap，按格+层一条条存储）

---

### Property `ItemIDToRemainingStackCapacity`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName, int32> ItemIDToRemainingStackCapacity;` |

**Notes:**

> 每种物品在仓库中还能堆叠的总数（ItemID -> 剩余可堆叠个数，由各堆 MaxStackSize - CurrentCount 汇总）

---

### Property `TransportToWarehouseCache`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FTransportToWarehouseCache](WarehouseManagerSubsystem__FTransportToWarehouseCache.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,FTransportToWarehouseCache> TransportToWarehouseCache;` |

**Notes:**

> 物品缓存状态

---
