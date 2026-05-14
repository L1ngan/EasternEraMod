# `class` `UERW_MapDataMgr`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 地图数据管理

## Blueprint-exposed variables

### Property `Landscape`

| Field | Details |
|------|------|
| C++ type | `ALandscape*` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) ALandscape* Landscape { nullptr };` |

**Source comments:**

> 地形

---

### Property `PlayerPawn`

| Field | Details |
|------|------|
| C++ type | [AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) AERW_PlayerPawn* PlayerPawn { nullptr };` |

---

### Property `AreaCurves`

| Field | Details |
|------|------|
| C++ type | TArray<[AERW_AreaCurve](../ERW_AreaCurve__AERW_AreaCurve.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<AERW_AreaCurve*> AreaCurves;` |

**Source comments:**

> 区域曲线

---

### Property `GridLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float GridLength { 100.f };` |

**Source comments:**

> 格子边长(单位厘米)

---

### Property `FoundationModelHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float FoundationModelHeight { 10.f };` |

**Source comments:**

> 地基模型高度(一半在地上一半在地下)

---

### Property `LandscapeGridSize`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FIntPoint LandscapeGridSize;` |

**Source comments:**

> 地形格子尺寸

---

### Property `LandscapeOrigin`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FVector LandscapeOrigin { FVector::ZeroVector };` |

**Source comments:**

> 地形原点

---

### Property `HighestFloor`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 HighestFloor { 0 };` |

**Source comments:**

> 当前拥有的最高楼层

---

### Property `CurrentFloor`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CurrentFloor { 0 };` |

**Source comments:**

> 当前所在楼层

---

### Property `MaxHeightDifference`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float MaxHeightDifference { 0.f };` |

**Source comments:**

> 建造允许的最大高低差

---

### Property `OnBuildingComplateEvent`

| Field | Details |
|------|------|
| C++ type | `FOnbuilded` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnbuilded OnBuildingComplateEvent;` |

**Source comments:**

> [自定义事件]建筑完成事件

---

### Property `OnBuildingRemoveEvent`

| Field | Details |
|------|------|
| C++ type | `FOnbuilded` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnbuilded OnBuildingRemoveEvent;` |

**Source comments:**

> [自定义事件]建筑拆除事件

---

### Property `RoomUnitShowState`

| Field | Details |
|------|------|
| C++ type | `ERoomUnitShowState` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) ERoomUnitShowState RoomUnitShowState { ERoomUnitShowState::Hidden };` |

**Source comments:**

> 房间单元显示状态

---

### Property `SelectedFoundation`

| Field | Details |
|------|------|
| C++ type | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) AGOAP_ActorBase* SelectedFoundation { nullptr };` |

**Source comments:**

> 选中的地基

---

### Property `BuildObjectClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<class AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TSubclassOf<class AActor> BuildObjectClass;` |

---

### Property `UsedNumbers`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FBuildingNum](ERW_MapDataMgr__FBuildingNum.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName, FBuildingNum> UsedNumbers;` |

**Source comments:**

> 每种设备已使用编号

---

### Property `MaxNumbers`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName, int32> MaxNumbers;` |

**Source comments:**

> 每种类型Actor的最大编号

---

### Property `AgentStepHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float AgentStepHeight { 0.f };` |

**Source comments:**

> 角色垂直跨越高度

---

### Property `OnMapDataMgrLoadSlotSucceed`

| Field | Details |
|------|------|
| C++ type | `FOnMapDataMgrLoadSlotSucceed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMapDataMgrLoadSlotSucceed OnMapDataMgrLoadSlotSucceed;` |

---

## Blueprint-exposed functions

### Function `GetMapBuildingData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FBuildData](ERW_MapDataMgr__FBuildData.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FBuildData>& GetMapBuildingData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetMapFabricateData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<EFabricateType, [FGuidArr](../Struct/CommonStruct__FGuidArr.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<EFabricateType, FGuidArr>& GetMapFabricateData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `AddFabricate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FabricateType` | `EFabricateType` |
| `BuildingGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddFabricate(EFabricateType FabricateType , FGuid BuildingGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetRandomRoomLocationByGridPoses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPoses` | const TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , bool> & |
| `nullptr` | `ACharacter * Character =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FVector GetRandomRoomLocationByGridPoses(const TMap<FGridPosition , bool> & GridPoses,ACharacter * Character = nullptr );`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `FindObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Guid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure , BlueprintCallable) AGOAP_ActorBase* FindObject(const FGuid& Guid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 找到Guid对应的Actor

---

### Function `ClearDataBeforeSave`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearDataBeforeSave();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 存档前清理数据

---

### Function `AddConstructionResource`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName&` |
| `Num` | `int32` |
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddConstructionResource(const FName& ItemID , int32 Num , AGOAP_ActorBase* BuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加入建造资源

---

### Function `RemoveConstructionResource`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveConstructionResource(AGOAP_ActorBase* BuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除建造资源

---

### Function `CheckConstructionResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckConstructionResources();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查建造资源缺少情况

---

### Function `InitLandscapeInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LandscapeActor` | `ALandscape*` |
| `Curves` | `const TArray<AActor*>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitLandscapeInfo(ALandscape* LandscapeActor , const TArray<AActor*>& Curves);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化地形相关信息

---

### Function `IsValidLinePos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Pos` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsValidLinePos(const FVector& Pos);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查位置是否是有效的线性位置

---

### Function `SetAreaCurveShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Show` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetAreaCurveShow(bool Show);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置区域曲线显示或隐藏

---

### Function `GetGridData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `GridData` | [FGridData](ERW_MapDataMgr__FGridData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetGridData(const FGridPosition& GridPos , FGridData& GridData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得指定格子数据

---

### Function `GetGridTopHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetGridTopHeight(const FGridPosition& GridPos) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得格子顶部高度

---

### Function `FindActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Layer` | `int32` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `EnvironType` | `EEnvironType` |
| `DistributionType` | `EGridDistributionType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) AGOAP_ActorBase* FindActor(int32 Layer , const FGridPosition& GridPos , EEnvironType EnvironType , EGridDistributionType DistributionType) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得格子中的Actor

---

### Function `IsEnvironTypeExist`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Layer` | `int32` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `EnvironType` | `EEnvironType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsEnvironTypeExist(int32 Layer , const FGridPosition& GridPos , EEnvironType EnvironType) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查格子是否存在某种环境类型

---

### Function `CheckGridPositionHaveOtherObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckGridPositionHaveOtherObject(const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `CollectSurroundingFillerBuildings`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironType` | `EEnvironType` |
| `GridPoses` | const TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |
| `RemovedObjects` | `const TArray<UObject*>&` |
| `BuildObjects` | TArray<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectSurroundingFillerBuildings(EEnvironType EnvironType , const TArray<FGridPosition>& GridPoses , const TArray<UObject*>& RemovedObjects , TArray<AGOAP_ActorBase*>& BuildObjects);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 收集周围有填充模型的建筑

---

### Function `GetStairGridInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `StairFlatHeight` | `float` |
| `StairHeight` | `float` |
| `AutoTileHeight` | `float` |
| `IsLoading` | `bool` |
| `StairZValue` | `float` |
| `GridInfos` | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FStairGridInfo](ERW_AreaOperationComponent__FStairGridInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetStairGridInfos(UERW_EnvironComponent* EnvironComponent , float StairFlatHeight , float StairHeight , float AutoTileHeight , bool IsLoading , float StairZValue , TMap<FGridPosition , FStairGridInfo>& GridInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得阶梯的格子信息

---

### Function `CheckUpdateSurroundingWallPillars`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckUpdateSurroundingWallPillars(UERW_EnvironComponent* EnvironComponent , UERW_HISMManager* HISMManager);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查并更新周围墙的接缝柱

---

### Function `CalcHeightDifference`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `ShackBottomHeight` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalcHeightDifference(UERW_EnvironComponent* EnvironComponent , float ShackBottomHeight);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算建筑所占格子的高低差

---

### Function `GetAdjacentAssembles`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `Assembles` | TMap<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* , FVector>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAdjacentAssembles(UERW_EnvironComponent* EnvironComponent , TMap<AGOAP_ActorBase* , FVector>& Assembles);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得相邻的组装建筑

---

### Function `CheckAssemblePillarSeamPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `SeamPoints` | TArray<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckAssemblePillarSeamPoints(UERW_EnvironComponent* EnvironComponent , TArray<FGridSeamPoint>& SeamPoints);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查并获得组装建筑需要放柱子的接缝点

---

### Function `CheckUpdateAssemblePillar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckUpdateAssemblePillar(UERW_EnvironComponent* EnvironComponent , UERW_HISMManager* HISMManager);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查并更新组装建筑柱子

---

### Function `AddEnvironData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `WallHeight` | `float` |
| `false` | `bool FromLoading =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddEnvironData(AGOAP_ActorBase* Actor , UERW_EnvironComponent* EnvironComponent , float WallHeight , bool FromLoading = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加入地图环境数据

---

### Function `RemoveEnvironData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveEnvironData(AGOAP_ActorBase* Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 从地图环境数据中移除

---

### Function `CheckHandleUpperBuildings`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `IsBreakdown` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckHandleUpperBuildings(UERW_EnvironComponent* EnvironComponent , bool IsBreakdown);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查并处理上方建筑

---

### Function `AddExtraInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddExtraInfo(AGOAP_ActorBase* Actor , UERW_EnvironComponent* EnvironComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 加入额外信息

---

### Function `RemoveInvalidExtraInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveInvalidExtraInfo(UERW_EnvironComponent* EnvironComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除无效的额外信息

---

### Function `GetBuildIdArr`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FGuid>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConfigId` | `FName` |
| `true` | `bool bIsFinish =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FGuid> GetBuildIdArr(FName ConfigId,bool bIsFinish = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询建筑数据数组

---

### Function `AddbuildingMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConfigId` | `FName` |
| `BuildID` | `FGuid` |
| `true` | `bool bIsFinish =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddbuildingMap(FName ConfigId,FGuid BuildID,bool bIsFinish = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 将建筑加入到地图建筑数据中

---

### Function `FindBuildingConfigId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildID` | `const FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FName FindBuildingConfigId(const FGuid BuildID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过建筑GUID查找建筑配置ID

---

### Function `RemovebuildingFromMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConfigId` | `FName` |
| `BuildID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemovebuildingFromMap(FName ConfigId,FGuid BuildID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 将建筑从地图建筑数据中移除

---

### Function `GetBuildingsByBuildingType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FGuid>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BType` | `EBuildingType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FGuid> GetBuildingsByBuildingType(EBuildingType BType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取指定类型的建筑

---

### Function `GetBuildingsByBuildState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FGuid>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bIsFinish` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FGuid> GetBuildingsByBuildState(bool bIsFinish);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取指定建筑状态的建筑

---

### Function `CollectNoAreaWall`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectNoAreaWall(UERW_EnvironComponent* EnvironComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 读档时收集不在任何区域内的墙

---

### Function `UpdateClosureAreaInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |
| `false` | `bool IsLoading =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateClosureAreaInfo(UERW_EnvironComponent* EnvironComponent , UERW_HISMManager* HISMManager , bool IsLoading = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新闭合区域信息

---

### Function `RecordWallDisplayType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `DisplayType` | `EWallDisplayType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecordWallDisplayType(AGOAP_ActorBase* Wall , EWallDisplayType DisplayType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 记录墙的显示类型

---

### Function `RemoveWallDisplayType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveWallDisplayType(AGOAP_ActorBase* Wall);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除墙的显示类型

---

### Function `CheckRemoveRoomElement`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |
| `IsBroken` | `bool` |
| `IsBuildComplete` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckRemoveRoomElement(AGOAP_ActorBase* BuildObject , UERW_HISMManager* HISMManager , bool IsBroken , bool IsBuildComplete);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查并移除房间要素

---

### Function `SetRoomUnitShowState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `State` | `ERoomUnitShowState` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetRoomUnitShowState(ERoomUnitShowState State);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置房间单元显示状态

---

### Function `UpdateRoomUnitShowState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateRoomUnitShowState();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新房间单元显示状态

---

### Function `UpdateRoomUnitsShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `Show` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateRoomUnitsShow(UERW_HISMManager* HISMManager , UERW_EnvironComponent* EnvironComponent , bool Show);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新房间单元显示

---

### Function `GetLayer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPosition` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `Height` | `const float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetLayer(const FGridPosition& GridPosition,const float& Height) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 根据格子位置和高度获取所在层

---

### Function `GetLayerByWorldPoition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPosition` | `const FVector` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetLayerByWorldPoition(const FVector InPosition);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `CheckPositionInRoom`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPosition` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckPositionInRoom(const FVector& InPosition) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查坐标是否在房间内

---

### Function `CheckPositionInRoomByGridPos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGridPosition` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `InZ` | `const float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckPositionInRoomByGridPos(const FGridPosition& InGridPosition,const float& InZ) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetRoomAreaDataByWorldLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWorldPosition` | `const FVector&` |
| `bIsSuccess` | `bool&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FClosureAreaData& GetRoomAreaDataByWorldLocation(const FVector& InWorldPosition,bool& bIsSuccess);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过世界坐标获取房间数据

---

### Function `GetWorldSpaceTypeByLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `EStorageSpace` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWorldLocation` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) EStorageSpace GetWorldSpaceTypeByLocation(const FVector& InWorldLocation);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 通过世界坐标获取空间类型

---

### Function `GetAllBuildCompleteRoomBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InLayer` | `const int32&` |
| `InRoomAreaData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |
| `OutRoomBuilds` | `TArray<AActor*>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllBuildCompleteRoomBuilding(const int32& InLayer,const FClosureAreaData& InRoomAreaData,TArray<AActor*>& OutRoomBuilds);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取房间内所有修建完成的建筑物

---

### Function `UpdateRoomInsideBuffToHuman`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Human` | class [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateRoomInsideBuffToHuman(class AEastRimWorldCharacter_Human* Human);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新处于房间内时施加给角色的buff(大门重叠事件时调用)

---

### Function `CheckRoomFacilityNeed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuildIdNum` | `const TMap<FName,int32>&` |
| `InBuildTabNum` | `const TMap<FName,int32>&` |
| `InRoomConfig` | const [FRoomConfigData](../ERW_ConfigTypes__FRoomConfigData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckRoomFacilityNeed(const TMap<FName,int32>& InBuildIdNum,const TMap<FName,int32>& InBuildTabNum,const FRoomConfigData& InRoomConfig);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查房间所需的设施

---

### Function `CheckFacilityNeed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuildIdNum` | `const TMap<FName,int32>&` |
| `InBuildTabNum` | `const TMap<FName,int32>&` |
| `InFacilityNeed` | const TArray<[FFacilityNeed](../ERW_ConfigTypes__FFacilityNeed.md)>& |
| `InFacilityNeedNum` | `const int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckFacilityNeed(const TMap<FName,int32>& InBuildIdNum,const TMap<FName,int32>& InBuildTabNum,const TArray<FFacilityNeed>& InFacilityNeed,const int32& InFacilityNeedNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `CheckFiveElementNeed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFiveElement` | `const TMap<EFiveElementType,float> &` |
| `InRoomConfig` | const [FRoomConfigData](../ERW_ConfigTypes__FRoomConfigData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckFiveElementNeed(const TMap<EFiveElementType,float> & InFiveElement,const FRoomConfigData& InRoomConfig);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否满足五行需求

---

### Function `SetIsPlayerAssignRoomType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPosition` | `const FVector&` |
| `InValue` | `const bool&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetIsPlayerAssignRoomType(const FVector& InPosition,const bool& InValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置房间类型是否为玩家指定

---

### Function `PlayerAssignRoomType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRoomId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool PlayerAssignRoomType(const FName& InRoomId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 玩家指定房间类型

---

### Function `GetRoomLackFacility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRoomData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |
| `OutRoomLack` | `TMap<int32,int32>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetRoomLackFacility(const FClosureAreaData& InRoomData,TMap<int32,int32>& OutRoomLack);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取形成房间类型缺少的建筑数量 TMap<配置中FacilityNeed序号,缺少数量>& OutRoomLack

---

### Function `GetRoomTemperature`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRoomData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetRoomTemperature(const FClosureAreaData& InRoomData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取房间温度

---

### Function `GetRoomBuildingTemperature`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRoomData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetRoomBuildingTemperature(const FClosureAreaData& InRoomData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetRoomLight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRoomData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetRoomLight(const FClosureAreaData& InRoomData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取房间亮度

---

### Function `GetCombinationBuildAreas`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `OutCombinationAreas` | TArray<[FCombinationBuildAreaData](ERW_MapDataMgr__FCombinationBuildAreaData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetCombinationBuildAreas(UERW_EnvironComponent* EnvironComponent,TArray<FCombinationBuildAreaData>& OutCombinationAreas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有能覆盖此组件范围的组合范围

---

### Function `GetCombinationBuildAreasByMember`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `OutCombinationAreas` | TArray<[FCombinationBuildAreaData](ERW_MapDataMgr__FCombinationBuildAreaData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetCombinationBuildAreasByMember(UERW_EnvironComponent* EnvironComponent,TArray<FCombinationBuildAreaData>& OutCombinationAreas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有由此组件构成的组合范围

---

### Function `GetGridTemperature`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InLayer` | `const int32&` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetGridTemperature(const int32& InLayer,const FGridPosition& GridPos);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取指定格子温度(不包含环境温度)

---

### Function `GetTemperatureByWorldPos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWorldPos` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetTemperatureByWorldPos(const FVector& InWorldPos);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `GetAllPlayerRoomS`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FClosureAreaData> GetAllPlayerRoomS();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取玩家所有房间数据

---

### Function `GetAllRoomsByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRoomType` | `ERoomType` |
| `OutRooms` | TArray<[FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllRoomsByType(ERoomType InRoomType, TArray<FClosureAreaData>& OutRooms);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有指定类型的房间

---

### Function `GetEmptyCoreFacilityBuildingsByRoomType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InRoomType` | `ERoomType` |
| `OutBuildings` | TArray<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetEmptyCoreFacilityBuildingsByRoomType(ERoomType InRoomType, TArray<AGOAP_ActorBase*>& OutBuildings);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据房间类型获取所有核心设施需求为空的核心设施建筑

---

### Function `GetNextAvailableNumber`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetNextAvailableNumber(const FName& BuildingID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取特定类型Actor的下一个可用编号

---

### Function `ReturnNumber`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildingID` | `const FName&` |
| `Number` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReturnNumber(const FName& BuildingID, int32 Number);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 回收编号（当Actor被销毁时调用）

---
