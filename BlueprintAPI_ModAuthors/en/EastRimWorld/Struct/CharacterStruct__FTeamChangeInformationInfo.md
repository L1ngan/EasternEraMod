# `struct` `FTeamChangeInformationInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 存储的团队关系关联信息

## Blueprint-exposed variables

### Property `SourceTeamId`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") FGenericTeamId SourceTeamId;` |

**Notes:**

> Source team ID of the relationship change

---

### Property `TargetTeamId`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") FGenericTeamId TargetTeamId;` |

**Notes:**

> Target team ID of the relationship change

---

### Property `TeamRelationship`

| Field | Details |
|------|------|
| C++ type | `TEnumAsByte<ETeamAttitude::Type>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") TEnumAsByte<ETeamAttitude::Type> TeamRelationship = ETeamAttitude::Type::Friendly;` |

**Notes:**

> Attitude between the two teams (ETeamAttitude, defaults to Friendly)

---
