# `struct` `FWarehouseItemReservedCapacity`

**Source header:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## Functional description (from header comments)

> 某仓库某物品的预约容量（不绑定具体格位）

## Blueprint-exposed variables

### Property `ReservedStackCapacity`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 ReservedStackCapacity = 0;` |

**Notes:**

> Amount of stack capacity reserved

---

### Property `ReservedEmptySmallGridSlots`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 ReservedEmptySmallGridSlots = 0;` |

**Notes:**

> Number of empty small grid slots reserved

---

### Property `SmallGridCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 SmallGridCount = 1;` |

**Notes:**

> 该 ItemID 的 SmallGridCount。用于在 ApplyReservedCapacityToCacheState 中区分
> 4 格物品(必须扣 EmptySlotCount==4 的整格) 与 1 格物品(优先扣已破坏的零散格)。

---
