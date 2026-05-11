# `struct` `FStratagemAbility`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 战略技能

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") FText Name;` |

**Source comments:**

> 名称

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedClasses = "/Script/Engine.Texture2D"),Category ="Base") FSoftObjectPath Icon;` |

**Source comments:**

> 图标

---

### Property `Describe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") FText Describe;` |

**Source comments:**

> 描述

---

### Property `FormatDescribe`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") FFormatText FormatDescribe;` |

**Source comments:**

> 格式化的 描述

---

### Property `Consumption`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Base") float Consumption = 0.f;` |

**Source comments:**

> 使用消耗

---

### Property `ExtractWeights`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Base") int32 ExtractWeights = 1;` |

**Source comments:**

> 抽取权重

---

### Property `TimeDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") float TimeDuration = -1.f;` |

**Source comments:**

> 战略技能的持续时间 -1 为没有持续时间

---

### Property `StratagemAbilityType`

| Field | Details |
|------|------|
| C++ type | `EStratagemAbilityType` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") EStratagemAbilityType StratagemAbilityType = EStratagemAbilityType::GlobalAbility;` |

**Source comments:**

> 战略技能类型

---

### Property `StratagemAbilityTargetType`

| Field | Details |
|------|------|
| C++ type | `EStratagemAbilityTargetType` |
| Reflection specifiers | BlueprintReadWrite, Category="GlobalAbility" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::GlobalAbility",EditConditionHides),Category = "GlobalAbility") EStratagemAbilityTargetType StratagemAbilityTargetType = EStratagemAbilityTargetType::None;` |

**Source comments:**

> 作用对象

---

### Property `ActivateGEs`

| Field | Details |
|------|------|
| C++ type | `TArray<FSoftClassPath>` |
| Reflection specifiers | BlueprintReadWrite, Category="GlobalAbility" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::GlobalAbility",EditConditionHides,AllowedClasses = "GameplayEffect"),Category = "GlobalAbility") TArray<FSoftClassPath> ActivateGEs;` |

**Source comments:**

> 全局技能施加的GE效果

---

### Property `ReleaseRangeDiameter`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="RangeAbility" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::RangeAbility || StratagemAbilityType == EStratagemAbilityType::RangeSummoningAbility",EditConditionHides),Category = "RangeAbility") float ReleaseRangeDiameter = 500.f;` |

**Source comments:**

> 释放范围大小直径

---

### Property `AbilityTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="Ability" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::RangeAbility || StratagemAbilityType == EStratagemAbilityType::RangeSummoningAbility || StratagemAbilityType == EStratagemAbilityType::StartLocationSummoningSkill",EditConditionHides),Category = "Ability") FGameplayTag AbilityTag;` |

**Source comments:**

> 激活此技能的Tag

---

### Property `AbilityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Ability" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::RangeAbility || StratagemAbilityType == EStratagemAbilityType::RangeSummoningAbility || StratagemAbilityType == EStratagemAbilityType::StartLocationSummoningSkill",EditConditionHides),Category = "Ability") FName AbilityID;` |

**Source comments:**

> 关联的能力ID 读取能力表

---

### Property `StratagemAbilityFunction`

| Field | Details |
|------|------|
| C++ type | TArray<[FStratagemAbilityFunction](WorldBattleStruct__FStratagemAbilityFunction.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="RangeAbility" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::GlobalFunction",EditConditionHides),Category = "RangeAbility") TArray<FStratagemAbilityFunction> StratagemAbilityFunction;` |

**Source comments:**

> 全局功能

---

### Property `AutoTargetType`

| Field | Details |
|------|------|
| C++ type | `EAutoTargetType` |
| Reflection specifiers | BlueprintReadWrite, Category="RangeAbility" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::RangeAbility || StratagemAbilityType == EStratagemAbilityType::RangeSummoningAbility",EditConditionHides),Category = "RangeAbility") EAutoTargetType AutoTargetType = EAutoTargetType::None;` |

**Source comments:**

> 自动释放时作用对象

---

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Runtime",meta=(EditConditionHides,EditCondition = "false")) FGuid Guid;` |

**Source comments:**

> 生成GUID

---

### Property `GenerateTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Runtime",meta=(EditConditionHides,EditCondition = "false")) FTransform GenerateTransform;` |

**Source comments:**

> 生成的位置

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Priority = 0;` |

**Source comments:**

> 优先级 同分组下的优先级 越大优先级越高 相同优先级 后添加的覆盖旧的

---

### Property `Group`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Group = INDEX_NONE;` |

**Source comments:**

> 分组 -1 为没有分组 不参与优先级

---
