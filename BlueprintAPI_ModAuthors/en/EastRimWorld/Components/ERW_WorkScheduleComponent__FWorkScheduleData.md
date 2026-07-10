# `struct` `FWorkScheduleData`

**Source header:** `EastRimWorld/Components/ERW_WorkScheduleComponent.h`

---

## Functional description (from header comments)

> 工作日程数据

## Blueprint-exposed variables

### Property `Schedules`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<int32 , FName> Schedules;` |

**Notes:**

> TMap<时间点(小时) , 工作日程配置行名>

---

### Property `Agents`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid , [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , Transient) TMap<FGuid , AEastRimWorldCharacter*> Agents;` |

**Notes:**

> 执行此计划的角色（运行时缓存；标 Transient 不入盘，避免序列化裸角色指针悬空致崩）
> 读档身份由各角色 FCharacterSaveData::CurrentWorkScheduleName 持有，角色重建后回注
> （见 AEastRimWorldCharacter::ReinjectToWorkScheduleAfterLoad）

---
