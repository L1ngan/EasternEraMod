# `struct` `FModGenerationProbabilityInfluence`

**Source header:** `CreateModPlugin/Public/GenerationMonster.h`

---

## Functional description (from header comments)

> 生成的概率影响

## Blueprint-exposed variables

### Property `InfluenceType`

| Field | Details |
|------|------|
| C++ type | `EModInfluenceType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModInfluenceType InfluenceType = EModInfluenceType::None;` |

**Source comments:**

> 影响的类型

---

### Property `Probability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Probability = 0.1f;` |

**Source comments:**

> 概率变化

---

### Property `MaxCharacterNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "InfluenceType == EModInfluenceType::LackCharacterNumber")) int32 MaxCharacterNumber = 0;` |

**Source comments:**

> 最大人数

---
