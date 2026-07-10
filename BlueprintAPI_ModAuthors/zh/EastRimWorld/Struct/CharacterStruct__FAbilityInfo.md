# `struct` `FAbilityInfo`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 技能运行时信息：技能类、是否激活、剩余冷却时间与技能等级

## 蓝图暴露变量

### 属性 `Ability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UGameplayAbility>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TSubclassOf<UGameplayAbility> Ability;` |

**说明:**

> 技能对应的GameplayAbility类

---

### 属性 `bIsActive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bIsActive = false;` |

**说明:**

> 技能当前是否处于激活状态

---

### 属性 `CooldownTimeRemaining`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float CooldownTimeRemaining = 0.f;` |

**说明:**

> 技能剩余冷却时间（秒）

---

### 属性 `AbilityLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 AbilityLevel = 1;` |

**说明:**

> 技能等级

---
