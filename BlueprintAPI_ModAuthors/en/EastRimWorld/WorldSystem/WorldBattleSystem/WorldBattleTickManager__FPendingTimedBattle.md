# `struct` `FPendingTimedBattle`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager.h`

---

## Functional description (from header comments)

> 一条尚未开打的周期化进攻请求。超并发上限时入队，等有空位再出队分流。

## Blueprint-exposed variables

### Property `AttackerForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid AttackerForceGuid;` |

**Notes:**

> 进攻方势力 SGUID

---

### Property `TargetPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid TargetPlaceGuid;` |

**Notes:**

> 目标据点 SGUID

---

### Property `TeamInfo`

| Field | Details |
|------|------|
| C++ type | [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FBattleTeamInfo TeamInfo;` |

**Notes:**

> 抽取结果（PR-10 抽取人员），入队时缓存，出队不重算

---

### Property `bPlayerRelevant`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool bPlayerRelevant = false;` |

**Notes:**

> 入队时算好的玩家相关性（出队不重算，决定插队优先级 + 永不 fallback）

---

### Property `EnqueueGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float EnqueueGameTime = 0.f;` |

**Notes:**

> 入队时刻（游戏内时间，秒）。用于 FIFO 排序 + 超时作废

---
