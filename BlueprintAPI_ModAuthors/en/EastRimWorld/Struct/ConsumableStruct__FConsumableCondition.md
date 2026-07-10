# `struct` `FConsumableCondition`

**Source header:** `EastRimWorld/Struct/ConsumableStruct.h`

---

## Functional description (from header comments)

> 耗材使用条件（独立配置表 耗材表中按ID引用）

## Blueprint-exposed variables

### Property `ConditionType`

| Field | Details |
|------|------|
| C++ type | [EConsumableConditionType](ConsumableStruct__EConsumableConditionType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableCondition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableCondition") EConsumableConditionType ConditionType = EConsumableConditionType::None;` |

**Notes:**

> 条件类型

---

### Property `MartialArtsType`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsAttributeClassification](CommonEnum__EMartialArtsAttributeClassification.md) |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableCondition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableCondition", meta=(EditConditionHides,EditCondition="ConditionType == EConsumableConditionType::EquippedInternalStrength || ConditionType == EConsumableConditionType::EquippedMoves")) EMartialArtsAttributeClassification MartialArtsType = EMartialArtsAttributeClassification::None;` |

**Notes:**

> 内功/招式的武学属性分类 None为不限制类型

---

### Property `Attribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttribute` |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableCondition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableCondition", meta=(EditConditionHides,EditCondition="ConditionType == EConsumableConditionType::AttributeGreaterThan")) FGameplayAttribute Attribute;` |

**Notes:**

> 需要比较的属性

---

### Property `AttributeValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableCondition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableCondition", meta=(EditConditionHides,EditCondition="ConditionType == EConsumableConditionType::AttributeGreaterThan")) float AttributeValue = 0.f;` |

**Notes:**

> 属性需要大于的配置值

---
