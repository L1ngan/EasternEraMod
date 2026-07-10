# `struct` `FApprenticeshipDispatchInfo`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 在途弟子快照(历练面板列表)

## Blueprint-exposed variables

### Property `DestinationCityName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FString DestinationCityName;` |

**Notes:**

> 目标城 RowName 字符串(=TargetCityID.ToString())

---

### Property `DaysOnRoad`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 DaysOnRoad = 0;` |

**Notes:**

> 在外天数(跨城累计已历练天数 DaysElapsed 取整)

---

### Property `TravelProgress`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") float TravelProgress = 0.f;` |

**Notes:**

> 当前路段移动进度 0~1(去程/回程途中有效,逗留时为该段终值)

---

### Property `State`

| Field | Details |
|------|------|
| C++ type | [EApprenticeshipState](ApprenticeshipTypes__EApprenticeshipState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") EApprenticeshipState State = EApprenticeshipState::None;` |

**Notes:**

> 历练状态(启程中/历练中/归途中/被召回等)

---

### Property `DiscipleDisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FText DiscipleDisplayName;` |

**Notes:**

> 弟子显示名(取角色名;取不到回退 DiscipleName)

---

### Property `DestinationCityDisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FText DestinationCityDisplayName;` |

**Notes:**

> 目标城显示名(取地点 PlaceName;取不到回退 RowName)

---

### Property `DestinationCityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FName DestinationCityID;` |

**Notes:**

> 目标城 RowName(=Record.TargetCityID)

---

### Property `BudgetRemaining`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 BudgetRemaining = 0;` |

**Notes:**

> 剩余盘缠(铜币,Budget 取整)

---

### Property `TriggeredEventCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 TriggeredEventCount = 0;` |

**Notes:**

> 本次历练已触发事件数(TriggeredEventIDs 计数)

---

### Property `LatestRumorID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FName LatestRumorID;` |

**Notes:**

> 最近一条江湖见闻 ID(无则 None)

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 RealmLevel = 0;` |

**Notes:**

> 弟子境界等级

---

### Property `RecordGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FGuid RecordGuid;` |

**Notes:**

> 记录主键(给卡片召回按钮回传 RecallDisciple)

---

### Property `DiscipleGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FGuid DiscipleGuid;` |

**Notes:**

> 弟子角色 Guid(=FApprenticeshipRecord.DiscipleCharacterGuid)

---

### Property `OwningForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FGuid OwningForceGuid;` |

**Notes:**

> 派出该弟子的门派 Guid(=FApprenticeshipRecord.OwningForceGuid)

---

### Property `StartGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 StartGameDay = 0;` |

**Notes:**

> 当前历练开始的游戏日(FloorToInt(DispatchGameTime / GameDaySeconds))

---

### Property `StartGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") float StartGameTime = 0.f;` |

**Notes:**

> 当前历练开始时间戳秒(DispatchGameTime)

---

### Property `CurrentStayDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 CurrentStayDays = 0;` |

**Notes:**

> 当前城已停留天数(StayDaysAccrued)

---

### Property `TotalDaysElapsed`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 TotalDaysElapsed = 0;` |

**Notes:**

> 历练总耗时天数(DaysElapsed;= 此次历练累计已消耗)

---
