# `class` `UCanUseInventoryItemInstance`

**Source header:** `EastRimWorld/Inventory/CanUseInventoryItemInstance.h`

---

## Functional description (from header comments)

> 可以使用的物品实例的基类

## Blueprint-exposed variables

### Property `ResidueItemShelfLife`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float ResidueItemShelfLife;` |

**Notes:**

> 剩余物品的保质期

---

### Property `ItemOwnEffects`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<int> ItemOwnEffects;` |

**Notes:**

> 此时物品自身生效的效果

---

### Property `ItemUseState`

| Field | Details |
|------|------|
| C++ type | [EItemUseState](../Struct/ItemStruct__EItemUseState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EItemUseState ItemUseState = EItemUseState::None;` |

**Notes:**

> 物品使用状态（穿戴中、搬运中等）

---

### Property `UsedNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 UsedNum = 0;` |

**Notes:**

> 物品所处的环境
> UPROPERTY(blueprintReadWrite,EditAnywhere)
> EStorageSpace StorageSpace = EStorageSpace::OutDoor;
> 已经使用的次数

---

### Property `StorageSpaceEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float StorageSpaceEfficiency = 1.f;` |

**Notes:**

> 环境效率

---

## Blueprint-exposed functions

### Function `SetUseInventoryItemState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewItemUseState` | [EItemUseState](../Struct/ItemStruct__EItemUseState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetUseInventoryItemState(EItemUseState NewItemUseState);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置物品的使用状态

---

### Function `GetUseInventoryItemInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [FInventoryItem](../Struct/ItemStruct__FInventoryItem.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) FInventoryItem GetUseInventoryItemInfo();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取物品信息

---

### Function `ActivateItemToGenerateRobot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ActivateItemToGenerateRobot();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Activates the item to generate a robot

---
