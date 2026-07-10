# `struct` `FConsumableEffectData`

**Source header:** `EastRimWorld/Struct/ConsumableStruct.h`

---

## Functional description (from header comments)

> 耗材效果

## Blueprint-exposed variables

### Property `EffectType`

| Field | Details |
|------|------|
| C++ type | [EConsumableEffectType](ConsumableStruct__EConsumableEffectType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect") EConsumableEffectType EffectType = EConsumableEffectType::None;` |

**Notes:**

> 效果类型

---

### Property `ExperienceAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::MartialArtsExperience")) TMap<FGameplayAttribute,float> ExperienceAttributes;` |

**Notes:**

> 武学经验（属性->数值 构建动态GE施加给自身 仿丹药做法）

---

### Property `PermanentAttributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::PermanentAttribute")) TMap<FGameplayAttribute,float> PermanentAttributes;` |

**Notes:**

> 永久属性（属性集->值 记录到FCharacterSaveData 每次获得时重新构建GE施加给自身）

---

### Property `PermanentMaxCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::PermanentAttribute")) int32 PermanentMaxCount = 1;` |

**Notes:**

> 相同ID永久属性效果的获取上限次数

---

### Property `BuffID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::Buff")) FName BuffID;` |

**Notes:**

> 临时buff的ID（CommonBuff表 生效时直接添加给自身）

---

### Property `CharacteristicID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect", meta=(EditConditionHides,EditCondition="EffectType == EConsumableEffectType::Characteristic")) FName CharacteristicID;` |

**Notes:**

> 新增特性的ID（CharacteristicInfo表 直接添加给自身）

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="ConsumableEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableEffect") TArray<FName> Conditions;` |

**Notes:**

> 效果生效条件（耗材条件表ID 需全部满足 主效果不满足则跳过 附加效果不满足则不参与权重随机）

---
