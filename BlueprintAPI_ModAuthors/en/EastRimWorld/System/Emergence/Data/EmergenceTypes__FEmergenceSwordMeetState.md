# `struct` `FEmergenceSwordMeetState`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────────────────────
> 论剑大会(SwordMeet) — 活跃实例(Director 持有, 入档; 单实例)。
> 英雄帖发出后, 持续 DurationSeconds 再出三甲; 期间玩家可参赛(记录所选弟子)。
> ─────────────────────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `EventID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FName EventID;` |

**Notes:**

> Event ID field.

---

### Property `ExpireGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") int32 ExpireGameDay = 0;` |

**Notes:**

> 到点出结果的游戏天

---

### Property `bPlayerJoined`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") bool bPlayerJoined = false;` |

**Notes:**

> Boolean flag indicating whether Player Joined is enabled or true.

---

### Property `PlayerDiscipleGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") TArray<FGuid> PlayerDiscipleGuids;` |

**Notes:**

> 玩家参赛弟子(UI 选定后记录; 用于参赛池 + 赛后返回)

---

### Property `PlayerMoveInfoGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FGuid PlayerMoveInfoGuid;` |

**Notes:**

> 玩家参赛弟子的大地图移动 Guid(赛后据此返回主基地+移除大地图数据)

---

### Property `PlayerPickCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") int32 PlayerPickCount = 3;` |

**Notes:**

> 配置快照(出结果时用, 免回查事件表)

---

### Property `TopForceCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") int32 TopForceCount = 15;` |

**Notes:**

> Top Force Count field.

---

### Property `RankRewards`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, int32>` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") TMap<int32, int32> RankRewards;` |

**Notes:**

> 名次 → 势力声望奖励(key: 1/2/3 = 第一/二/三名)

---

### Property `PlayerRealmThreshold`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") int32 PlayerRealmThreshold = 7;` |

**Notes:**

> Executes the Player Realm Threshold operation.

---

### Property `PlayerReputationThreshold`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") float PlayerReputationThreshold = 1500.f;` |

**Notes:**

> Executes the Player Reputation Threshold operation.

---

### Property `JoinRejectText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FText JoinRejectText;` |

**Notes:**

> 参赛门槛不满足时的错误文案(占位 {Realm}{Reputation})

---

### Property `JoinSuccessText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FEmergenceLogText JoinSuccessText;` |

**Notes:**

> 报名成功提示文案(占位 {Names}{Count})

---

### Property `EndText`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") FEmergenceLogText EndText;` |

**Notes:**

> End Text field.

---

### Property `bResolved`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|SwordMeet" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|SwordMeet") bool bResolved = false;` |

**Notes:**

> 是否已结算/关闭

---
