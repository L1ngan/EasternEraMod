# `struct` `FCharacterActionAbility`

**源码头文件:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## 功能说明（来自头文件注释）

> 角色动作能力配置表行（动画蒙太奇/片段、持续时间、循环、对应的 GameplayAbility、衣服显示等）

## 蓝图暴露变量

### 属性 `BehaviorStartAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32, TSoftObjectPtr<UAnimMontage>> BehaviorStartAnimMontage;` |

**说明:**

> 动画蒙太奇

---

### 属性 `BehaviorAnimSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FCharacterActionAbilityAnimSections](EastRimWorldAIController__FCharacterActionAbilityAnimSections.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32,FCharacterActionAbilityAnimSections> BehaviorAnimSections;` |

**说明:**

> 动画蒙太奇片段

---

### 属性 `bTimeOfDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bTimeOfDuration = false;` |

**说明:**

> 是否有持续时间

---

### 属性 `bLoopPlayMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") bool bLoopPlayMontage = false;` |

**说明:**

> 是否循环动画

---

### 属性 `TimeOfDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation",meta=(EditCondition = "bTimeOfDuration")) float TimeOfDuration = 0.f;` |

**说明:**

> 持续时间

---

### 属性 `ActionGameplayAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TSoftClassPtr<UEastRimWorldGameplayAbility> ActionGameplayAbility;` |

**说明:**

> 此动作使用的能力

---

### 属性 `bClothingDisplay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Display" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Display") bool bClothingDisplay = true;` |

**说明:**

> 是否显示衣服

---
