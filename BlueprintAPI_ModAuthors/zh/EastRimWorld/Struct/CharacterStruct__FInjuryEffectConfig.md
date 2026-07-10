# `struct` `FInjuryEffectConfig`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 伤势效果配置表

## 蓝图暴露变量

### 属性 `InjuryName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FText InjuryName;` |

**说明:**

> 伤势类型

---

### 属性 `InjuryGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSoftClassPtr<UGameplayEffect>>` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") TArray<TSoftClassPtr<UGameplayEffect>> InjuryGameplayEffect;` |

**说明:**

> 效果对应GE (降低部位健康值,降低整体健康值 武学效果降低)

---

### 属性 `Attributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "InjuryTypeEffectConfig") TMap<FGameplayAttribute,float> Attributes;` |

**说明:**

> 效果中包含的属性

---

### 属性 `GameplayTagContainer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "InjuryTypeEffectConfig") FGameplayTagContainer GameplayTagContainer;` |

**说明:**

> 为自身添加的tag

---

### 属性 `BuffGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FGuid BuffGuid;` |

**说明:**

> 每个buff独立的guid

---

### 属性 `InjuryHealingRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") float InjuryHealingRate = 0.f;` |

**说明:**

> 愈合速度（总愈合速度等于伤势愈合速度+人物的基础愈合速度）

---

### 属性 `TotalHurtValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") float TotalHurtValue = 0.f;` |

**说明:**

> 初始伤势程度(减到0为治愈)

---

### 属性 `BadInjuryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FName BadInjuryID = NAME_None;` |

**说明:**

> 恶化到的ID（InjuryTypeEffectConfig的ID）

---

### 属性 `bMedicineOnly`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") bool bMedicineOnly = false;` |

**说明:**

> 是否只能使用药品治疗

---

### 属性 `TreatMedicines`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FInjuryMedicine](CharacterStruct__FInjuryMedicine.md)> |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") TMap<FName,FInjuryMedicine> TreatMedicines;` |

**说明:**

> 治疗必需要的药品(药品ID,数量)[没有足够药品就不能治疗]

---

### 属性 `TreatAddition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") float TreatAddition = 0.f;` |

**说明:**

> 治疗加成(可以看成使用药物的加成)

---

### 属性 `TreatActionId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FName TreatActionId;` |

**说明:**

> 伤势对应的治疗Action

---

### 属性 `TreatRemoveBuffID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") TArray<FName> TreatRemoveBuffID;` |

**说明:**

> 治疗后去除的buff

---

### 属性 `ScarPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") float ScarPercent = 0.f;` |

**说明:**

> 形成疤痕概率

---

### 属性 `IsScar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") bool IsScar = false;` |

**说明:**

> 是否是疤痕(疤痕不会自愈，也不会恶化)

---

### 属性 `InjuryDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FText InjuryDesc;` |

**说明:**

> 伤势描述

---

### 属性 `FormatInjuryDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FFormatText FormatInjuryDesc;` |

**说明:**

> 伤势描述 格式化后的描述

---

### 属性 `AddBuffID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") TArray<FName> AddBuffID;` |

**说明:**

> 增加的buff 伤势治愈或恶化后去除

---

### 属性 `AddMastHaveTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FGameplayTagContainer AddMastHaveTags;` |

**说明:**

> 伤势添加需要的标签

---

### 属性 `AddMastNotHaveTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InjuryTypeEffectConfig") FGameplayTagContainer AddMastNotHaveTags;` |

**说明:**

> 伤势添加不能有的标签

---

### 属性 `ConflictInjuryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere,Category= "InjuryTypeEffectConfig") TArray<FName> ConflictInjuryID;` |

**说明:**

> 冲突的伤势 ID

---

### 属性 `Priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite, EditAnywhere, Category = "InjuryTypeEffectConfig") int Priority = 0;` |

**说明:**

> BUFF的优先级 越大优先级越高

---

### 属性 `NumberOfSuperpositions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="InjuryTypeEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "InjuryTypeEffectConfig") int NumberOfSuperpositions = 1;` |

**说明:**

> 相同的buff可叠加的次数 0 是无限制 1 默认

---
