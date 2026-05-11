# `struct` `FOverlockingAddInjuryData`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `InjuryName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName InjuryName;` |

**Source comments:**

> 伤势名字

---

### Property `InjuryWeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 InjuryWeight = 0;` |

**Source comments:**

> 伤势权重

---

### Property `InjuryOrganID`

| Field | Details |
|------|------|
| C++ type | `EBodyOrganType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EBodyOrganType InjuryOrganID = EBodyOrganType::None;` |

**Source comments:**

> 伤势部位

---
