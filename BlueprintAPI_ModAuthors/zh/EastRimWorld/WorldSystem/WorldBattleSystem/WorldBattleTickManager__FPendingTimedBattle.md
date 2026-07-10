# `struct` `FPendingTimedBattle`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager.h`

---

## 功能说明（来自头文件注释）

> 一条尚未开打的周期化进攻请求。超并发上限时入队，等有空位再出队分流。

## 蓝图暴露变量

### 属性 `AttackerForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid AttackerForceGuid;` |

**说明:**

> 进攻方势力 SGUID

---

### 属性 `TargetPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid TargetPlaceGuid;` |

**说明:**

> 目标据点 SGUID

---

### 属性 `TeamInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FBattleTeamInfo TeamInfo;` |

**说明:**

> 抽取结果（PR-10 抽取人员），入队时缓存，出队不重算

---

### 属性 `bPlayerRelevant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool bPlayerRelevant = false;` |

**说明:**

> 入队时算好的玩家相关性（出队不重算，决定插队优先级 + 永不 fallback）

---

### 属性 `EnqueueGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float EnqueueGameTime = 0.f;` |

**说明:**

> 入队时刻（游戏内时间，秒）。用于 FIFO 排序 + 超时作废

---
