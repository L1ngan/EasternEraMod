# `struct` `FTournamentBattleInfo`

**源码头文件:** `EastRimWorld/System/Tournament/TournamentStruct.h`

---

## 功能说明（来自头文件注释）

> 单场比赛战斗信息

## 蓝图暴露变量

### 属性 `BattleGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BattleGuid;` |

**源码注释:**

> 战斗唯一标识

---

### 属性 `GroupIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GroupIndex = 0;` |

**源码注释:**

> 分组索引

---

### 属性 `Round`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Round = 0;` |

**源码注释:**

> 回合数

---

### 属性 `ParticipatingSectIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> ParticipatingSectIDs;` |

**源码注释:**

> 参赛门派Guid列表

---

### 属性 `WinnerSectGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid WinnerSectGuid;` |

**源码注释:**

> 获胜门派ID

---

### 属性 `TournamentBattleState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ETournamentBattleState` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETournamentBattleState TournamentBattleState = ETournamentBattleState::NotStarted;` |

**源码注释:**

> 单场战斗的状态

---
