# `class` `AWorldMapManage`

**源码头文件:** `EastRimWorld/WorldSystem/WorldMapManage.h`

---

## 功能说明（来自头文件注释）

> World Map Manage Actor 类型。

## 蓝图暴露变量

### 属性 `CharacterWorldMoveInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md)> |
| 反射说明符 | BlueprintReadOnly, Category="World Map" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,Category="World Map") TMap<FGuid,FCharacterWorldMoveInfo> CharacterWorldMoveInfos;` |

**说明:**

> 角色在世界中移动的信息

---

### 属性 `CharacterWorldMoveActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,TObjectPtr<[AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)>> |
| 反射说明符 | BlueprintReadOnly, Category="World Map" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="World Map") TMap<FGuid,TObjectPtr<AWorldMapMoveActor>> CharacterWorldMoveActors;` |

**说明:**

> 世界中移动对应的Actor

---

### 属性 `CharacterWorldMoveInfos2D`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FCharacterWorldMoveInfo2D](WorldStruct__FCharacterWorldMoveInfo2D.md)> |
| 反射说明符 | BlueprintReadOnly, Category="World Map" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, EditAnywhere, Category = "World Map") TMap<FGuid, FCharacterWorldMoveInfo2D> CharacterWorldMoveInfos2D;` |

**说明:**

> 2d
> 角色在世界中移动的信息

---

### 属性 `PointMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |
| 反射说明符 | BlueprintReadOnly, Category="World Map" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "World Map") TMap<FName, FWorldPointSave2d> PointMap;` |

**说明:**

> 城市和路点坐标点位

---

### 属性 `CityLayoutTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="World Map" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Map") TSoftObjectPtr<UDataTable> CityLayoutTable;` |

**说明:**

> 城市布局配置表(DT_WorldMapItemLayout)，BeginPlay 时据此填充 PointMap 的城市点坐标。构造里默认指向该表，可在蓝图覆盖

---

### 属性 `RoadConfigTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="World Map" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Map") TSoftObjectPtr<UDataTable> RoadConfigTable;` |

**说明:**

> 曲线路配置表(DT_WorldMapRoadConfig)，BeginPlay 时据此填充 RoadLenMap(城市对→真实曲线路长)，用于按真实路长算移动时间。可在蓝图覆盖

---

### 属性 `MaxCityFindLen`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="World Map" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "World Map") int32 MaxCityFindLen = 12;` |

**说明:**

> 城市寻路最大路径长度 避免递归过深

---

### 属性 `bOnWorldMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bOnWorldMap = false;` |

**说明:**

> 是否在世界地图中

---

### 属性 `MapWanderRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MapWanderRadius = 1000;` |

**说明:**

> 游荡的范围

---

### 属性 `FilterClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UNavigationQueryFilter>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;` |

**说明:**

> 导航筛选

---

### 属性 `OnArrivedEndPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnArrivedEndPlace` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnArrivedEndPlace OnArrivedEndPlace;` |

**说明:**

> On Arrived End Place 事件或回调。

---

### 属性 `WorldMapPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_PlayerPawn> WorldMapPawn;` |

**说明:**

> World Map Pawn 字段。

---

### 属性 `OtherWorldPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_PlayerPawn> OtherWorldPawn;` |

**说明:**

> Other World Pawn 字段。

---

## 蓝图暴露函数

### 函数 `GetWorldMapManage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldMapManage](WorldMapManage__AWorldMapManage.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) static AWorldMapManage * GetWorldMapManage();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get World Map Manage。

---

### 函数 `CancelWorldMove`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfoGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CancelWorldMove(const FGuid & MoveInfoGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消世界移动

---

### 函数 `ChangePlayerPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bWorldMapPawn` | `bool` |
| `true` | `bool bCreateUI =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ChangePlayerPawn(bool bWorldMapPawn,bool bCreateUI = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 切换pawn

---

### 函数 `RegisterPlayerPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlayerPawnType` | [EPlayerPawnType](../Struct/CommonStruct__EPlayerPawnType.md) |
| `PlayerPawn` | [AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RegisterPlayerPawn(EPlayerPawnType PlayerPawnType,AERW_PlayerPawn * PlayerPawn);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 注册玩家Pawn

---

### 函数 `UnregisterPlayerPawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PlayerPawnType` | [EPlayerPawnType](../Struct/CommonStruct__EPlayerPawnType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UnregisterPlayerPawn(EPlayerPawnType PlayerPawnType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 反注册玩家Pawn

---

### 函数 `CharacterLeaveWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWorldMoveInfo` | const [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CharacterLeaveWorldMap(const FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 角色离开世界地图进入地点中

---

### 函数 `CharacterLeaveWorldMap2D`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWorldMoveInfo` | const [FCharacterWorldMoveInfo2D](WorldStruct__FCharacterWorldMoveInfo2D.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CharacterLeaveWorldMap2D(const FCharacterWorldMoveInfo2D& CharacterWorldMoveInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 角色离开世界地图进入地点中 2d

---

### 函数 `CalculateWorldActorPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWorldMoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CalculateWorldActorPosition(FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算当前的位置
> / @param CharacterWorldMoveInfo
> / @return 是否移动完成

---

### 函数 `UpdateWorldActorMoveState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DeltaTime` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateWorldActorMoveState(float DeltaTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新世界actor的移动状态

---

### 函数 `UpdateWorldActorMoveState2D`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DeltaTime` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateWorldActorMoveState2D(float DeltaTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新世界actor的移动状态

---

### 函数 `IsCityUnderSiege`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityName` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCityUnderSiege(const FName& CityName) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [围城] 判断某城当前是否仍被围攻(存在 MoveType==Besieging 且目标为该城的移动条目即为真，支持多支部队围同一城)

---

### 函数 `GetCityShortestSiegeRemainTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityName` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) float GetCityShortestSiegeRemainTime(const FName& CityName) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [围城] 取某城最短剩余围城时间(真实秒, 多支部队围同城时取最近结算的一支); 未被围攻返回 -1

---

### 函数 `CanPlayerAttackPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| `OutRefuseReason` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CanPlayerAttackPlace(AWorldPlace* TargetPlace, FText& OutRefuseReason);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [玩家进攻校验] 供蓝图【进攻】按钮点击前调用: 目标城处于围城时禁止进攻, 通过 OutRefuseReason 返回拒绝原因。

---

### 函数 `CalculateNavigationPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterWorldMoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalculateNavigationPath(FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算导航路径

---

### 函数 `GetNavigationalDistanceBetweenTwoPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartPosition` | `const FVector &` |
| `EndPosition` | `const FVector &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetNavigationalDistanceBetweenTwoPoints(const FVector & StartPosition,const FVector & EndPosition);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取两个点之间的导航距离

---

### 函数 `OpenWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OpenWorldMap();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 打开世界地图

---

### 函数 `CloseWorldMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CloseWorldMap();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 关闭世界地图

---

### 函数 `GetRandomLocationOnTheMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OriginPosition` | `const FVector &` |
| `Radius` | `float` |
| `OutRandomLocation` | `FVector &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetRandomLocationOnTheMap(const FVector & OriginPosition,float Radius,FVector & OutRandomLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取地图上以坐标为中心，半径范围内的随机位置

---

### 函数 `GetWorldMapMoveActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FGuid GetWorldMapMoveActor(FGuid CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过角色Guid获取对应的MoveActor的Guid

---

### 函数 `GetMoveActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfoGuid` | `const FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AWorldMapMoveActor* GetMoveActor(const FGuid MoveInfoGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过MoveInfoGuid获取对应的MoveActor

---

### 函数 `GetLeftMoveTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfoGuid` | `const FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float GetLeftMoveTime(const FGuid MoveInfoGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查询剩余移动时间（秒）

---

### 函数 `GetAvailableTransportationBuildings`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | TArray<[ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) TransportationType = [ETransportationType](../ERW_Enumerations__ETransportationType.md)::Walking |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") TArray<ABuildingActorBase*> GetAvailableTransportationBuildings(ETransportationType TransportationType = ETransportationType::Walking);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取可用的交通工具建筑

---

### 函数 `AssignTransportationToMoveInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md)& |
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool AssignTransportationToMoveInfo(FCharacterWorldMoveInfo& MoveInfo , ETransportationType TransportationType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 为移动信息分配交通工具

---

### 函数 `ReleaseTransportationFromMoveInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfoGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool ReleaseTransportationFromMoveInfo(const FGuid& MoveInfoGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放交通工具

---

### 函数 `IsTransportationAvailable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool IsTransportationAvailable(ETransportationType TransportationType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查交通工具是否可用

---

### 函数 `IsTransportationUnlocked`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool IsTransportationUnlocked(ETransportationType TransportationType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查交通工具是否已解锁(玩家在当前据点建有对应类型的交通建筑)。步行恒解锁。
> 与 IsTransportationAvailable 区分:解锁只看"是否拥有该建筑",不看空闲载具/占用,不依赖已废弃的载具占用循环。供出征界面交通工具选择器置灰/加锁用。

---

### 函数 `CalcTransportationCoinCost`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| `StartCityName` | `FName` |
| `TargetCityName` | `FName` |
| `PeopleNum` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") int32 CalcTransportationCoinCost(ETransportationType TransportationType, FName StartCityName, FName TargetCityName, int32 PeopleNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 出征交通工具铜币消耗(供出征界面 C_6 显示 与 Button_Go 实扣共用同一公式,保证显示=实扣)。
> 公式:(BasicSum + 移动天数 * StageSum) * PeopleNum * 2(往返)。移动天数(单程)=向上取整(路长/速度)。扣的是玩家势力 ForceMoney(铜币)。

---

### 函数 `PredictGoOutBattleDays`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| `StartCityName` | `FName` |
| `TargetCityName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") int32 PredictGoOutBattleDays(ETransportationType TransportationType, FName StartCityName, FName TargetCityName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 出征移动天数(往返)= 向上取整(路长/速度) * 2。供出征界面 C_3 显示。

---

### 函数 `GetPlayerCoin`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") int32 GetPlayerCoin() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 玩家当前铜币(玩家势力 ForceMoney,向下取整)。供出征界面 C_7 显示。

---

### 函数 `SpendPlayerCoin`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Transportation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Amount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool SpendPlayerCoin(int32 Amount);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 出征扣铜币:够则扣(AddForceMoney(-Amount))返回 true;不够返回 false 不扣。供 Button_Go 出征确认调用。

---

### 函数 `WorldMoveCalculateDistanceAndTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FPlaceDistanceTimeAndSpeed](WorldStruct__FPlaceDistanceTimeAndSpeed.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartPlaceLocation` | `const FVector &` |
| `EndPlaceLocation` | `const FVector &` |
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| `WorldMapMoveType` | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| `CharacterSaveData` | const TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FPlaceDistanceTimeAndSpeed WorldMoveCalculateDistanceAndTime(const FVector & StartPlaceLocation , const FVector & EndPlaceLocation , ETransportationType TransportationType , EWorldMapMoveType WorldMapMoveType , const TArray<FCharacterSaveData> & CharacterSaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> World Move Calculate Distance And Time 字段。

---

### 函数 `OpenCharacterEditorMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OpenCharacterEditorMap();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载换装地图

---

### 函数 `CloseCharacterEditorMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CloseCharacterEditorMap();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 关闭换装地图

---

### 函数 `OpenSkillTestMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMainCharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OpenSkillTestMap(const FCharacterSaveData & InMainCharacterData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> ============= 技能/武学测试沙盒子关卡(与换装同样的流式加载,主关卡不卸载) =============
> 加载测试沙盒子关卡,并传入主测试角色的存档信息:进入子关卡后自动按此信息生成主测试角色(不由Player占有)。
> InMainCharacterData.CharacterID 为空则不自动生成主角色。

---

### 函数 `CloseSkillTestMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CloseSkillTestMap();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 关闭测试沙盒子关卡

---

### 函数 `CreateOneMove`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfo` | [FCharacterWorldMoveInfo2D](WorldStruct__FCharacterWorldMoveInfo2D.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateOneMove(FCharacterWorldMoveInfo2D MoveInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 2d

---

### 函数 `InitWorldPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LCityPoint` | TMap<FName, [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |
| `LRoadPointArr` | TMap<FName, [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitWorldPoint(TMap<FName, FWorldPointSave2d> LCityPoint,TMap<FName, FWorldPointSave2d> LRoadPointArr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化世界点位

---

### 函数 `InitWorldPointFromConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitWorldPointFromConfig();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从城市配置表(CityLayoutTable)读取坐标/参数填充 PointMap 的城市点(CityType=City)。BeginPlay 自动调用

---

### 函数 `InitRoadLenFromConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitRoadLenFromConfig();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从曲线路配置表(RoadConfigTable)读取每条路的真实曲线长度填充 RoadLenMap(城市对→路长)。BeginPlay 自动调用

---

### 函数 `CalculateRealRoadLen`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityLine` | `const TArray<FName>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CalculateRealRoadLen(const TArray<FName>& CityLine);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按城市线逐段查真实曲线路长求和(查不到对应路则该段回退直线距离)。供算 NeedTotalTime 用

---

### 函数 `GetPlayerHomeCityId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FName` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FName GetPlayerHomeCityId() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 玩家主城据点 id(取玩家势力主建筑)。拿不到返回 NAME_None

---

### 函数 `FindCityLine`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartCity` | `FName` |
| `TargetCity` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> FindCityLine(FName StartCity, FName TargetCity);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开始寻找两个城市的最短城市路径

---

### 函数 `FindMoveLine`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartCity` | `FName` |
| `TargetCity` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> FindMoveLine(FName StartCity, FName TargetCity);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开始寻找两个相近城市的路点

---

### 函数 `FindMoveByTowCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartCity` | `FName` |
| `TargetCity` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> FindMoveByTowCity(FName StartCity, FName TargetCity);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按照两个城市开始寻路

---

### 函数 `FindOneCityLine`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FindPointArr` | `TArray<FName>` |
| `（匿名/仅类型）` | `TArray<FName>InFindPointArr` |
| `EndCityWidget` | [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md) |
| `CurrentPoint` | [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md) |
| `FindLine` | `bool&` |
| `RoadLen` | `float&` |
| `ReslutArr` | `TArray<FName>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> FindOneCityLine(TArray<FName> FindPointArr, TArray<FName>InFindPointArr, FWorldPointSave2d EndCityWidget, FWorldPointSave2d CurrentPoint, bool& FindLine, float& RoadLen, TArray<FName>& ReslutArr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 寻找城市路径 2d

---

### 函数 `FindOneLine`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FindPointArr` | `TArray<FName>` |
| `（匿名/仅类型）` | `TArray<FName>InFindPointArr` |
| `EndCityWidget` | [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md) |
| `CurrentPoint` | [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md) |
| `FindLine` | `bool&` |
| `RoadLen` | `float&` |
| `ReslutArr` | `TArray<FName>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> FindOneLine(TArray<FName> FindPointArr, TArray<FName>InFindPointArr, FWorldPointSave2d EndCityWidget, FWorldPointSave2d CurrentPoint, bool& FindLine, float& RoadLen, TArray<FName>& ReslutArr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 寻找路点路径 2d

---

### 函数 `CalculateLen`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AllPointArr` | `TArray<FName>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CalculateLen(TArray<FName> AllPointArr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算长度

---

### 函数 `CalculateLenCityWithPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Pointname` | `FName` |
| `pointPos` | `FVector2D` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CalculateLenCityWithPoint(FName Pointname,FVector2D pointPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算城市到点的长度

---

### 函数 `CalculateLenTwoPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `pointPos1` | `FVector2D` |
| `pointPos2` | `FVector2D` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CalculateLenTwoPoint(FVector2D pointPos1, FVector2D pointPos2);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算点到点的长度

---

### 函数 `GetPointDataByNameArr`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<FName,[FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PointNames` | `TArray<FName>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<FName,FWorldPointSave2d> GetPointDataByNameArr(TArray<FName> PointNames);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取点位信息

---

### 函数 `SetMoveBack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Moveguid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetMoveBack(FGuid Moveguid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 队伍返回出发城市

---

### 函数 `SetMoveBackByRoute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetMoveBackByRoute(FGuid MoveGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 队伍按真实路程返回出发城: 交换首尾, FindCityLine 重建路径并按距离重算 NeedTotalTime
> (区别于 SetMoveBack: 后者沿用旧 NeedTotalTime, 围城态返程会固定 SiegeDuration 秒)。
> 逻辑镜像 UpdateWorldActorMoveState2D 非占领返程分支, 改返程公式需同步两处。

---

### 函数 `SetApprenticeshipMoveBack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveGuid` | `FGuid` |
| `HomeCityName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetApprenticeshipMoveBack(FGuid MoveGuid, FName HomeCityName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 弟子历练专用回程 2d (保留 Apprenticeship 类型, 反转 2D 路径, 置 bReturning)

---

### 函数 `SetApprenticeshipMoveToNextCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveGuid` | `FGuid` |
| `NewTargetCityName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetApprenticeshipMoveToNextCity(FGuid MoveGuid, FName NewTargetCityName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 弟子历练转城: 当前城→新城, 重置移动(保留 Apprenticeship 类型, 重算路径), 抵达后继续历练

---

### 函数 `GetNearCitysBy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlaceName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FName> GetNearCitysBy(FName WorldPlaceName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取一个城市的临近城市

---
