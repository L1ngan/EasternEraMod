# `struct` `FEmergenceLogEntry`

**Source header:** `EastRimWorld/System/Emergence/Log/EmergenceLogComponent.h`

---

## Functional description (from header comments)

> 涌现事件日志条目 —— 一条江湖事件记录。随 ASaveGameDataActor 经 Savior 入档。

## Blueprint-exposed variables

### Property `LogGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") FGuid LogGuid;` |

**Notes:**

> 本条日志唯一 id

---

### Property `Content`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") FString Content;` |

**Notes:**

> 日志文案(已格式化的最终显示串; 存 FString 而非 FText —— 日志是冻结的历史记录, 且 FText::Format 结果存档不能干净往返)

---

### Property `Time`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") float Time = 0.f;` |

**Notes:**

> [需求1] 记录时的游戏时间(秒; 取 AWorldDirector::GameTime)

---

### Property `EventID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") FName EventID;` |

**Notes:**

> [需求2] 来源事件行 ID(反查事件配置: AEmergenceDirector::FindEventRow)

---

### Property `EventInstanceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") FGuid EventInstanceGuid;` |

**Notes:**

> [需求2] 来源事件实例 Guid(反查活跃事件桥: AEmergenceDirector::FindBridgeByGuid; 事件已结束则桥不在但日志仍可读)

---

### Property `EventStage`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") int32 EventStage = 0;` |

**Notes:**

> 记录时事件所处阶段(写入瞬间由来源桥 GetCurrentStage() 采样)。日志的交互(如超链接)仅在事件仍处该阶段时有效 —— 见 IsLogActionValid

---

### Property `ActorGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") TArray<FGuid> ActorGuids;` |

**Notes:**

> [需求4] 本条日志关联的所有演员(势力/地点/角色等世界对象 Guid)

---

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | TArray<[FEmergenceLogAction](../Data/EmergenceTypes__FEmergenceLogAction.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") TArray<FEmergenceLogAction> Actions;` |

**Notes:**

> 本条日志可触发的点击动作(随事件/阶段不同; 如触发对话)。UI 据此渲染超链接, 点击经 ExecuteLogAction(阶段有效才生效)

---

### Property `bPlayerRelated`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") bool bPlayerRelated = false;` |

**Notes:**

> [需求5] 是否与玩家势力相关(关联演员里含 玩家城市 / 玩家势力 / 玩家弟子)

---
