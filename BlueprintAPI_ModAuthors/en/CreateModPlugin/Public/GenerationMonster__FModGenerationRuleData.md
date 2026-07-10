# `struct` `FModGenerationRuleData`

**Source header:** `CreateModPlugin/Public/GenerationMonster.h`

---

## Functional description (from header comments)

> 生成的规则

## Blueprint-exposed variables

### Property `GenerationRule`

| Field | Details |
|------|------|
| C++ type | [EModGenerationRuleType](GenerationMonster__EModGenerationRuleType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModGenerationRuleType GenerationRule = EModGenerationRuleType::Fixed;` |

**Notes:**

> 生成规则类型

---

### Property `BaseProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EModGenerationRuleType::Probability")) float BaseProbability = 1.f;` |

**Notes:**

> 基础概率

---

### Property `ProbabilityInfluence`

| Field | Details |
|------|------|
| C++ type | TArray<[FModGenerationProbabilityInfluence](GenerationMonster__FModGenerationProbabilityInfluence.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EModGenerationRuleType::Probability")) TArray<FModGenerationProbabilityInfluence> ProbabilityInfluence;` |

**Notes:**

> 概率的影响配置

---
