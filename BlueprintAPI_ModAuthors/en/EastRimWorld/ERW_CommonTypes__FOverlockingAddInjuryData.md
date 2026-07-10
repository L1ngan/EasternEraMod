# `struct` `FOverlockingAddInjuryData`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> Injury data that may be inflicted during overclocking, containing the injury name, weight and affected body organ.

## Blueprint-exposed variables

### Property `InjuryName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName InjuryName;` |

**Notes:**

> 伤势名字

---

### Property `InjuryWeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 InjuryWeight = 0;` |

**Notes:**

> 伤势权重

---

### Property `InjuryOrganID`

| Field | Details |
|------|------|
| C++ type | [EBodyOrganType](ERW_CommonTypes__EBodyOrganType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EBodyOrganType InjuryOrganID = EBodyOrganType::None;` |

**Notes:**

> 伤势部位

---
