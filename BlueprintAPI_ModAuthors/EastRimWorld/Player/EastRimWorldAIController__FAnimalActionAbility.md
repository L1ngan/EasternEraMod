# `struct` `FAnimalActionAbility`

**源码头文件：** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## 功能说明（来自头文件注释）

> 动物ActionAbility配置表结构

## 蓝图暴露变量

### 属性 `BehaviorStartAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32, TSoftObjectPtr<UAnimMontage>> BehaviorStartAnimMontage;` |

**源码注释：**

> 每种动物对应的动画数据
> TMap<动物ID , 动画数据>
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

### 属性 `GameplayAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Abilities") TSoftClassPtr<UEastRimWorldGameplayAbility> GameplayAbility;` |

**源码注释：**

> 此动作使用的能力

---
