# `struct` `FTimedBattleRecord`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleTickManager.h`

---

## Functional description (from header comments)

> 一场正在推演中的周期化抽象战运行时数据（SaveGame，与队列 FPendingTimedBattle 分开存）。

## Blueprint-exposed variables

### Property `TimedBattleGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid TimedBattleGuid;` |

**Notes:**

> 本场周期化战标识（= StartTimedBattle 返回值，EndBattle 入参）

---

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

> 目标据点 SGUID（守方据点）

---

### Property `TeamInfo`

| Field | Details |
|------|------|
| C++ type | [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FBattleTeamInfo TeamInfo;` |

**Notes:**

> 抽取结果（出战人员），仅作展示/PR-8 战报上下文，本类不消费战斗内核

---

### Property `AttackerCombat`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float AttackerCombat = 0.f;` |

**Notes:**

> 攻方有效战力（势头公式 Oe）

---

### Property `DefenderCombat`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float DefenderCombat = 0.f;` |

**Notes:**

> 守方有效战力（势头公式 De）

---

### Property `BattleAdvantage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float BattleAdvantage = 0.f;` |

**Notes:**

> 势头条：0 起，攻方占优 +、守方占优 -；到 +100 攻方胜、-100 守方胜

---

### Property `CurrentPhase`

| Field | Details |
|------|------|
| C++ type | [ETimedBattlePhase](WorldBattleReportStruct__ETimedBattlePhase.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) ETimedBattlePhase CurrentPhase = ETimedBattlePhase::Muster;` |

**Notes:**

> 当前阶段

---

### Property `PhaseElapsed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float PhaseElapsed = 0.f;` |

**Notes:**

> 已推进时长（秒），每 Tick += TimedBattleTickInterval

---

### Property `TotalDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float TotalDuration = 0.f;` |

**Notes:**

> 本场总时长（秒），按规模档随机（文档 §9）

---

### Property `BaseAdvantageGain`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float BaseAdvantageGain = 0.f;` |

**Notes:**

> 每 Tick 势头基础增益（按规模档，文档 §9）

---

### Property `bPlayerRelevant`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool bPlayerRelevant = false;` |

**Notes:**

> 入队/创建时算好的玩家相关性（决定结算 UI 走向、永不 fallback 等）

---
