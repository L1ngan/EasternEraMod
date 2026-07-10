# `struct` `FApprenticeshipGrantedInjury`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 历练中受的一处伤势(归来时构造 FInjuryEffectInstance 挂到弟子)

## Blueprint-exposed variables

### Property `InjuryID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") FName InjuryID;` |

**Notes:**

> 伤势配置 ID(GameMode GetInjuryBuffById 查)

---

### Property `Organ`

| Field | Details |
|------|------|
| C++ type | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") EBodyOrganType Organ = EBodyOrganType::None;` |

**Notes:**

> 伤势部位

---
