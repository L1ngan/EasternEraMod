# `struct` `FGenerationProbabilityInfluence`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 生成的概率影响

## Blueprint-exposed variables

### Property `InfluenceType`

| Field | Details |
|------|------|
| C++ type | [EInfluenceType](WorldStruct__EInfluenceType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EInfluenceType InfluenceType = EInfluenceType::None;` |

**Notes:**

> 影响的类型

---

### Property `Probability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Probability = 0.1f;` |

**Notes:**

> 概率变化

---

### Property `MaxCharacterNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "InfluenceType == EInfluenceType::LackCharacterNumber")) int32 MaxCharacterNumber = 0;` |

**Notes:**

> 最大人数

---
