# `struct` `FEastRimWorldTeamTrackingInfo`

**源码头文件:** `EastRimWorld/Teams/EastRimWorldTeamSubsystem.h`

---

## 功能说明（来自头文件注释）

> East Rim World Team Tracking Info 数据结构。

## 蓝图暴露变量

### 属性 `TeamAgents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TScriptInterface<IEastRimWorldTeamAgentInterface>>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<TScriptInterface<IEastRimWorldTeamAgentInterface>> TeamAgents;` |

**说明:**

> Team Agents 字段。

---

### 属性 `GameplayTeamInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FGameplayTeamInfo GameplayTeamInfo;` |

**说明:**

> Gameplay Team Info 字段。

---

### 属性 `TeamBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FCommonBuff> TeamBuff;` |

**说明:**

> Team Buff 字段。

---
