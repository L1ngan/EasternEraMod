# `struct` `FConstructionSaveData`

**Source header:** `EastRimWorld/Components/ERW_ConstructionComponent.h`

---

## Functional description (from header comments)

> 建造组件存档数据

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid;` |

**Notes:**

> 组件的Guid

---

### Property `Batch`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Batch { INDEX_NONE };` |

**Notes:**

> Action所在批次

---

### Property `IsPullDown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsPullDown { false };` |

**Notes:**

> 是否是拆除建筑

---

### Property `IsPriori`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsPriori { false };` |

**Notes:**

> 是否加入优先执行

---

### Property `TransBuildingType`

| Field | Details |
|------|------|
| C++ type | [ETransBuildingType](../ERW_Enumerations__ETransBuildingType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) ETransBuildingType TransBuildingType { ETransBuildingType::None };` |

**Notes:**

> 移动建筑类型

---

### Property `WorkType`

| Field | Details |
|------|------|
| C++ type | [EConstructionWorkType](ERW_ConstructionComponent__EConstructionWorkType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EConstructionWorkType WorkType { EConstructionWorkType::Construction };` |

**Notes:**

> Type of this construction work (construction or building repair)

---

### Property `NeedResources`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , int32> NeedResources;` |

**Notes:**

> 建造所需资源
> TMap<资源ID , 数量>

---

### Property `CurrentResources`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , int32> CurrentResources;` |

**Notes:**

> 当前拥有资源
> TMap<资源ID , 数量>

---

### Property `MaxWorkload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 MaxWorkload { 0 };` |

**Notes:**

> 完成建造需要工作量

---

### Property `CurrentWorkload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 CurrentWorkload { 0 };` |

**Notes:**

> 当前接收工作量

---

### Property `OwnerData`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FUObjectData OwnerData;` |

**Notes:**

> Owner的数据

---
