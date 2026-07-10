# `class` `UERW_EnvironComponent`

**源码头文件:** `EastRimWorld/Components/ERW_EnvironComponent.h`

---

## 功能说明（来自头文件注释）

> 环境信息组件

## 蓝图暴露变量

### 属性 `Layer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 Layer { 0 };` |

**说明:**

> 所在层

---

### 属性 `EnvironType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EEnvironType EnvironType = EEnvironType::None;` |

**说明:**

> 环境类型

---

### 属性 `RoofPartType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) ERoofPartType RoofPartType { ERoofPartType::None };` |

**说明:**

> 屋顶部位类型

---

### 属性 `Durability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 Durability { 0 };` |

**说明:**

> 耐久度

---

### 属性 `RotateOrientation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERotateOrientation](../ERW_Enumerations__ERotateOrientation.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) ERotateOrientation RotateOrientation = ERotateOrientation::Default;` |

**说明:**

> 旋转朝向

---

### 属性 `GenerateMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGenerateMode](../ERW_Enumerations__EGenerateMode.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EGenerateMode GenerateMode { EGenerateMode::Solo };` |

**说明:**

> 创建方式

---

### 属性 `EntranceGridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FRelativeGridPoses](../ERW_ConfigTypes__FRelativeGridPoses.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TArray<FRelativeGridPoses> EntranceGridPoses;` |

**说明:**

> 入口格子坐标

---

### 属性 `ExtraEnvironInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FExtraInfos](../ERW_ConfigTypes__FExtraInfos.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<EEnvironType , FExtraInfos> ExtraEnvironInfos;` |

**说明:**

> 额外占位信息

---

### 属性 `EntranceValidInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EPositionType](../ERW_Enumerations__EPositionType.md) , bool> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<EPositionType , bool> EntranceValidInfos;` |

**说明:**

> 每个方位对应的建筑入口是否有效
> TMap<方位 , 是否有效>

---

### 属性 `DistributionInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<FGridPosition , EGridDistributionType> DistributionInfo;` |

**说明:**

> 所占格子分布信息
> TMap<格子坐标 , 分布类型>

---

### 属性 `IsBuildComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) bool IsBuildComplete = false;` |

**说明:**

> 是否建造完成

---

### 属性 `Size`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FIntVector Size = FIntVector::ZeroValue;` |

**说明:**

> 占格子尺寸

---

### 属性 `ZIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 ZIndex { 0 };` |

**说明:**

> 所处高度

---

### 属性 `MinGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGridPosition MinGridPos;` |

**说明:**

> 占格子最小坐标

---

### 属性 `MaxGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGridPosition MaxGridPos;` |

**说明:**

> 占格子最大坐标

---

### 属性 `ExtraCoverage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FIntPoint ExtraCoverage = FIntPoint::ZeroValue;` |

**说明:**

> 额外支撑范围

---

### 属性 `SupportingObjects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FSupportingObjects](ERW_EnvironComponent__FSupportingObjects.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<EEnvironType , FSupportingObjects> SupportingObjects;` |

**说明:**

> 配套物体
> TMap<环境类型 , 配套物体数据>

---

### 属性 `HeightDifference`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) float HeightDifference { 0.f };` |

**说明:**

> 格子的高低差

---

### 属性 `CanPutDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) bool CanPutDown { true };` |

**说明:**

> 能否放下

---

## 蓝图暴露函数

### 函数 `LoadData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironSaveData` | const [FEnvironSaveData](ERW_EnvironComponent__FEnvironSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LoadData(const FEnvironSaveData& EnvironSaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从环境存档数据加载并恢复组件状态

---

### 函数 `ReviseGridPosesData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MapDataMgr` | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReviseGridPosesData(UERW_MapDataMgr* MapDataMgr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 读档修正格子坐标相关数据

---

### 函数 `ResetStairDistributionInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridInfos` | const TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FStairGridInfo](ERW_AreaOperationComponent__FStairGridInfo.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ResetStairDistributionInfos(const TMap<FGridPosition , FStairGridInfo>& GridInfos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重置阶梯格子分布信息

---

### 函数 `SetEnvironData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | const [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* const |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetEnvironData(const UERW_EnvironComponent* const EnvironComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置环境信息数据

---

### 函数 `OnTransferDone`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | const [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* const |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnTransferDone(const UERW_EnvironComponent* const EnvironComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移动建筑完成更新环境信息数据

---

### 函数 `InitSupportingObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SupportingGrids` | const TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FRelativeGridPoses](../ERW_ConfigTypes__FRelativeGridPoses.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitSupportingObjects(const TMap<EEnvironType , FRelativeGridPoses>& SupportingGrids);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化配套物品

---

### 函数 `UpdatePresetActorGridInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `PresetData` | const [FPresetData](../ERW_CommonTypes__FPresetData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdatePresetActorGridInfo(const FGridPosition& GridPos , const FPresetData& PresetData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新预设建筑占格子信息

---

### 函数 `CalcMinAndMaxGridPosByDistributionInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcMinAndMaxGridPosByDistributionInfo();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过格子分布信息计算最小最大格子坐标

---

### 函数 `CalcMinAndMaxGrid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcMinAndMaxGrid(const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算占格子最小和最大坐标

---

### 函数 `SetDistributionInfoByMinAndMaxGrid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetDistributionInfoByMinAndMaxGrid();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过最小最大格子坐标设置格子分布信息

---

### 函数 `SwapSize`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewSize` | `FIntVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void SwapSize(FIntVector& NewSize) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 根据旋转朝向交换尺寸

---

### 函数 `CalcLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MapDataMgr` | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| `Location` | `FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void CalcLocation(UERW_MapDataMgr* MapDataMgr , FVector& Location);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 根据最大最小点计算物体位置

---

### 函数 `CollectSupportingObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MapDataMgr` | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| `Objects` | `TArray<AActor*>&` |
| `MainObjects` | `TArray<AActor*>&` |
| `MainObjectTypes` | TArray< [EEnvironType](../ERW_Enumerations__EEnvironType.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectSupportingObjects(UERW_MapDataMgr* MapDataMgr , TArray<AActor*>& Objects,TArray<AActor*>& MainObjects,TArray< EEnvironType>& MainObjectTypes);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 收集配套物体

---

### 函数 `UpdateInvalidExtraInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Pos` | `const FVector&` |
| `Remove` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateInvalidExtraInfo(const FVector& Pos , bool Remove);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新无效的额外信息

---

### 函数 `GetBoundPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `TArray<FVector>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetBoundPoints(TArray<FVector>& Points) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得建筑范围的四个点

---

### 函数 `GetRectAreaActorSurroundingGridPoses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPoses` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetRectAreaActorSurroundingGridPoses(TArray<FGridPosition>& GridPoses) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得矩形区域建筑周围的格子坐标

---

### 函数 `GetGridMinHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MapDataMgr` | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetGridMinHeight(UERW_MapDataMgr* MapDataMgr) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得所占格子的最低高度

---
