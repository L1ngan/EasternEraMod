# `struct` `FApprenticeshipEventLogEntry`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 单条历练事件历史项(事件 ID + 触发时间),供详情 UI 按时间罗列经历

## Blueprint-exposed variables

### Property `EventID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|EventLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|EventLog") FName EventID;` |

**Notes:**

> 触发的事件 ID(反查 FApprenticeshipEventRow 取 EventName)

---

### Property `GameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|EventLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|EventLog") int32 GameDay = 0;` |

**Notes:**

> 触发时的游戏绝对天数(AWorldDirector::GameDay)

---

### Property `GameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|EventLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|EventLog") float GameTime = 0.f;` |

**Notes:**

> 触发时的游戏时间戳秒

---

### Property `CityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|EventLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|EventLog") FName CityID;` |

**Notes:**

> 触发时弟子所在城 RowName

---
