# `struct` `FEastRimWorldAbilitySet_GrantedHandles`

**源码头文件:** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySet.h`

---

## 功能说明（来自头文件注释）

> FEastRimWorldAbilitySet_GrantedHandles
> Data used to store handles to what has been granted by the ability set.

## 蓝图暴露变量

### 属性 `AbilitySpecHandles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayAbilitySpecHandle>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;` |

**说明:**

> Handles to the granted abilities.

---

### 属性 `GameplayEffectHandles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FActiveGameplayEffectHandle>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FActiveGameplayEffectHandle> GameplayEffectHandles;` |

**说明:**

> Handles to the granted gameplay effects.

---

### 属性 `GrantedAttributeSets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<UAttributeSet>>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<TObjectPtr<UAttributeSet>> GrantedAttributeSets;` |

**说明:**

> Pointers to the granted attribute sets

---
