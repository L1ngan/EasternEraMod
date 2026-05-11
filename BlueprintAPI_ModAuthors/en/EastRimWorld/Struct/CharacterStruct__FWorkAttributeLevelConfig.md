# `struct` `FWorkAttributeLevelConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 工作属性等级配置

## Blueprint-exposed variables

### Property `Attribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttribute` |
| Reflection specifiers | BlueprintReadWrite, Category="WorkAttributeLevelConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorkAttributeLevelConfig") FGameplayAttribute Attribute;` |

**Source comments:**

> 属性值

---

### Property `BaseValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorkAttributeLevelConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorkAttributeLevelConfig") float BaseValue = 0.f;` |

**Source comments:**

> 属性等级关联的基础值

---

### Property `AdditionPercentage`

| Field | Details |
|------|------|
| C++ type | `TMap<int,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorkAttributeLevelConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorkAttributeLevelConfig") TMap<int,float> AdditionPercentage;` |

**Source comments:**

> 属性等级关联的百分比

---
