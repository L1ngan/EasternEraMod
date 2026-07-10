# `class` `UERW_AreaOperationComponent`

**源码头文件:** `EastRimWorld/Components/ERW_AreaOperationComponent.h`

---

## 功能说明（来自头文件注释）

> 物体创建区域操作相关组件

## 蓝图暴露变量

### 属性 `HISMManager`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_HISMManager](ERW_HISMManager__UERW_HISMManager.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) UERW_HISMManager* HISMManager { nullptr };` |

**说明:**

> HISM管理组件

---

### 属性 `MapDataMgr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) UERW_MapDataMgr* MapDataMgr { nullptr };` |

**说明:**

> 地图数据管理器（UERW_MapDataMgr）引用

---

### 属性 `GenerateMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGenerateMode](../ERW_Enumerations__EGenerateMode.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EGenerateMode GenerateMode;` |

**说明:**

> 创建方式

---

### 属性 `DistributionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EGridDistributionType DistributionType;` |

**说明:**

> 物体在格子中分布类型

---

### 属性 `GridPositionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGridPositionType](../ERW_Enumerations__EGridPositionType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EGridPositionType GridPositionType;` |

**说明:**

> 格子位置类型

---

### 属性 `LineGenerateOrientation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ELineGenerateOrientation](../ERW_Enumerations__ELineGenerateOrientation.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) ELineGenerateOrientation LineGenerateOrientation;` |

**说明:**

> 线型区域朝向

---

### 属性 `EnvironType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EEnvironType EnvironType;` |

**说明:**

> 环境类型

---

### 属性 `RotateOrientation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERotateOrientation](../ERW_Enumerations__ERotateOrientation.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) ERotateOrientation RotateOrientation;` |

**说明:**

> 旋转朝向

---

### 属性 `IsTransBuilding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) bool IsTransBuilding { false };` |

**说明:**

> 是否是移动建筑

---

### 属性 `TransBuildingData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FUObjectData TransBuildingData;` |

**说明:**

> 移动建筑的ObjectData

---

### 属性 `RectActorSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntPoint RectActorSize = FIntPoint(1 , 1);` |

**说明:**

> 矩形区域建筑的尺寸

---

### 属性 `PlaceBuildingTipsType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPlaceBuildingTipsType](../ERW_Enumerations__EPlaceBuildingTipsType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) EPlaceBuildingTipsType PlaceBuildingTipsType { EPlaceBuildingTipsType::Normal };` |

**说明:**

> 放置建筑提示类型

---

### 属性 `FoundationHeightIntercept`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float FoundationHeightIntercept;` |

**说明:**

> 地基修建最大高度差(厘米)

---

### 属性 `StairID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FName StairID;` |

**说明:**

> 放置地基(水池)后出现的楼梯ID

---

### 属性 `FoundationHeightStep`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float FoundationHeightStep { 0.f };` |

**说明:**

> 地基(水池)单次变化高度

---

### 属性 `ManualHeightOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float ManualHeightOffset { 0.f };` |

**说明:**

> 地基(水池)手动调整高度偏移

---

### 属性 `MaxRaiseHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float MaxRaiseHeight { 0 };` |

**说明:**

> 地基(水池)最大抬升高度

---

### 属性 `RectGridMinHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RectGridMinHeight { 0.f };` |

**说明:**

> 矩形区域格子最小高度

---

### 属性 `RectGridMaxHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RectGridMaxHeight { 0.f };` |

**说明:**

> 矩形区域格子最大高度

---

### 属性 `CanPlaceActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) bool CanPlaceActor { true };` |

**说明:**

> 是否能放下Actor

---

### 属性 `FirstActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `AActor*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) AActor* FirstActor;` |

**说明:**

> 生成的第一个Actor

---

### 属性 `PresetSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntVector PresetSize;` |

**说明:**

> 预设建筑的占格子尺寸

---

### 属性 `PresetStart`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition PresetStart;` |

**说明:**

> 预设建筑占格子起始坐标

---

### 属性 `PresetEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition PresetEnd;` |

**说明:**

> 预设建筑占格子终点坐标

---

### 属性 `PresetData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FPresetInfos](../ERW_CommonTypes__FPresetInfos.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FName , FPresetInfos> PresetData;` |

**说明:**

> 预设建筑的数据
> TMap<建筑表ID , 数据>

---

### 属性 `WallPillarData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FPresetInfos](../ERW_CommonTypes__FPresetInfos.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FName , FPresetInfos> WallPillarData;` |

**说明:**

> 预设墙接缝柱的数据
> TMap<建筑表ID , 数据>

---

### 属性 `PresetFoundationGridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , AActor*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridPosition , AActor*> PresetFoundationGridPoses;` |

**说明:**

> 预设建筑地基格子坐标
> TMap<格子坐标 , 地基Actor>

---

### 属性 `BuildID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FName BuildID;` |

**说明:**

> 建造物体ID

---

### 属性 `MaxNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) int32 MaxNum;` |

**说明:**

> 创建Instance的最大数量

---

### 属性 `ExtraResourceRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float ExtraResourceRate { 0.f };` |

**说明:**

> 填充模型额外消耗建造资源的比率

---

### 属性 `Resources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FName , int32> Resources;` |

**说明:**

> 建造需要消耗的资源

---

### 属性 `StartGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition StartGridPos;` |

**说明:**

> 起始网格坐标

---

### 属性 `CurGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition CurGridPos;` |

**说明:**

> 当前网格坐标

---

### 属性 `RectMinGrid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition RectMinGrid;` |

**说明:**

> 矩形区域最小点格子坐标

---

### 属性 `RectMaxGrid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition RectMaxGrid;` |

**说明:**

> 矩形区域最大点格子坐标

---

### 属性 `StartRectMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition StartRectMin;` |

**说明:**

> 矩形区域起始最小格子坐标

---

### 属性 `StartRectMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition StartRectMax;` |

**说明:**

> 矩形区域起始最大格子坐标

---

### 属性 `CurRectMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition CurRectMin;` |

**说明:**

> 矩形区域当前最小格子坐标

---

### 属性 `CurRectMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FGridPosition CurRectMax;` |

**说明:**

> 矩形区域当前最大格子坐标

---

### 属性 `StartWorldPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FVector StartWorldPos;` |

**说明:**

> 起始世界位置

---

### 属性 `CurWorldPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FVector CurWorldPos;` |

**说明:**

> 当前世界位置

---

### 属性 `StartPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntPoint StartPoint;` |

**说明:**

> 起始角点

---

### 属性 `CurPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntPoint CurPoint;` |

**说明:**

> 当前角点

---

### 属性 `PrevPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FIntPoint PrevPoint;` |

**说明:**

> 上次操作角点

---

### 属性 `CurMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FIntPoint CurMin;` |

**说明:**

> 当前操作区域最小点

---

### 属性 `CurMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FIntPoint CurMax;` |

**说明:**

> 当前操作区域最大点

---

### 属性 `StartHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float StartHeight;` |

**说明:**

> 起始网格高度

---

### 属性 `AreaMaxHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float AreaMaxHeight;` |

**说明:**

> 划区域时的最大高度

---

### 属性 `VisibleActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , AActor*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridPosition , AActor*> VisibleActors;` |

**说明:**

> 显示的Actor
> TMap<建筑左上角格子坐标 , Actor>

---

### 属性 `HideActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<AActor* , bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AActor* , bool> HideActors;` |

**说明:**

> 隐藏的Actor
> TMap<Actor , 占位符>

---

### 属性 `NewGridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridPosition> NewGridPoses;` |

**说明:**

> 新加入的格子

---

### 属性 `HideGridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridPosition> HideGridPoses;` |

**说明:**

> 需要隐藏的格子

---

### 属性 `StairGridInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FStairGridInfo](ERW_AreaOperationComponent__FStairGridInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridPosition , FStairGridInfo> StairGridInfos;` |

**说明:**

> 阶梯占格子信息
> TMap<格子坐标 , 格子信息>

---

### 属性 `SurroundingActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<AActor* , bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AActor* , bool> SurroundingActors;` |

**说明:**

> 区域周边同类型的Actor
> TMap<Actor , 占位符>

---

### 属性 `LineActorInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FLineActorInfo](ERW_AreaOperationComponent__FLineActorInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridPosition , FLineActorInfo> LineActorInfos;` |

**说明:**

> 沿格子边线生成的Actor的信息
> TMap<格子坐标 , Actor的信息>

---

### 属性 `GridSeamPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> GridSeamPoints;` |

**说明:**

> 格子接缝点
> TMap<接缝点数据 , 占位符>

---

### 属性 `NewSeamPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridSeamPoint> NewSeamPoints;` |

**说明:**

> 新加入的接缝点

---

### 属性 `RemovedSeamPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> RemovedSeamPoints;` |

**说明:**

> 需要移除的接缝点
> TMap<接缝点数据 , 占位符>

---

### 属性 `UnchangedSeamPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> UnchangedSeamPoints;` |

**说明:**

> 未改变的接缝点
> TMap<接缝点数据 , 占位符>

---

### 属性 `AllHideSeamPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridSeamPoint> AllHideSeamPoints;` |

**说明:**

> 所有隐藏接缝点

---

### 属性 `VisibleSeamPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<FGridSeamPoint> VisibleSeamPoints;` |

**说明:**

> 本次操作需要重新显示的接缝点

---

### 属性 `HideSeamPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> HideSeamPoints;` |

**说明:**

> 本次操作需要隐藏的接缝点

---

### 属性 `SideWorldPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) FVector SideWorldPos;` |

**说明:**

> 网格边线中心的世界位置

---

### 属性 `WallTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EEmbeddedWallType](../ERW_Enumerations__EEmbeddedWallType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<EEmbeddedWallType> WallTypes;` |

**说明:**

> 嵌入式墙类型

---

### 属性 `ReplacedWalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<AActor* , bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AActor* , bool> ReplacedWalls;` |

**说明:**

> 已有的被替换墙体的Actor
> TMap<墙 , 占位符>

---

### 属性 `RecoveredWalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<AActor*>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TArray<AActor*> RecoveredWalls;` |

**说明:**

> 需要恢复显示的墙

---

### 属性 `OverlappedWalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<AActor* , bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AActor* , bool> OverlappedWalls;` |

**说明:**

> 围墙门格子覆盖的围墙
> TMap<围墙Actor , 占位符>

---

### 属性 `OverlappedSeamPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) , bool> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<FGridSeamPoint , bool> OverlappedSeamPoints;` |

**说明:**

> 围墙门格子覆盖的接缝点

---

### 属性 `RoofActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ERoofPartType](../ERW_Enumerations__ERoofPartType.md) , [FRoofActors](ERW_AreaOperationComponent__FRoofActors.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<ERoofPartType , FRoofActors> RoofActors;` |

**说明:**

> 每个屋顶部位类型显示和隐藏的Actor
> TMap<屋顶部位类型 , 显示和隐藏的Actor>

---

### 属性 `AdjacentAssembles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* , FVector> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) TMap<AGOAP_ActorBase* , FVector> AdjacentAssembles;` |

**说明:**

> 组装建筑周围相邻的组装建筑
> TMap<组装建筑 , 相邻坐标>

---

### 属性 `RoofHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float RoofHeight { 0.f };` |

**说明:**

> 操作时屋顶的高度

---

### 属性 `RoofLayerHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RoofLayerHeight;` |

**说明:**

> 屋顶单层高度

---

### 属性 `RoofRidgeCornerHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RoofRidgeCornerHeight;` |

**说明:**

> 屋顶脊角高度

---

### 属性 `RoofPyramidalRoofHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RoofPyramidalRoofHeight;` |

**说明:**

> 屋顶攒尖高度

---

### 属性 `RoofWallHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , VisibleAnywhere) float RoofWallHeight;` |

**说明:**

> 屋顶墙高度

---

## 蓝图暴露函数

### 函数 `RaiseFoundationHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RaiseFoundationHeight();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 升高地基高度

---

### 函数 `LowerFoundationHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LowerFoundationHeight();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 降低地基高度

---

### 函数 `Reset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void Reset();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重置信息

---

### 函数 `IsActorExist`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsActorExist(const FGridPosition& GridPos) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查格子是否存在显示的Actor

---

### 函数 `CalcRoofHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcRoofHeight();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据格子计算屋顶高度

---

### 函数 `AdjustCornerPosHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CornerPos` | `UPARAM(ref) FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AdjustCornerPosHeight(UPARAM(ref) FVector& CornerPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 调整格子角位置高度

---

### 函数 `GetRectAreaPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `TArray<FVector>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetRectAreaPoints(TArray<FVector>& Points);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得矩形区域范围点

---

### 函数 `GetPresetAreaPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `TArray<FVector>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetPresetAreaPoints(TArray<FVector>& Points);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得预设建筑区域范围点

---

### 函数 `CheckPointsSatisfyAreaCurves`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `const TArray<FVector>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckPointsSatisfyAreaCurves(const TArray<FVector>& Points);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查坐标点是否满足区域曲线范围

---

### 函数 `CheckCanPlaceActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EnvironComponent` | [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* |
| `Points` | `const TArray<FVector>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckCanPlaceActor(UERW_EnvironComponent* EnvironComponent , const TArray<FVector>& Points);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否能放置Actor

---

### 函数 `CollectLineAreaPoses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectLineAreaPoses();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 收集边线上的位置

---

### 函数 `UpdateWallPillars`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateWallPillars();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新墙接缝柱

---

### 函数 `AddWallPillar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SeamPoint` | const [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void AddWallPillar(const FGridSeamPoint& SeamPoint);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 新增墙接缝柱

---

### 函数 `RemoveWallPillar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SeamPoint` | const [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void RemoveWallPillar(const FGridSeamPoint& SeamPoint);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 移除墙接缝柱

---

### 函数 `CollectLineAreaGridPoses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectLineAreaGridPoses();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 收集线型区域上的格子信息

---

### 函数 `CollectRectAreaGridPoses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Layer` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectRectAreaGridPoses(int32 Layer);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 收集矩形区域上的格子信息

---

### 函数 `SetRectStartMinAndMax`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetRectStartMinAndMax();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置矩形区域起始的最小最大格子坐标

---

### 函数 `CalcRectStartActorLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void CalcRectStartActorLocation(FVector& Location);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 计算矩形区域起始Actor的位置

---

### 函数 `UpdateCurMinAndMax`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateCurMinAndMax(const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新矩形区域当前的最小最大格子坐标

---

### 函数 `IsNewRectGridPos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsNewRectGridPos(const FGridPosition& GridPos) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查格子坐标是否是新的矩形区域格子

---

### 函数 `CalcRectActorLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `Location` | `FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void CalcRectActorLocation(const FGridPosition& GridPos , FVector& Location);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 通过格子坐标计算矩形区域Actor的位置

---

### 函数 `CollectUpdateOverlappedWalls`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectUpdateOverlappedWalls();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 收集并更新围墙门覆盖的围墙

---

### 函数 `CollectRoofData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectRoofData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 收集屋顶各部位数据

---

### 函数 `UpdateRoof`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateRoof();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新屋顶

---

### 函数 `UpdateRoofPartTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |
| `PartType` | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| `Transform` | `const FTransform&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateRoofPartTransform(AActor* Actor , ERoofPartType PartType , const FTransform& Transform);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新屋顶部位的Transform

---

### 函数 `CollectStartPosSurroundingActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Layer` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CollectStartPosSurroundingActors(int32 Layer);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 收集起始位置周边同类型的Actor

---

### 函数 `CalcSoloBuildingResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcSoloBuildingResources();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算单独放置的建筑的资源消耗

---

### 函数 `CalcVisibleActorResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcVisibleActorResources();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算显示的建筑的资源消耗

---

### 函数 `UpdateVisibleAndHideActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateVisibleAndHideActors();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新显示和隐藏的Actor

---

### 函数 `UpdateFillers`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateFillers();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新建筑下方填充模型

---

### 函数 `UpdateFiller`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AActor*` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateFiller(AActor* BuildObject , const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新填充模型

---

### 函数 `UpdateFillerPreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AActor*` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateFillerPreview(AActor* BuildObject , const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新填充模型预览显示

---

### 函数 `SetVisible`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |
| `Visible` | `bool` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void SetVisible(AActor* Actor , bool Visible , const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置Actor是否显示

---

### 函数 `UpdateLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateLocation(AActor* Actor , const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新Actor位置

---

### 函数 `AddPresetActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `Index` | `int32` |
| `Actor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddPresetActor(const FName& ID , int32 Index , AActor* Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入预设建筑Actor

---

### 函数 `AddPresetEmbeddedWall`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Data` | const [FPresetData](../ERW_CommonTypes__FPresetData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddPresetEmbeddedWall(const FPresetData& Data);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入预设嵌入式墙体

---

### 函数 `AddPresetDoorOrWindow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Data` | const [FPresetData](../ERW_CommonTypes__FPresetData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddPresetDoorOrWindow(const FPresetData& Data);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入预设的门或窗

---

### 函数 `ReplacePresetEmbeddedWallInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReplacePresetEmbeddedWallInstances();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 替换预设嵌入式墙体模型

---

### 函数 `CalcPresetAreaMaxHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcPresetAreaMaxHeight();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算预设建筑区域最大高度

---

### 函数 `UpdatePresetActorsTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdatePresetActorsTransform();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新预设建筑的Transform

---

### 函数 `UpdateSoloObjectLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdateSoloObjectLocation(AActor* Actor , const FGridPosition& GridPos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新单个物体的位置

---

### 函数 `UpdatePresetActorTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |
| `Transform` | `const FTransform&` |
| `Data` | const [FPresetData](../ERW_CommonTypes__FPresetData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdatePresetActorTransform(AActor* Actor , const FTransform& Transform , const FPresetData& Data);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新预设建筑的Transform

---

### 函数 `UpdatePresetActorColor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void UpdatePresetActorColor(AActor* Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新预设建筑的颜色

---

### 函数 `SpawnActorWithCurrentLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `AActor*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Class` | `TSubclassOf<class AActor>` |
| `（匿名/仅类型）` | `const FTransform& Transform = FTransform()` |
| `（匿名/仅类型）` | `ESpawnActorCollisionHandlingMethod CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AActor* SpawnActorWithCurrentLevel(TSubclassOf<class AActor> Class , const FTransform& Transform = FTransform() , ESpawnActorCollisionHandlingMethod CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成带当前关卡信息的Actor

---

### 函数 `PutDownVisibleActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GOAP_ManagerComponent` | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PutDownVisibleActors(UGOAP_ManagerComponent* GOAP_ManagerComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 放下显示的Actor

---

### 函数 `PutDownPresetActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GOAP_ManagerComponent` | [UGOAP_ManagerComponent](../GOAP/GOAP_ManagerComponent__UGOAP_ManagerComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PutDownPresetActors(UGOAP_ManagerComponent* GOAP_ManagerComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 放下预设建筑

---

### 函数 `AddToMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `Actor` | `AActor*` |
| `Batch` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void AddToMap(const FGridPosition& GridPos , AActor* Actor , int32 Batch);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 将Actor加入到地图信息中

---

### 函数 `UpdateSurroundingBuildObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void UpdateSurroundingBuildObjects();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 更新周围建筑的填充模型

---

### 函数 `PutDownRoofs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Batch` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PutDownRoofs(int32 Batch);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 放置屋顶到地图中

---

### 函数 `SetDistributionInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DistributionInfo` | UPARAM(ref) TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetDistributionInfos(UPARAM(ref) TMap<FGridPosition , EGridDistributionType>& DistributionInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置物体占格子分布信息

---

### 函数 `FindWalls`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Layer` | `int32` |
| `Type` | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| `Walls` | TMap<[EEmbeddedWallType](../ERW_Enumerations__EEmbeddedWallType.md) , AActor*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void FindWalls(int32 Layer , EEnvironType Type , TMap<EEmbeddedWallType , AActor*>& Walls);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得多个格子中的墙

---

### 函数 `CanReplaceWall`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, BlueprintImplementableEvent |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | `AActor*` |
| `TipsType` | UPARAM(ref) [EPlaceBuildingTipsType](../ERW_Enumerations__EPlaceBuildingTipsType.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) bool CanReplaceWall(AActor* Wall , UPARAM(ref) EPlaceBuildingTipsType& TipsType);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 判断墙体Actor是否能被替换

---

### 函数 `HideVisibleActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void HideVisibleActors();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 隐藏显示的Actor

---

### 函数 `HideVisibleRoofs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void HideVisibleRoofs();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 隐藏显示的屋顶

---

### 函数 `DestroyHideActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DestroyHideActors();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 销毁隐藏的Actor

---

### 函数 `DestroyHideRoofs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable) void DestroyHideRoofs();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 销毁隐藏的屋顶

---

### 函数 `DestroyActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void DestroyActor(AActor* Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 销毁Actor

---

### 函数 `ClearAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable , BlueprintNativeEvent) void ClearAll();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 清除所有信息

---

### 函数 `RemoveWallPillars`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveWallPillars();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除墙接缝柱

---

### 函数 `SpawnBuildObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Class` | `TSubclassOf<class AActor>` |
| `Num` | `int32` |
| `MeshVariantNum` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SpawnBuildObjects(TSubclassOf<class AActor> Class , int32 Num , int32 MeshVariantNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成建筑

---

### 函数 `SpawnRoofs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Class` | `TSubclassOf<class AActor>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SpawnRoofs(TSubclassOf<class AActor> Class);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成屋顶

---

### 函数 `CalcRoofPartNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RoofPartNums` | TMap<[ERoofPartType](../ERW_Enumerations__ERoofPartType.md) , int32>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CalcRoofPartNum(TMap<ERoofPartType , int32>& RoofPartNums);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算屋顶各部位数量

---

### 函数 `ClearRoofActors`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearRoofActors();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清空屋顶Actor

---

### 函数 `GetVisibleActorsSize`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetVisibleActorsSize();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取显示actor数量

---
