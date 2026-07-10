# `struct` `FGrowthInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Animal growth info: growth value required for the stage and the animal ID it turns into (empty if unchanged)

## Blueprint-exposed variables

### Property `NeedGrowth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) float NeedGrowth = 0.f;` |

**Notes:**

> 所需要的成长值

---

### Property `AnimalID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName AnimalID = NAME_None;` |

**Notes:**

> 会变成的另一个动物ID(不会变就不填)

---
