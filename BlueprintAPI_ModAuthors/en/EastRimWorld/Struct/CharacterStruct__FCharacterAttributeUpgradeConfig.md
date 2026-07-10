# `struct` `FCharacterAttributeUpgradeConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 角色属性升级配置

## Blueprint-exposed variables

### Property `LevelName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeLevelConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeLevelConfig") FText LevelName;` |

**Notes:**

> 等级名称

---

### Property `NextExp`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeLevelConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeLevelConfig") float NextExp = 0.f;` |

**Notes:**

> 升级所需要的经验

---

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="CharacterAttributeLevelConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterAttributeLevelConfig") int Level = 0;` |

**Notes:**

> 等级

---
