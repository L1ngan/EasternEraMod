# `struct` `FMovesBookSkillEntryGameplayEffectState`

**源码头文件:** `EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys.h`

---

## 功能说明（来自头文件注释）

> 招式书籍技能词条 GiveGameEffects 已应用记录（卸载/刷新时移除）。

## 蓝图暴露变量

### 属性 `ActiveEffectHandles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FActiveGameplayEffectHandle>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FActiveGameplayEffectHandle> ActiveEffectHandles;` |

**说明:**

> 词条已施加的激活 GameplayEffect 句柄列表（卸载/刷新时用于移除）

---

### 属性 `AppliedMartialArtsLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 AppliedMartialArtsLevel = 0;` |

**说明:**

> 施加 GE 时使用的武学等级（用于等级变动时判断是否需要刷新）

---
