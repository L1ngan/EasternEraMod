# `struct` `FMovesBookSkillEntryAbilityState`

**源码头文件:** `EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys.h`

---

## 功能说明（来自头文件注释）

> 已生效的 GiveAbilitys 词条授予记录（卸载招式时移除）。

## 蓝图暴露变量

### 属性 `ExtraGrantedAbilityIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FName> ExtraGrantedAbilityIDs;` |

**说明:**

> 词条通过 GiveNewAbilitys 额外授予的技能 ID 列表（卸载招式时按此移除）

---

### 属性 `bReplacedBaseAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bReplacedBaseAbility = false;` |

**说明:**

> 招式的 BaseAbility 是否已被词条替换

---

### 属性 `ReplacementAbilityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FName ReplacementAbilityID = NAME_None;` |

**说明:**

> 替换原 BaseAbility 的技能 ID（NAME_None 表示未替换）

---
