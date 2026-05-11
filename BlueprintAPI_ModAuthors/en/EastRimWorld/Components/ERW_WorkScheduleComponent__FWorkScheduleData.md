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

**Source comments:**

> TMap<时间点(小时) , 工作日程配置行名>

---

### Property `Agents`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid , [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FGuid , AEastRimWorldCharacter*> Agents;` |

**Source comments:**

> 执行此计划的角色
> TMap<角色的Guid , 角色>

---
