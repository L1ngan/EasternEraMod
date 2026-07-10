# `struct` `FMartialArtsSkillEntryGiveAbilitysResolve`

**源码头文件:** `EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys.h`

---

## 功能说明（来自头文件注释）

> 招式书籍技能词条 GiveAbilitys 解析结果（用于 GrantMovesBookAbilities）。

## 蓝图暴露变量

### 属性 `BaseAbilityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FName BaseAbilityID = NAME_None;` |

**说明:**

> 最终授予的 BaseAbility（可能被 Replace 替换）

---

### 属性 `bReplacedBaseAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bReplacedBaseAbility = false;` |

**说明:**

> BaseAbility 是否被词条替换（移除时不应再删原 BaseAbility 行）

---

### 属性 `ExtraAbilityIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FName> ExtraAbilityIDs;` |

**说明:**

> GiveNewAbilitys 额外授予的技能 ID

---
