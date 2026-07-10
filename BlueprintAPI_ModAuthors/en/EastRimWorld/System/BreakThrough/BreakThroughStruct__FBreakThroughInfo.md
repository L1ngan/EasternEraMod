# `struct` `FBreakThroughInfo`

**Source header:** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## Functional description (from header comments)

> 突破信息实例

## Blueprint-exposed variables

### Property `BreakThroughGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BreakThroughGuid = FGuid();` |

**Notes:**

> 突破唯一标识

---

### Property `CharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid CharacterGuid;` |

**Notes:**

> 角色Guid

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RealmLevel = 1;` |

**Notes:**

> 突破的境界等级

---

### Property `RoomGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid RoomGuid;` |

**Notes:**

> 选择的房间Guid

---

### Property `TrainingRoomType`

| Field | Details |
|------|------|
| C++ type | [EFiveElementType](../../Struct/CommonEnum__EFiveElementType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EFiveElementType TrainingRoomType = EFiveElementType::None;` |

**Notes:**

> 突破开始时记录的练功房类型（用于检查房间是否变化）

---

### Property `TrainingRoomLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TrainingRoomLevel = 0;` |

**Notes:**

> 突破开始时记录的练功房等级（用于检查房间是否变化）

---

### Property `BreakThroughProgress`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BreakThroughProgress = 0;` |

**Notes:**

> 突破已增加的进度（突破点数）

---

### Property `PendingSkillIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> PendingSkillIDs;` |

**Notes:**

> 待发放的技能奖励ID

---

### Property `State`

| Field | Details |
|------|------|
| C++ type | [EBreakThroughState](BreakThroughStruct__EBreakThroughState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBreakThroughState State = EBreakThroughState::NotStarted;` |

**Notes:**

> 突破状态

---

### Property `ElementValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ElementValue = 0.f;` |

**Notes:**

> 五行属性

---

### Property `BreakthroughNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BreakthroughNumber = 0;` |

**Notes:**

> Breakthrough Number field.

---
