# `struct` `FWorldEventInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor.h`

---

## Functional description (from header comments)

> 世界事件生成信息

## Blueprint-exposed variables

### Property `EventName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText EventName;` |

**Notes:**

> 事件名称

---

### Property `WorldEventType`

| Field | Details |
|------|------|
| C++ type | [EWorldEventType](WorldEventManagerActor__EWorldEventType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EWorldEventType WorldEventType = EWorldEventType::None;` |

**Notes:**

> 事件类型

---

### Property `bNeedExplore`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bNeedExplore = false;` |

**Notes:**

> 是否需要探索

---

### Property `RecommendLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int RecommendLevel = 0;` |

**Notes:**

> 等级推荐 0 无推荐

---

### Property `RestrictLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int RestrictLevel = 0;` |

**Notes:**

> 等级限制 0 无限制

---

### Property `EventMapPosition`

| Field | Details |
|------|------|
| C++ type | `TArray<FTransform>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FTransform> EventMapPosition;` |

**Notes:**

> 事件坐标

---

### Property `RebirthTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RebirthTime = 0.f;` |

**Notes:**

> 重生时间 0 为不可重生

---

### Property `Lifespan`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float Lifespan = 0.f;` |

**Notes:**

> 存在时间 0 无限制

---

### Property `EnterDiscipleMaxNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int EnterDiscipleMaxNumber = 0;` |

**Notes:**

> 进入的最大人数包含掌门

---

### Property `ParameterID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ParameterID;` |

**Notes:**

> 事件的参数

---

### Property `DifficultyLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int DifficultyLevel;` |

**Notes:**

> 难度等级

---

### Property `DetailID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName DetailID;` |

**Notes:**

> 详细信息

---

### Property `GroupID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int GroupID;` |

**Notes:**

> 分组id 0 没有分组 代表没有限制

---

### Property `WorldEventStateType`

| Field | Details |
|------|------|
| C++ type | [EWorldEventStateType](WorldEventManagerActor__EWorldEventStateType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EWorldEventStateType WorldEventStateType = EWorldEventStateType::None;` |

**Notes:**

> 世界事件状态

---

### Property `StateTimeOfDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float StateTimeOfDuration = 0.0f;` |

**Notes:**

> 世界事件状态持续时间

---

### Property `bAfterCompletionOfClose`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bAfterCompletionOfClose = true;` |

**Notes:**

> 完成后关闭或重生

---

### Property `bAfterEnterOfClose`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bAfterEnterOfClose = true;` |

**Notes:**

> 进入后关闭或重生

---

### Property `bAfterDefeatedOfClose`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bAfterDefeatedOfClose = true;` |

**Notes:**

> 失败后关闭或重生

---

### Property `bAfterTriggerOfClose`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bAfterTriggerOfClose = true;` |

**Notes:**

> 触发后关闭或重生

---

### Property `EventGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGuid EventGuid = FGuid();` |

**Notes:**

> Event Guid field.

---

### Property `SpawnMapPosition`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FTransform SpawnMapPosition = FTransform::Identity;` |

**Notes:**

> Spawn Map Position field.

---

### Property `bSpawnOrRebirthNotification`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bSpawnOrRebirthNotification = false;` |

**Notes:**

> 是否出现或重生时生成通知

---

### Property `bCloseNotification`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bCloseNotification = false;` |

**Notes:**

> 是否关闭时生成通知

---

### Property `bCanPauseEvent`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bCanPauseEvent = false;` |

**Notes:**

> 是否可以暂停事件

---

### Property `PauseSlotIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int PauseSlotIndex = INDEX_NONE;` |

**Notes:**

> 暂停的槽位

---

### Property `bSpawnOrRebirthTrigger`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bSpawnOrRebirthTrigger = true;` |

**Notes:**

> 是否在生成或重生时触发这个事件

---
