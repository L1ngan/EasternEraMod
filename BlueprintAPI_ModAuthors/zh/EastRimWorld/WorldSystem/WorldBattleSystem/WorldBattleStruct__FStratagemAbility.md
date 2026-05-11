# `struct` `FStratagemAbility`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 战略技能

## 蓝图暴露变量

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") FText Name;` |

**源码注释:**

> 名称

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedClasses = "/Script/Engine.Texture2D"),Category ="Base") FSoftObjectPath Icon;` |

**源码注释:**

> 图标

---

### 属性 `Describe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") FText Describe;` |

**源码注释:**

> 描述

---

### 属性 `FormatDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") FFormatText FormatDescribe;` |

**源码注释:**

> 格式化的 描述

---

### 属性 `Consumption`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Base") float Consumption = 0.f;` |

**源码注释:**

> 使用消耗

---

### 属性 `ExtractWeights`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category ="Base") int32 ExtractWeights = 1;` |

**源码注释:**

> 抽取权重

---

### 属性 `TimeDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") float TimeDuration = -1.f;` |

**源码注释:**

> 战略技能的持续时间 -1 为没有持续时间

---

### 属性 `StratagemAbilityType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EStratagemAbilityType` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Base") EStratagemAbilityType StratagemAbilityType = EStratagemAbilityType::GlobalAbility;` |

**源码注释:**

> 战略技能类型

---

### 属性 `StratagemAbilityTargetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EStratagemAbilityTargetType` |
| 反射说明符 | BlueprintReadWrite, Category="GlobalAbility" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::GlobalAbility",EditConditionHides),Category = "GlobalAbility") EStratagemAbilityTargetType StratagemAbilityTargetType = EStratagemAbilityTargetType::None;` |

**源码注释:**

> 作用对象

---

### 属性 `ActivateGEs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FSoftClassPath>` |
| 反射说明符 | BlueprintReadWrite, Category="GlobalAbility" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::GlobalAbility",EditConditionHides,AllowedClasses = "GameplayEffect"),Category = "GlobalAbility") TArray<FSoftClassPath> ActivateGEs;` |

**源码注释:**

> 全局技能施加的GE效果

---

### 属性 `ReleaseRangeDiameter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="RangeAbility" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::RangeAbility || StratagemAbilityType == EStratagemAbilityType::RangeSummoningAbility",EditConditionHides),Category = "RangeAbility") float ReleaseRangeDiameter = 500.f;` |

**源码注释:**

> 释放范围大小直径

---

### 属性 `AbilityTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="Ability" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::RangeAbility || StratagemAbilityType == EStratagemAbilityType::RangeSummoningAbility || StratagemAbilityType == EStratagemAbilityType::StartLocationSummoningSkill",EditConditionHides),Category = "Ability") FGameplayTag AbilityTag;` |

**源码注释:**

> 激活此技能的Tag

---

### 属性 `AbilityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Ability" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::RangeAbility || StratagemAbilityType == EStratagemAbilityType::RangeSummoningAbility || StratagemAbilityType == EStratagemAbilityType::StartLocationSummoningSkill",EditConditionHides),Category = "Ability") FName AbilityID;` |

**源码注释:**

> 关联的能力ID 读取能力表

---

### 属性 `StratagemAbilityFunction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FStratagemAbilityFunction](WorldBattleStruct__FStratagemAbilityFunction.md)> |
| 反射说明符 | BlueprintReadWrite, Category="RangeAbility" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::GlobalFunction",EditConditionHides),Category = "RangeAbility") TArray<FStratagemAbilityFunction> StratagemAbilityFunction;` |

**源码注释:**

> 全局功能

---

### 属性 `AutoTargetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAutoTargetType` |
| 反射说明符 | BlueprintReadWrite, Category="RangeAbility" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition = "StratagemAbilityType == EStratagemAbilityType::RangeAbility || StratagemAbilityType == EStratagemAbilityType::RangeSummoningAbility",EditConditionHides),Category = "RangeAbility") EAutoTargetType AutoTargetType = EAutoTargetType::None;` |

**源码注释:**

> 自动释放时作用对象

---

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Runtime",meta=(EditConditionHides,EditCondition = "false")) FGuid Guid;` |

**源码注释:**

> 生成GUID

---

### 属性 `GenerateTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Runtime",meta=(EditConditionHides,EditCondition = "false")) FTransform GenerateTransform;` |

**源码注释:**

> 生成的位置

---

### 属性 `Priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Priority = 0;` |

**源码注释:**

> 优先级 同分组下的优先级 越大优先级越高 相同优先级 后添加的覆盖旧的

---

### 属性 `Group`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Group = INDEX_NONE;` |

**源码注释:**

> 分组 -1 为没有分组 不参与优先级

---
