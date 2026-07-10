# `struct` `FEastRimWorldAbilitySet_GameplayAbility`

**源码头文件:** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySet.h`

---

## 功能说明（来自头文件注释）

> FEastRimWorldAbilitySet_GameplayAbility
> Data used by the ability set to grant gameplay abilities.

## 蓝图暴露变量

### 属性 `Ability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSubclassOf<[UEastRimWorldGameplayAbility](Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly) TSubclassOf<UEastRimWorldGameplayAbility> Ability = nullptr;` |

**说明:**

> Gameplay ability to grant.

---

### 属性 `AbilityLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly) int32 AbilityLevel = 1;` |

**说明:**

> Level of ability to grant.

---

### 属性 `InputTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Meta = (Categories = "InputTag")) FGameplayTag InputTag;` |

**说明:**

> Tag used to process input for the ability.

---
