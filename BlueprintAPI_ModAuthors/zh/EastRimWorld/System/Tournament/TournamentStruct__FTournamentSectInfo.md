# `struct` `FTournamentSectInfo`

**源码头文件:** `EastRimWorld/System/Tournament/TournamentStruct.h`

---

## 功能说明（来自头文件注释）

> 势力的比赛信息

## 蓝图暴露变量

### 属性 `SectGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid SectGuid;` |

**说明:**

> 势力guid

---

### 属性 `TeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamId = 255;` |

**说明:**

> 团队id

---

### 属性 `CharacterGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> CharacterGuids;` |

**说明:**

> 参赛的角色

---

### 属性 `SectStatus`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ESectStatus](TournamentStruct__ESectStatus.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ESectStatus SectStatus = ESectStatus::NotRegistered;` |

**说明:**

> 势力比武状态

---

### 属性 `OffFieldOperation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FOffFieldOperationInstance](TournamentStruct__FOffFieldOperationInstance.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FOffFieldOperationInstance> OffFieldOperation;` |

**说明:**

> 场外操作信息

---

### 属性 `Rank`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Rank = 0;` |

**说明:**

> 目前的排名

---

### 属性 `TotalCombatPower`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TotalCombatPower = 0.f;` |

**说明:**

> 战力总和

---

### 属性 `ReputationDelta`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ReputationDelta = 0.f;` |

**说明:**

> 声望奖励

---
