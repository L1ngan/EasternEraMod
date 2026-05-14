# `struct` `FBeginnerGuideSaveData`

**Source header:** `EastRimWorld/System/Task/BeginnerGuideComponent.h`

---

## Functional description (from header comments)

> 新手引导存档数据

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid;` |

**Source comments:**

> 组件的Guid

---

### Property `IsCompleteGuide`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsCompleteGuide = false;` |

**Source comments:**

> 是否已经完成了新手引导

---

### Property `NoviceTaskInfo`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FCommonTaskInstance> NoviceTaskInfo;` |

**Source comments:**

> 新手任务

---

### Property `CurNoviceTaskInfo`

| Field | Details |
|------|------|
| C++ type | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FCommonTaskInstance CurNoviceTaskInfo;` |

**Source comments:**

> 当前的新手引导任务

---

### Property `CountNoviceTaskNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 CountNoviceTaskNumber = 0;` |

**Source comments:**

> 新手引导任务数量

---

### Property `SelectActorGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid SelectActorGuid;` |

**Source comments:**

> 物品替身actor的Guid

---

### Property `CoverTipsState`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , bool>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , bool> CoverTipsState;` |

**Source comments:**

> 遮罩Tips显示状态
> TMap<条件ID , 是否显示过>

---

### Property `UnlockIDs`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , EBeginnerGuideUnlockType>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , EBeginnerGuideUnlockType> UnlockIDs;` |

**Source comments:**

> 已解锁的ID
> TMap<ID , 解锁类型>

---
