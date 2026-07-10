# `struct` `FApprenticeshipDetailInfo`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 单条历练详情快照(玩家点开某在途弟子)

## Blueprint-exposed variables

### Property `RecordGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FGuid RecordGuid;` |

**Notes:**

> Record Guid field.

---

### Property `DiscipleGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FGuid DiscipleGuid;` |

**Notes:**

> Disciple Guid field.

---

### Property `DiscipleDisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText DiscipleDisplayName;` |

**Notes:**

> Disciple Display Name field.

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 RealmLevel = 0;` |

**Notes:**

> Realm Level field.

---

### Property `State`

| Field | Details |
|------|------|
| C++ type | [EApprenticeshipState](ApprenticeshipTypes__EApprenticeshipState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") EApprenticeshipState State = EApprenticeshipState::None;` |

**Notes:**

> State field.

---

### Property `CurrentPlaceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText CurrentPlaceName;` |

**Notes:**

> 当前所在地点

---

### Property `CurrentPlaceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FName CurrentPlaceID;` |

**Notes:**

> Current Place ID field.

---

### Property `CurrentPlaceLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 CurrentPlaceLevel = 0;` |

**Notes:**

> Current Place Level field.

---

### Property `StartGameDay`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 StartGameDay = 0;` |

**Notes:**

> 时间

---

### Property `StartGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") float StartGameTime = 0.f;` |

**Notes:**

> Executes the Start Game Time operation.

---

### Property `CurrentStayDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 CurrentStayDays = 0;` |

**Notes:**

> Current Stay Days field.

---

### Property `CurrentStayMaxDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 CurrentStayMaxDays = 0;` |

**Notes:**

> Current Stay Max Days field.

---

### Property `TotalDaysElapsed`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 TotalDaysElapsed = 0;` |

**Notes:**

> Total Days Elapsed field.

---

### Property `BudgetRemaining`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 BudgetRemaining = 0;` |

**Notes:**

> Budget Remaining field.

---

### Property `Harvest`

| Field | Details |
|------|------|
| C++ type | [FApprenticeshipHarvestView](ApprenticeshipTypes__FApprenticeshipHarvestView.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FApprenticeshipHarvestView Harvest;` |

**Notes:**

> 总收获(分项) + 经历事件(带时间)

---

### Property `EventHistory`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipEventHistoryItem](ApprenticeshipTypes__FApprenticeshipEventHistoryItem.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FApprenticeshipEventHistoryItem> EventHistory;` |

**Notes:**

> Event History field.

---
