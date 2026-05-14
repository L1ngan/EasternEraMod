# `struct` `FTransportItemCache`

**Source header:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## Functional description (from header comments)

> 物品缓存

## Blueprint-exposed variables

### Property `ObjectData`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FUObjectData ObjectData;` |

**Source comments:**

> 对应的ItemAction

---

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Actions](../GOAP/GOAP_ManagerComponent__FGOAP_Actions.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGOAP_Actions Actions;` |

**Source comments:**

> ActionData

---

### Property `Plans`

| Field | Details |
|------|------|
| C++ type | TArray<[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FGOAP_Action> Plans;` |

**Source comments:**

> 执行的计划链

---

### Property `ActionCost`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float ActionCost = 99999;` |

**Source comments:**

> 消耗

---
