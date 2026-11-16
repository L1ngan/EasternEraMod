# `struct` `FWarehouseItemReservedCapacity`

**Source header:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## Functional description (from header comments)

> 某仓库某物品的预约容量（不绑定具体格位）
>  预约分两部分: 对已存在实堆余量的预约(ReservedStackCapacity), 对空格上"虚拟新堆"的预约(ReservedNewPileItemNum)。
>  同 ItemID 的多个角色预约空格时物理上会叠进同一堆, 因此虚拟新堆按数量共享;
>  预约占用的空格数是派生量 = ceil(ReservedNewPileItemNum / MaxStackSize) * SmallGridCount, 不单独存、不按角色分配。

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

### Property `ReservedNewPileItemNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 ReservedNewPileItemNum = 0;` |

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

### Property `MaxStackSize`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 MaxStackSize = 1;` |

**Notes:**

> 该 ItemID 的堆叠上限, 用于把虚拟新堆数量换算成占用的空格数

---
