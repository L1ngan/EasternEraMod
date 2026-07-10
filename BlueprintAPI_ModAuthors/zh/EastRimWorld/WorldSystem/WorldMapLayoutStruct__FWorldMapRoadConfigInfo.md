# `struct` `FWorldMapRoadConfigInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

---

## 功能说明（来自头文件注释）

> 世界地图曲线路(WBP_CurveRoad / UERW_CurveRoadWidget)配置。
> 独立表 DT_WorldMapRoadConfig，行名(KEY) = 路 id。
> 覆盖 UERW_CurveRoadWidget 的全部可编辑字段(形状 / 渲染 / 路网) + 它在 CanvasPanel_127 的 slot。
> 还原：由新增的 UERW_CurveRoadWidget::ApplyConfig 读本行 → 设属性 + (数据建网) + 重绘。
>  - bHasFork=false：单路径，用 Start/End/TurnPoints + ConnectedCities。
>  - bHasFork=true ：分叉网络，用 ForkPoint + Branches(每分支末点通向一城)。

## 蓝图暴露变量

### 属性 `SlotPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Slot" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slot") FVector2D SlotPosition = FVector2D::ZeroVector;` |

**说明:**

> —— 在 CanvasPanel_127 的 slot ——

---

### 属性 `SlotSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Slot" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slot") FVector2D SlotSize = FVector2D(876.f, 764.f);` |

**说明:**

> Slot Size 字段。

---

### 属性 `StartPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Shape" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") FVector2D StartPoint = FVector2D::ZeroVector;` |

**说明:**

> —— 形状(单路径模式) ——

---

### 属性 `EndPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Shape" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") FVector2D EndPoint = FVector2D(200.f, 0.f);` |

**说明:**

> End Point 字段。

---

### 属性 `TurnPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FVector2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Shape" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") TArray<FVector2D> TurnPoints;` |

**说明:**

> Turn Points 字段。

---

### 属性 `bSmoothTurns`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Shape" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") bool bSmoothTurns = true;` |

**说明:**

> 是否 Smooth Turns 的布尔标记。

---

### 属性 `BendAmount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Shape" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") float BendAmount = 80.f;` |

**说明:**

> Bend Amount 字段。

---

### 属性 `bUseExplicitControlPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Shape" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") bool bUseExplicitControlPoints = false;` |

**说明:**

> 是否 Use Explicit Control Points 的布尔标记。

---

### 属性 `ControlPoint1`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Shape" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") FVector2D ControlPoint1 = FVector2D(66.f, 0.f);` |

**说明:**

> Control Point 1 字段。

---

### 属性 `ControlPoint2`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Shape" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") FVector2D ControlPoint2 = FVector2D(133.f, 0.f);` |

**说明:**

> Control Point 2 字段。

---

### 属性 `StartWidth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Render" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") float StartWidth = 24.f;` |

**说明:**

> —— 渲染 ——

---

### 属性 `EndWidth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Render" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") float EndWidth = 24.f;` |

**说明:**

> End Width 字段。

---

### 属性 `Segments`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Render" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render", meta = (ClampMin = "2")) int32 Segments = 48;` |

**说明:**

> Segments 字段。

---

### 属性 `RoadBrushResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UObject>` |
| 反射说明符 | BlueprintReadWrite, Category="Render" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") TSoftObjectPtr<UObject> RoadBrushResource;` |

**说明:**

> 路面贴图或 UI 材质(还原时设到 RoadBrush.ResourceObject)

---

### 属性 `bTileTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Render" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") bool bTileTexture = true;` |

**说明:**

> 是否 Tile Texture 的布尔标记。

---

### 属性 `TileLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Render" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") float TileLength = 128.f;` |

**说明:**

> Tile Length 字段。

---

### 属性 `Tint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadWrite, Category="Render" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") FLinearColor Tint = FLinearColor::White;` |

**说明:**

> Tint 字段。

---

### 属性 `ForkHubRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Render" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") float ForkHubRadius = 0.f;` |

**说明:**

> Fork Hub Radius 字段。

---

### 属性 `bUseMarkers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") bool bUseMarkers = false;` |

**说明:**

> —— 路网 ——
> 配置化后建议 false：直接用本表的点 / 分支建网，不再依赖 MarkerSlot 里手摆的红点

---

### 属性 `bHideMarkersAtRuntime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") bool bHideMarkersAtRuntime = true;` |

**说明:**

> 是否 Hide Markers At Runtime 的布尔标记。

---

### 属性 `ConnectedCities`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWorldMapRoadCityLink](WorldMapLayoutStruct__FWorldMapRoadCityLink.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") TArray<FWorldMapRoadCityLink> ConnectedCities;` |

**说明:**

> 单路径模式：直接连接的城市

---

### 属性 `bHasFork`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") bool bHasFork = false;` |

**说明:**

> 分叉网络模式

---

### 属性 `ForkPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") FVector2D ForkPoint = FVector2D::ZeroVector;` |

**说明:**

> Fork Point 字段。

---

### 属性 `Branches`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWorldMapRoadBranchConfig](WorldMapLayoutStruct__FWorldMapRoadBranchConfig.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") TArray<FWorldMapRoadBranchConfig> Branches;` |

**说明:**

> Branches 字段。

---

### 属性 `RoadLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="MoveTime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveTime") float RoadLength = 0.f;` |

**说明:**

> —— 移动时间用 ——
> 这条路的真实曲线长度(road-local 像素;与城市 dataPos 同 1:1 尺度,可直接和 CalculateLen 直线距离比较)。
> dump 时由 UERW_CurveRoadWidget::GetCurveLength() 填。WorldMapManage 据此按真实路长算 NeedTotalTime。

---
