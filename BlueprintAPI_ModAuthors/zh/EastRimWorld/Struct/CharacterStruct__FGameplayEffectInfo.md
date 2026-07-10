# `struct` `FGameplayEffectInfo`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> GameplayEffect运行时信息：效果类、叠加层数与持续时间

## 蓝图暴露变量

### 属性 `Effect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UGameplayEffect>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TSubclassOf<UGameplayEffect> Effect;` |

**说明:**

> GameplayEffect效果类

---

### 属性 `StackCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 StackCount = 1;` |

**说明:**

> 叠加层数

---

### 属性 `Duration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float Duration = 0.f;` |

**说明:**

> 持续时间（秒）

---
