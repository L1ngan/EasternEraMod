# `struct` `FTransportToWarehouseCache`

**Source header:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## Functional description (from header comments)

> 物品ID 对应的缓存

## Blueprint-exposed variables

### Property `ItemInfo`

| Field | Details |
|------|------|
| C++ type | `FInstancedStruct` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FInstancedStruct ItemInfo;` |

**Notes:**

> 物品ID

---

### Property `ItemCaches`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md),[FTransportItemCache](WarehouseManagerSubsystem__FTransportItemCache.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FUObjectData,FTransportItemCache> ItemCaches;` |

**Notes:**

> 物品action 对应的缓存

---

### Property `bCanPlaceItem`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bCanPlaceItem = true;` |

**Notes:**

> 是否可以放置这个id的物品 初步计算是否堆叠上限 空格等

---
