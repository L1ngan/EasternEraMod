# `class` `UERW_AreaOperationComponent`

**Source header:** `EastRimWorld/Components/ERW_AreaOperationComponent.h`

---

## Functional description (from header comments)

> 物体创建区域操作相关组件

## Blueprint-exposed variables

### Property `HISMManager`

| Field | Details |
|------|------|
| C++ type | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) UERW_HISMManager* HISMManager { nullptr };` |

**Notes:**

> HISM管理组件

---

### Property `MapDataMgr`

| Field | Details |
|------|------|
| C++ type | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) UERW_MapDataMgr* MapDataMgr { nullptr };` |

**Notes:**

> Reference to the map data manager (UERW_MapDataMgr)

---

### Property `GenerateMode`

| Field | Details |
|------|------|
| C++ type | [EGenerateMode](../ERW_Enumerations__EGenerateMode.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EGenerateMode GenerateMode;` |

**Notes:**

> 创建方式

---

### Property `DistributionType`

| Field | Details |
|------|------|
| C++ type | [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EGridDistributionType DistributionType;` |

**Notes:**

> 物体在格子中分布类型

---

### Property `GridPositionType`

| Field | Details |
|------|------|
| C++ type | [EGridPositionType](../ERW_Enumerations__EGridPositionType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EGridPositionType GridPositionType;` |

**Notes:**

> 格子位置类型

---

### Property `LineGenerateOrientation`

| Field | Details |
|------|------|
| C++ type | [ELineGenerateOrientation](../ERW_Enumerations__ELineGenerateOrientation.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) ELineGenerateOrientation LineGenerateOrientation;` |

**Notes:**

> 线型区域朝向

---

### Property `EnvironType`

| Field | Details |
|------|------|
| C++ type | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EEnvironType EnvironType;` |

**Notes:**

> 环境类型

---

### Property `RotateOrientation`

| Field | Details |
|------|------|
| C++ type | [ERotateOrientation](../ERW_Enumerations__ERotateOrientation.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) ERotateOrientation RotateOrientation;` |

**Notes:**

> 旋转朝向

---

### Property `IsTransBuilding`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) bool IsTransBuilding { false };` |

**Notes:**

> 是否是移动建筑

---

### Property `TransBuildingData`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FUObjectData TransBuildingData;` |

**Notes:**

> 移动建筑的ObjectData

---

### Property `RectActorSize`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntPoint RectActorSize = FIntPoint(1 , 1);` |

**Notes:**

> 矩形区域建筑的尺寸

---

### Property `PlaceBuildingTipsType`

| Field | Details |
|------|------|
| C++ type | [EPlaceBuildingTipsType](../ERW_Enumerations__EPlaceBuildingTipsType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EPlaceBuildingTipsType PlaceBuildingTipsType { EPlaceBuildingTipsType::Normal };` |

**Notes:**

> 放置建筑提示类型

---

### Property `FoundationHeightIntercept`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float FoundationHeightIntercept;` |

**Notes:**

> 地基修建最大高度差(厘米)

---

### Property `StairID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FName StairID;` |

**Notes:**

> 放置地基(水池)后出现的楼梯ID

---

### Property `FoundationHeightStep`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float FoundationHeightStep { 0.f };` |

**Notes:**

> 地基(水池)单次变化高度

---

### Property `ManualHeightOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float ManualHeightOffset { 0.f };` |

**Notes:**

> 地基(水池)手动调整高度偏移

---

### Property `MaxRaiseHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float MaxRaiseHeight { 0 };` |

**Notes:**

> 地基(水池)最大抬升高度

---

### Property `RectGridMinHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RectGridMinHeight { 0.f };` |

**Notes:**

> 矩形区域格子最小高度

---

### Property `RectGridMaxHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RectGridMaxHeight { 0.f };` |

**Notes:**

> 矩形区域格子最大高度

---

### Property `CanPlaceActor`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) bool CanPlaceActor { true };` |

**Notes:**

> 是否能放下Actor

---

### Property `FirstActor`

| Field | Details |
|------|------|
| C++ type | `AActor*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) AActor* FirstActor;` |

**Notes:**

> 生成的第一个Actor

---

### Property `PresetSize`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntVector PresetSize;` |

**Notes:**

> 预设建筑的占格子尺寸

---

### Property `PresetStart`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition PresetStart;` |

**Notes:**

> 预设建筑占格子起始坐标

---

### Property `PresetEnd`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition PresetEnd;` |

**Notes:**

> 预设建筑占格子终点坐标

---

### Property `PresetData`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPresetInfos](../ERW_CommonTypes__FPresetInfos.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FName , FPresetInfos> PresetData;` |

**Notes:**

> 预设建筑的数据
> TMap<建筑表ID , 数据>

---

### Property `WallPillarData`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPresetInfos](../ERW_CommonTypes__FPresetInfos.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FName , FPresetInfos> WallPillarData;` |

**Notes:**

> 预设墙接缝柱的数据
> TMap<建筑表ID , 数据>

---

### Property `PresetFoundationGridPoses`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , AActor*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridPosition , AActor*> PresetFoundationGridPoses;` |

**Notes:**

> 预设建筑地基格子坐标
> TMap<格子坐标 , 地基Actor>

---

### Property `BuildID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FName BuildID;` |

**Notes:**

> 建造物体ID

---

### Property `MaxNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) int32 MaxNum;` |

**Notes:**

> 创建Instance的最大数量

---

### Property `ExtraResourceRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float ExtraResourceRate { 0.f };` |

**Notes:**

> 填充模型额外消耗建造资源的比率

---

### Property `Resources`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FName , int32> Resources;` |

**Notes:**

> 建造需要消耗的资源

---

### Property `StartGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition StartGridPos;` |

**Notes:**

> 起始网格坐标

---

### Property `CurGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition CurGridPos;` |

**Notes:**

> 当前网格坐标

---

### Property `RectMinGrid`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition RectMinGrid;` |

**Notes:**

> 矩形区域最小点格子坐标

---

### Property `RectMaxGrid`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition RectMaxGrid;` |

**Notes:**

> 矩形区域最大点格子坐标

---

### Property `StartRectMin`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition StartRectMin;` |

**Notes:**

> 矩形区域起始最小格子坐标

---

### Property `StartRectMax`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition StartRectMax;` |

**Notes:**

> 矩形区域起始最大格子坐标

---

### Property `CurRectMin`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition CurRectMin;` |

**Notes:**

> 矩形区域当前最小格子坐标

---

### Property `CurRectMax`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition CurRectMax;` |

**Notes:**

> 矩形区域当前最大格子坐标

---

### Property `StartWorldPos`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FVector StartWorldPos;` |

**Notes:**

> 起始世界位置

---

### Property `CurWorldPos`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FVector CurWorldPos;` |

**Notes:**

> 当前世界位置

---

### Property `StartPoint`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntPoint StartPoint;` |

**Notes:**

> 起始角点

---

### Property `CurPoint`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntPoint CurPoint;` |

**Notes:**

> 当前角点

---

### Property `PrevPoint`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntPoint PrevPoint;` |

**Notes:**

> 上次操作角点

---

### Property `CurMin`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FIntPoint CurMin;` |

**Notes:**

> 当前操作区域最小点

---

### Property `CurMax`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FIntPoint CurMax;` |

**Notes:**

> 当前操作区域最大点

---

### Property `StartHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float StartHeight;` |

**Notes:**

> 起始网格高度

---

### Property `AreaMaxHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float AreaMaxHeight;` |

**Notes:**

> 划区域时的最大高度

---

### Property `VisibleActors`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , AActor*> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridPosition , AActor*> VisibleActors;` |

**Notes:**

> 显示的Actor
> TMap<建筑左上角格子坐标 , Actor>

---

### Property `HideActors`

| Field | Details |
|------|------|
| C++ type | `TMap<AActor* , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AActor* , bool> HideActors;` |

**Notes:**

> 隐藏的Actor
> TMap<Actor , 占位符>

---

### Property `NewGridPoses`

| Field | Details |
|------|------|
| C++ type | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridPosition> NewGridPoses;` |

**Notes:**

> 新加入的格子

---

### Property `HideGridPoses`

| Field | Details |
|------|------|
| C++ type | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridPosition> HideGridPoses;` |

**Notes:**

> 需要隐藏的格子

---

### Property `StairGridInfos`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FStairGridInfo](ERW_AreaOperationComponent__FStairGridInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridPosition , FStairGridInfo> StairGridInfos;` |

**Notes:**

> 阶梯占格子信息
> TMap<格子坐标 , 格子信息>

---

### Property `SurroundingActors`

| Field | Details |
|------|------|
| C++ type | `TMap<AActor* , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AActor* , bool> SurroundingActors;` |

**Notes:**

> 区域周边同类型的Actor
> TMap<Actor , 占位符>

---

### Property `LineActorInfos`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FLineActorInfo](ERW_AreaOperationComponent__FLineActorInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridPosition , FLineActorInfo> LineActorInfos;` |

**Notes:**

> 沿格子边线生成的Actor的信息
> TMap<格子坐标 , Actor的信息>

---

### Property `GridSeamPoints`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> GridSeamPoints;` |

**Notes:**

> 格子接缝点
> TMap<接缝点数据 , 占位符>

---

### Property `NewSeamPoints`

| Field | Details |
|------|------|
| C++ type | TArray<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridSeamPoint> NewSeamPoints;` |

**Notes:**

> 新加入的接缝点

---

### Property `RemovedSeamPoints`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> RemovedSeamPoints;` |

**Notes:**

> 需要移除的接缝点
> TMap<接缝点数据 , 占位符>

---

### Property `UnchangedSeamPoints`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> UnchangedSeamPoints;` |

**Notes:**

> 未改变的接缝点
> TMap<接缝点数据 , 占位符>

---

### Property `AllHideSeamPoints`

| Field | Details |
|------|------|
| C++ type | TArray<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridSeamPoint> AllHideSeamPoints;` |

**Notes:**

> 所有隐藏接缝点

---

### Property `VisibleSeamPoints`

| Field | Details |
|------|------|
| C++ type | TArray<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridSeamPoint> VisibleSeamPoints;` |

**Notes:**

> 本次操作需要重新显示的接缝点

---

### Property `HideSeamPoints`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> HideSeamPoints;` |

**Notes:**

> 本次操作需要隐藏的接缝点

---

### Property `SideWorldPos`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FVector SideWorldPos;` |

**Notes:**

> 网格边线中心的世界位置

---

### Property `WallTypes`

| Field | Details |
|------|------|
| C++ type | TArray<[EEmbeddedWallType](../ERW_Enumerations__EEmbeddedWallType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<EEmbeddedWallType> WallTypes;` |

**Notes:**

> 嵌入式墙类型

---

### Property `ReplacedWalls`

| Field | Details |
|------|------|
| C++ type | `TMap<AActor* , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AActor* , bool> ReplacedWalls;` |

**Notes:**

> 已有的被替换墙体的Actor
> TMap<墙 , 占位符>

---

### Property `RecoveredWalls`

| Field | Details |
|------|------|
| C++ type | `TArray<AActor*>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<AActor*> RecoveredWalls;` |

**Notes:**

> 需要恢复显示的墙

---

### Property `OverlappedWalls`

| Field | Details |
|------|------|
| C++ type | `TMap<AActor* , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AActor* , bool> OverlappedWalls;` |

**Notes:**

> 围墙门格子覆盖的围墙
> TMap<围墙Actor , 占位符>

---

### Property `OverlappedSeamPoints`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> OverlappedSeamPoints;` |

**Notes:**

> 围墙门格子覆盖的接缝点

---

### Property `RoofActors`

| Field | Details |
|------|------|
| C++ type | TMap<[ERoofPartType](../ERW_Enumerations__ERoofPartType.md) , [FRoofActors](ERW_AreaOperationComponent__FRoofActors.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<ERoofPartType , FRoofActors> RoofActors;` |

**Notes:**

> 每个屋顶部位类型显示和隐藏的Actor
> TMap<屋顶部位类型 , 显示和隐藏的Actor>

---

### Property `AdjacentAssembles`

| Field | Details |
|------|------|
| C++ type | TMap<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* , FVector> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AGOAP_ActorBase* , FVector> AdjacentAssembles;` |

**Notes:**

> 组装建筑周围相邻的组装建筑
> TMap<组装建筑 , 相邻坐标>

---

### Property `RoofHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float RoofHeight { 0.f };` |

**Notes:**

> 操作时屋顶的高度

---

### Property `RoofLayerHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RoofLayerHeight;` |

**Notes:**

> 屋顶单层高度

---

### Property `RoofRidgeCornerHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RoofRidgeCornerHeight;` |

**Notes:**

> 屋顶脊角高度

---

### Property `RoofPyramidalRoofHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RoofPyramidalRoofHeight;` |

**Notes:**

> 屋顶攒尖高度

---

### Property `RoofWallHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RoofWallHeight;` |

**Notes:**

> 屋顶墙高度

---

## Blueprint-exposed functions

### Function `RaiseFoundationHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RaiseFoundationHeight();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 升高地基高度

---

### Function `LowerFoundationHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LowerFoundationHeight();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 降低地基高度

---

### Function `Reset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void Reset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重置信息

---

### Function `IsActorExist`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsActorExist(const FGridPosition& GridPos) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查格子是否存在显示的Actor

---

### Function `CalcRoofHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcRoofHeight();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据格子计算屋顶高度

---

### Function `AdjustCornerPosHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CornerPos` | `UPARAM(ref) FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AdjustCornerPosHeight(UPARAM(ref) FVector& CornerPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 调整格子角位置高度

---

### Function `GetRectAreaPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Points` | `TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetRectAreaPoints(TArray<FVector>& Points);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得矩形区域范围点

---

### Function `GetPresetAreaPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Points` | `TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetPresetAreaPoints(TArray<FVector>& Points);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得预设建筑区域范围点

---

### Function `CheckPointsSatisfyAreaCurves`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Points` | `const TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckPointsSatisfyAreaCurves(const TArray<FVector>& Points);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查坐标点是否满足区域曲线范围

---

### Function `CheckCanPlaceActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `Points` | `const TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckCanPlaceActor(UERW_EnvironComponent* EnvironComponent , const TArray<FVector>& Points);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否能放置Actor

---

### Function `CollectLineAreaPoses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectLineAreaPoses();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 收集边线上的位置

---

### Function `UpdateWallPillars`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateWallPillars();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新墙接缝柱

---

### Function `AddWallPillar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SeamPoint` | const [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void AddWallPillar(const FGridSeamPoint& SeamPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 新增墙接缝柱

---

### Function `RemoveWallPillar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SeamPoint` | const [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void RemoveWallPillar(const FGridSeamPoint& SeamPoint);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 移除墙接缝柱

---

### Function `CollectLineAreaGridPoses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectLineAreaGridPoses();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 收集线型区域上的格子信息

---

### Function `CollectRectAreaGridPoses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Layer` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectRectAreaGridPoses(int32 Layer);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 收集矩形区域上的格子信息

---

### Function `SetRectStartMinAndMax`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetRectStartMinAndMax();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置矩形区域起始的最小最大格子坐标

---

### Function `CalcRectStartActorLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void CalcRectStartActorLocation(FVector& Location);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 计算矩形区域起始Actor的位置

---

### Function `UpdateCurMinAndMax`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateCurMinAndMax(const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新矩形区域当前的最小最大格子坐标

---

### Function `IsNewRectGridPos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsNewRectGridPos(const FGridPosition& GridPos) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查格子坐标是否是新的矩形区域格子

---

### Function `CalcRectActorLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `Location` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void CalcRectActorLocation(const FGridPosition& GridPos , FVector& Location);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 通过格子坐标计算矩形区域Actor的位置

---

### Function `CollectUpdateOverlappedWalls`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectUpdateOverlappedWalls();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 收集并更新围墙门覆盖的围墙

---

### Function `CollectRoofData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectRoofData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 收集屋顶各部位数据

---

### Function `UpdateRoof`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateRoof();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新屋顶

---

### Function `UpdateRoofPartTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |
| `PartType` | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| `Transform` | `const FTransform&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateRoofPartTransform(AActor* Actor , ERoofPartType PartType , const FTransform& Transform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新屋顶部位的Transform

---

### Function `CollectStartPosSurroundingActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Layer` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectStartPosSurroundingActors(int32 Layer);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 收集起始位置周边同类型的Actor

---

### Function `CalcSoloBuildingResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcSoloBuildingResources();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算单独放置的建筑的资源消耗

---

### Function `CalcVisibleActorResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcVisibleActorResources();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算显示的建筑的资源消耗

---

### Function `UpdateVisibleAndHideActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateVisibleAndHideActors();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新显示和隐藏的Actor

---

### Function `UpdateFillers`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateFillers();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新建筑下方填充模型

---

### Function `UpdateFiller`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | `AActor*` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateFiller(AActor* BuildObject , const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新填充模型

---

### Function `UpdateFillerPreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | `AActor*` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateFillerPreview(AActor* BuildObject , const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新填充模型预览显示

---

### Function `SetVisible`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |
| `Visible` | `bool` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SetVisible(AActor* Actor , bool Visible , const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置Actor是否显示

---

### Function `UpdateLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateLocation(AActor* Actor , const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新Actor位置

---

### Function `AddPresetActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `Index` | `int32` |
| `Actor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPresetActor(const FName& ID , int32 Index , AActor* Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入预设建筑Actor

---

### Function `AddPresetEmbeddedWall`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Data` | const [FPresetData](../ERW_CommonTypes__FPresetData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPresetEmbeddedWall(const FPresetData& Data);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入预设嵌入式墙体

---

### Function `AddPresetDoorOrWindow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Data` | const [FPresetData](../ERW_CommonTypes__FPresetData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPresetDoorOrWindow(const FPresetData& Data);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入预设的门或窗

---

### Function `ReplacePresetEmbeddedWallInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReplacePresetEmbeddedWallInstances();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 替换预设嵌入式墙体模型

---

### Function `CalcPresetAreaMaxHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcPresetAreaMaxHeight();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算预设建筑区域最大高度

---

### Function `UpdatePresetActorsTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdatePresetActorsTransform();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新预设建筑的Transform

---

### Function `UpdateSoloObjectLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateSoloObjectLocation(AActor* Actor , const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新单个物体的位置

---

### Function `UpdatePresetActorTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |
| `Transform` | `const FTransform&` |
| `Data` | const [FPresetData](../ERW_CommonTypes__FPresetData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdatePresetActorTransform(AActor* Actor , const FTransform& Transform , const FPresetData& Data);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新预设建筑的Transform

---

### Function `UpdatePresetActorColor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdatePresetActorColor(AActor* Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新预设建筑的颜色

---

### Function `SpawnActorWithCurrentLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `AActor*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Class` | `TSubclassOf<class AActor>` |
| `(unnamed / type only)` | `const FTransform& Transform = FTransform()` |
| `(unnamed / type only)` | `ESpawnActorCollisionHandlingMethod CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AActor* SpawnActorWithCurrentLevel(TSubclassOf<class AActor> Class , const FTransform& Transform = FTransform() , ESpawnActorCollisionHandlingMethod CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成带当前关卡信息的Actor

---

### Function `PutDownVisibleActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GOAP_ManagerComponent` | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PutDownVisibleActors(UGOAP_ManagerComponent* GOAP_ManagerComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 放下显示的Actor

---

### Function `PutDownPresetActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GOAP_ManagerComponent` | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PutDownPresetActors(UGOAP_ManagerComponent* GOAP_ManagerComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 放下预设建筑

---

### Function `AddToMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `Actor` | `AActor*` |
| `Batch` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void AddToMap(const FGridPosition& GridPos , AActor* Actor , int32 Batch);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 将Actor加入到地图信息中

---

### Function `UpdateSurroundingBuildObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateSurroundingBuildObjects();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新周围建筑的填充模型

---

### Function `PutDownRoofs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Batch` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PutDownRoofs(int32 Batch);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 放置屋顶到地图中

---

### Function `SetDistributionInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DistributionInfo` | UPARAM(ref) TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetDistributionInfos(UPARAM(ref) TMap<FGridPosition , EGridDistributionType>& DistributionInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置物体占格子分布信息

---

### Function `FindWalls`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Layer` | `int32` |
| `Type` | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| `Walls` | TMap<[EEmbeddedWallType](../ERW_Enumerations__EEmbeddedWallType.md) , AActor*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void FindWalls(int32 Layer , EEnvironType Type , TMap<EEmbeddedWallType , AActor*>& Walls);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得多个格子中的墙

---

### Function `CanReplaceWall`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, BlueprintImplementableEvent |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | `AActor*` |
| `TipsType` | UPARAM(ref) [EPlaceBuildingTipsType](../ERW_Enumerations__EPlaceBuildingTipsType.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) bool CanReplaceWall(AActor* Wall , UPARAM(ref) EPlaceBuildingTipsType& TipsType);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 判断墙体Actor是否能被替换

---

### Function `HideVisibleActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void HideVisibleActors();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 隐藏显示的Actor

---

### Function `HideVisibleRoofs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void HideVisibleRoofs();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 隐藏显示的屋顶

---

### Function `DestroyHideActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void DestroyHideActors();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 销毁隐藏的Actor

---

### Function `DestroyHideRoofs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void DestroyHideRoofs();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 销毁隐藏的屋顶

---

### Function `DestroyActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void DestroyActor(AActor* Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 销毁Actor

---

### Function `ClearAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintNativeEvent) void ClearAll();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 清除所有信息

---

### Function `RemoveWallPillars`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveWallPillars();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除墙接缝柱

---

### Function `SpawnBuildObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Class` | `TSubclassOf<class AActor>` |
| `Num` | `int32` |
| `MeshVariantNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SpawnBuildObjects(TSubclassOf<class AActor> Class , int32 Num , int32 MeshVariantNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成建筑

---

### Function `SpawnRoofs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Class` | `TSubclassOf<class AActor>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SpawnRoofs(TSubclassOf<class AActor> Class);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成屋顶

---

### Function `CalcRoofPartNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RoofPartNums` | TMap<[ERoofPartType](../ERW_Enumerations__ERoofPartType.md) , int32>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcRoofPartNum(TMap<ERoofPartType , int32>& RoofPartNums);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算屋顶各部位数量

---

### Function `ClearRoofActors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearRoofActors();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清空屋顶Actor

---

### Function `GetVisibleActorsSize`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetVisibleActorsSize();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取显示actor数量

---
