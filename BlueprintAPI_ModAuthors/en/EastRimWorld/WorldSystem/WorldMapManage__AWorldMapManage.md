# `class` `AWorldMapManage`

**Source header:** `EastRimWorld/WorldSystem/WorldMapManage.h`

---

## Functional description (from header comments)

> World Map Manage actor type.

## Blueprint-exposed variables

### Property `CharacterWorldMoveInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="World Map" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,Category="World Map") TMap<FGuid,FCharacterWorldMoveInfo> CharacterWorldMoveInfos;` |

**Notes:**

> 角色在世界中移动的信息

---

### Property `CharacterWorldMoveActors`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,TObjectPtr<[AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)>> |
| Reflection specifiers | BlueprintReadOnly, Category="World Map" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="World Map") TMap<FGuid,TObjectPtr<AWorldMapMoveActor>> CharacterWorldMoveActors;` |

**Notes:**

> 世界中移动对应的Actor

---

### Property `CharacterWorldMoveInfos2D`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FCharacterWorldMoveInfo2D](WorldStruct__FCharacterWorldMoveInfo2D.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="World Map" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, EditAnywhere, Category = "World Map") TMap<FGuid, FCharacterWorldMoveInfo2D> CharacterWorldMoveInfos2D;` |

**Notes:**

> 2d
> 角色在世界中移动的信息

---

### Property `PointMap`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="World Map" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "World Map") TMap<FName, FWorldPointSave2d> PointMap;` |

**Notes:**

> 城市和路点坐标点位

---

### Property `CityLayoutTable`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="World Map" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Map") TSoftObjectPtr<UDataTable> CityLayoutTable;` |

**Notes:**

> 城市布局配置表(DT_WorldMapItemLayout)，BeginPlay 时据此填充 PointMap 的城市点坐标。构造里默认指向该表，可在蓝图覆盖

---

### Property `RoadConfigTable`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="World Map" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Map") TSoftObjectPtr<UDataTable> RoadConfigTable;` |

**Notes:**

> 曲线路配置表(DT_WorldMapRoadConfig)，BeginPlay 时据此填充 RoadLenMap(城市对→真实曲线路长)，用于按真实路长算移动时间。可在蓝图覆盖

---

### Property `MaxCityFindLen`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="World Map" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "World Map") int32 MaxCityFindLen = 12;` |

**Notes:**

> 城市寻路最大路径长度 避免递归过深

---

### Property `bOnWorldMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bOnWorldMap = false;` |

**Notes:**

> 是否在世界地图中

---

### Property `MapWanderRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MapWanderRadius = 1000;` |

**Notes:**

> 游荡的范围

---

### Property `FilterClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UNavigationQueryFilter>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;` |

**Notes:**

> 导航筛选

---

### Property `OnArrivedEndPlace`

| Field | Details |
|------|------|
| C++ type | `FOnArrivedEndPlace` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnArrivedEndPlace OnArrivedEndPlace;` |

**Notes:**

> On Arrived End Place event or callback.

---

### Property `WorldMapPawn`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_PlayerPawn> WorldMapPawn;` |

**Notes:**

> World Map Pawn field.

---

### Property `OtherWorldPawn`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_PlayerPawn> OtherWorldPawn;` |

**Notes:**

> Other World Pawn field.

---

## Blueprint-exposed functions

### Function `GetWorldMapManage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldMapManage](WorldMapManage__AWorldMapManage.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static AWorldMapManage * GetWorldMapManage();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get World Map Manage.

---

### Function `CancelWorldMove`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveInfoGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CancelWorldMove(const FGuid & MoveInfoGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消世界移动

---

### Function `ChangePlayerPawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bWorldMapPawn` | `bool` |
| `true` | `bool bCreateUI =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangePlayerPawn(bool bWorldMapPawn,bool bCreateUI = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换pawn

---

### Function `RegisterPlayerPawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlayerPawnType` | [EPlayerPawnType](../Struct/CommonStruct__EPlayerPawnType.md) |
| `PlayerPawn` | [AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterPlayerPawn(EPlayerPawnType PlayerPawnType,AERW_PlayerPawn * PlayerPawn);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 注册玩家Pawn

---

### Function `UnregisterPlayerPawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PlayerPawnType` | [EPlayerPawnType](../Struct/CommonStruct__EPlayerPawnType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterPlayerPawn(EPlayerPawnType PlayerPawnType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 反注册玩家Pawn

---

### Function `CharacterLeaveWorldMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterWorldMoveInfo` | const [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CharacterLeaveWorldMap(const FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色离开世界地图进入地点中

---

### Function `CharacterLeaveWorldMap2D`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterWorldMoveInfo` | const [FCharacterWorldMoveInfo2D](WorldStruct__FCharacterWorldMoveInfo2D.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CharacterLeaveWorldMap2D(const FCharacterWorldMoveInfo2D& CharacterWorldMoveInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色离开世界地图进入地点中 2d

---

### Function `CalculateWorldActorPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterWorldMoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CalculateWorldActorPosition(FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算当前的位置
> / @param CharacterWorldMoveInfo
> / @return 是否移动完成

---

### Function `UpdateWorldActorMoveState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DeltaTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateWorldActorMoveState(float DeltaTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新世界actor的移动状态

---

### Function `UpdateWorldActorMoveState2D`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DeltaTime` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateWorldActorMoveState2D(float DeltaTime);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新世界actor的移动状态

---

### Function `IsCityUnderSiege`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityName` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCityUnderSiege(const FName& CityName) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [围城] 判断某城当前是否仍被围攻(存在 MoveType==Besieging 且目标为该城的移动条目即为真，支持多支部队围同一城)

---

### Function `GetCityShortestSiegeRemainTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityName` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) float GetCityShortestSiegeRemainTime(const FName& CityName) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [围城] 取某城最短剩余围城时间(真实秒, 多支部队围同城时取最近结算的一支); 未被围攻返回 -1

---

### Function `CanPlayerAttackPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetPlace` | [AWorldPlace](WorldPlace__AWorldPlace.md)* |
| `OutRefuseReason` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CanPlayerAttackPlace(AWorldPlace* TargetPlace, FText& OutRefuseReason);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [玩家进攻校验] 供蓝图【进攻】按钮点击前调用: 目标城处于围城时禁止进攻, 通过 OutRefuseReason 返回拒绝原因。

---

### Function `CalculateNavigationPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterWorldMoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculateNavigationPath(FCharacterWorldMoveInfo & CharacterWorldMoveInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算导航路径

---

### Function `GetNavigationalDistanceBetweenTwoPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartPosition` | `const FVector &` |
| `EndPosition` | `const FVector &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetNavigationalDistanceBetweenTwoPoints(const FVector & StartPosition,const FVector & EndPosition);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取两个点之间的导航距离

---

### Function `OpenWorldMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OpenWorldMap();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 打开世界地图

---

### Function `CloseWorldMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CloseWorldMap();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 关闭世界地图

---

### Function `GetRandomLocationOnTheMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OriginPosition` | `const FVector &` |
| `Radius` | `float` |
| `OutRandomLocation` | `FVector &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetRandomLocationOnTheMap(const FVector & OriginPosition,float Radius,FVector & OutRandomLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取地图上以坐标为中心，半径范围内的随机位置

---

### Function `GetWorldMapMoveActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGuid GetWorldMapMoveActor(FGuid CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过角色Guid获取对应的MoveActor的Guid

---

### Function `GetMoveActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveInfoGuid` | `const FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AWorldMapMoveActor* GetMoveActor(const FGuid MoveInfoGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过MoveInfoGuid获取对应的MoveActor

---

### Function `GetLeftMoveTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveInfoGuid` | `const FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetLeftMoveTime(const FGuid MoveInfoGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询剩余移动时间（秒）

---

### Function `GetAvailableTransportationBuildings`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | TArray<[ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) TransportationType = [ETransportationType](../ERW_Enumerations__ETransportationType.md)::Walking |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") TArray<ABuildingActorBase*> GetAvailableTransportationBuildings(ETransportationType TransportationType = ETransportationType::Walking);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取可用的交通工具建筑

---

### Function `AssignTransportationToMoveInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveInfo` | [FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md)& |
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool AssignTransportationToMoveInfo(FCharacterWorldMoveInfo& MoveInfo , ETransportationType TransportationType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 为移动信息分配交通工具

---

### Function `ReleaseTransportationFromMoveInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveInfoGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool ReleaseTransportationFromMoveInfo(const FGuid& MoveInfoGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 释放交通工具

---

### Function `IsTransportationAvailable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool IsTransportationAvailable(ETransportationType TransportationType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查交通工具是否可用

---

### Function `IsTransportationUnlocked`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool IsTransportationUnlocked(ETransportationType TransportationType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查交通工具是否已解锁(玩家在当前据点建有对应类型的交通建筑)。步行恒解锁。
> 与 IsTransportationAvailable 区分:解锁只看"是否拥有该建筑",不看空闲载具/占用,不依赖已废弃的载具占用循环。供出征界面交通工具选择器置灰/加锁用。

---

### Function `CalcTransportationCoinCost`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| `StartCityName` | `FName` |
| `TargetCityName` | `FName` |
| `PeopleNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") int32 CalcTransportationCoinCost(ETransportationType TransportationType, FName StartCityName, FName TargetCityName, int32 PeopleNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 出征交通工具铜币消耗(供出征界面 C_6 显示 与 Button_Go 实扣共用同一公式,保证显示=实扣)。
> 公式:(BasicSum + 移动天数 * StageSum) * PeopleNum * 2(往返)。移动天数(单程)=向上取整(路长/速度)。扣的是玩家势力 ForceMoney(铜币)。

---

### Function `PredictGoOutBattleDays`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| `StartCityName` | `FName` |
| `TargetCityName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") int32 PredictGoOutBattleDays(ETransportationType TransportationType, FName StartCityName, FName TargetCityName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 出征移动天数(往返)= 向上取整(路长/速度) * 2。供出征界面 C_3 显示。

---

### Function `GetPlayerCoin`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") int32 GetPlayerCoin() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家当前铜币(玩家势力 ForceMoney,向下取整)。供出征界面 C_7 显示。

---

### Function `SpendPlayerCoin`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Transportation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Amount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool SpendPlayerCoin(int32 Amount);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 出征扣铜币:够则扣(AddForceMoney(-Amount))返回 true;不够返回 false 不扣。供 Button_Go 出征确认调用。

---

### Function `WorldMoveCalculateDistanceAndTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FPlaceDistanceTimeAndSpeed](WorldStruct__FPlaceDistanceTimeAndSpeed.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartPlaceLocation` | `const FVector &` |
| `EndPlaceLocation` | `const FVector &` |
| `TransportationType` | [ETransportationType](../ERW_Enumerations__ETransportationType.md) |
| `WorldMapMoveType` | [EWorldMapMoveType](WorldStruct__EWorldMapMoveType.md) |
| `CharacterSaveData` | const TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FPlaceDistanceTimeAndSpeed WorldMoveCalculateDistanceAndTime(const FVector & StartPlaceLocation , const FVector & EndPlaceLocation , ETransportationType TransportationType , EWorldMapMoveType WorldMapMoveType , const TArray<FCharacterSaveData> & CharacterSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> World Move Calculate Distance And Time field.

---

### Function `OpenCharacterEditorMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OpenCharacterEditorMap();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加载换装地图

---

### Function `CloseCharacterEditorMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CloseCharacterEditorMap();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 关闭换装地图

---

### Function `OpenSkillTestMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMainCharacterData` | const [FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OpenSkillTestMap(const FCharacterSaveData & InMainCharacterData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> ============= 技能/武学测试沙盒子关卡(与换装同样的流式加载,主关卡不卸载) =============
> 加载测试沙盒子关卡,并传入主测试角色的存档信息:进入子关卡后自动按此信息生成主测试角色(不由Player占有)。
> InMainCharacterData.CharacterID 为空则不自动生成主角色。

---

### Function `CloseSkillTestMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CloseSkillTestMap();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 关闭测试沙盒子关卡

---

### Function `CreateOneMove`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveInfo` | [FCharacterWorldMoveInfo2D](WorldStruct__FCharacterWorldMoveInfo2D.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateOneMove(FCharacterWorldMoveInfo2D MoveInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 2d

---

### Function `InitWorldPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LCityPoint` | TMap<FName, [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |
| `LRoadPointArr` | TMap<FName, [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitWorldPoint(TMap<FName, FWorldPointSave2d> LCityPoint,TMap<FName, FWorldPointSave2d> LRoadPointArr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化世界点位

---

### Function `InitWorldPointFromConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitWorldPointFromConfig();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从城市配置表(CityLayoutTable)读取坐标/参数填充 PointMap 的城市点(CityType=City)。BeginPlay 自动调用

---

### Function `InitRoadLenFromConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitRoadLenFromConfig();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从曲线路配置表(RoadConfigTable)读取每条路的真实曲线长度填充 RoadLenMap(城市对→路长)。BeginPlay 自动调用

---

### Function `CalculateRealRoadLen`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityLine` | `const TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculateRealRoadLen(const TArray<FName>& CityLine);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按城市线逐段查真实曲线路长求和(查不到对应路则该段回退直线距离)。供算 NeedTotalTime 用

---

### Function `GetPlayerHomeCityId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FName` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FName GetPlayerHomeCityId() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 玩家主城据点 id(取玩家势力主建筑)。拿不到返回 NAME_None

---

### Function `FindCityLine`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartCity` | `FName` |
| `TargetCity` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> FindCityLine(FName StartCity, FName TargetCity);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开始寻找两个城市的最短城市路径

---

### Function `FindMoveLine`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartCity` | `FName` |
| `TargetCity` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> FindMoveLine(FName StartCity, FName TargetCity);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开始寻找两个相近城市的路点

---

### Function `FindMoveByTowCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartCity` | `FName` |
| `TargetCity` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> FindMoveByTowCity(FName StartCity, FName TargetCity);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按照两个城市开始寻路

---

### Function `FindOneCityLine`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FindPointArr` | `TArray<FName>` |
| `(unnamed / type only)` | `TArray<FName>InFindPointArr` |
| `EndCityWidget` | [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md) |
| `CurrentPoint` | [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md) |
| `FindLine` | `bool&` |
| `RoadLen` | `float&` |
| `ReslutArr` | `TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> FindOneCityLine(TArray<FName> FindPointArr, TArray<FName>InFindPointArr, FWorldPointSave2d EndCityWidget, FWorldPointSave2d CurrentPoint, bool& FindLine, float& RoadLen, TArray<FName>& ReslutArr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 寻找城市路径 2d

---

### Function `FindOneLine`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FindPointArr` | `TArray<FName>` |
| `(unnamed / type only)` | `TArray<FName>InFindPointArr` |
| `EndCityWidget` | [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md) |
| `CurrentPoint` | [FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md) |
| `FindLine` | `bool&` |
| `RoadLen` | `float&` |
| `ReslutArr` | `TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> FindOneLine(TArray<FName> FindPointArr, TArray<FName>InFindPointArr, FWorldPointSave2d EndCityWidget, FWorldPointSave2d CurrentPoint, bool& FindLine, float& RoadLen, TArray<FName>& ReslutArr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 寻找路点路径 2d

---

### Function `CalculateLen`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AllPointArr` | `TArray<FName>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculateLen(TArray<FName> AllPointArr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算长度

---

### Function `CalculateLenCityWithPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Pointname` | `FName` |
| `pointPos` | `FVector2D` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculateLenCityWithPoint(FName Pointname,FVector2D pointPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算城市到点的长度

---

### Function `CalculateLenTwoPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `pointPos1` | `FVector2D` |
| `pointPos2` | `FVector2D` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculateLenTwoPoint(FVector2D pointPos1, FVector2D pointPos2);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算点到点的长度

---

### Function `GetPointDataByNameArr`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<FName,[FWorldPointSave2d](WorldStruct__FWorldPointSave2d.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PointNames` | `TArray<FName>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<FName,FWorldPointSave2d> GetPointDataByNameArr(TArray<FName> PointNames);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取点位信息

---

### Function `SetMoveBack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Moveguid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetMoveBack(FGuid Moveguid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 队伍返回出发城市

---

### Function `SetMoveBackByRoute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetMoveBackByRoute(FGuid MoveGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 队伍按真实路程返回出发城: 交换首尾, FindCityLine 重建路径并按距离重算 NeedTotalTime
> (区别于 SetMoveBack: 后者沿用旧 NeedTotalTime, 围城态返程会固定 SiegeDuration 秒)。
> 逻辑镜像 UpdateWorldActorMoveState2D 非占领返程分支, 改返程公式需同步两处。

---

### Function `SetApprenticeshipMoveBack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveGuid` | `FGuid` |
| `HomeCityName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetApprenticeshipMoveBack(FGuid MoveGuid, FName HomeCityName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 弟子历练专用回程 2d (保留 Apprenticeship 类型, 反转 2D 路径, 置 bReturning)

---

### Function `SetApprenticeshipMoveToNextCity`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveGuid` | `FGuid` |
| `NewTargetCityName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetApprenticeshipMoveToNextCity(FGuid MoveGuid, FName NewTargetCityName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 弟子历练转城: 当前城→新城, 重置移动(保留 Apprenticeship 类型, 重算路径), 抵达后继续历练

---

### Function `GetNearCitysBy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetNearCitysBy(FName WorldPlaceName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取一个城市的临近城市

---
