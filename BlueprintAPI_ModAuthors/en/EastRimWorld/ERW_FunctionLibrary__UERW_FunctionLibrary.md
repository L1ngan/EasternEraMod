# `class` `UERW_FunctionLibrary`

**Source header:** `EastRimWorld/ERW_FunctionLibrary.h`

---

## Functional description (from header comments)

> 公共函数库类

## Blueprint-exposed functions

### Function `SetGameMode`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameModeBase` | [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SetGameMode(AERW_GameModeBase* GameModeBase);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置GameMode

---

### Function `SetWorldPlace`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CurWorldPlace` | [AWorldPlace](WorldSystem/WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SetWorldPlace(AWorldPlace* CurWorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置当前关卡

---

### Function `SetCanAffectNavigation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Component` | `UActorComponent*` |
| `CanAffect` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SetCanAffectNavigation(UActorComponent* Component , bool CanAffect);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置组件是否影响寻路

---

### Function `AddAssembleCollision`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PartType` | [EAssemblePartType](ERW_Enumerations__EAssemblePartType.md) |
| `StaticMeshComponent` | `UStaticMeshComponent*` |
| `AssembleCollisions` | UPARAM(Ref) TMap<[EAssemblePartType](ERW_Enumerations__EAssemblePartType.md) , [FStaticMeshComponents](ERW_CommonTypes__FStaticMeshComponents.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void AddAssembleCollision(EAssemblePartType PartType , UStaticMeshComponent* StaticMeshComponent , UPARAM(Ref) TMap<EAssemblePartType , FStaticMeshComponents>& AssembleCollisions);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 记录组装建筑碰撞组件

---

### Function `SetDecalSize`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DecalComponent` | `UDecalComponent*` |
| `Size` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SetDecalSize(UDecalComponent* DecalComponent , const FVector& Size);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置贴花尺寸

---

### Function `SetProgressBarFillTexture`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="UI" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Bar` | `UProgressBar*` |
| `Texture` | `UTexture2D*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "UI") static void SetProgressBarFillTexture(UProgressBar* Bar , UTexture2D* Texture);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 动态修改进度条的填充图(只换贴图,保留 DrawAs/Margin;实时刷新)

---

### Function `SwapSize`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Size` | `const FIntVector&` |
| `RotateOrientation` | [ERotateOrientation](ERW_Enumerations__ERotateOrientation.md) |
| `NewSize` | `FIntVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static void SwapSize(const FIntVector& Size , ERotateOrientation RotateOrientation , FIntVector& NewSize);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 根据旋转朝向交换尺寸

---

### Function `IsActiveGameplayEffectHandleValid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Handle` | `const FActiveGameplayEffectHandle&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static bool IsActiveGameplayEffectHandleValid(const FActiveGameplayEffectHandle& Handle) { return Handle.IsValid(); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> ActiveGameplayEffectHandle是否有效

---

### Function `SortByCharacterAbility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Descending` | `bool` |
| `Abilities` | UPARAM(ref) TMap<[AEastRimWorldCharacter_Human](Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* , float>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SortByCharacterAbility(bool Descending , UPARAM(ref) TMap<AEastRimWorldCharacter_Human* , float>& Abilities);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过角色能力进行排序

---

### Function `GetAreaRange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Start` | const [FGridPosition](ERW_CommonTypes__FGridPosition.md)& |
| `End` | const [FGridPosition](ERW_CommonTypes__FGridPosition.md)& |
| `Min` | `FVector&` |
| `Max` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static void GetAreaRange(const FGridPosition& Start , const FGridPosition& End , FVector& Min , FVector& Max);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得范围内最小最大点

---

### Function `GetGridPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |
| `GridPositionType` | [EGridPositionType](ERW_Enumerations__EGridPositionType.md) |
| `GridPos` | [FGridPosition](ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static void GetGridPosition(const FVector& Location , EGridPositionType GridPositionType , FGridPosition& GridPos);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 将世界位置转换成格子坐标位置

---

### Function `GetGridWorldPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](ERW_CommonTypes__FGridPosition.md)& |
| `GridPositionType` | [EGridPositionType](ERW_Enumerations__EGridPositionType.md) |
| `WorldPos` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static void GetGridWorldPosition(const FGridPosition& GridPos , EGridPositionType GridPositionType , FVector& WorldPos);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 将格子坐标位置转换成世界位置

---

### Function `GetGridSideWorldPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Pos` | `const FVector&` |
| `GridPos` | const [FGridPosition](ERW_CommonTypes__FGridPosition.md)& |
| `GridWorldPos` | `const FVector&` |
| `SideWorldPos` | `FVector&` |
| `RotateOrientation` | [ERotateOrientation](ERW_Enumerations__ERotateOrientation.md)& |
| `DistributionType` | [EGridDistributionType](ERW_Enumerations__EGridDistributionType.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static void GetGridSideWorldPosition(const FVector& Pos , const FGridPosition& GridPos , const FVector& GridWorldPos , FVector& SideWorldPos , ERotateOrientation& RotateOrientation , EGridDistributionType& DistributionType);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得网格边线中心的世界位置
> 
> @param Pos				点击世界位置
> @param GridPos			格子坐标
> @param GridWorldPos		格子中心世界坐标
> @param SideWorldPos		格子边线中心世界位置
> @param RotateOrientation	旋转朝向
> @param DistributionType	物体在格子中分布类型

---

### Function `GetGridPositionType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [EGridPositionType](ERW_Enumerations__EGridPositionType.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironType` | [EEnvironType](ERW_Enumerations__EEnvironType.md) |
| `Size` | `const FIntPoint&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static EGridPositionType GetGridPositionType(EEnvironType EnvironType , const FIntPoint& Size);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 通过环境类型获得格子位置类型

---

### Function `SetSplineSampleInterval`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Spline` | `USplineComponent*` |
| `SegmentNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SetSplineSampleInterval(USplineComponent* Spline , int32 SegmentNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置样条曲线采样间隔

---

### Function `GetSplineInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Spline` | `USplineComponent*` |
| `RelativePoses` | `TArray<FVector>&` |
| `WorldPoses` | `TArray<FVector>&` |
| `Tangents` | `TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static void GetSplineInfos(USplineComponent* Spline , TArray<FVector>& RelativePoses , TArray<FVector>& WorldPoses , TArray<FVector>& Tangents);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得样条曲线的信息

---

### Function `IsPointsInsidePolygon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Points` | `const TArray<FVector>&` |
| `Locations` | `const TArray<FVector>&` |
| `IsRestrictArea` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static bool IsPointsInsidePolygon(const TArray<FVector>& Points , const TArray<FVector>& Locations , bool IsRestrictArea);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 判断点是否在多边形内

---

### Function `HasPointInsidePolygon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Points` | `const TArray<FVector>&` |
| `Locations` | `const TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static bool HasPointInsidePolygon(const TArray<FVector>& Points , const TArray<FVector>& Locations);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 判断是否有点在多边形内, 有一个点在多边形内就返还true

---

### Function `GetLandscapeHeightAtLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Pos` | `const FVector&` |
| `Height` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static bool GetLandscapeHeightAtLocation(const FVector& Pos , float& Height);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得指定位置地形高度

---

### Function `GetGroundHeightAtLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `World` | `UWorld*` |
| `Location` | `const FVector&` |
| `OutHeight` | `float&` |
| `nullptr` | `AActor* ActorToIgnore =` |
| `(unnamed / type only)` | `float TraceUp = 600.f` |
| `(unnamed / type only)` | `float TraceDown = 1200.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category="World") static bool GetGroundHeightAtLocation(UWorld* World , const FVector& Location , float& OutHeight , AActor* ActorToIgnore = nullptr , float TraceUp = 600.f , float TraceDown = 1200.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检测地面高度：先在 Location 处沿垂直方向做线检测（ECC_GameTraceChannel16），
> 若未命中则回退为 GetLandscapeHeightAtLocation。
> @param ActorToIgnore 射线忽略的演员（可为空）

---

### Function `GetGroundHeightAtLocation_WC`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="World" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `Location` | `const FVector&` |
| `OutHeight` | `float&` |
| `nullptr` | `AActor* ActorToIgnore =` |
| `(unnamed / type only)` | `float TraceUp = 600.f` |
| `(unnamed / type only)` | `float TraceDown = 1200.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category="World" , meta=(WorldContext="WorldContextObject" , DisplayName="Get Ground Height At Location")) static bool GetGroundHeightAtLocation_WC(const UObject* WorldContextObject , const FVector& Location , float& OutHeight , AActor* ActorToIgnore = nullptr , float TraceUp = 600.f , float TraceDown = 1200.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Node display title may be "Get Ground Height At Location".

**Notes:**

> Gets the ground height at the location (world-context Blueprint version): performs a vertical line trace first, falling back to the landscape height query on miss

---

### Function `CompareGOAPCondition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Condition` | const [FGOAP_Condition](GOAP/GOAP_Data__FGOAP_Condition.md)& |
| `Value` | const [FGOAP_Value](GOAP/GOAP_Data__FGOAP_Value.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static bool CompareGOAPCondition(const FGOAP_Condition& Condition , const FGOAP_Value& Value);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 比较GOAP条件是否满足

---

### Function `CompareCommonCondition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Condition` | const [FCommonCondition](ERW_CommonTypes__FCommonCondition.md)& |
| `Value` | const [FConditionValue](ERW_CommonTypes__FConditionValue.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static bool CompareCommonCondition(const FCommonCondition& Condition , const FConditionValue& Value);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 比较通用条件是否满足

---

### Function `GetPathLocationsToTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AI|Navigation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AIOwner` | `const AController*` |
| `TargetLocation` | `const FVector&` |
| `FilterClass` | `TSubclassOf<UNavigationQueryFilter>` |
| `Locations` | `TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category="AI|Navigation") static void GetPathLocationsToTarget(const AController* AIOwner , const FVector& TargetLocation , TSubclassOf<UNavigationQueryFilter> FilterClass , TArray<FVector>& Locations);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得从角色当前位置到目标要经过的位置

---

### Function `HasPathToTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AI|Navigation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AIOwner` | `const AController*` |
| `TargetLocation` | `const FVector&` |
| `nullptr` | `TSubclassOf<UNavigationQueryFilter> FilterClass =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category="AI|Navigation") static bool HasPathToTarget(const AController* AIOwner , const FVector& TargetLocation , TSubclassOf<UNavigationQueryFilter> FilterClass = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从角色当前位置到目标位置是否能寻路到

---

### Function `IsPathAcrossDoor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PointA` | `const FVector&` |
| `PointB` | `const FVector` |
| `PathPoints` | `const TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool IsPathAcrossDoor(const FVector& PointA , const FVector PointB , const TArray<FVector>& PathPoints);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 路径点是否穿过门

---

### Function `CalculateWeights`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Weights` | `const TMap<int32 , int32>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static int32 CalculateWeights(const TMap<int32 , int32>& Weights){return CalculateWeights<int32>(Weights);}`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Randomly picks one key from the map according to its weight

---

### Function `RandomWeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMap` | `const TMap<int,int>&` |
| `Num` | `const int` |
| `OutValue` | `TArray<int>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void RandomWeight(const TMap<int,int>& InMap,const int Num,TArray<int>& OutValue) { RandomWeight<int>(InMap,Num,OutValue); };`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Randomly selects Num distinct keys from the map according to their weights

---

### Function `RandomWeightPercent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SelectPercent` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool RandomWeightPercent(float SelectPercent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 按几率随机抽中
> / @param SelectPercent （0-1百分比,大于1必中）
> / @return true 抽中 false 未抽中

---

### Function `RandDropItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MaxDropNum` | `int32` |
| `DropItemConfig` | `const TMap<FName, float>&` |
| `OutAwards` | UPARAM(ref) TMap<FName, [FItemSimpleData](Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void RandDropItem(int32 MaxDropNum,const TMap<FName, float>& DropItemConfig,UPARAM(ref) TMap<FName, FItemSimpleData>& OutAwards);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Randomly rolls item drops from the drop config (up to MaxDropNum) and writes the results into the awards map

---

### Function `SortBuildingByBuildingScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Buildings` | const TArray<[ABuildingActorBase](Building/BuildingActorBase__ABuildingActorBase.md)*> |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static TArray<ABuildingActorBase*> SortBuildingByBuildingScore(const TArray<ABuildingActorBase*> Buildings);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sorts the building array by building score and returns the sorted array

---

### Function `CalcCarryItemNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `GeneralData` | const [FInventoryGeneralData](Struct/ItemStruct__FInventoryGeneralData.md)& |
| `ItemNum` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static int32 CalcCarryItemNum(AEastRimWorldAIController* Agent , const FInventoryGeneralData& GeneralData , int32 ItemNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算携带物品的数量

---

### Function `CalcGoalPriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalPriority` | `int32` |
| `IsLeftMouseButton` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) static int32 CalcGoalPriority(int32 GoalPriority , bool IsLeftMouseButton);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 计算GOAP目标优先级

---

### Function `SortInventoryQuality`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UInventoryItemInstance](Inventory/InventoryItemInstance__UInventoryItemInstance.md)*>& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Items` | UPARAM(ref) TArray<[UInventoryItemInstance](Inventory/InventoryItemInstance__UInventoryItemInstance.md)*> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static TArray<UInventoryItemInstance*>& SortInventoryQuality(UPARAM(ref) TArray<UInventoryItemInstance*> & Items);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 物品按照品质从高到低排序

---

### Function `AddBuildNames`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Category` | `const FName&` |
| `ID` | `const FName&` |
| `BuildNames` | UPARAM(ref) TMap<FName , [FIDs](ERW_CommonTypes__FIDs.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void AddBuildNames(const FName& Category , const FName& ID , UPARAM(ref) TMap<FName , FIDs>& BuildNames);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据类别加入BuildName

---

### Function `ConvertFNameToEItemType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [EItemType](Struct/CommonEnum__EItemType.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Name` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static EItemType ConvertFNameToEItemType(const FName& Name);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 转换类型

---

### Function `GetPointOnCircle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Radius` | `float` |
| `AngleDegrees` | `float` |
| `Rotation` | `const FRotator&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FVector GetPointOnCircle(float Radius, float AngleDegrees, const FRotator& Rotation) { float AngleRadians = FMath::DegreesToRadians(AngleDegrees); float X = Radius * FMath::Cos(AngleRadians); float Y = Radius * FMath::Sin(AngleRadians); FVector LocalPoint(X, Y, 0); FVector RotatedPoint = Rotation.RotateVector(LocalPoint); return RotatedPoint; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Calculates a point on a circle from the radius, angle in degrees, and rotation

---

### Function `RotateDirectionVector`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DirectionVector` | `const FVector&` |
| `Rotation` | `const FRotator&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FVector RotateDirectionVector(const FVector& DirectionVector, const FRotator& Rotation) { FMatrix RotationMatrix = FRotationMatrix(Rotation); return RotationMatrix.TransformVector(DirectionVector); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Rotates the direction vector by the given rotator and returns the result

---

### Function `UpdateSmartObjectTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |
| `Handle` | `const FSmartObjectHandle` |
| `NewTransform` | `const FTransform&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool UpdateSmartObjectTransform(const UObject* Context,const FSmartObjectHandle Handle, const FTransform& NewTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新智能对象的位置

---

### Function `GetSmartObjectSlotTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FTransform` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |
| `SlotHandle` | `const FSmartObjectSlotHandle` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FTransform GetSmartObjectSlotTransform(const UObject* Context,const FSmartObjectSlotHandle SlotHandle);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取智能对象插槽的位置

---

### Function `RequestGameplayTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGameplayTag` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TagName` | `const FName&` |
| `(unnamed / type only)` | `bool ErrorIfNotFound=true` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FGameplayTag RequestGameplayTag(const FName& TagName,bool ErrorIfNotFound=true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> FName转标签

---

### Function `AppendTwoAttributeMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TMap<FString , float>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Map1` | `const TMap<FString,float>&` |
| `Map2` | `const TMap<FString,float> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static TMap<FString , float> AppendTwoAttributeMap(const TMap<FString,float>& Map1,const TMap<FString,float> & Map2);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 拼接两个Key为GameplayAttribut，Value为float的TMap

---

### Function `RegisterSmartObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |
| `SmartObjectComponent` | `class USmartObjectComponent*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool RegisterSmartObject(const UObject* Context,class USmartObjectComponent* SmartObjectComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 注册一个智能物体到子系统

---

### Function `UnregisterSmartObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |
| `SmartObjectComponent` | `class USmartObjectComponent*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool UnregisterSmartObject(const UObject* Context,class USmartObjectComponent* SmartObjectComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Unregisters a smart object component from the smart object subsystem

---

### Function `FindSmartObjectByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |
| `Tag` | `const FGameplayTag&` |
| `OriginPos` | `const FVector&` |
| `RangeDis` | `float` |
| `OutResults` | `TArray<FSmartObjectRequestResult>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool FindSmartObjectByTag(const UObject* Context,const FGameplayTag& Tag,const FVector& OriginPos,float RangeDis,TArray<FSmartObjectRequestResult>& OutResults);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Finds smart objects matching the given tag within a radius around the origin position

---

### Function `GetFacilityDefinitionData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |
| `SlotHandle` | `const FSmartObjectSlotHandle&` |
| `DefinitionData` | [FFacilityDefineData](Struct/BuildingData__FFacilityDefineData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetFacilityDefinitionData(const UObject* Context,const FSmartObjectSlotHandle& SlotHandle,FFacilityDefineData& DefinitionData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the facility definition data via a smart object slot handle

---

### Function `StopGameplayBehavior`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |
| `Avatar` | `AActor*` |
| `BehaviorToStop` | `TSubclassOf<UGameplayBehavior>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool StopGameplayBehavior(const UObject* Context,AActor* Avatar, TSubclassOf<UGameplayBehavior> BehaviorToStop);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Stops the specified GameplayBehavior class on the avatar actor

---

### Function `GetNearestSlotTransformAndSlotHandle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `SmartObjectComponent` | `USmartObjectComponent*` |
| `OutSlotHandle` | `FSmartObjectSlotHandle&` |
| `FilterClass` | `TSubclassOf<UNavigationQueryFilter>` |
| `Transform` | `FTransform&` |
| `UserTag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool GetNearestSlotTransformAndSlotHandle(AEastRimWorldAIController* Agent ,USmartObjectComponent* SmartObjectComponent,FSmartObjectSlotHandle& OutSlotHandle, TSubclassOf<UNavigationQueryFilter> FilterClass , FTransform& Transform,const FGameplayTag& UserTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the transform and handle of the nearest smart object slot matching the user tag for the agent

---

### Function `GetSlotTransformAndSlotHandleByIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldAIController](Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `SmartObjectComponent` | `USmartObjectComponent*` |
| `SlotIndex` | `int32` |
| `OutSlotHandle` | `FSmartObjectSlotHandle&` |
| `OutTransform` | `FTransform&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool GetSlotTransformAndSlotHandleByIndex(AEastRimWorldAIController* Agent ,USmartObjectComponent* SmartObjectComponent,int32 SlotIndex,FSmartObjectSlotHandle& OutSlotHandle,FTransform& OutTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the smart object slot transform and handle by slot index

---

### Function `GetNavigableNearestSlotLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | const [AEastRimWorldAIController](Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `SmartObjectComponent` | `USmartObjectComponent*` |
| `FilterClass` | `TSubclassOf<UNavigationQueryFilter>` |
| `UserTag` | `const FGameplayTag&` |
| `Location` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool GetNavigableNearestSlotLocation(const AEastRimWorldAIController* Agent , USmartObjectComponent* SmartObjectComponent , TSubclassOf<UNavigationQueryFilter> FilterClass , const FGameplayTag& UserTag , FVector& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得能寻路到的距离最近的槽位的位置

---

### Function `GetFirstSlotHandleByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SmartObjectComponent` | `USmartObjectComponent*` |
| `UserTag` | `const FGameplayTag&` |
| `OutSlotHandle` | `FSmartObjectSlotHandle&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool GetFirstSlotHandleByTag(USmartObjectComponent* SmartObjectComponent,const FGameplayTag& UserTag,FSmartObjectSlotHandle& OutSlotHandle);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得槽位的Handle

---

### Function `GetGameTimeByInputSecondNoStartTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `OutYear` | `int&` |
| `OutMonths` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `int&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetGameTimeByInputSecondNoStartTime(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutMonths,int& OutDays,int& OutHour);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> -----------游戏时间 Start-----------
> 根据输入游戏时长获取对应游戏时间(不包含游戏开始时间)

---

### Function `GetGameTimeByInputSecond`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `OutYear` | `int&` |
| `OutMonths` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `int&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetGameTimeByInputSecond(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutMonths,int& OutDays,int& OutHour);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据输入游戏时长获取对应游戏时间

---

### Function `GameTimeToYearDayHour`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `OutYear` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `int&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GameTimeToYearDayHour(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutDays,int& OutHour);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据输入游戏时长获取对应游戏时间

---

### Function `GetGameRemainingTimeByInputSecond`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `OutYear` | `int&` |
| `OutMonths` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `int&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetGameRemainingTimeByInputSecond(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutMonths,int& OutDays,int& OutHour);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Converts the input duration in seconds into remaining game time as years, months, days, and hours

---

### Function `GetGameRemainingTimeByInputSecondDecHour`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `OutYear` | `int&` |
| `OutMonths` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetGameRemainingTimeByInputSecondDecHour(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutMonths,int& OutDays,float& OutHour);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据输入的时长获取满足一些需要计算剩余时间的需求

---

### Function `GetGameYearAndDayByInputSecond`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `OutYear` | `int&` |
| `OutDays` | `int&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetGameYearAndDayByInputSecond(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutDays);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Converts the input game duration in seconds into game years and days

---

### Function `GetGameSeasonByInputSecond`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `OutSeason` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetGameSeasonByInputSecond(const float& InSecond,class AERW_GameModeBase* InGameMode,float& OutSeason);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据输入游戏时长获取对应游戏中的季节

---

### Function `CalcPercentOfYear`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static float CalcPercentOfYear(const float& InSecond,class AERW_GameModeBase* InGameMode);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Calculates the percentage of a game year represented by the input duration in seconds

---

### Function `ConvertToDays`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static float ConvertToDays(const float& InSecond,class AERW_GameModeBase* InGameMode);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 秒数转换为天数

---

### Function `GetTimeofUltraDynamicSky`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static float GetTimeofUltraDynamicSky(const float& InSecond,class AERW_GameModeBase* InGameMode);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取游戏当前时间(游戏进行时间+游戏开始时间)转换成UltraDynamicSky的时间

---

### Function `CalUDSDayLength`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `seasonIndex` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static float CalUDSDayLength(class AERW_GameModeBase* InGameMode, int seasonIndex);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 计算白天的对应的分钟数

---

### Function `CalUDSNightLength`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `seasonIndex` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static float CalUDSNightLength(class AERW_GameModeBase* InGameMode, int seasonIndex);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 计算晚上的对应的分钟数

---

### Function `GetDawnTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `seasonIndex` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static float GetDawnTime(class AERW_GameModeBase* InGameMode, int seasonIndex);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取黎明时间

---

### Function `GetDuskTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| `seasonIndex` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static float GetDuskTime(class AERW_GameModeBase* InGameMode, int seasonIndex);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取黄昏时间

---

### Function `ConvertDayToText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Days` | `const int32&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ConvertDayToText(const int32& Days,class AERW_GameModeBase* InGameMode);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 转换天数为文本X年X天

---

### Function `ConvertSecondToText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ConvertSecondToText(const float& InSecond,class AERW_GameModeBase* InGameMode);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 转换秒数为文本X年X天

---

### Function `ConvertSecondToTimeText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ConvertSecondToTimeText(const float& InSecond, class AERW_GameModeBase* InGameMode);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 显示倒计时的时间文本（大于年显示年，大于天显示天，大于小时仅显示小时，小雨小时显示秒）

---

### Function `FormatTimeText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText FormatTimeText(const float& InSecond, class AERW_GameModeBase* InGameMode);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 显示为游戏时间：XX天XX小时，小时显示小数点后1位

---

### Function `SecondToCountdownText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | class [AERW_GameModeBase](Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText SecondToCountdownText(const float& InSecond, class AERW_GameModeBase* InGameMode);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 显示倒计时的时间文本（显示x天x时x秒）

---

### Function `ReplacesArgsByArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `scrText` | `const FText&` |
| `arr` | `const TArray<float>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ReplacesArgsByArray(const FText& scrText,const TArray<float>& arr);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 使用浮点数组替换字符串中的占位符

---

### Function `ReplacesArgsByStrArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `scrText` | `const FText&` |
| `arr` | `const TArray<FString>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ReplacesArgsByStrArray(const FText& scrText,const TArray<FString>& arr);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 使用字符串数组替换字符串中的占位符

---

### Function `ReplacesArgsByIndexToArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InText` | `const FText &` |
| `Value` | `const TArray<float> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ReplacesArgsByIndexToArray(const FText & InText,const TArray<float> & Value);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 替换字符占位符，通过占位符索引数组中的数据

---

### Function `ReplacesArgsByIndexToStrArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InText` | `const FText &` |
| `Value` | `const TArray<FString> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ReplacesArgsByIndexToStrArray(const FText & InText,const TArray<FString> & Value);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 替换字符占位符，通过占位符索引数组中的数据(字符串数组)

---

### Function `CheckPointOnPolygon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPoint` | `const FVector &` |
| `Vertex` | `const TArray<FVector> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool CheckPointOnPolygon(const FVector & InPoint,const TArray<FVector> & Vertex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否在多边型内部

---

### Function `GetScreenBoxToWorldPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FVector>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |
| `InStartPos` | `const FVector2D &` |
| `InEndPos` | `const FVector2D &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static TArray<FVector> GetScreenBoxToWorldPoint(const UObject* Context,const FVector2D & InStartPos,const FVector2D & InEndPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 在屏幕上起点到终点构成的框到地面的坐标

---

### Function `CalculateNormal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `P1` | `const FVector&` |
| `P2` | `const FVector&` |
| `P3` | `const FVector&` |
| `P4` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FVector CalculateNormal(const FVector& P1, const FVector& P2, const FVector& P3, const FVector& P4);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取四个点构成的面的方向

---

### Function `IsPointInQuadrilateral`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `P` | `const FVector&` |
| `P1` | `const FVector&` |
| `P2` | `const FVector&` |
| `P3` | `const FVector&` |
| `P4` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool IsPointInQuadrilateral(const FVector& P, const FVector& P1, const FVector& P2, const FVector& P3, const FVector& P4);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 判断是否在四边形内部

---

### Function `CheckMouseOnViewport`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool CheckMouseOnViewport();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检测鼠标是否在UI上

---

### Function `RandomIntegerInRange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `n` | `int32` |
| `min` | `int32` |
| `max` | `int32` |
| `OutResult` | `TArray<int32>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool RandomIntegerInRange(int32 n,int32 min,int32 max,TArray<int32>& OutResult);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从范围中随机n个不同的数

---

### Function `SaveCaptureScene`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UTexture2D*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `IsSave` | `bool` |
| `SceneCapture` | `class USceneCaptureComponent2D*` |
| `SavePath` | `const FString&` |
| `0` | `int32 NewWidth =` |
| `0` | `int32 NewHeight =` |
| `100` | `int32 CompressionQuality =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static UTexture2D* SaveCaptureScene(bool IsSave, class USceneCaptureComponent2D* SceneCapture, const FString& SavePath, int32 NewWidth = 0, int32 NewHeight = 0, int32 CompressionQuality = 100);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> --------------拍照 Start--------------------

---

### Function `LoadTextureFromFile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UTexture2D*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FilePath` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static UTexture2D* LoadTextureFromFile(const FString& FilePath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 将png转为texture2d

---

### Function `SetHighResScreenshotMaskEnabled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bEnabled` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SetHighResScreenshotMaskEnabled(bool bEnabled);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置高分辨率截图遮罩开启

---

### Function `ClipCharacterHoleBodyPhot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UTexture2D*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FullPath` | `const FString&` |
| `TargetSize` | `FVector2D&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static UTexture2D* ClipCharacterHoleBodyPhot(const FString& FullPath,FVector2D& TargetSize);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Clips the character full-body photo file and returns it as a Texture2D, outputting the target size

---

### Function `CaptureCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FullPath` | `const FString&` |
| `Character` | `ACharacter*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool CaptureCharacter(const FString& FullPath,ACharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Captures a full-body portrait of the character and saves it to the given file path

---

### Function `GetLeafTags`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RootTag` | `const FGameplayTag&` |
| `OutLeafTags` | `TArray<FGameplayTag>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetLeafTags(const FGameplayTag& RootTag, TArray<FGameplayTag>& OutLeafTags);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取标签最下层的所有子标签

---

### Function `GetAllChildTags`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FGameplayTag>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RootTag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static TArray<FGameplayTag> GetAllChildTags(const FGameplayTag& RootTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取标签的所有子标签不包含下一层

---

### Function `GetParentTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGameplayTag` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Tag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FGameplayTag GetParentTag(const FGameplayTag& Tag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取上一级标签

---

### Function `IsHaveChildTags`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RootTag` | `const FGameplayTag&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool IsHaveChildTags(const FGameplayTag& RootTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否有子标签

---

### Function `GetTeamMaxAttributes`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamMaxAttributes` | `UPARAM(ref) TMap<FName,float>&` |
| `OtherCharacerData` | const TArray<[FEastRimWorldCharacterData](Struct/CharacterStruct__FEastRimWorldCharacterData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void GetTeamMaxAttributes(UPARAM(ref) TMap<FName,float>& TeamMaxAttributes,const TArray<FEastRimWorldCharacterData>& OtherCharacerData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取队伍中最大属性值map,传入的TeamMaxAttributes要包含一个的角色属性数据

---

### Function `GetAllObjectByClass`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<UObject*>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ClassToLookFor` | `const UClass*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static TArray<UObject*> GetAllObjectByClass(const UClass* ClassToLookFor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns all UObject instances of the specified class

---

### Function `AppendItemSimpleDataArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetArray` | UPARAM(ref) TArray<[FItemSimpleData](Struct/CommonStruct__FItemSimpleData.md)>& |
| `SourceArray` | UPARAM(ref) const TArray<[FItemSimpleData](Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void AppendItemSimpleDataArray(UPARAM(ref) TArray<FItemSimpleData>& TargetArray,UPARAM(ref) const TArray<FItemSimpleData>& SourceArray);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Appends the source FItemSimpleData array to the target array

---

### Function `GetAptitudeAttributeString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetAptitudeAttributeString(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 1-资质

---

### Function `GetComprehensionAttributeString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetComprehensionAttributeString(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 2-悟性

---

### Function `GetMoveSpeedAttributeString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetMoveSpeedAttributeString(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 3-移动速度

---

### Function `GetPreferenceTemperatureAttributeString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetPreferenceTemperatureAttributeString(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 4-温度耐受(适宜温度范围)

---

### Function `GetAttachAttributeString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetAttachAttributeString(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 5-攻击属性值

---

### Function `GetAttachAttributeStringFromSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | [FCharacterSaveData](WorldSystem/WorldCharacterData__FCharacterSaveData.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetAttachAttributeStringFromSaveData(FCharacterSaveData CharacterData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the attack attribute string from character save data

---

### Function `GetResistanceAttributeString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetResistanceAttributeString(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 6-抗性属性值

---

### Function `GetResistanceAttributeStringFromSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | [FCharacterSaveData](WorldSystem/WorldCharacterData__FCharacterSaveData.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetResistanceAttributeStringFromSaveData(FCharacterSaveData CharacterData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the resistance attribute string from character save data

---

### Function `GetCriticalAttributeString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetCriticalAttributeString(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 7-暴击属性值

---

### Function `GetCriticalAttributeStringFromSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | [FCharacterSaveData](WorldSystem/WorldCharacterData__FCharacterSaveData.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetCriticalAttributeStringFromSaveData(FCharacterSaveData CharacterData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the critical-hit attribute string from character save data

---

### Function `GetSubjoinAttackAttributeString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetSubjoinAttackAttributeString(AEastRimWorldCharacter* Character);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 8-附伤

---

### Function `GetSubjoinAttackAttributeStringFromSaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterData` | [FCharacterSaveData](WorldSystem/WorldCharacterData__FCharacterSaveData.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetSubjoinAttackAttributeStringFromSaveData(FCharacterSaveData CharacterData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets the bonus-damage (subjoin attack) attribute string from character save data

---

### Function `Sort`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category=" Array|Sort" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `UPARAM(ref)TArray<UObject*>&array_to_sort` |
| `array_to_sort_ref` | `TArray<UObject*>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category=" Array|Sort") static bool Sort(UPARAM(ref)TArray<UObject*>&array_to_sort,TArray<UObject*>& array_to_sort_ref);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Object数组排序

---

### Function `SortMapByValueDescending`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Map Sorting" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Map` | `UPARAM(ref) TMap<FGameplayAttribute, float>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Map Sorting") static void SortMapByValueDescending(UPARAM(ref) TMap<FGameplayAttribute, float>& Map);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sorts the FGameplayAttribute-to-float map by value in descending order

---

### Function `GetLevelName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Level` | `const TSoftObjectPtr<UWorld> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FName GetLevelName(const TSoftObjectPtr<UWorld> & Level);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the level name from a soft world reference

---

### Function `GetActorLevelName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `const AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FString GetActorLevelName(const AActor* Actor);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取actor所在的关卡名字

---

### Function `CalculationProbability`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InProbability` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static bool CalculationProbability(float InProbability);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Performs a random roll against the given probability and returns whether it succeeds

---

### Function `CreateDecalComponentAtLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `UDecalComponent*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Outer` | `UObject*` |
| `GridPosition` | const [FGridPosition](ERW_CommonTypes__FGridPosition.md)& |
| `(unnamed / type only)` | `TSoftObjectPtr<UMaterialInterface> DecalMaterial=nullptr` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static UDecalComponent* CreateDecalComponentAtLocation(UObject* Outer,const FGridPosition& GridPosition,TSoftObjectPtr<UMaterialInterface> DecalMaterial=nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 在指定位置创建一个贴花组件

---

### Function `LegalValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddValue` | `float &` |
| `CurValue` | `float` |
| `MinValue` | `float` |
| `MaxValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void LegalValue(float & AddValue,float CurValue, float MinValue,float MaxValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 数值合法化

---

### Function `GetUIText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InStringTableID` | `const FName&` |
| `InKey` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FText GetUIText(const FName& InStringTableID,const FString& InKey);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取一个StringTable中的文本

---

### Function `GetMartialClassText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="UI" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InClass` | [EMartialArtsAttributeClassification](Struct/CommonEnum__EMartialArtsAttributeClassification.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="UI") static FText GetMartialClassText(EMartialArtsAttributeClassification InClass);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 武学分类枚举 → 中文文本(查 UI_StringTable, key=MartialClass_<枚举名>;策划在 UI_StringTable 改文案)

---

### Function `GetTextLen`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InText` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static int32 GetTextLen(const FString& InText);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算文本的字符长度

---

### Function `GetTextLimit`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InText` | `const FString&` |
| `MaxLen` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetTextLimit(const FString& InText, int32 MaxLen);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 限制文本长度（英文和半角符号算一个长度，中文等双字节算两个长度）

---

### Function `GetFormatText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ScrText` | `const FFormatText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText GetFormatText(const FFormatText& ScrText);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 格式化替换文本

---

### Function `CalDrugResistance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BaseDrugResistance` | `float` |
| `UseTime` | `int32` |
| `AntDrugResistance` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static float CalDrugResistance(float BaseDrugResistance, int32 UseTime,float AntDrugResistance);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Calculates the drug resistance value from base resistance, use count, and per-use resistance increment

---

### Function `CalDrugResistanceBySaveData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TMap<FName, float>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterSaveData` | const [FCharacterSaveData](WorldSystem/WorldCharacterData__FCharacterSaveData.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static TMap<FName, float> CalDrugResistanceBySaveData(const FCharacterSaveData & CharacterSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Calculates the per-drug resistance value map from character save data

---

### Function `FormatSecondsToMMSS`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TotalSeconds` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static FString FormatSecondsToMMSS(int32 TotalSeconds);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 格式化显示秒数为MM:SS格式

---

### Function `SetWidgetAtPlayerHeadPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `Widget` | `class UUserWidget*` |
| `OutAnchorWorldLocation` | `FVector&` |
| `(unnamed / type only)` | `float HeadZOffset = 100.f` |
| `(unnamed / type only)` | `FVector2D Alignment = FVector2D(0.5f` |
| `(unnamed / type only)` | `0.5f)` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", AdvancedDisplay="HeadZOffset,Alignment")) static bool SetWidgetAtPlayerHeadPosition(const UObject* WorldContextObject, class UUserWidget* Widget, FVector& OutAnchorWorldLocation, float HeadZOffset = 100.f, FVector2D Alignment = FVector2D(0.5f, 0.5f));`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取玩家头顶的屏幕坐标，把已创建的 Widget 一次性定位到该处（调用后不跟随，可原地播动画）。
> @param Widget                已 CreateWidget 出来的控件（本函数内部会确保其加到 viewport）
> @param HeadZOffset           头顶相对角色原点的高度偏移（cm）
> @param Alignment             控件对齐锚点，(0.5,0.5)=控件中心对齐到该点
> @param OutAnchorWorldLocation 输出：本次用到的头顶世界坐标。存下来后每帧传给 SetWidgetAtWorldPosition，
> 即可让弹窗钉在“生成时那一点”而非跟随玩家（追尾相机下必须这样才不粘玩家）。
> @return                      头顶在屏幕内、定位成功返回 true；在屏幕外返回 false（不改位置）

---

### Function `SetWidgetAtWorldPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `Widget` | `class UUserWidget*` |
| `WorldLocation` | `FVector` |
| `(unnamed / type only)` | `FVector2D Alignment = FVector2D(0.5f` |
| `(unnamed / type only)` | `0.5f)` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", AdvancedDisplay="Alignment")) static bool SetWidgetAtWorldPosition(const UObject* WorldContextObject, class UUserWidget* Widget, FVector WorldLocation, FVector2D Alignment = FVector2D(0.5f, 0.5f));`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把已创建的 Widget 一次性定位到某个固定世界坐标对应的屏幕位置。放到 Widget 的 Tick 里每帧调用，
> 就能让它“钉在世界那一点”，玩家走动/相机移动时不跟随玩家（在追尾相机里这才是真正的‘不跟随’）。
> @param Widget         已加到 viewport 的控件
> @param WorldLocation  要钉住的固定世界坐标（一般来自 SetWidgetAtPlayerHeadPosition 的输出，生成时存一次）
> @param Alignment      控件对齐锚点，(0.5,0.5)=控件中心对齐到该点
> @return               该点在屏幕内、定位成功返回 true；在屏幕外返回 false（不改位置）

---

### Function `GetCharacterStringName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFirstName` | `FText` |
| `InName` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FString GetCharacterStringName(FText InFirstName,FText InName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Builds the character's string name by combining the first name and given name

---

### Function `CastResourceToGrowScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `InResource` | const TMap<FName,[FItemSimpleData](Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static float CastResourceToGrowScore(const UObject* WorldContextObject, const TMap<FName,FItemSimpleData>& InResource);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把物资转为NPC势力成长积分

---

### Function `GetMartialArtsExperienceBonusByMaType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGameplayAttribute` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeClassification` | [EMartialArtsAttributeClassification](Struct/CommonEnum__EMartialArtsAttributeClassification.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FGameplayAttribute GetMartialArtsExperienceBonusByMaType(EMartialArtsAttributeClassification AttributeClassification);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过武术属性分类获取对应的武术经验加成属性

---

### Function `AddLooseGameplayTagToASC`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetASC` | `UAbilitySystemComponent*` |
| `LooseGameplayTag` | `FGameplayTag` |
| `1` | `int32 Count =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void AddLooseGameplayTagToASC(UAbilitySystemComponent* TargetASC , FGameplayTag LooseGameplayTag, int32 Count = 1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加一个标记性的Tag

---

### Function `RemoveLooseGameplayTagToASC`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetASC` | `UAbilitySystemComponent*` |
| `LooseGameplayTag` | `FGameplayTag` |
| `1` | `int32 Count =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void RemoveLooseGameplayTagToASC(UAbilitySystemComponent* TargetASC , FGameplayTag LooseGameplayTag, int32 Count = 1);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除一个标记性的Tag

---

### Function `CalcStartAndEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartGrid` | [FGridPosition](ERW_CommonTypes__FGridPosition.md)& |
| `EndGrid` | [FGridPosition](ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void CalcStartAndEnd(FGridPosition& StartGrid,FGridPosition& EndGrid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Calculates and normalizes the start and end grid positions, modifying them in place

---

### Function `LimitDesignSize`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGridPosition](ERW_CommonTypes__FGridPosition.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartGrid` | UPARAM(ref)[FGridPosition](ERW_CommonTypes__FGridPosition.md)& |
| `EndGrid` | UPARAM(ref)[FGridPosition](ERW_CommonTypes__FGridPosition.md)& |
| `MinX` | `const int32 &` |
| `MinY` | `const int32 &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FGridPosition LimitDesignSize(UPARAM(ref)FGridPosition& StartGrid,UPARAM(ref)FGridPosition& EndGrid , const int32 & MinX ,const int32 & MinY);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 限制区域拖拽大小(返回限制后大小)

---

### Function `GetTexture2DDynamicSize`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FVector2D` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTexture2DDynamicReference` | `UTexture2DDynamic*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static FVector2D GetTexture2DDynamicSize(UTexture2DDynamic* InTexture2DDynamicReference);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取下载图片大小

---

### Function `GetAnimalTroughLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAnimal` | [AEastRimWorldCharacter_Animal](Character/EastRimWorldCharacter_Animal__AEastRimWorldCharacter_Animal.md)* |
| `OutLocation` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static bool GetAnimalTroughLocation(AEastRimWorldCharacter_Animal* InAnimal, FVector& OutLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据动物体型获取食槽位置

---

### Function `FindReachablePointAroundTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Navigation" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `A` | `const FVector&` |
| `B` | `const FVector&` |
| `Radius` | `float` |
| `NumSamples` | `int32` |
| `WeightToA` | `float` |
| `OutBestPoint` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category="Navigation") static bool FindReachablePointAroundTarget( UObject* WorldContextObject, const FVector& A, const FVector& B, float Radius, int32 NumSamples, float WeightToA, FVector& OutBestPoint );`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从点A到点B，寻找目标点周围最近且可导航的点。
> @param WorldContextObject - 一般传 GetWorld()
> @param A - 起点位置
> @param B - 目标点
> @param Radius - 目标点周围搜索半径
> @param NumSamples - 搜索点数量（环形采样数量）
> @param WeightToA - 靠近A的权重（越大越靠近A）

---

### Function `SetConsoleVariable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `VariableName` | `const FString&` |
| `Value` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SetConsoleVariable(const FString& VariableName,const FString& Value);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the value of the specified console variable

---

### Function `GetGEAttributeValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayEffect` | `const TSubclassOf<UGameplayEffect>&` |
| `InLevel` | `int` |
| `ThisAttribute` | `FGameplayAttribute` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static float GetGEAttributeValue(const TSubclassOf<UGameplayEffect>& GameplayEffect, int InLevel, FGameplayAttribute ThisAttribute);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 读取GameplayEffect中指定属性的值

---

### Function `RemoveGuidFromArray`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Array|Filter" |
| Return type | `TArray<FGuid>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InArray` | `const TArray<FGuid>&` |
| `ToRemove` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Array|Filter") static TArray<FGuid> RemoveGuidFromArray(const TArray<FGuid>& InArray, FGuid ToRemove);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> —— 出征互斥辅助：UnrealMCP 接不了数组函数的 wildcard 定型，故用纯函数返回过滤后的新数组 ——
> 从 GUID 数组中移除指定 GUID（返回新数组）

---

### Function `FilterCharactersExcludingGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Array|Filter" |
| Return type | TArray<[FCharacterSaveData](WorldSystem/WorldCharacterData__FCharacterSaveData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InArray` | const TArray<[FCharacterSaveData](WorldSystem/WorldCharacterData__FCharacterSaveData.md)>& |
| `ExcludeGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Array|Filter") static TArray<FCharacterSaveData> FilterCharactersExcludingGuid(const TArray<FCharacterSaveData>& InArray, FGuid ExcludeGuid);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 从角色存档数组中剔除 CharacterGuid == ExcludeGuid 的项（返回新数组）

---

### Function `MakeSelectedCountText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Array|Filter" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Selected` | `const TArray<FGuid>&` |
| `Total` | `int32` |
| `bHasCommander` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category="Array|Filter") static FText MakeSelectedCountText(const TArray<FGuid>& Selected, int32 Total, bool bHasCommander);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 生成"已选数/总数"文本（已选 = 弟子数 + 指挥官(bHasCommander 时 +1)；MCP 无法求数组长度，故用 C++）

---
