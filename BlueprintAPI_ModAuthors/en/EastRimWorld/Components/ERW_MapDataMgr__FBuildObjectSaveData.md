# `struct` `FBuildObjectSaveData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 建筑存档数据

## Blueprint-exposed variables

### Property `ObjectID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FName ObjectID;` |

**Notes:**

> 物体的ID

---

### Property `OldObjectID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FName OldObjectID;` |

**Notes:**

> 重建前的物体ID

---

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid SGUID = FGuid();` |

**Notes:**

> Globally unique ID used by the Savior save system

---

### Property `SaviorDestroyed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool SaviorDestroyed = false;` |

**Notes:**

> Whether this build object is marked as destroyed in the Savior save data

---

### Property `BuildingData`

| Field | Details |
|------|------|
| C++ type | TMap<[EBuildingDataType](../ERW_Enumerations__EBuildingDataType.md) , FInstancedStruct> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EBuildingDataType , FInstancedStruct> BuildingData;` |

**Notes:**

> 建筑特有数据
> TMap<建筑数据类型 , 数据结构>

---

### Property `ISMSaveData`

| Field | Details |
|------|------|
| C++ type | [FBuildObjectData](../ERW_CommonTypes__FBuildObjectData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FBuildObjectData ISMSaveData;` |

**Notes:**

> 建筑在ISM组件中的存档数据

---

### Property `OldISMSaveData`

| Field | Details |
|------|------|
| C++ type | [FBuildObjectData](../ERW_CommonTypes__FBuildObjectData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FBuildObjectData OldISMSaveData;` |

**Notes:**

> 重建前的建筑在ISM组件中的存档数据

---

### Property `IsInMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsInMap { false };` |

**Notes:**

> 是否放置在地图中

---

### Property `IsDestroyed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsDestroyed { false };` |

**Notes:**

> 是否销毁

---

### Property `bBuildComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool bBuildComplete = false;` |

**Notes:**

> 是否建造完成

---

### Property `SlotHandle`

| Field | Details |
|------|------|
| C++ type | `FSmartObjectSlotHandle` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FSmartObjectSlotHandle SlotHandle;` |

**Notes:**

> 选中的智能对象插槽

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Notes:**

> 相关按钮的状态 是否选中

---

### Property `MyTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGenericTeamId MyTeamID;` |

**Notes:**

> 建筑物TeamID

---

### Property `BuildingRunState`

| Field | Details |
|------|------|
| C++ type | [EBuildingRunState](../ERW_Enumerations__EBuildingRunState.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EBuildingRunState BuildingRunState = EBuildingRunState::Stop;` |

**Notes:**

> 建筑物状态

---

### Property `BuildingEnableState`

| Field | Details |
|------|------|
| C++ type | [EBuildingEnableState](../ERW_Enumerations__EBuildingEnableState.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EBuildingEnableState BuildingEnableState = EBuildingEnableState::Enable;` |

**Notes:**

> 建筑物的启用状态

---

### Property `CurDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float CurDurability = 0.0f;` |

**Notes:**

> 当前耐久度

---

### Property `bBuildingState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool bBuildingState = true;` |

**Notes:**

> 建筑状态（开启或关闭）

---

### Property `AttackSummonsGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid AttackSummonsGuid;` |

**Notes:**

> 附加到建筑物上的召唤物ID

---

### Property `AboutBuildingAction`

| Field | Details |
|------|------|
| C++ type | TArray<[FGoalAndAction](../GOAP/GOAP_Data__FGoalAndAction.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FGoalAndAction> AboutBuildingAction;` |

**Notes:**

> 涉及建筑运行相关的Action

---

### Property `SuspendItemGuids`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid , bool>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGuid , bool> SuspendItemGuids;` |

**Notes:**

> 建筑占据的采集物的Guid
> TMap<采集物的Guid , 占位符>

---
