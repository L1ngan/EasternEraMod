# `struct` `FTournamentGroupInfo`

**源码头文件：** `EastRimWorld/System/Tournament/TournamentStruct.h`

---

## 功能说明（来自头文件注释）

> 比赛分组信息

## 蓝图暴露变量

### 属性 `GroupIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GroupIndex = 0;` |

**源码注释：**

> 分组索引（1-32, 33-64等）

---

### 属性 `StartRank`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 StartRank = 1;` |

**源码注释：**

> 该分组包含的门派ID范围

---

### 属性 `EndRank`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EndRank = 32;` |

---

### 属性 `SectInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FTournamentSectInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTournamentSectInfo> SectInfos;` |

**源码注释：**

> 该分组中的门派ID列表

---
