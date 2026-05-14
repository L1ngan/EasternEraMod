# `struct` `FEastRimWorldAbilitySet_GameplayEffect`

**源码头文件:** `EastRimWorld/AbilitySystem/EastRimWorldAbilitySet.h`

---

## 功能说明（来自头文件注释）

> FEastRimWorldAbilitySet_GameplayEffect
> Data used by the ability set to grant gameplay effects.

## 蓝图暴露变量

### 属性 `GameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UGameplayEffect>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly) TSubclassOf<UGameplayEffect> GameplayEffect = nullptr;` |

**源码注释:**

> Gameplay effect to grant.

---

### 属性 `EffectLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly) float EffectLevel = 1.0f;` |

**源码注释:**

> Level of gameplay effect to grant.

---
