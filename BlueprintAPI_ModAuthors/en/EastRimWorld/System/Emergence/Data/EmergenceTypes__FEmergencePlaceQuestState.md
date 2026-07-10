# `struct` `FEmergencePlaceQuestState`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────────────────────
> 限时地点事件 — 活跃实例状态(Director 持有, 入档)。
> 桥据此在"被注入历练事件触发(已触发)"或"临时目的地到期(限时结束)"时播报结果。
> 只含 POD(FName/FGuid/int/bool/数组), Savior 嵌套序列化安全。
> ─────────────────────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `EventID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") FName EventID;` |

**Notes:**

> 来源涌现事件 ID(回查事件行取结束文案 Key)

---

### Property `PlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") FGuid PlaceGuid;` |

**Notes:**

> 注入的地点 Guid

---

### Property `ApprEventIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") TArray<FName> ApprEventIDs;` |

**Notes:**

> 注入的历练事件 ID(用于匹配"已触发"广播)

---

### Property `ExpireGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") int32 ExpireGameDay = 0;` |

**Notes:**

> 失效游戏天(与历练 TempDestination 同步, 仅作冗余/调试)

---

### Property `EndTextTriggered`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") FEmergenceLogText EndTextTriggered;` |

**Notes:**

> 结束·已触发文案(占位 {Force}{Name}{Place}; 含超链接开关)

---

### Property `EndTextTimeout`

| Field | Details |
|------|------|
| C++ type | [FEmergenceLogText](EmergenceTypes__FEmergenceLogText.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") FEmergenceLogText EndTextTimeout;` |

**Notes:**

> 结束·限时结束文案(占位 {Place}; 含超链接开关)

---

### Property `bClosed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|PlaceQuest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|PlaceQuest") bool bClosed = false;` |

**Notes:**

> 是否已关闭(已播报过结果, 防重复)

---
