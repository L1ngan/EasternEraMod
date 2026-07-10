# `struct` `FFabricateSaveData`

**Source header:** `EastRimWorld/Components/FabricateActorComponent.h`

---

## Functional description (from header comments)

> 制造存档数据

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid;` |

**Notes:**

> 制造组件的Guid

---

### Property `FabricateTaskQueue`

| Field | Details |
|------|------|
| C++ type | TArray<[FFabricateTaskData](../Struct/CommonStruct__FFabricateTaskData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FFabricateTaskData> FabricateTaskQueue;` |

**Notes:**

> 制造队列数据

---

### Property `CurFabricateTaskGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid CurFabricateTaskGuid;` |

**Notes:**

> 当前制造任务的Guid

---

### Property `ResourceActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , FGOAP_Action> ResourceActions;` |

**Notes:**

> 制造资源对应的GOAPAction
> TMap<资源ID , GOAPAction>

---

### Property `SelectableResourceAction`

| Field | Details |
|------|------|
| C++ type | TMap<FGameplayTag , [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGameplayTag , FGOAP_Action> SelectableResourceAction;` |

**Notes:**

> 可选资源对应的GOAPAction
> TMap<Tag , GOAPAction>

---

### Property `FabricateAction`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGOAP_Action FabricateAction;` |

**Notes:**

> 制造GOAPAction

---

### Property `WaitingGenerateItem`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool WaitingGenerateItem { false };` |

**Notes:**

> 是否在等待生成制造物品

---
