# `struct` `FCharacterActionAbility`

**源码头文件：** `EastRimWorld/Player/EastRimWorldAIController.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `BehaviorStartAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32, TSoftObjectPtr<UAnimMontage>> BehaviorStartAnimMontage;` |

**源码注释：**

> 动画蒙太奇

---

### 属性 `BehaviorAnimSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FCharacterActionAbilityAnimSections](EastRimWorldAIController__FCharacterActionAbilityAnimSections.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32,FCharacterActionAbilityAnimSections> BehaviorAnimSections;` |

**源码注释：**

> 动画蒙太奇片段

---

### 属性 `bTimeOfDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bTimeOfDuration = false;` |

**源码注释：**

> 是否有持续时间

---

### 属性 `bLoopPlayMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bLoopPlayMontage = false;` |

**源码注释：**

> 是否循环动画

---

### 属性 `TimeOfDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bTimeOfDuration")) float TimeOfDuration = 0.f;` |

**源码注释：**

> 持续时间

---

### 属性 `ActionGameplayAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TSoftClassPtr<UEastRimWorldGameplayAbility> ActionGameplayAbility;` |

**源码注释：**

> 此动作使用的能力

---

### 属性 `bClothingDisplay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Display" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Display") bool bClothingDisplay = true;` |

**源码注释：**

> 是否显示衣服

---
