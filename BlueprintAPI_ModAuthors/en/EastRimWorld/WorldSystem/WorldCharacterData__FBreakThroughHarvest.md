# `struct` `FBreakThroughHarvest`

**Source header:** `EastRimWorld/WorldSystem/WorldCharacterData.h`

---

## Functional description (from header comments)

> Break Through Harvest data structure.

## Blueprint-exposed variables

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 RealmLevel = 1;` |

**Notes:**

> 境界

---

### Property `Ability`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> Ability;` |

**Notes:**

> 技能

---

### Property `ElementType`

| Field | Details |
|------|------|
| C++ type | [EFiveElementType](../Struct/CommonEnum__EFiveElementType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EFiveElementType ElementType = EFiveElementType::None;` |

**Notes:**

> 五行类型

---

### Property `bActivate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bActivate = false;` |

**Notes:**

> 是否激活

---
