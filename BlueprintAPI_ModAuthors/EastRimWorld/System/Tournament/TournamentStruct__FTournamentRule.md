# `struct` `FTournamentRule`

**源码头文件：** `EastRimWorld/System/Tournament/TournamentStruct.h`

---

## 功能说明（来自头文件注释）

> 比赛规则

## 蓝图暴露变量

### 属性 `TournamentType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ETournamentType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETournamentType TournamentType = ETournamentType::Solo;` |

**源码注释：**

> 比赛类型

---

### 属性 `SpawnPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTournamentSpawnPoint](TournamentStruct__FTournamentSpawnPoint.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTournamentSpawnPoint> SpawnPoint;` |

**源码注释：**

> 角色生成的起始位置

---

### 属性 `BattleTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BattleTime = 300.f;` |

**源码注释：**

> 战斗时长

---

### 属性 `NumberOfPeople`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 NumberOfPeople = 1;` |

**源码注释：**

> 参赛人数

---

### 属性 `StartBattleLevelSequence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<ULevelSequence>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<ULevelSequence> StartBattleLevelSequence;` |

**源码注释：**

> 战斗开始播放的关卡序列

---

### 属性 `GroupSectNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GroupSectNumber = 16;` |

**源码注释：**

> 一个分组中有多少个门派

---

### 属性 `RankReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FTournamentRankReputation](TournamentStruct__FTournamentRankReputation.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32,FTournamentRankReputation> RankReputation;` |

**源码注释：**

> 排名所获得的声望 key 所在的分组

---

### 属性 `WorldPlaceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName WorldPlaceID;` |

**源码注释：**

> 世界地点的id  WorldPlace

---

### 属性 `RegistrationTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RegistrationTime = 3000;` |

**源码注释：**

> 报名时间

---
