# `class` `UERW_EnvironComponent`

**Source header:** `EastRimWorld/Components/ERW_EnvironComponent.h`

---

## Functional description (from header comments)

> 环境信息组件

## Blueprint-exposed variables

### Property `Layer`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 Layer { 0 };` |

**Source comments:**

> 所在层

---

### Property `EnvironType`

| Field | Details |
|------|------|
| C++ type | `EEnvironType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EEnvironType EnvironType = EEnvironType::None;` |

**Source comments:**

> 环境类型

---

### Property `RoofPartType`

| Field | Details |
|------|------|
| C++ type | `ERoofPartType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) ERoofPartType RoofPartType { ERoofPartType::None };` |

**Source comments:**

> 屋顶部位类型

---

### Property `Durability`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 Durability { 0 };` |

**Source comments:**

> 耐久度

---

### Property `RotateOrientation`

| Field | Details |
|------|------|
| C++ type | `ERotateOrientation` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) ERotateOrientation RotateOrientation = ERotateOrientation::Default;` |

**Source comments:**

> 旋转朝向

---

### Property `GenerateMode`

| Field | Details |
|------|------|
| C++ type | `EGenerateMode` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EGenerateMode GenerateMode { EGenerateMode::Solo };` |

**Source comments:**

> 创建方式

---

### Property `EntranceGridPoses`

| Field | Details |
|------|------|
| C++ type | TArray<[FRelativeGridPoses](../ERW_ConfigTypes__FRelativeGridPoses.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TArray<FRelativeGridPoses> EntranceGridPoses;` |

**Source comments:**

> 入口格子坐标

---

### Property `ExtraEnvironInfos`

| Field | Details |
|------|------|
| C++ type | TMap<EEnvironType , [FExtraInfos](../ERW_ConfigTypes__FExtraInfos.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<EEnvironType , FExtraInfos> ExtraEnvironInfos;` |

**Source comments:**

> 额外占位信息

---

### Property `EntranceValidInfos`

| Field | Details |
|------|------|
| C++ type | `TMap<EPositionType , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<EPositionType , bool> EntranceValidInfos;` |

**Source comments:**

> 每个方位对应的建筑入口是否有效
> TMap<方位 , 是否有效>

---

### Property `DistributionInfo`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , EGridDistributionType> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<FGridPosition , EGridDistributionType> DistributionInfo;` |

**Source comments:**

> 所占格子分布信息
> TMap<格子坐标 , 分布类型>

---

### Property `IsBuildComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) bool IsBuildComplete = false;` |

**Source comments:**

> 是否建造完成

---

### Property `Size`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FIntVector Size = FIntVector::ZeroValue;` |

**Source comments:**

> 占格子尺寸

---

### Property `ZIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 ZIndex { 0 };` |

**Source comments:**

> 所处高度

---

### Property `MinGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGridPosition MinGridPos;` |

**Source comments:**

> 占格子最小坐标

---

### Property `MaxGridPos`

| Field | Details |
|------|------|
| C++ type | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGridPosition MaxGridPos;` |

**Source comments:**

> 占格子最大坐标

---

### Property `ExtraCoverage`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FIntPoint ExtraCoverage = FIntPoint::ZeroValue;` |

**Source comments:**

> 额外支撑范围

---

### Property `SupportingObjects`

| Field | Details |
|------|------|
| C++ type | TMap<EEnvironType , [FSupportingObjects](ERW_EnvironComponent__FSupportingObjects.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<EEnvironType , FSupportingObjects> SupportingObjects;` |

**Source comments:**

> 配套物体
> TMap<环境类型 , 配套物体数据>

---

### Property `HeightDifference`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) float HeightDifference { 0.f };` |

**Source comments:**

> 格子的高低差

---

### Property `CanPutDown`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) bool CanPutDown { true };` |

**Source comments:**

> 能否放下

---

## Blueprint-exposed functions

### Function `LoadData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironSaveData` | `const FEnvironSaveData&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LoadData(const FEnvironSaveData& EnvironSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `ReviseGridPosesData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MapDataMgr` | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReviseGridPosesData(UERW_MapDataMgr* MapDataMgr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 读档修正格子坐标相关数据

---

### Function `ResetStairDistributionInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridInfos` | const TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FStairGridInfo](ERW_AreaOperationComponent__FStairGridInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResetStairDistributionInfos(const TMap<FGridPosition , FStairGridInfo>& GridInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 重置阶梯格子分布信息

---

### Function `SetEnvironData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EnvironComponent` | const [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* const |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetEnvironData(const UERW_EnvironComponent* const EnvironComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置环境信息数据

---

### Function `InitSupportingObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SupportingGrids` | const TMap<EEnvironType , [FRelativeGridPoses](../ERW_ConfigTypes__FRelativeGridPoses.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitSupportingObjects(const TMap<EEnvironType , FRelativeGridPoses>& SupportingGrids);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化配套物品

---

### Function `UpdatePresetActorGridInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `PresetData` | const [FPresetData](../ERW_CommonTypes__FPresetData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdatePresetActorGridInfo(const FGridPosition& GridPos , const FPresetData& PresetData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新预设建筑占格子信息

---

### Function `CalcMinAndMaxGridPosByDistributionInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcMinAndMaxGridPosByDistributionInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过格子分布信息计算最小最大格子坐标

---

### Function `CalcMinAndMaxGrid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalcMinAndMaxGrid(const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算占格子最小和最大坐标

---

### Function `SetDistributionInfoByMinAndMaxGrid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetDistributionInfoByMinAndMaxGrid();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过最小最大格子坐标设置格子分布信息

---

### Function `SwapSize`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewSize` | `FIntVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void SwapSize(FIntVector& NewSize) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 根据旋转朝向交换尺寸

---

### Function `CalcLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MapDataMgr` | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| `Location` | `FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void CalcLocation(UERW_MapDataMgr* MapDataMgr , FVector& Location);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 根据最大最小点计算物体位置

---

### Function `CollectSupportingObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MapDataMgr` | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| `Objects` | `TArray<AActor*>&` |
| `MainObjects` | `TArray<AActor*>&` |
| `MainObjectTypes` | `TArray< EEnvironType>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CollectSupportingObjects(UERW_MapDataMgr* MapDataMgr , TArray<AActor*>& Objects,TArray<AActor*>& MainObjects,TArray< EEnvironType>& MainObjectTypes);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 收集配套物体

---

### Function `UpdateInvalidExtraInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Pos` | `const FVector&` |
| `Remove` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateInvalidExtraInfo(const FVector& Pos , bool Remove);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新无效的额外信息

---

### Function `GetBoundPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Points` | `TArray<FVector>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetBoundPoints(TArray<FVector>& Points) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得建筑范围的四个点

---

### Function `GetRectAreaActorSurroundingGridPoses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridPoses` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetRectAreaActorSurroundingGridPoses(TArray<FGridPosition>& GridPoses) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获得矩形区域建筑周围的格子坐标

---
