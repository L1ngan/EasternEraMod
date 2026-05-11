# `class` `UERW_FunctionLibrary`

**源码头文件：** `EastRimWorld/ERW_FunctionLibrary.h`

---

## 功能说明（来自头文件注释）

> 公共函数库类

## 蓝图暴露函数

### 函数 `SetGameMode`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameModeBase` | `AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void SetGameMode(AERW_GameModeBase* GameModeBase);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置GameMode

---

### 函数 `SetWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CurWorldPlace` | `AWorldPlace*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void SetWorldPlace(AWorldPlace* CurWorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置当前关卡

---

### 函数 `SetCanAffectNavigation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Component` | `UActorComponent*` |
| `CanAffect` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void SetCanAffectNavigation(UActorComponent* Component , bool CanAffect);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置组件是否影响寻路

---

### 函数 `AddAssembleCollision`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PartType` | `EAssemblePartType` |
| `StaticMeshComponent` | `UStaticMeshComponent*` |
| `AssembleCollisions` | `UPARAM(Ref) TMap<EAssemblePartType , FStaticMeshComponents>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void AddAssembleCollision(EAssemblePartType PartType , UStaticMeshComponent* StaticMeshComponent , UPARAM(Ref) TMap<EAssemblePartType , FStaticMeshComponents>& AssembleCollisions);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 记录组装建筑碰撞组件

---

### 函数 `SetDecalSize`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DecalComponent` | `UDecalComponent*` |
| `Size` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void SetDecalSize(UDecalComponent* DecalComponent , const FVector& Size);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置贴花尺寸

---

### 函数 `SwapSize`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Size` | `const FIntVector&` |
| `RotateOrientation` | `ERotateOrientation` |
| `NewSize` | `FIntVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static void SwapSize(const FIntVector& Size , ERotateOrientation RotateOrientation , FIntVector& NewSize);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 根据旋转朝向交换尺寸

---

### 函数 `IsActiveGameplayEffectHandleValid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Handle` | `const FActiveGameplayEffectHandle&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static bool IsActiveGameplayEffectHandleValid(const FActiveGameplayEffectHandle& Handle) { return Handle.IsValid(); }`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> ActiveGameplayEffectHandle是否有效

---

### 函数 `SortByCharacterAbility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Descending` | `bool` |
| `Abilities` | `UPARAM(ref) TMap<AEastRimWorldCharacter_Human* , float>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void SortByCharacterAbility(bool Descending , UPARAM(ref) TMap<AEastRimWorldCharacter_Human* , float>& Abilities);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过角色能力进行排序

---

### 函数 `GetAreaRange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Start` | `const FGridPosition&` |
| `End` | `const FGridPosition&` |
| `Min` | `FVector&` |
| `Max` | `FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static void GetAreaRange(const FGridPosition& Start , const FGridPosition& End , FVector& Min , FVector& Max);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得范围内最小最大点

---

### 函数 `GetGridPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |
| `GridPositionType` | `EGridPositionType` |
| `GridPos` | `FGridPosition&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static void GetGridPosition(const FVector& Location , EGridPositionType GridPositionType , FGridPosition& GridPos);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 将世界位置转换成格子坐标位置

---

### 函数 `GetGridWorldPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | `const FGridPosition&` |
| `GridPositionType` | `EGridPositionType` |
| `WorldPos` | `FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static void GetGridWorldPosition(const FGridPosition& GridPos , EGridPositionType GridPositionType , FVector& WorldPos);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 将格子坐标位置转换成世界位置

---

### 函数 `GetGridSideWorldPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Pos` | `const FVector&` |
| `GridPos` | `const FGridPosition&` |
| `GridWorldPos` | `const FVector&` |
| `SideWorldPos` | `FVector&` |
| `RotateOrientation` | `ERotateOrientation&` |
| `DistributionType` | `EGridDistributionType&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static void GetGridSideWorldPosition(const FVector& Pos , const FGridPosition& GridPos , const FVector& GridWorldPos , FVector& SideWorldPos , ERotateOrientation& RotateOrientation , EGridDistributionType& DistributionType);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得网格边线中心的世界位置
> 
> @param Pos				点击世界位置
> @param GridPos			格子坐标
> @param GridWorldPos		格子中心世界坐标
> @param SideWorldPos		格子边线中心世界位置
> @param RotateOrientation	旋转朝向
> @param DistributionType	物体在格子中分布类型

---

### 函数 `GetGridPositionType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `EGridPositionType` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironType` | `EEnvironType` |
| `Size` | `const FIntPoint&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static EGridPositionType GetGridPositionType(EEnvironType EnvironType , const FIntPoint& Size);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 通过环境类型获得格子位置类型

---

### 函数 `SetSplineSampleInterval`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Spline` | `USplineComponent*` |
| `SegmentNum` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void SetSplineSampleInterval(USplineComponent* Spline , int32 SegmentNum);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置样条曲线采样间隔

---

### 函数 `GetSplineInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Spline` | `USplineComponent*` |
| `RelativePoses` | `TArray<FVector>&` |
| `WorldPoses` | `TArray<FVector>&` |
| `Tangents` | `TArray<FVector>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static void GetSplineInfos(USplineComponent* Spline , TArray<FVector>& RelativePoses , TArray<FVector>& WorldPoses , TArray<FVector>& Tangents);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得样条曲线的信息

---

### 函数 `IsPointsInsidePolygon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `const TArray<FVector>&` |
| `Locations` | `const TArray<FVector>&` |
| `IsRestrictArea` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static bool IsPointsInsidePolygon(const TArray<FVector>& Points , const TArray<FVector>& Locations , bool IsRestrictArea);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 判断点是否在多边形内

---

### 函数 `HasPointInsidePolygon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `const TArray<FVector>&` |
| `Locations` | `const TArray<FVector>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static bool HasPointInsidePolygon(const TArray<FVector>& Points , const TArray<FVector>& Locations);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 判断是否有点在多边形内, 有一个点在多边形内就返还true

---

### 函数 `GetLandscapeHeightAtLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Pos` | `const FVector&` |
| `Height` | `float&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static bool GetLandscapeHeightAtLocation(const FVector& Pos , float& Height);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得指定位置地形高度

---

### 函数 `GetGroundHeightAtLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `World` | `UWorld*` |
| `Location` | `const FVector&` |
| `OutHeight` | `float&` |
| `nullptr` | `AActor* ActorToIgnore =` |
| `（匿名/仅类型）` | `float TraceUp = 600.f` |
| `（匿名/仅类型）` | `float TraceDown = 1200.f` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , Category="World") static bool GetGroundHeightAtLocation(UWorld* World , const FVector& Location , float& OutHeight , AActor* ActorToIgnore = nullptr , float TraceUp = 600.f , float TraceDown = 1200.f);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检测地面高度：先在 Location 处沿垂直方向做线检测（ECC_GameTraceChannel16），
> 若未命中则回退为 GetLandscapeHeightAtLocation。
> @param ActorToIgnore 射线忽略的演员（可为空）

---

### 函数 `GetGroundHeightAtLocation_WC`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="World" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `Location` | `const FVector&` |
| `OutHeight` | `float&` |
| `nullptr` | `AActor* ActorToIgnore =` |
| `（匿名/仅类型）` | `float TraceUp = 600.f` |
| `（匿名/仅类型）` | `float TraceDown = 1200.f` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , Category="World" , meta=(WorldContext="WorldContextObject" , DisplayName="Get Ground Height At Location")) static bool GetGroundHeightAtLocation_WC(const UObject* WorldContextObject , const FVector& Location , float& OutHeight , AActor* ActorToIgnore = nullptr , float TraceUp = 600.f , float TraceDown = 1200.f);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 节点显示名可能为「Get Ground Height At Location」。

---

### 函数 `CompareGOAPCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Condition` | `const FGOAP_Condition&` |
| `Value` | `const FGOAP_Value&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static bool CompareGOAPCondition(const FGOAP_Condition& Condition , const FGOAP_Value& Value);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 比较GOAP条件是否满足

---

### 函数 `CompareCommonCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Condition` | `const FCommonCondition&` |
| `Value` | `const FConditionValue&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static bool CompareCommonCondition(const FCommonCondition& Condition , const FConditionValue& Value);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 比较通用条件是否满足

---

### 函数 `GetPathLocationsToTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AI|Navigation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AIOwner` | `const AController*` |
| `TargetLocation` | `const FVector&` |
| `FilterClass` | `TSubclassOf<UNavigationQueryFilter>` |
| `Locations` | `TArray<FVector>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , Category="AI|Navigation") static void GetPathLocationsToTarget(const AController* AIOwner , const FVector& TargetLocation , TSubclassOf<UNavigationQueryFilter> FilterClass , TArray<FVector>& Locations);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得从角色当前位置到目标要经过的位置

---

### 函数 `HasPathToTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AI|Navigation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AIOwner` | `const AController*` |
| `TargetLocation` | `const FVector&` |
| `nullptr` | `TSubclassOf<UNavigationQueryFilter> FilterClass =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable , Category="AI|Navigation") static bool HasPathToTarget(const AController* AIOwner , const FVector& TargetLocation , TSubclassOf<UNavigationQueryFilter> FilterClass = nullptr);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 从角色当前位置到目标位置是否能寻路到

---

### 函数 `IsPathAcrossDoor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PointA` | `const FVector&` |
| `PointB` | `const FVector` |
| `PathPoints` | `const TArray<FVector>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool IsPathAcrossDoor(const FVector& PointA , const FVector PointB , const TArray<FVector>& PathPoints);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 路径点是否穿过门

---

### 函数 `CalculateWeights`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Weights` | `const TMap<int32 , int32>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static int32 CalculateWeights(const TMap<int32 , int32>& Weights){return CalculateWeights<int32>(Weights);}`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RandomWeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InMap` | `const TMap<int,int>&` |
| `Num` | `const int` |
| `OutValue` | `TArray<int>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void RandomWeight(const TMap<int,int>& InMap,const int Num,TArray<int>& OutValue) { RandomWeight<int>(InMap,Num,OutValue); };`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RandomWeightPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SelectPercent` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool RandomWeightPercent(float SelectPercent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 按几率随机抽中
> / @param SelectPercent （0-1百分比,大于1必中）
> / @return true 抽中 false 未抽中

---

### 函数 `RandDropItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MaxDropNum` | `int32` |
| `DropItemConfig` | `const TMap<FName, float>&` |
| `OutAwards` | `UPARAM(ref) TMap<FName, FItemSimpleData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void RandDropItem(int32 MaxDropNum,const TMap<FName, float>& DropItemConfig,UPARAM(ref) TMap<FName, FItemSimpleData>& OutAwards);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SortBuildingByBuildingScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<ABuildingActorBase*>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Buildings` | `const TArray<ABuildingActorBase*>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static TArray<ABuildingActorBase*> SortBuildingByBuildingScore(const TArray<ABuildingActorBase*> Buildings);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CalcCarryItemNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | `AEastRimWorldAIController*` |
| `GeneralData` | `const FInventoryGeneralData&` |
| `ItemNum` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static int32 CalcCarryItemNum(AEastRimWorldAIController* Agent , const FInventoryGeneralData& GeneralData , int32 ItemNum);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算携带物品的数量

---

### 函数 `CalcGoalPriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalPriority` | `int32` |
| `IsLeftMouseButton` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) static int32 CalcGoalPriority(int32 GoalPriority , bool IsLeftMouseButton);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 计算GOAP目标优先级

---

### 函数 `SortInventoryQuality`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<UInventoryItemInstance*>&` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Items` | `UPARAM(ref) TArray<UInventoryItemInstance*> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static TArray<UInventoryItemInstance*>& SortInventoryQuality(UPARAM(ref) TArray<UInventoryItemInstance*> & Items);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 物品按照品质从高到低排序

---

### 函数 `AddBuildNames`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Category` | `const FName&` |
| `ID` | `const FName&` |
| `BuildNames` | `UPARAM(ref) TMap<FName , FIDs>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void AddBuildNames(const FName& Category , const FName& ID , UPARAM(ref) TMap<FName , FIDs>& BuildNames);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据类别加入BuildName

---

### 函数 `ConvertFNameToEItemType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `EItemType` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Name` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static EItemType ConvertFNameToEItemType(const FName& Name);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 转换类型

---

### 函数 `GetPointOnCircle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Radius` | `float` |
| `AngleDegrees` | `float` |
| `Rotation` | `const FRotator&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FVector GetPointOnCircle(float Radius, float AngleDegrees, const FRotator& Rotation) { float AngleRadians = FMath::DegreesToRadians(AngleDegrees); float X = Radius * FMath::Cos(AngleRadians); float Y = Radius * FMath::Sin(AngleRadians); FVector LocalPoint(X, Y, 0); FVector RotatedPoint = Rotation.RotateVector(LocalPoint); return RotatedPoint; }`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RotateDirectionVector`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DirectionVector` | `const FVector&` |
| `Rotation` | `const FRotator&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FVector RotateDirectionVector(const FVector& DirectionVector, const FRotator& Rotation) { FMatrix RotationMatrix = FRotationMatrix(Rotation); return RotationMatrix.TransformVector(DirectionVector); }`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `UpdateSmartObjectTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |
| `Handle` | `const FSmartObjectHandle` |
| `NewTransform` | `const FTransform&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool UpdateSmartObjectTransform(const UObject* Context,const FSmartObjectHandle Handle, const FTransform& NewTransform);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新智能对象的位置

---

### 函数 `GetSmartObjectSlotTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FTransform` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |
| `SlotHandle` | `const FSmartObjectSlotHandle` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FTransform GetSmartObjectSlotTransform(const UObject* Context,const FSmartObjectSlotHandle SlotHandle);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取智能对象插槽的位置

---

### 函数 `RequestGameplayTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameplayTag` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TagName` | `const FName&` |
| `（匿名/仅类型）` | `bool ErrorIfNotFound=true` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FGameplayTag RequestGameplayTag(const FName& TagName,bool ErrorIfNotFound=true);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> FName转标签

---

### 函数 `AppendTwoAttributeMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<FString , float>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Map1` | `const TMap<FString,float>&` |
| `Map2` | `const TMap<FString,float> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static TMap<FString , float> AppendTwoAttributeMap(const TMap<FString,float>& Map1,const TMap<FString,float> & Map2);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 拼接两个Key为GameplayAttribut，Value为float的TMap

---

### 函数 `RegisterSmartObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |
| `SmartObjectComponent` | `class USmartObjectComponent*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool RegisterSmartObject(const UObject* Context,class USmartObjectComponent* SmartObjectComponent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注册一个智能物体到子系统

---

### 函数 `UnregisterSmartObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |
| `SmartObjectComponent` | `class USmartObjectComponent*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool UnregisterSmartObject(const UObject* Context,class USmartObjectComponent* SmartObjectComponent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `FindSmartObjectByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |
| `Tag` | `const FGameplayTag&` |
| `OriginPos` | `const FVector&` |
| `RangeDis` | `float` |
| `OutResults` | `TArray<FSmartObjectRequestResult>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool FindSmartObjectByTag(const UObject* Context,const FGameplayTag& Tag,const FVector& OriginPos,float RangeDis,TArray<FSmartObjectRequestResult>& OutResults);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetFacilityDefinitionData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |
| `SlotHandle` | `const FSmartObjectSlotHandle&` |
| `DefinitionData` | `FFacilityDefineData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetFacilityDefinitionData(const UObject* Context,const FSmartObjectSlotHandle& SlotHandle,FFacilityDefineData& DefinitionData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `StopGameplayBehavior`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |
| `Avatar` | `AActor*` |
| `BehaviorToStop` | `TSubclassOf<UGameplayBehavior>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool StopGameplayBehavior(const UObject* Context,AActor* Avatar, TSubclassOf<UGameplayBehavior> BehaviorToStop);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetNearestSlotTransformAndSlotHandle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | `AEastRimWorldAIController*` |
| `SmartObjectComponent` | `USmartObjectComponent*` |
| `OutSlotHandle` | `FSmartObjectSlotHandle&` |
| `FilterClass` | `TSubclassOf<UNavigationQueryFilter>` |
| `Transform` | `FTransform&` |
| `UserTag` | `const FGameplayTag&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool GetNearestSlotTransformAndSlotHandle(AEastRimWorldAIController* Agent ,USmartObjectComponent* SmartObjectComponent,FSmartObjectSlotHandle& OutSlotHandle, TSubclassOf<UNavigationQueryFilter> FilterClass , FTransform& Transform,const FGameplayTag& UserTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetSlotTransformAndSlotHandleByIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | `AEastRimWorldAIController*` |
| `SmartObjectComponent` | `USmartObjectComponent*` |
| `SlotIndex` | `int32` |
| `OutSlotHandle` | `FSmartObjectSlotHandle&` |
| `OutTransform` | `FTransform&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool GetSlotTransformAndSlotHandleByIndex(AEastRimWorldAIController* Agent ,USmartObjectComponent* SmartObjectComponent,int32 SlotIndex,FSmartObjectSlotHandle& OutSlotHandle,FTransform& OutTransform);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetNavigableNearestSlotLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | `const AEastRimWorldAIController*` |
| `SmartObjectComponent` | `USmartObjectComponent*` |
| `FilterClass` | `TSubclassOf<UNavigationQueryFilter>` |
| `UserTag` | `const FGameplayTag&` |
| `Location` | `FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool GetNavigableNearestSlotLocation(const AEastRimWorldAIController* Agent , USmartObjectComponent* SmartObjectComponent , TSubclassOf<UNavigationQueryFilter> FilterClass , const FGameplayTag& UserTag , FVector& Location);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得能寻路到的距离最近的槽位的位置

---

### 函数 `GetFirstSlotHandleByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SmartObjectComponent` | `USmartObjectComponent*` |
| `UserTag` | `const FGameplayTag&` |
| `OutSlotHandle` | `FSmartObjectSlotHandle&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool GetFirstSlotHandleByTag(USmartObjectComponent* SmartObjectComponent,const FGameplayTag& UserTag,FSmartObjectSlotHandle& OutSlotHandle);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得槽位的Handle

---

### 函数 `GetGameTimeByInputSecondNoStartTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |
| `OutYear` | `int&` |
| `OutMonths` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `int&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetGameTimeByInputSecondNoStartTime(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutMonths,int& OutDays,int& OutHour);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> -----------游戏时间 Start-----------
> 根据输入游戏时长获取对应游戏时间(不包含游戏开始时间)

---

### 函数 `GetGameTimeByInputSecond`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |
| `OutYear` | `int&` |
| `OutMonths` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `int&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetGameTimeByInputSecond(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutMonths,int& OutDays,int& OutHour);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据输入游戏时长获取对应游戏时间

---

### 函数 `GameTimeToYearDayHour`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |
| `OutYear` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `int&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GameTimeToYearDayHour(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutDays,int& OutHour);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据输入游戏时长获取对应游戏时间

---

### 函数 `GetGameRemainingTimeByInputSecond`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |
| `OutYear` | `int&` |
| `OutMonths` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `int&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetGameRemainingTimeByInputSecond(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutMonths,int& OutDays,int& OutHour);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetGameRemainingTimeByInputSecondDecHour`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |
| `OutYear` | `int&` |
| `OutMonths` | `int&` |
| `OutDays` | `int&` |
| `OutHour` | `float&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetGameRemainingTimeByInputSecondDecHour(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutMonths,int& OutDays,float& OutHour);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据输入的时长获取满足一些需要计算剩余时间的需求

---

### 函数 `GetGameYearAndDayByInputSecond`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |
| `OutYear` | `int&` |
| `OutDays` | `int&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetGameYearAndDayByInputSecond(const float& InSecond,class AERW_GameModeBase* InGameMode,int& OutYear,int& OutDays);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetGameSeasonByInputSecond`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |
| `OutSeason` | `float&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetGameSeasonByInputSecond(const float& InSecond,class AERW_GameModeBase* InGameMode,float& OutSeason);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据输入游戏时长获取对应游戏中的季节

---

### 函数 `CalcPercentOfYear`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static float CalcPercentOfYear(const float& InSecond,class AERW_GameModeBase* InGameMode);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `ConvertToDays`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static float ConvertToDays(const float& InSecond,class AERW_GameModeBase* InGameMode);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 秒数转换为天数

---

### 函数 `GetTimeofUltraDynamicSky`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static float GetTimeofUltraDynamicSky(const float& InSecond,class AERW_GameModeBase* InGameMode);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取游戏当前时间(游戏进行时间+游戏开始时间)转换成UltraDynamicSky的时间

---

### 函数 `CalUDSDayLength`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGameMode` | `class AERW_GameModeBase*` |
| `seasonIndex` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static float CalUDSDayLength(class AERW_GameModeBase* InGameMode, int seasonIndex);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 计算白天的对应的分钟数

---

### 函数 `CalUDSNightLength`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGameMode` | `class AERW_GameModeBase*` |
| `seasonIndex` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static float CalUDSNightLength(class AERW_GameModeBase* InGameMode, int seasonIndex);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 计算晚上的对应的分钟数

---

### 函数 `GetDawnTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGameMode` | `class AERW_GameModeBase*` |
| `seasonIndex` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static float GetDawnTime(class AERW_GameModeBase* InGameMode, int seasonIndex);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取黎明时间

---

### 函数 `GetDuskTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGameMode` | `class AERW_GameModeBase*` |
| `seasonIndex` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static float GetDuskTime(class AERW_GameModeBase* InGameMode, int seasonIndex);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取黄昏时间

---

### 函数 `ConvertDayToText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Days` | `const int32&` |
| `InGameMode` | `class AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ConvertDayToText(const int32& Days,class AERW_GameModeBase* InGameMode);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 转换天数为文本X年X天

---

### 函数 `ConvertSecondToText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ConvertSecondToText(const float& InSecond,class AERW_GameModeBase* InGameMode);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 转换秒数为文本X年X天

---

### 函数 `ConvertSecondToTimeText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ConvertSecondToTimeText(const float& InSecond, class AERW_GameModeBase* InGameMode);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 显示倒计时的时间文本（大于年显示年，大于天显示天，大于小时仅显示小时，小雨小时显示秒）

---

### 函数 `FormatTimeText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText FormatTimeText(const float& InSecond, class AERW_GameModeBase* InGameMode);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 显示为游戏时间：XX天XX小时，小时显示小数点后1位

---

### 函数 `SecondToCountdownText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSecond` | `const float&` |
| `InGameMode` | `class AERW_GameModeBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText SecondToCountdownText(const float& InSecond, class AERW_GameModeBase* InGameMode);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 显示倒计时的时间文本（显示x天x时x秒）

---

### 函数 `ReplacesArgsByArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `scrText` | `const FText&` |
| `arr` | `const TArray<float>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ReplacesArgsByArray(const FText& scrText,const TArray<float>& arr);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 使用浮点数组替换字符串中的占位符

---

### 函数 `ReplacesArgsByStrArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `scrText` | `const FText&` |
| `arr` | `const TArray<FString>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ReplacesArgsByStrArray(const FText& scrText,const TArray<FString>& arr);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 使用字符串数组替换字符串中的占位符

---

### 函数 `ReplacesArgsByIndexToArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InText` | `const FText &` |
| `Value` | `const TArray<float> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ReplacesArgsByIndexToArray(const FText & InText,const TArray<float> & Value);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 替换字符占位符，通过占位符索引数组中的数据

---

### 函数 `ReplacesArgsByIndexToStrArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InText` | `const FText &` |
| `Value` | `const TArray<FString> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText ReplacesArgsByIndexToStrArray(const FText & InText,const TArray<FString> & Value);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 替换字符占位符，通过占位符索引数组中的数据(字符串数组)

---

### 函数 `CheckPointOnPolygon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPoint` | `const FVector &` |
| `Vertex` | `const TArray<FVector> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool CheckPointOnPolygon(const FVector & InPoint,const TArray<FVector> & Vertex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 是否在多边型内部

---

### 函数 `GetScreenBoxToWorldPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FVector>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Context` | `const UObject*` |
| `InStartPos` | `const FVector2D &` |
| `InEndPos` | `const FVector2D &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static TArray<FVector> GetScreenBoxToWorldPoint(const UObject* Context,const FVector2D & InStartPos,const FVector2D & InEndPos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 在屏幕上起点到终点构成的框到地面的坐标

---

### 函数 `CalculateNormal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `P1` | `const FVector&` |
| `P2` | `const FVector&` |
| `P3` | `const FVector&` |
| `P4` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FVector CalculateNormal(const FVector& P1, const FVector& P2, const FVector& P3, const FVector& P4);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取四个点构成的面的方向

---

### 函数 `IsPointInQuadrilateral`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `P` | `const FVector&` |
| `P1` | `const FVector&` |
| `P2` | `const FVector&` |
| `P3` | `const FVector&` |
| `P4` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool IsPointInQuadrilateral(const FVector& P, const FVector& P1, const FVector& P2, const FVector& P3, const FVector& P4);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 判断是否在四边形内部

---

### 函数 `CheckMouseOnViewport`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool CheckMouseOnViewport();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检测鼠标是否在UI上

---

### 函数 `RandomIntegerInRange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `n` | `int32` |
| `min` | `int32` |
| `max` | `int32` |
| `OutResult` | `TArray<int32>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool RandomIntegerInRange(int32 n,int32 min,int32 max,TArray<int32>& OutResult);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 从范围中随机n个不同的数

---

### 函数 `SaveCaptureScene`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UTexture2D*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `IsSave` | `bool` |
| `SceneCapture` | `class USceneCaptureComponent2D*` |
| `SavePath` | `const FString&` |
| `0` | `int32 NewWidth =` |
| `0` | `int32 NewHeight =` |
| `100` | `int32 CompressionQuality =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static UTexture2D* SaveCaptureScene(bool IsSave, class USceneCaptureComponent2D* SceneCapture, const FString& SavePath, int32 NewWidth = 0, int32 NewHeight = 0, int32 CompressionQuality = 100);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> --------------拍照 Start--------------------

---

### 函数 `LoadTextureFromFile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UTexture2D*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FilePath` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static UTexture2D* LoadTextureFromFile(const FString& FilePath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 将png转为texture2d

---

### 函数 `SetHighResScreenshotMaskEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bEnabled` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void SetHighResScreenshotMaskEnabled(bool bEnabled);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置高分辨率截图遮罩开启

---

### 函数 `ClipCharacterHoleBodyPhot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UTexture2D*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FullPath` | `const FString&` |
| `TargetSize` | `FVector2D&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static UTexture2D* ClipCharacterHoleBodyPhot(const FString& FullPath,FVector2D& TargetSize);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CaptureCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FullPath` | `const FString&` |
| `Character` | `ACharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool CaptureCharacter(const FString& FullPath,ACharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetLeafTags`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RootTag` | `const FGameplayTag&` |
| `OutLeafTags` | `TArray<FGameplayTag>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetLeafTags(const FGameplayTag& RootTag, TArray<FGameplayTag>& OutLeafTags);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取标签最下层的所有子标签

---

### 函数 `GetAllChildTags`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FGameplayTag>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RootTag` | `const FGameplayTag&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static TArray<FGameplayTag> GetAllChildTags(const FGameplayTag& RootTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取标签的所有子标签不包含下一层

---

### 函数 `GetParentTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameplayTag` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `const FGameplayTag&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FGameplayTag GetParentTag(const FGameplayTag& Tag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取上一级标签

---

### 函数 `IsHaveChildTags`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RootTag` | `const FGameplayTag&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool IsHaveChildTags(const FGameplayTag& RootTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 是否有子标签

---

### 函数 `GetTeamMaxAttributes`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TeamMaxAttributes` | `UPARAM(ref) TMap<FName,float>&` |
| `OtherCharacerData` | `const TArray<FEastRimWorldCharacterData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void GetTeamMaxAttributes(UPARAM(ref) TMap<FName,float>& TeamMaxAttributes,const TArray<FEastRimWorldCharacterData>& OtherCharacerData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取队伍中最大属性值map,传入的TeamMaxAttributes要包含一个的角色属性数据

---

### 函数 `GetAllObjectByClass`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<UObject*>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ClassToLookFor` | `const UClass*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static TArray<UObject*> GetAllObjectByClass(const UClass* ClassToLookFor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `AppendItemSimpleDataArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetArray` | `UPARAM(ref) TArray<FItemSimpleData>&` |
| `SourceArray` | `UPARAM(ref) const TArray<FItemSimpleData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void AppendItemSimpleDataArray(UPARAM(ref) TArray<FItemSimpleData>& TargetArray,UPARAM(ref) const TArray<FItemSimpleData>& SourceArray);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetAptitudeAttributeString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetAptitudeAttributeString(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 1-资质

---

### 函数 `GetComprehensionAttributeString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetComprehensionAttributeString(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 2-悟性

---

### 函数 `GetMoveSpeedAttributeString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetMoveSpeedAttributeString(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 3-移动速度

---

### 函数 `GetPreferenceTemperatureAttributeString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetPreferenceTemperatureAttributeString(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 4-温度耐受(适宜温度范围)

---

### 函数 `GetAttachAttributeString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetAttachAttributeString(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 5-攻击属性值

---

### 函数 `GetAttachAttributeStringFromSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | `FCharacterSaveData` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetAttachAttributeStringFromSaveData(FCharacterSaveData CharacterData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetResistanceAttributeString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetResistanceAttributeString(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 6-抗性属性值

---

### 函数 `GetResistanceAttributeStringFromSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | `FCharacterSaveData` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetResistanceAttributeStringFromSaveData(FCharacterSaveData CharacterData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetCriticalAttributeString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetCriticalAttributeString(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 7-暴击属性值

---

### 函数 `GetCriticalAttributeStringFromSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | `FCharacterSaveData` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetCriticalAttributeStringFromSaveData(FCharacterSaveData CharacterData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetSubjoinAttackAttributeString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetSubjoinAttackAttributeString(AEastRimWorldCharacter* Character);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 8-附伤

---

### 函数 `GetSubjoinAttackAttributeStringFromSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterData` | `FCharacterSaveData` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetSubjoinAttackAttributeStringFromSaveData(FCharacterSaveData CharacterData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `Sort`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category=" Array|Sort" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `UPARAM(ref)TArray<UObject*>&array_to_sort` |
| `array_to_sort_ref` | `TArray<UObject*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category=" Array|Sort") static bool Sort(UPARAM(ref)TArray<UObject*>&array_to_sort,TArray<UObject*>& array_to_sort_ref);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Object数组排序

---

### 函数 `SortMapByValueDescending`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Map Sorting" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Map` | `UPARAM(ref) TMap<FGameplayAttribute, float>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Map Sorting") static void SortMapByValueDescending(UPARAM(ref) TMap<FGameplayAttribute, float>& Map);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetLevelName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FName` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Level` | `const TSoftObjectPtr<UWorld> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FName GetLevelName(const TSoftObjectPtr<UWorld> & Level);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetActorLevelName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `const AActor*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FString GetActorLevelName(const AActor* Actor);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取actor所在的关卡名字

---

### 函数 `CalculationProbability`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InProbability` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static bool CalculationProbability(float InProbability);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CreateDecalComponentAtLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UDecalComponent*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Outer` | `UObject*` |
| `GridPosition` | `const FGridPosition&` |
| `（匿名/仅类型）` | `TSoftObjectPtr<UMaterialInterface> DecalMaterial=nullptr` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static UDecalComponent* CreateDecalComponentAtLocation(UObject* Outer,const FGridPosition& GridPosition,TSoftObjectPtr<UMaterialInterface> DecalMaterial=nullptr);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 在指定位置创建一个贴花组件

---

### 函数 `LegalValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddValue` | `float &` |
| `CurValue` | `float` |
| `MinValue` | `float` |
| `MaxValue` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void LegalValue(float & AddValue,float CurValue, float MinValue,float MaxValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 数值合法化

---

### 函数 `GetUIText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InStringTableID` | `const FName&` |
| `InKey` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FText GetUIText(const FName& InStringTableID,const FString& InKey);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取一个StringTable中的文本

---

### 函数 `GetTextLen`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InText` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static int32 GetTextLen(const FString& InText);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算文本的字符长度

---

### 函数 `GetTextLimit`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InText` | `const FString&` |
| `MaxLen` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetTextLimit(const FString& InText, int32 MaxLen);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 限制文本长度（英文和半角符号算一个长度，中文等双字节算两个长度）

---

### 函数 `GetFormatText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ScrText` | `const FFormatText&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FText GetFormatText(const FFormatText& ScrText);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 格式化替换文本

---

### 函数 `CalDrugResistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BaseDrugResistance` | `float` |
| `UseTime` | `int32` |
| `AntDrugResistance` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static float CalDrugResistance(float BaseDrugResistance, int32 UseTime,float AntDrugResistance);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CalDrugResistanceBySaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<FName, float>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterSaveData` | `const FCharacterSaveData &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static TMap<FName, float> CalDrugResistanceBySaveData(const FCharacterSaveData & CharacterSaveData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `FormatSecondsToMMSS`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TotalSeconds` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static FString FormatSecondsToMMSS(int32 TotalSeconds);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 格式化显示秒数为MM:SS格式

---

### 函数 `GetCharacterStringName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFirstName` | `FText` |
| `InName` | `FText` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FString GetCharacterStringName(FText InFirstName,FText InName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CastResourceToGrowScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `InResource` | `const TMap<FName,FItemSimpleData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static float CastResourceToGrowScore(const UObject* WorldContextObject, const TMap<FName,FItemSimpleData>& InResource);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 把物资转为NPC势力成长积分

---

### 函数 `GetMartialArtsExperienceBonusByMaType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGameplayAttribute` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeClassification` | `EMartialArtsAttributeClassification` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FGameplayAttribute GetMartialArtsExperienceBonusByMaType(EMartialArtsAttributeClassification AttributeClassification);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过武术属性分类获取对应的武术经验加成属性

---

### 函数 `AddLooseGameplayTagToASC`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetASC` | `UAbilitySystemComponent*` |
| `LooseGameplayTag` | `FGameplayTag` |
| `1` | `int32 Count =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void AddLooseGameplayTagToASC(UAbilitySystemComponent* TargetASC , FGameplayTag LooseGameplayTag, int32 Count = 1);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加一个标记性的Tag

---

### 函数 `RemoveLooseGameplayTagToASC`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetASC` | `UAbilitySystemComponent*` |
| `LooseGameplayTag` | `FGameplayTag` |
| `1` | `int32 Count =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void RemoveLooseGameplayTagToASC(UAbilitySystemComponent* TargetASC , FGameplayTag LooseGameplayTag, int32 Count = 1);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除一个标记性的Tag

---

### 函数 `CalcStartAndEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartGrid` | `FGridPosition&` |
| `EndGrid` | `FGridPosition&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void CalcStartAndEnd(FGridPosition& StartGrid,FGridPosition& EndGrid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `LimitDesignSize`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGridPosition` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartGrid` | `UPARAM(ref)FGridPosition&` |
| `EndGrid` | `UPARAM(ref)FGridPosition&` |
| `MinX` | `const int32 &` |
| `MinY` | `const int32 &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FGridPosition LimitDesignSize(UPARAM(ref)FGridPosition& StartGrid,UPARAM(ref)FGridPosition& EndGrid , const int32 & MinX ,const int32 & MinY);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 限制区域拖拽大小(返回限制后大小)

---

### 函数 `GetTexture2DDynamicSize`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FVector2D` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTexture2DDynamicReference` | `UTexture2DDynamic*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static FVector2D GetTexture2DDynamicSize(UTexture2DDynamic* InTexture2DDynamicReference);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取下载图片大小

---

### 函数 `GetAnimalTroughLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAnimal` | `AEastRimWorldCharacter_Animal*` |
| `OutLocation` | `FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static bool GetAnimalTroughLocation(AEastRimWorldCharacter_Animal* InAnimal, FVector& OutLocation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据动物体型获取食槽位置

---

### 函数 `FindReachablePointAroundTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Navigation" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `A` | `const FVector&` |
| `B` | `const FVector&` |
| `Radius` | `float` |
| `NumSamples` | `int32` |
| `WeightToA` | `float` |
| `OutBestPoint` | `FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category="Navigation") static bool FindReachablePointAroundTarget( UObject* WorldContextObject, const FVector& A, const FVector& B, float Radius, int32 NumSamples, float WeightToA, FVector& OutBestPoint );`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 从点A到点B，寻找目标点周围最近且可导航的点。
> @param WorldContextObject - 一般传 GetWorld()
> @param A - 起点位置
> @param B - 目标点
> @param Radius - 目标点周围搜索半径
> @param NumSamples - 搜索点数量（环形采样数量）
> @param WeightToA - 靠近A的权重（越大越靠近A）

---

### 函数 `SetConsoleVariable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `VariableName` | `const FString&` |
| `Value` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static void SetConsoleVariable(const FString& VariableName,const FString& Value);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetGEAttributeValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayEffect` | `const TSubclassOf<UGameplayEffect>&` |
| `InLevel` | `int` |
| `ThisAttribute` | `FGameplayAttribute` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) static float GetGEAttributeValue(const TSubclassOf<UGameplayEffect>& GameplayEffect, int InLevel, FGameplayAttribute ThisAttribute);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 读取GameplayEffect中指定属性的值

---
