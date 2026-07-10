# `struct` `FFacilityBelongData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## Functional description (from header comments)

> 设施归属数据

## Blueprint-exposed variables

### Property `BelongState`

| Field | Details |
|------|------|
| C++ type | [EFacilityBelongState](../ERW_Enumerations__EFacilityBelongState.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) EFacilityBelongState BelongState { EFacilityBelongState::Share };` |

**Notes:**

> 设置归属状态

---

### Property `OwnerData`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FUObjectData OwnerData;` |

**Notes:**

> 拥有者的数据(用AIController的Guid)

---
