# `struct` `FEmergenceRivalRaidState`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────────────────────
> 强袭宿敌(RivalRaid) — 含玩家"驻地致命对决"的活跃实例(Director 持有, 入档)。
> 不含玩家分支为即时结算, 无状态; 含玩家分支对决走驿站切磋系统, 桥只记等待/结果。
> ─────────────────────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `EventID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FName EventID;` |

**Notes:**

> Event ID field.

---

### Property `AssociatedTaskID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FName AssociatedTaskID;` |

**Notes:**

> Associated task row ID. Removed from current tasks on player defeat or NPC timeout.

---

### Property `RivalForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FGuid RivalForceGuid;` |

**Notes:**

> 对手势力 A(玩家胜则对其好感 -100)

---

### Property `RivalNpcGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FGuid RivalNpcGuid;` |

**Notes:**

> 生成的对手 NPC 角色 guid(死亡判定/销毁)

---

### Property `RivalDiscipleGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FGuid RivalDiscipleGuid;` |

**Notes:**

> 对手真身弟子 guid(在宿敌势力名册中; 日志超链接/关联演员用真身——分身不入名册, 点击时反查不到所属势力)

---

### Property `PlayerDiscipleGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FGuid PlayerDiscipleGuid;` |

**Notes:**

> 玩家应战弟子 guid(事件发生时筛出; UI 读取以限定选人)

---

### Property `bDuelStarted`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") bool bDuelStarted = false;` |

**Notes:**

> 是否已应战开打(false=NPC 站立等应战; true=切磋对决进行中, 走位/替身/超时全由驿站切磋系统管)

---

### Property `ExpireGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") int32 ExpireGameDay = 0;` |

**Notes:**

> 未应战时 NPC 撤离的游戏天(到点未应战则销毁 NPC)

---

### Property `EndTextAWin`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FEmergenceLogText EndTextAWin;` |

**Notes:**

> 结果文案(占位 {ForceA}{NameA}{ForceB}{NameB}; 含超链接开关)

---

### Property `EndTextBWin`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FEmergenceLogText EndTextBWin;` |

**Notes:**

> End Text B Win field.

---

### Property `ForceAName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FText ForceAName;` |

**Notes:**

> 结果文案占位实参缓存(势力/弟子名, 死亡回调时无需再查)

---

### Property `ForceBName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FText ForceBName;` |

**Notes:**

> Force B Name field.

---

### Property `NameA`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FText NameA;` |

**Notes:**

> Name A field.

---

### Property `NameB`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") FText NameB;` |

**Notes:**

> Name B field.

---

### Property `bClosed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|RivalRaid" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|RivalRaid") bool bClosed = false;` |

**Notes:**

> Boolean flag indicating whether Closed is enabled or true.

---
