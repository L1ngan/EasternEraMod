# `class` `UEastRimWorldTeamStatics`

**源码头文件:** `EastRimWorld/Teams/EastRimWorldTeamStatics.h`

---

## 功能说明（来自头文件注释）

> A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)

## 蓝图暴露函数

### 函数 `FindTeamFromObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | `const UObject*` |
| `bIsPartOfTeam` | `bool&` |
| `TeamId` | `int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category=Teams, meta=(Keywords="GetTeamFromObject", DefaultToSelf="Agent")) static void FindTeamFromObject(const UObject* Agent, bool& bIsPartOfTeam, int32& TeamId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> Returns the team this object belongs to, or INDEX_NONE if it is not part of a team

---
