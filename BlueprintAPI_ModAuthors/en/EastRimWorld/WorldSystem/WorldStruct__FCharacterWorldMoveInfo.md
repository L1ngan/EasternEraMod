# `struct` `FCharacterWorldMoveInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 角色世界地图移动信息

## Blueprint-exposed variables

### Property `MoveInfoGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid MoveInfoGuid;` |

**Notes:**

> 移动信息的guid

---

### Property `CharacterGuid`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGuid> CharacterGuid;` |

**Notes:**

> 角色GUID

---

### Property `StartPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid StartPlaceGuid;` |

**Notes:**

> 起始地点GUID

---

### Property `StartPosition`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector StartPosition = FVector::ZeroVector;` |

**Notes:**

> 起始地点GUID

---

### Property `EndPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid EndPlaceGuid;` |

**Notes:**

> 结束地点

---

### Property `EndPosition`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector EndPosition = FVector::ZeroVector;` |

**Notes:**

> 结束位置

---

### Property `WorldMoveState`

| Field | Details |
|------|------|
| C++ type | [EWorldMoveState](WorldStruct__EWorldMoveState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EWorldMoveState WorldMoveState = EWorldMoveState::GoToPlace;` |

**Notes:**

> 行走状态

---

### Property `TotalDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TotalDistance = 0.f;` |

**Notes:**

> 总距离

---

### Property `CurrentPosition`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector CurrentPosition = FVector::ZeroVector;` |

**Notes:**

> 当前位置

---

### Property `MovePath`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FVector> MovePath;` |

**Notes:**

> 移动的路径

---

### Property `CurMoveTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float CurMoveTime = 0.f;` |

**Notes:**

> 当前单程移动时间

---

### Property `CurrentPathIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int CurrentPathIndex = 0;` |

**Notes:**

> 当前移动路径中的下标

---

### Property `bStaying`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bStaying = false;` |

**Notes:**

> 是否正在停留

---

### Property `TotalNeedTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TotalNeedTime = 0.f;` |

**Notes:**

> 总共需要的时间

---

### Property `TotalCostTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TotalCostTime = 0.f;` |

**Notes:**

> 总共耗费时间

---

### Property `CurSingleMovePathTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float CurSingleMovePathTime = 0.f;` |

**Notes:**

> 当前单个点之间的移动时间

---

### Property `EnterPlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid EnterPlaceGuid;` |

**Notes:**

> 进入地点

---

### Property `bInitNavigationDone`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bInitNavigationDone = false;` |

**Notes:**

> 是否初始化导航结束

---

### Property `CarryingResources`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,FItemSimpleData> CarryingResources;` |

**Notes:**

> 携带的物资

---

### Property `ParameterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid ParameterGuid;` |

**Notes:**

> 携带的参数 根据不同的类型提供不同的参数类型

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 TeamID = 255;` |

**Notes:**

> TeamID

---

### Property `WorldMoveInfoPreset`

| Field | Details |
|------|------|
| C++ type | [FWorldMoveInfoPreset](WorldStruct__FWorldMoveInfoPreset.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FWorldMoveInfoPreset WorldMoveInfoPreset;` |

**Notes:**

> 移动的预设信息

---

### Property `bShowOnWorldMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bShowOnWorldMap = true;` |

**Notes:**

> 是否在大地图中显示(false=不绘制图标/不生成可见 move actor; 涌现论剑大会参赛弟子用)

---

### Property `bCompleteMoveTarget`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bCompleteMoveTarget = false;` |

**Notes:**

> 是否完成了移动目标

---

### Property `TransportationType`

| Field | Details |
|------|------|
| C++ type | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ETransportationType TransportationType = ETransportationType::Walking;` |

**Notes:**

> 使用的交通工具类型

---

### Property `TransportationBuildingGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid TransportationBuildingGuid;` |

**Notes:**

> 交通工具建筑GUID（如果使用交通工具）

---

### Property `TransportationSlotIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 TransportationSlotIndex = INDEX_NONE;` |

**Notes:**

> 交通工具的下标索引（如果使用交通工具）

---
