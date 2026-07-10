# `struct` `FApprenticeshipRecord`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> Apprenticeship Record data structure.

## Blueprint-exposed variables

### Property `RecordGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Id" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Id") FGuid RecordGuid;` |

**Notes:**

> 主键 = 2D 移动表 key(派遣即生成,贯穿去程/逗留/转城/回程/结算)

---

### Property `DiscipleCharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Id" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Id") FGuid DiscipleCharacterGuid;` |

**Notes:**

> 弟子角色 Guid(所属势力 WorldCharacterData 的 key)

---

### Property `bIsNPC`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Id" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Id") bool bIsNPC = false;` |

**Notes:**

> 是否 NPC 门派弟子(true=归来返还成长积分;false=玩家弟子兑现 Harvest)

---

### Property `OwningForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Id" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Id") FGuid OwningForceGuid;` |

**Notes:**

> 派出该弟子的门派 Guid(收益分流唯一依据)

---

### Property `State`

| Field | Details |
|------|------|
| C++ type | [EApprenticeshipState](ApprenticeshipTypes__EApprenticeshipState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|State" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|State") EApprenticeshipState State = EApprenticeshipState::None;` |

**Notes:**

> ── 状态 ─────────────────────────────────

---

### Property `TargetCityGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Path" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") FGuid TargetCityGuid;` |

**Notes:**

> 当前目标城 Guid(转城时改写为下一座城)

---

### Property `TargetCityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Path" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") FName TargetCityID;` |

**Notes:**

> 当前目标城 RowName(2D 移动表用)

---

### Property `StartCityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Path" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") FName StartCityID;` |

**Notes:**

> 原始出发城 RowName(=最终回程终点,转城不改)

---

### Property `CurrentCityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Path" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") FName CurrentCityID;` |

**Notes:**

> 当前逗留城 RowName(Roaming 时有效,转城更新)

---

### Property `VisitedCities`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Path" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") TArray<FName> VisitedCities;` |

**Notes:**

> 本次历练已访问过的城(转城排除 + 上限计数)

---

### Property `Budget`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Resource" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Resource") float Budget = 0.f;` |

**Notes:**

> 实时剩余盘缠(铜币;每日扣减直接写回,转城续航决策核心;事件可增加)

---

### Property `MaxDays`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Time" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Time") float MaxDays = 30.f;` |

**Notes:**

> 单城逗留天数上限

---

### Property `StayDaysAccrued`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Time" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Time") int32 StayDaysAccrued = 0;` |

**Notes:**

> 当前城已逗留天数(唯一权威,2D 表那份在转城时同步置 0)

---

### Property `DaysElapsed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Time" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Time") float DaysElapsed = 0.f;` |

**Notes:**

> 跨城累计已历练天数(供 UI 展示)

---

### Property `DispatchGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Time" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Time") float DispatchGameTime = 0.f;` |

**Notes:**

> 出发时的游戏时间戳

---

### Property `Harvest`

| Field | Details |
|------|------|
| C++ type | [FApprenticeshipHarvest](ApprenticeshipTypes__FApprenticeshipHarvest.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Harvest") FApprenticeshipHarvest Harvest;` |

**Notes:**

> 历练成果(归来兑现;NPC 留空)

---

### Property `TriggeredEventIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Harvest") TArray<FName> TriggeredEventIDs;` |

**Notes:**

> 已触发事件 ID(防重复)

---

### Property `EventLog`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipEventLogEntry](ApprenticeshipTypes__FApprenticeshipEventLogEntry.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Harvest" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Harvest") TArray<FApprenticeshipEventLogEntry> EventLog;` |

**Notes:**

> 事件历史(带触发时间;TriggeredEventIDs 仅防重复,此表供 UI 按时间展示经历)

---

### Property `bSettled`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Settle" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Settle") bool bSettled = false;` |

**Notes:**

> 已结算(发过积分/经验)置 true,防日切与抵达钩子对同一记录双发

---
