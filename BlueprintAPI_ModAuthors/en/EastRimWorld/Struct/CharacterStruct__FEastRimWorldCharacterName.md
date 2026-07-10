# `struct` `FEastRimWorldCharacterName`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Character given-name data table row: name list and the sex it applies to

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FText> Name;` |

**Notes:**

> 名

---

### Property `Sex`

| Field | Details |
|------|------|
| C++ type | [ECharacterNameType](CharacterStruct__ECharacterNameType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") ECharacterNameType Sex;` |

**Notes:**

> 对应性别

---
