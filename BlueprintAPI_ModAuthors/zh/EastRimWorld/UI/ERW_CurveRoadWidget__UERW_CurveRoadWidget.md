# `class` `UERW_CurveRoadWidget`

**源码头文件:** `EastRimWorld/UI/ERW_CurveRoadWidget.h`

---

## 功能说明（来自头文件注释）

> 自绘曲线道路控件。
> 在控件局部空间内,于起点(StartPoint)与终点(EndPoint)之间绘制一条三次贝塞尔曲线,
> 并把曲线渲染成一条带贴图/材质(RoadBrush)的"道路"。可按百分比取曲线上坐标与切线。
> 取点(GetPointAtPercent)与绘制(NativePaint)共用 GetEffectiveControlPoints,
> 保证"画出来的线"与"取出来的点"始终是同一条曲线。

## 蓝图暴露变量

### 属性 `StartPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FVector2D StartPoint = FVector2D(0.f, 0.f);` |

**说明:**

> 曲线起点(局部坐标,相对控件左上角,像素)

---

### 属性 `EndPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FVector2D EndPoint = FVector2D(200.f, 0.f);` |

**说明:**

> 曲线终点(局部坐标,相对控件左上角,像素)

---

### 属性 `TurnPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FVector2D>` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") TArray<FVector2D> TurnPoints;` |

**说明:**

> 转弯点列表(局部坐标)。元素个数 = 转弯处数;每个元素 = 转弯所在位置。
> 路径依次经过 起点 -> 各转弯点 -> 终点。为空时退化为单段贝塞尔(用 BendAmount / 显式控制点)。

---

### 属性 `bSmoothTurns`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") bool bSmoothTurns = true;` |

**说明:**

> true:经过各转弯点的平滑曲线(Catmull-Rom);false:直线折线(尖角转弯)。仅当 TurnPoints 非空时生效

---

### 属性 `BendAmount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") float BendAmount = 80.f;` |

**说明:**

> 弯度(仅 TurnPoints 为空时生效)。bUseExplicitControlPoints 为 false 时:两控制点取连线 1/3、2/3 处,沿垂直方向偏移 BendAmount

---

### 属性 `bUseExplicitControlPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") bool bUseExplicitControlPoints = false;` |

**说明:**

> 为 true 时直接使用 ControlPoint1 / ControlPoint2,否则用 BendAmount 自动计算

---

### 属性 `ControlPoint1`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FVector2D ControlPoint1 = FVector2D(66.f, 0.f);` |

**说明:**

> 显式控制点 1(仅 bUseExplicitControlPoints 为 true 时生效)

---

### 属性 `ControlPoint2`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FVector2D ControlPoint2 = FVector2D(133.f, 0.f);` |

**说明:**

> 显式控制点 2(仅 bUseExplicitControlPoints 为 true 时生效)

---

### 属性 `StartWidth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") float StartWidth = 24.f;` |

**说明:**

> 起点处路面宽度(像素)

---

### 属性 `EndWidth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") float EndWidth = 24.f;` |

**说明:**

> 终点处路面宽度(像素),与 StartWidth 不同则沿曲线渐变

---

### 属性 `Segments`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad", meta = (ClampMin = "2")) int32 Segments = 48;` |

**说明:**

> 曲线分段数,越大越平滑(最小 2)

---

### 属性 `RoadBrush`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FSlateBrush RoadBrush;` |

**说明:**

> 路面外观。把贴图或 UI 材质设置到它的 ResourceObject;美术可在面板直接拖

---

### 属性 `bTileTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") bool bTileTexture = true;` |

**说明:**

> true:U = 沿曲线累计弧长 / TileLength(贴图沿路平铺);false:U = t(整图拉伸铺满)

---

### 属性 `TileLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") float TileLength = 128.f;` |

**说明:**

> bTileTexture 为 true 时,一次平铺对应的曲线长度(像素)

---

### 属性 `Tint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FLinearColor Tint = FLinearColor::White;` |

**说明:**

> 整体着色

---

### 属性 `ForkHubRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Network") float ForkHubRadius = 0.f;` |

**说明:**

> 岔路口圆形 hub 半径(像素);仅在分支不足 2 条无法做 road-fan 时作退化兜底盖缝;<=0 时自动取路宽的一半

---

### 属性 `ForkMouthInset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Network", meta = (ClampMin = "0")) float ForkMouthInset = 16.f;` |

**说明:**

> road-fan:各分支在距岔路口此弧长(像素)处取"路口"边缘,越大交汇填充区越大、越能吞掉分支根部棱角

---

### 属性 `ForkFilletSegs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Network", meta = (ClampMin = "0")) int32 ForkFilletSegs = 3;` |

**说明:**

> road-fan:相邻分支缺口处插入的圆角细分数(0=直边硬扇,越大过渡越圆)

---

### 属性 `ForkHubBrush`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Network") FSlateBrush ForkHubBrush;` |

**说明:**

> 岔路口专用覆盖图(可选)。一旦设置了它的 ResourceObject,岔路口改为在 Fork 处叠加这张图来盖住交汇处,
> 取代程序化圆角(road-fan)。建议美术画一张自然的路口泥地贴图、带柔和 alpha 边,以便和路面无缝融合。

---

### 属性 `ForkHubImageSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Network", meta = (ClampMin = "0")) float ForkHubImageSize = 0.f;` |

**说明:**

> 岔路口覆盖图的边长(像素,正方形);<=0 时自动取 max(StartWidth,EndWidth)*2.5

---

### 属性 `ForkConnectorBrush`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSlateBrush` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Network") FSlateBrush ForkConnectorBrush;` |

**说明:**

> 分支接入图(可选)。设置后,在每条分支接入岔路口处沿该分支方向叠一段"连接"贴图(自动旋转对齐分支方向),
> 画在岔口覆盖图之上,用于把道路平滑过渡进岔口。建议画一张沿长度方向 hub→路面 渐变、四边带柔和 alpha 的条状图。

---

### 属性 `ForkConnectorLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Network", meta = (ClampMin = "0")) float ForkConnectorLength = 0.f;` |

**说明:**

> 分支接入图沿分支方向的长度(像素);<=0 时自动取 max(StartWidth,EndWidth)*2

---

### 属性 `MarkerSlot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UPanelWidget>` |
| 反射说明符 | BlueprintReadOnly, Category="CurveRoad|Markers" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly, Category = "CurveRoad|Markers") TObjectPtr<UPanelWidget> MarkerSlot;` |

**说明:**

> 红点配置容器(可为 CanvasPanel,或装着 CanvasPanel 的 NamedSlot)。
> 把红点 Image 摆进里面(NamedSlot 则先套一个 CanvasPanel 再摆),控件按子项顺序
> 读取每个红点的 Canvas 坐标,自动连成路径(起点→各转弯→终点)。
> 建议红点 Alignment 设 (0.5,0.5),使其坐标=红点中心。

---

### 属性 `bUseMarkers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Markers") bool bUseMarkers = true;` |

**说明:**

> true:优先用 MarkerSlot 里的红点生成路径(>=2 个才生效);否则用 Start/End/TurnPoints 坐标

---

### 属性 `bHideMarkersAtRuntime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Markers" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Markers") bool bHideMarkersAtRuntime = true;` |

**说明:**

> 运行时(非设计器)是否隐藏红点,只显示道路

---

### 属性 `ConnectedCities`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCurveRoadCity](ERW_CurveRoadWidget__FCurveRoadCity.md)> |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad|Network" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad|Network") TArray<FCurveRoadCity> ConnectedCities;` |

**说明:**

> 这条路连接的城市。
> - 有分叉/分支(MarkerSlot 里有 WBP_RoadBranch)时:运行时自动用分支结构覆盖赋值,外部填的会被替换。
> - 只有红点单条路径(无分支)时:采用此处外部手填的内容。

---

## 蓝图暴露函数

### 函数 `GetPointAtPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad" |
| 返回类型 | `FVector2D` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Percent` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad") FVector2D GetPointAtPercent(float Percent) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按参数化 t(= Clamp(Percent,0,1))取三次贝塞尔上的点(局部坐标)。
> B(t) = (1-t)^3*P0 + 3(1-t)^2*t*P1 + 3(1-t)t^2*P2 + t^3*P3

---

### 函数 `GetTangentAtPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad" |
| 返回类型 | `FVector2D` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Percent` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad") FVector2D GetTangentAtPercent(float Percent) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取该处单位切线向量(贝塞尔导数归一化,退化时返回安全默认 (1,0))。
> B'(t) = 3(1-t)^2*(P1-P0) + 6(1-t)t*(P2-P1) + 3t^2*(P3-P2)

---

### 函数 `GetCurveLength`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad") float GetCurveLength() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取整条曲线(经过所有转弯点)的总弧长(像素)

---

### 函数 `GetPointAtDistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad" |
| 返回类型 | `FVector2D` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Distance` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad") FVector2D GetPointAtDistance(float Distance) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取距起点指定弧长(像素)处的曲线坐标(局部坐标)。Distance 自动夹到 [0, 总弧长]

---

### 函数 `RefreshConnectedCities`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Network" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Network") void RefreshConnectedCities();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重新从 MarkerSlot 的分支汇总 ConnectedCities

---

### 函数 `GetConnectedCityIds`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Network" |
| 返回类型 | `TArray<FName>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Network") TArray<FName> GetConnectedCityIds() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 这条路能达到的所有城市 id

---

### 函数 `GetCityPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Network" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityId` | `FName` |
| `OutPoint` | `FVector2D&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Network") bool GetCityPoint(FName CityId, FVector2D& OutPoint) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取某城市的连接点(局部坐标);找不到返回 false

---

### 函数 `GetRouteLength`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Network" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartCityId` | `FName` |
| `TargetCityId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Network") float GetRouteLength(FName StartCityId, FName TargetCityId) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 起始城市→目标城市,沿岔路口拼接的路由总长度(像素);无效返回 0

---

### 函数 `GetPointOnRoute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Network" |
| 返回类型 | `FVector2D` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartCityId` | `FName` |
| `TargetCityId` | `FName` |
| `Distance` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Network") FVector2D GetPointOnRoute(FName StartCityId, FName TargetCityId, float Distance) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 起始城市→目标城市,沿路由距起点指定弧长处的坐标;无效返回零向量

---

### 函数 `GetRoutePointAndTangent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Network" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartCityId` | `FName` |
| `TargetCityId` | `FName` |
| `Distance` | `float` |
| `OutPoint` | `FVector2D&` |
| `OutTangent` | `FVector2D&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Network") bool GetRoutePointAndTangent(FName StartCityId, FName TargetCityId, float Distance, FVector2D& OutPoint, FVector2D& OutTangent) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 一次求路由上指定弧长处的"点 + 单位切线"(只重建一次路由,供匀速移动 + 朝向用);无效返回 false

---

### 函数 `FindRoute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Network" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartCityId` | `FName` |
| `TargetCityId` | `FName` |
| `OutPolyline` | `TArray<FVector2D>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Network") bool FindRoute(FName StartCityId, FName TargetCityId, TArray<FVector2D>& OutPolyline) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 求起始→目标城市的路由折线点列(起点城市…岔路口…目标城市);成功返回 true

---

### 函数 `SetEndpoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InStart` | `FVector2D` |
| `InEnd` | `FVector2D` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad") void SetEndpoints(FVector2D InStart, FVector2D InEnd);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置端点并触发重绘

---

### 函数 `SetTurnPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTurnPoints` | `const TArray<FVector2D>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad") void SetTurnPoints(const TArray<FVector2D>& InTurnPoints);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置转弯点列表并触发重绘(元素个数=转弯处数,坐标=转弯位置)

---

### 函数 `ApplyConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Config" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Config` | const [FWorldMapRoadConfigInfo](../WorldSystem/WorldMapLayoutStruct__FWorldMapRoadConfigInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Config") void ApplyConfig(const FWorldMapRoadConfigInfo& Config);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按配置(DT_WorldMapRoadConfig 行)重建本路：设形状/渲染参数 + 用配置的 fork/分支建网，绕开 MarkerSlot。
> 用于运行时数据驱动(策划改表即生效)。有分支→网络模式；无分支→单路径用 Start/End/TurnPoints。

---
