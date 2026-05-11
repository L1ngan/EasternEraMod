# `class` `AWorldMapManage`

**Source header:** `EastRimWorld/WorldSystem/WorldMapManage.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `CharacterWorldMoveInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FCharacterWorldMoveInfo](WorldStruct__FCharacterWorldMoveInfo.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="World Map" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,Category="World Map") TMap<FGuid,FCharacterWorldMoveInfo> CharacterWorldMoveInfos;` |

**Source comments:**

> 角色在世界中移动的信息

---

### Property `CharacterWorldMoveActors`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,TObjectPtr<[AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)>> |
| Reflection specifiers | BlueprintReadOnly, Category="World Map" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="World Map") TMap<FGuid,TObjectPtr<AWorldMapMoveActor>> CharacterWorldMoveActors;` |

**Source comments:**

> 世界中移动对应的Actor

---

### Property `bOnWorldMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bOnWorldMap = false;` |

**Source comments:**

> 是否在世界地图中

---

### Property `MapWanderRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MapWanderRadius = 1000;` |

**Source comments:**

> 游荡的范围

---

### Property `FilterClass`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UNavigationQueryFilter>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;` |

**Source comments:**

> 导航筛选

---

### Property `OnArrivedEndPlace`

| Field | Details |
|------|------|
| C++ type | `FOnArrivedEndPlace` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnArrivedEndPlace OnArrivedEndPlace;` |

---

### Property `WorldMapPawn`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_PlayerPawn> WorldMapPawn;` |

---

### Property `OtherWorldPawn`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AERW_PlayerPawn> OtherWorldPawn;` |

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

**Source comments:**

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

**Source comments:**

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
| `PlayerPawnType` | `EPlayerPawnType` |
| `PlayerPawn` | [AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md) * |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RegisterPlayerPawn(EPlayerPawnType PlayerPawnType,AERW_PlayerPawn * PlayerPawn);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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
| `PlayerPawnType` | `EPlayerPawnType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterPlayerPawn(EPlayerPawnType PlayerPawnType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

> 角色离开世界地图进入地点中

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

**Source comments:**

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

**Source comments:**

> 更新世界actor的移动状态

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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
| `(unnamed / type only)` | `ETransportationType TransportationType = ETransportationType::Walking` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") TArray<ABuildingActorBase*> GetAvailableTransportationBuildings(ETransportationType TransportationType = ETransportationType::Walking);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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
| `TransportationType` | `ETransportationType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool AssignTransportationToMoveInfo(FCharacterWorldMoveInfo& MoveInfo , ETransportationType TransportationType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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
| `TransportationType` | `ETransportationType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Transportation") bool IsTransportationAvailable(ETransportationType TransportationType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查交通工具是否可用

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
| `TransportationType` | `ETransportationType` |
| `WorldMapMoveType` | `EWorldMapMoveType` |
| `CharacterSaveData` | const TArray<[FCharacterSaveData](WorldCharacterData__FCharacterSaveData.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FPlaceDistanceTimeAndSpeed WorldMoveCalculateDistanceAndTime(const FVector & StartPlaceLocation , const FVector & EndPlaceLocation , ETransportationType TransportationType , EWorldMapMoveType WorldMapMoveType , const TArray<FCharacterSaveData> & CharacterSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `OpenCharacterEditorMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OpenCharacterEditorMap();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

> 关闭换装地图

---
