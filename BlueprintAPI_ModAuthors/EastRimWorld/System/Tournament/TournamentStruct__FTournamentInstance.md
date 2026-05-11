# `struct` `FTournamentInstance`

**源码头文件：** `EastRimWorld/System/Tournament/TournamentStruct.h`

---

## 功能说明（来自头文件注释）

> 比赛信息

## 蓝图暴露变量

### 属性 `TournamentGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid TournamentGuid;` |

**源码注释：**

> 比赛唯一标识

---

### 属性 `TournamentType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ETournamentType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETournamentType TournamentType = ETournamentType::Solo;` |

**源码注释：**

> 比赛规则

---

### 属性 `TournamentState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ETournamentState` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) ETournamentState TournamentState = ETournamentState::NotStarted;` |

**源码注释：**

> 比赛状态

---

### 属性 `StartTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float StartTime = 0.f;` |

**源码注释：**

> 开始时间

---

### 属性 `TournamentGroups`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTournamentGroupInfo](TournamentStruct__FTournamentGroupInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTournamentGroupInfo> TournamentGroups;` |

**源码注释：**

> 比赛分组信息

---

### 属性 `SectGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> SectGuid;` |

**源码注释：**

> 参赛的门派GUID

---

### 属性 `CompleteRankGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> CompleteRankGuid;` |

**源码注释：**

> 排名数据

---

### 属性 `PlayerGroupIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 PlayerGroupIndex = -1;` |

**源码注释：**

> 玩家阵营所在的分组索引

---

### 属性 `bPlayerJoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bPlayerJoin = false;` |

**源码注释：**

> 玩家是否参加比赛

---
