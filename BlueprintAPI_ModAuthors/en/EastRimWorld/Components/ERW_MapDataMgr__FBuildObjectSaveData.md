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

**Source comments:**

> 物体的ID

---

### Property `SGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid SGUID = FGuid();` |

---

### Property `SaviorDestroyed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool SaviorDestroyed = false;` |

---

### Property `BuildingData`

| Field | Details |
|------|------|
| C++ type | `TMap<EBuildingDataType , FInstancedStruct>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EBuildingDataType , FInstancedStruct> BuildingData;` |

**Source comments:**

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

**Source comments:**

> 建筑在ISM组件中的存档数据

---

### Property `IsInMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsInMap { false };` |

**Source comments:**

> 是否放置在地图中

---

### Property `IsDestroyed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsDestroyed { false };` |

**Source comments:**

> 是否销毁

---

### Property `bBuildComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool bBuildComplete = false;` |

**Source comments:**

> 是否建造完成

---

### Property `SlotHandle`

| Field | Details |
|------|------|
| C++ type | `FSmartObjectSlotHandle` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FSmartObjectSlotHandle SlotHandle;` |

**Source comments:**

> 选中的智能对象插槽

---

### Property `ButtonOperationState`

| Field | Details |
|------|------|
| C++ type | `TMap<ECommonButtonType,bool>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**Source comments:**

> 相关按钮的状态 是否选中

---

### Property `MyTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGenericTeamId MyTeamID;` |

**Source comments:**

> 建筑物TeamID

---

### Property `BuildingRunState`

| Field | Details |
|------|------|
| C++ type | `EBuildingRunState` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EBuildingRunState BuildingRunState = EBuildingRunState::Stop;` |

**Source comments:**

> 建筑物状态

---

### Property `BuildingEnableState`

| Field | Details |
|------|------|
| C++ type | `EBuildingEnableState` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EBuildingEnableState BuildingEnableState = EBuildingEnableState::Enable;` |

**Source comments:**

> 建筑物的启用状态

---

### Property `CurDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float CurDurability = 0.0f;` |

**Source comments:**

> 当前耐久度

---

### Property `bBuildingState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool bBuildingState = true;` |

**Source comments:**

> 建筑状态（开启或关闭）

---

### Property `AttackSummonsGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid AttackSummonsGuid;` |

**Source comments:**

> 附加到建筑物上的召唤物ID

---

### Property `AboutBuildingAction`

| Field | Details |
|------|------|
| C++ type | TArray<[FGoalAndAction](../GOAP/GOAP_Data__FGoalAndAction.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FGoalAndAction> AboutBuildingAction;` |

**Source comments:**

> 涉及建筑运行相关的Action

---

### Property `SuspendItemGuids`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid , bool>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGuid , bool> SuspendItemGuids;` |

**Source comments:**

> 建筑占据的采集物的Guid
> TMap<采集物的Guid , 占位符>

---
