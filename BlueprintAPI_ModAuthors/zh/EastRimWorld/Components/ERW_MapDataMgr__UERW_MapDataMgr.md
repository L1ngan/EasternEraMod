# `class` `UERW_MapDataMgr`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 地图数据管理

## 蓝图暴露变量

### 属性 `Landscape`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ALandscape*` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) ALandscape* Landscape { nullptr };` |

**源码注释:**

> 地形

---

### 属性 `PlayerPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) AERW_PlayerPawn* PlayerPawn { nullptr };` |

---

### 属性 `AreaCurves`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[AERW_AreaCurve](../ERW_AreaCurve__AERW_AreaCurve.md)*> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<AERW_AreaCurve*> AreaCurves;` |

**源码注释:**

> 区域曲线

---

### 属性 `GridLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float GridLength { 100.f };` |

**源码注释:**

> 格子边长(单位厘米)

---

### 属性 `FoundationModelHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float FoundationModelHeight { 10.f };` |

**源码注释:**

> 地基模型高度(一半在地上一半在地下)

---

### 属性 `LandscapeGridSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FIntPoint LandscapeGridSize;` |

**源码注释:**

> 地形格子尺寸

---

### 属性 `LandscapeOrigin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FVector LandscapeOrigin { FVector::ZeroVector };` |

**源码注释:**

> 地形原点

---

### 属性 `HighestFloor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 HighestFloor { 0 };` |

**源码注释:**

> 当前拥有的最高楼层

---

### 属性 `CurrentFloor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CurrentFloor { 0 };` |

**源码注释:**

> 当前所在楼层

---

### 属性 `MaxHeightDifference`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float MaxHeightDifference { 0.f };` |

**源码注释:**

> 建造允许的最大高低差

---

### 属性 `OnBuildingComplateEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnbuilded` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnbuilded OnBuildingComplateEvent;` |

**源码注释:**

> [自定义事件]建筑完成事件

---

### 属性 `OnBuildingRemoveEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnbuilded` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnbuilded OnBuildingRemoveEvent;` |

**源码注释:**

> [自定义事件]建筑拆除事件

---

### 属性 `RoomUnitShowState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ERoomUnitShowState` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) ERoomUnitShowState RoomUnitShowState { ERoomUnitShowState::Hidden };` |

**源码注释:**

> 房间单元显示状态

---

### 属性 `SelectedFoundation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) AGOAP_ActorBase* SelectedFoundation { nullptr };` |

**源码注释:**

> 选中的地基

---

### 属性 `BuildObjectClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<class AActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TSubclassOf<class AActor> BuildObjectClass;` |

---

### 属性 `UsedNumbers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FBuildingNum](ERW_MapDataMgr__FBuildingNum.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName, FBuildingNum> UsedNumbers;` |

**源码注释:**

> 每种设备已使用编号

---

### 属性 `MaxNumbers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName, int32> MaxNumbers;` |

**源码注释:**

> 每种类型Actor的最大编号

---

### 属性 `AgentStepHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float AgentStepHeight { 0.f };` |

**源码注释:**

> 角色垂直跨越高度

---

### 属性 `OnMapDataMgrLoadSlotSucceed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnMapDataMgrLoadSlotSucceed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnMapDataMgrLoadSlotSucceed OnMapDataMgrLoadSlotSucceed;` |

---

## 蓝图暴露函数

### 函数 `GetMapBuildingData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FBuildData](ERW_MapDataMgr__FBuildData.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FBuildData>& GetMapBuildingData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetMapFabricateData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<EFabricateType, [FGuidArr](../Struct/CommonStruct__FGuidArr.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<EFabricateType, FGuidArr>& GetMapFabricateData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `AddFabricate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FabricateType` | `EFabricateType` |
| `BuildingGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddFabricate(EFabricateType FabricateType , FGuid BuildingGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetRandomRoomLocationByGridPoses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPoses` | const TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , bool> & |
| `nullptr` | `ACharacter * Character =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FVector GetRandomRoomLocationByGridPoses(const TMap<FGridPosition , bool> & GridPoses,ACharacter * Character = nullptr );`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `FindObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Guid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure , BlueprintCallable) AGOAP_ActorBase* FindObject(const FGuid& Guid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 找到Guid对应的Actor

---

### 函数 `ClearDataBeforeSave`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearDataBeforeSave();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 存档前清理数据

---

### 函数 `AddConstructionResource`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName&` |
| `Num` | `int32` |
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddConstructionResource(const FName& ItemID , int32 Num , AGOAP_ActorBase* BuildObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 加入建造资源

---

### 函数 `RemoveConstructionResource`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveConstructionResource(AGOAP_ActorBase* BuildObject);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除建造资源

---

### 函数 `CheckConstructionResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckConstructionResources();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查建造资源缺少情况

---

### 函数 `InitLandscapeInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LandscapeActor` | `ALandscape*` |
| `Curves` | `const TArray<AActor*>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitLandscapeInfo(ALandscape* LandscapeActor , const TArray<AActor*>& Curves);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 初始化地形相关信息

---

### 函数 `IsValidLinePos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Pos` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsValidLinePos(const FVector& Pos);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 检查位置是否是有效的线性位置

---

### 函数 `SetAreaCurveShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Show` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetAreaCurveShow(bool Show);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置区域曲线显示或隐藏

---

### 函数 `GetGridData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `GridData` | [FGridData](ERW_MapDataMgr__FGridData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetGridData(const FGridPosition& GridPos , FGridData& GridData);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获得指定格子数据

---

### 函数 `GetGridTopHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetGridTopHeight(const FGridPosition& GridPos) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获得格子顶部高度

---

### 函数 `FindActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Layer` | `int32` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `EnvironType` | `EEnvironType` |
| `DistributionType` | `EGridDistributionType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) AGOAP_ActorBase* FindActor(int32 Layer , const FGridPosition& GridPos , EEnvironType EnvironType , EGridDistributionType DistributionType) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获得格子中的Actor

---

### 函数 `IsEnvironTypeExist`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Layer` | `int32` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `EnvironType` | `EEnvironType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsEnvironTypeExist(int32 Layer , const FGridPosition& GridPos , EEnvironType EnvironType) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 检查格子是否存在某种环境类型

---

### 函数 `CheckGridPositionHaveOtherObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckGridPositionHaveOtherObject(const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CollectSurroundingFillerBuildings`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironType` | `EEnvironType` |
| `GridPoses` | const TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |
| `RemovedObjects` | `const TArray<UObject*>&` |
| `BuildObjects` | TArray<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectSurroundingFillerBuildings(EEnvironType EnvironType , const TArray<FGridPosition>& GridPoses , const TArray<UObject*>& RemovedObjects , TArray<AGOAP_ActorBase*>& BuildObjects);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 收集周围有填充模型的建筑

---

### 函数 `GetStairGridInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `StairFlatHeight` | `float` |
| `StairHeight` | `float` |
| `AutoTileHeight` | `float` |
| `IsLoading` | `bool` |
| `StairZValue` | `float` |
| `GridInfos` | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FStairGridInfo](ERW_AreaOperationComponent__FStairGridInfo.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetStairGridInfos(UERW_EnvironComponent* EnvironComponent , float StairFlatHeight , float StairHeight , float AutoTileHeight , bool IsLoading , float StairZValue , TMap<FGridPosition , FStairGridInfo>& GridInfos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获得阶梯的格子信息

---

### 函数 `CheckUpdateSurroundingWallPillars`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckUpdateSurroundingWallPillars(UERW_EnvironComponent* EnvironComponent , UERW_HISMManager* HISMManager);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查并更新周围墙的接缝柱

---

### 函数 `CalcHeightDifference`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `ShackBottomHeight` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CalcHeightDifference(UERW_EnvironComponent* EnvironComponent , float ShackBottomHeight);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 计算建筑所占格子的高低差

---

### 函数 `GetAdjacentAssembles`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `Assembles` | TMap<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* , FVector>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAdjacentAssembles(UERW_EnvironComponent* EnvironComponent , TMap<AGOAP_ActorBase* , FVector>& Assembles);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获得相邻的组装建筑

---

### 函数 `CheckAssemblePillarSeamPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `SeamPoints` | TArray<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckAssemblePillarSeamPoints(UERW_EnvironComponent* EnvironComponent , TArray<FGridSeamPoint>& SeamPoints);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查并获得组装建筑需要放柱子的接缝点

---

### 函数 `CheckUpdateAssemblePillar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckUpdateAssemblePillar(UERW_EnvironComponent* EnvironComponent , UERW_HISMManager* HISMManager);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查并更新组装建筑柱子

---

### 函数 `AddEnvironData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `WallHeight` | `float` |
| `false` | `bool FromLoading =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddEnvironData(AGOAP_ActorBase* Actor , UERW_EnvironComponent* EnvironComponent , float WallHeight , bool FromLoading = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 加入地图环境数据

---

### 函数 `RemoveEnvironData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveEnvironData(AGOAP_ActorBase* Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 从地图环境数据中移除

---

### 函数 `CheckHandleUpperBuildings`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `IsBreakdown` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckHandleUpperBuildings(UERW_EnvironComponent* EnvironComponent , bool IsBreakdown);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查并处理上方建筑

---

### 函数 `AddExtraInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddExtraInfo(AGOAP_ActorBase* Actor , UERW_EnvironComponent* EnvironComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 加入额外信息

---

### 函数 `RemoveInvalidExtraInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveInvalidExtraInfo(UERW_EnvironComponent* EnvironComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除无效的额外信息

---

### 函数 `GetBuildIdArr`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FGuid>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConfigId` | `FName` |
| `true` | `bool bIsFinish =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FGuid> GetBuildIdArr(FName ConfigId,bool bIsFinish = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 查询建筑数据数组

---

### 函数 `AddbuildingMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConfigId` | `FName` |
| `BuildID` | `FGuid` |
| `true` | `bool bIsFinish =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddbuildingMap(FName ConfigId,FGuid BuildID,bool bIsFinish = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 将建筑加入到地图建筑数据中

---

### 函数 `FindBuildingConfigId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FName` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildID` | `const FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FName FindBuildingConfigId(const FGuid BuildID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 通过建筑GUID查找建筑配置ID

---

### 函数 `RemovebuildingFromMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConfigId` | `FName` |
| `BuildID` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemovebuildingFromMap(FName ConfigId,FGuid BuildID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 将建筑从地图建筑数据中移除

---

### 函数 `GetBuildingsByBuildingType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FGuid>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BType` | `EBuildingType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FGuid> GetBuildingsByBuildingType(EBuildingType BType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取指定类型的建筑

---

### 函数 `GetBuildingsByBuildState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FGuid>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bIsFinish` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FGuid> GetBuildingsByBuildState(bool bIsFinish);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取指定建筑状态的建筑

---

### 函数 `CollectNoAreaWall`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectNoAreaWall(UERW_EnvironComponent* EnvironComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 读档时收集不在任何区域内的墙

---

### 函数 `UpdateClosureAreaInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |
| `false` | `bool IsLoading =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateClosureAreaInfo(UERW_EnvironComponent* EnvironComponent , UERW_HISMManager* HISMManager , bool IsLoading = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新闭合区域信息

---

### 函数 `RecordWallDisplayType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `DisplayType` | `EWallDisplayType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RecordWallDisplayType(AGOAP_ActorBase* Wall , EWallDisplayType DisplayType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 记录墙的显示类型

---

### 函数 `RemoveWallDisplayType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveWallDisplayType(AGOAP_ActorBase* Wall);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除墙的显示类型

---

### 函数 `CheckRemoveRoomElement`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |
| `IsBroken` | `bool` |
| `IsBuildComplete` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckRemoveRoomElement(AGOAP_ActorBase* BuildObject , UERW_HISMManager* HISMManager , bool IsBroken , bool IsBuildComplete);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查并移除房间要素

---

### 函数 `SetRoomUnitShowState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `State` | `ERoomUnitShowState` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetRoomUnitShowState(ERoomUnitShowState State);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置房间单元显示状态

---

### 函数 `UpdateRoomUnitShowState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateRoomUnitShowState();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新房间单元显示状态

---

### 函数 `UpdateRoomUnitsShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `HISMManager` | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `Show` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateRoomUnitsShow(UERW_HISMManager* HISMManager , UERW_EnvironComponent* EnvironComponent , bool Show);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新房间单元显示

---

### 函数 `GetLayer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPosition` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `Height` | `const float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetLayer(const FGridPosition& GridPosition,const float& Height) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 根据格子位置和高度获取所在层

---

### 函数 `GetLayerByWorldPoition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPosition` | `const FVector` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetLayerByWorldPoition(const FVector InPosition);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CheckPositionInRoom`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPosition` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckPositionInRoom(const FVector& InPosition) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查坐标是否在房间内

---

### 函数 `CheckPositionInRoomByGridPos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGridPosition` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `InZ` | `const float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckPositionInRoomByGridPos(const FGridPosition& InGridPosition,const float& InZ) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetRoomAreaDataByWorldLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWorldPosition` | `const FVector&` |
| `bIsSuccess` | `bool&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) const FClosureAreaData& GetRoomAreaDataByWorldLocation(const FVector& InWorldPosition,bool& bIsSuccess);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 通过世界坐标获取房间数据

---

### 函数 `GetWorldSpaceTypeByLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `EStorageSpace` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWorldLocation` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) EStorageSpace GetWorldSpaceTypeByLocation(const FVector& InWorldLocation);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 通过世界坐标获取空间类型

---

### 函数 `GetAllBuildCompleteRoomBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InLayer` | `const int32&` |
| `InRoomAreaData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |
| `OutRoomBuilds` | `TArray<AActor*>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllBuildCompleteRoomBuilding(const int32& InLayer,const FClosureAreaData& InRoomAreaData,TArray<AActor*>& OutRoomBuilds);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取房间内所有修建完成的建筑物

---

### 函数 `UpdateRoomInsideBuffToHuman`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Human` | class [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateRoomInsideBuffToHuman(class AEastRimWorldCharacter_Human* Human);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新处于房间内时施加给角色的buff(大门重叠事件时调用)

---

### 函数 `CheckRoomFacilityNeed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuildIdNum` | `const TMap<FName,int32>&` |
| `InBuildTabNum` | `const TMap<FName,int32>&` |
| `InRoomConfig` | const [FRoomConfigData](../ERW_ConfigTypes__FRoomConfigData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckRoomFacilityNeed(const TMap<FName,int32>& InBuildIdNum,const TMap<FName,int32>& InBuildTabNum,const FRoomConfigData& InRoomConfig);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查房间所需的设施

---

### 函数 `CheckFacilityNeed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuildIdNum` | `const TMap<FName,int32>&` |
| `InBuildTabNum` | `const TMap<FName,int32>&` |
| `InFacilityNeed` | const TArray<[FFacilityNeed](../ERW_ConfigTypes__FFacilityNeed.md)>& |
| `InFacilityNeedNum` | `const int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckFacilityNeed(const TMap<FName,int32>& InBuildIdNum,const TMap<FName,int32>& InBuildTabNum,const TArray<FFacilityNeed>& InFacilityNeed,const int32& InFacilityNeedNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CheckFiveElementNeed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFiveElement` | `const TMap<EFiveElementType,float> &` |
| `InRoomConfig` | const [FRoomConfigData](../ERW_ConfigTypes__FRoomConfigData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckFiveElementNeed(const TMap<EFiveElementType,float> & InFiveElement,const FRoomConfigData& InRoomConfig);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 是否满足五行需求

---

### 函数 `SetIsPlayerAssignRoomType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPosition` | `const FVector&` |
| `InValue` | `const bool&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetIsPlayerAssignRoomType(const FVector& InPosition,const bool& InValue);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置房间类型是否为玩家指定

---

### 函数 `PlayerAssignRoomType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRoomId` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool PlayerAssignRoomType(const FName& InRoomId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 玩家指定房间类型

---

### 函数 `GetRoomLackFacility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRoomData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |
| `OutRoomLack` | `TMap<int32,int32>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetRoomLackFacility(const FClosureAreaData& InRoomData,TMap<int32,int32>& OutRoomLack);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取形成房间类型缺少的建筑数量 TMap<配置中FacilityNeed序号,缺少数量>& OutRoomLack

---

### 函数 `GetRoomTemperature`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRoomData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetRoomTemperature(const FClosureAreaData& InRoomData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取房间温度

---

### 函数 `GetRoomBuildingTemperature`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRoomData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetRoomBuildingTemperature(const FClosureAreaData& InRoomData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetRoomLight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRoomData` | const [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetRoomLight(const FClosureAreaData& InRoomData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取房间亮度

---

### 函数 `GetCombinationBuildAreas`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `OutCombinationAreas` | TArray<[FCombinationBuildAreaData](ERW_MapDataMgr__FCombinationBuildAreaData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetCombinationBuildAreas(UERW_EnvironComponent* EnvironComponent,TArray<FCombinationBuildAreaData>& OutCombinationAreas);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取所有能覆盖此组件范围的组合范围

---

### 函数 `GetCombinationBuildAreasByMember`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `OutCombinationAreas` | TArray<[FCombinationBuildAreaData](ERW_MapDataMgr__FCombinationBuildAreaData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetCombinationBuildAreasByMember(UERW_EnvironComponent* EnvironComponent,TArray<FCombinationBuildAreaData>& OutCombinationAreas);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取所有由此组件构成的组合范围

---

### 函数 `GetGridTemperature`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InLayer` | `const int32&` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetGridTemperature(const int32& InLayer,const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获取指定格子温度(不包含环境温度)

---

### 函数 `GetTemperatureByWorldPos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWorldPos` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetTemperatureByWorldPos(const FVector& InWorldPos);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetAllPlayerRoomS`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FClosureAreaData> GetAllPlayerRoomS();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取玩家所有房间数据

---

### 函数 `GetAllRoomsByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRoomType` | `ERoomType` |
| `OutRooms` | TArray<[FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllRoomsByType(ERoomType InRoomType, TArray<FClosureAreaData>& OutRooms);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取所有指定类型的房间

---

### 函数 `GetEmptyCoreFacilityBuildingsByRoomType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRoomType` | `ERoomType` |
| `OutBuildings` | TArray<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetEmptyCoreFacilityBuildingsByRoomType(ERoomType InRoomType, TArray<AGOAP_ActorBase*>& OutBuildings);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 根据房间类型获取所有核心设施需求为空的核心设施建筑

---

### 函数 `GetNextAvailableNumber`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetNextAvailableNumber(const FName& BuildingID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取特定类型Actor的下一个可用编号

---

### 函数 `ReturnNumber`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingID` | `const FName&` |
| `Number` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReturnNumber(const FName& BuildingID, int32 Number);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 回收编号（当Actor被销毁时调用）

---
