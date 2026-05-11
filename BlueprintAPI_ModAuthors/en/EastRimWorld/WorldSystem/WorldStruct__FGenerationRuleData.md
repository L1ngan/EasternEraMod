# `struct` `FGenerationRuleData`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 生成的规则

## Blueprint-exposed variables

### Property `GenerationRule`

| Field | Details |
|------|------|
| C++ type | `EGenerationRuleType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGenerationRuleType GenerationRule = EGenerationRuleType::Fixed;` |

**Source comments:**

> 生成规则类型

---

### Property `BaseProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EGenerationRuleType::Probability")) float BaseProbability = 1.f;` |

**Source comments:**

> 基础概率

---

### Property `ProbabilityInfluence`

| Field | Details |
|------|------|
| C++ type | TArray<[FGenerationProbabilityInfluence](WorldStruct__FGenerationProbabilityInfluence.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EGenerationRuleType::Probability")) TArray<FGenerationProbabilityInfluence> ProbabilityInfluence;` |

**Source comments:**

> 概率的影响配置

---
