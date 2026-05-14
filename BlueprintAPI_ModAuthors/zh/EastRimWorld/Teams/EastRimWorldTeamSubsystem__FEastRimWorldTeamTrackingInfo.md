# `struct` `FEastRimWorldTeamTrackingInfo`

**源码头文件:** `EastRimWorld/Teams/EastRimWorldTeamSubsystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `TeamAgents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TScriptInterface<IEastRimWorldTeamAgentInterface>>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<TScriptInterface<IEastRimWorldTeamAgentInterface>> TeamAgents;` |

---

### 属性 `GameplayTeamInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FGameplayTeamInfo GameplayTeamInfo;` |

---

### 属性 `TeamBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FCommonBuff> TeamBuff;` |

---
