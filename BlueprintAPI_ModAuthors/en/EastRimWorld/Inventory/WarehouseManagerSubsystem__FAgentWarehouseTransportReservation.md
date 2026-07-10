# `struct` `FAgentWarehouseTransportReservation`

**Source header:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## Functional description (from header comments)

> 角色搬运预约记录（仅用于中断时扣回该角色占用的容量）

## Blueprint-exposed variables

### Property `WarehouseComponent`

| Field | Details |
|------|------|
| C++ type | TWeakObjectPtr<[UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TWeakObjectPtr<UInventoryManagerComponent> WarehouseComponent;` |

**Notes:**

> Weak reference to the target warehouse's inventory manager component

---

### Property `ItemID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName ItemID;` |

**Notes:**

> ID of the item reserved for transport

---

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

> 该 ItemID 的 SmallGridCount。事务回滚时要用同样的 SmallGridCount 重新写回全局预约表。

---
