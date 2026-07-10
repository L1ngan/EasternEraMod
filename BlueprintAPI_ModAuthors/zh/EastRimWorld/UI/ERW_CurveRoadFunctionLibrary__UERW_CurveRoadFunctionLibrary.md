# `class` `UERW_CurveRoadFunctionLibrary`

**源码头文件:** `EastRimWorld/UI/ERW_CurveRoadFunctionLibrary.h`

---

## 功能说明（来自头文件注释）

> 曲线路径工具库:对一组有序点(路点)按弧长取曲线上的点/切线。
> 与 ERW_CurveRoadWidget 同一套曲线(bSmooth=true 走 Catmull-Rom 经过各点,false 走直线折线)。
> 典型用法:世界地图 move item 按"时间百分比 -> 弧长百分比 -> 曲线坐标"沿曲线匀速移动。

## 蓝图暴露函数

### 函数 `GetCurveLength`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="CurveRoad" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `const TArray<FVector2D>&` |
| `true` | `bool bSmooth =` |
| `64` | `int32 Samples =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "CurveRoad") static float GetCurveLength(const TArray<FVector2D>& Points, bool bSmooth = true, int32 Samples = 64);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 经过给定点列的曲线总弧长(像素)。bSmooth: true=平滑过点(Catmull-Rom),false=直线折线

---

### 函数 `GetPointOnCurveAtDistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="CurveRoad" |
| 返回类型 | `FVector2D` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `const TArray<FVector2D>&` |
| `Distance` | `float` |
| `true` | `bool bSmooth =` |
| `64` | `int32 Samples =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "CurveRoad") static FVector2D GetPointOnCurveAtDistance(const TArray<FVector2D>& Points, float Distance, bool bSmooth = true, int32 Samples = 64);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 距起点指定弧长(像素)处曲线上的点。Distance 自动夹到 [0, 总弧长]

---

### 函数 `GetPointOnCurveAtArcPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="CurveRoad" |
| 返回类型 | `FVector2D` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `const TArray<FVector2D>&` |
| `Percent` | `float` |
| `true` | `bool bSmooth =` |
| `64` | `int32 Samples =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "CurveRoad") static FVector2D GetPointOnCurveAtArcPercent(const TArray<FVector2D>& Points, float Percent, bool bSmooth = true, int32 Samples = 64);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 按弧长百分比(0~1,匀速)取曲线上的点。直接用"已用时间/总时间"喂 Percent 即可沿曲线匀速移动

---

### 函数 `GetTangentOnCurveAtArcPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="CurveRoad" |
| 返回类型 | `FVector2D` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Points` | `const TArray<FVector2D>&` |
| `Percent` | `float` |
| `true` | `bool bSmooth =` |
| `64` | `int32 Samples =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "CurveRoad") static FVector2D GetTangentOnCurveAtArcPercent(const TArray<FVector2D>& Points, float Percent, bool bSmooth = true, int32 Samples = 64);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 按弧长百分比取该处单位切线(可用来算朝向/选方向贴图)

---

### 函数 `CollectCurveRoads`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Move" |
| 返回类型 | TArray<[UERW_CurveRoadWidget](ERW_CurveRoadWidget__UERW_CurveRoadWidget.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RoadCanvas` | `UPanelWidget*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Move") static TArray<UERW_CurveRoadWidget*> CollectCurveRoads(UPanelWidget* RoadCanvas);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 收集容器(如 CanvasPanel_127)下所有 WBP_CurveRoad 子控件。WorldMap1 初始化时调一次,结果存为变量复用

---

### 函数 `BuildMoveRoute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Move" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Roads` | const TArray<[UERW_CurveRoadWidget](ERW_CurveRoadWidget__UERW_CurveRoadWidget.md)*>& |
| `CityRoute` | `const TArray<FName>&` |
| `CityPositions` | `const TArray<FVector2D>&` |
| `OutLegs` | TArray<[FMoveItemRouteLeg](ERW_CurveRoadFunctionLibrary__FMoveItemRouteLeg.md)>& |
| `OutTotalLen` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Move") static void BuildMoveRoute(const TArray<UERW_CurveRoadWidget*>& Roads, const TArray<FName>& CityRoute, const TArray<FVector2D>& CityPositions, TArray<FMoveItemRouteLeg>& OutLegs, float& OutTotalLen);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按有序城市 + 各城坐标,在 Roads 里逐段找连接两城的路,构建移动路线缓存(只在 MovePointMap 变化时调一次)。
> 找不到对应路的段落退化为两城直线。CityPositions 与 CityRoute 一一对应同序。

---

### 函数 `GetMovePosFromRoute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="CurveRoad|Move" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Legs` | const TArray<[FMoveItemRouteLeg](ERW_CurveRoadFunctionLibrary__FMoveItemRouteLeg.md)>& |
| `TotalLen` | `float` |
| `MovePercent` | `float` |
| `OutPos` | `FVector2D&` |
| `OutTangent` | `FVector2D&` |
| `OutRoad` | [UERW_CurveRoadWidget](ERW_CurveRoadWidget__UERW_CurveRoadWidget.md)*& |
| `bValid` | `bool&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "CurveRoad|Move") static void GetMovePosFromRoute(const TArray<FMoveItemRouteLeg>& Legs, float TotalLen, float MovePercent, FVector2D& OutPos, FVector2D& OutTangent, UERW_CurveRoadWidget*& OutRoad, bool& bValid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 用缓存的移动路线,按总进度百分比(=已用时间/总时间)取当前点 + 单位切线。
> OutPos:若 OutRoad 非空 = 该路控件的**局部坐标**(调用方需按控件几何换算到目标画布);
>        若 OutRoad 为空(直线兜底段)= 城市坐标空间(无需换算)。无有效段 bValid=false。

---

### 函数 `GetEightDirIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="CurveRoad|Move" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tangent` | `FVector2D` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "CurveRoad|Move") static int32 GetEightDirIndex(FVector2D Tangent);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 由切线方向得到 8 方向下标(屏幕坐标系 Y 向下)。
> 0=Right 1=DownRight 2=Down 3=LeftDown 4=Left 5=LeftUp 6=Up 7=UpRight。
> 蓝图按此顺序把 8 张 gif 组成数组,用下标取即可。

---

### 函数 `SelectGifByTangent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="CurveRoad|Move" |
| 返回类型 | `TSoftObjectPtr<UTexture2D>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tangent` | `FVector2D` |
| `Right` | `TSoftObjectPtr<UTexture2D>` |
| `DownRight` | `TSoftObjectPtr<UTexture2D>` |
| `Down` | `TSoftObjectPtr<UTexture2D>` |
| `LeftDown` | `TSoftObjectPtr<UTexture2D>` |
| `Left` | `TSoftObjectPtr<UTexture2D>` |
| `LeftUp` | `TSoftObjectPtr<UTexture2D>` |
| `Up` | `TSoftObjectPtr<UTexture2D>` |
| `UpRight` | `TSoftObjectPtr<UTexture2D>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "CurveRoad|Move") static TSoftObjectPtr<UTexture2D> SelectGifByTangent(FVector2D Tangent, TSoftObjectPtr<UTexture2D> Right, TSoftObjectPtr<UTexture2D> DownRight, TSoftObjectPtr<UTexture2D> Down, TSoftObjectPtr<UTexture2D> LeftDown, TSoftObjectPtr<UTexture2D> Left, TSoftObjectPtr<UTexture2D> LeftUp, TSoftObjectPtr<UTexture2D> Up, TSoftObjectPtr<UTexture2D> UpRight);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 由切线方向在 8 张方向 gif 里选一张返回(下标同 GetEightDirIndex)。
> 省去蓝图里搭 8 路选择,直接接 SetBrushFromSoftTexture 即可。

---

### 函数 `GetEightDirIndexFromAngle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="CurveRoad|Move" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AngleDeg` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "CurveRoad|Move") static int32 GetEightDirIndexFromAngle(float AngleDeg);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 由朝向角度(度,= Atan2(切线Y,切线X),屏幕坐标 Y 向下;输入范围不限,内部归一到 [0,360))得 8 方向下标。结果同 GetEightDirIndex。

---

### 函数 `SelectGifByAngle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="CurveRoad|Move" |
| 返回类型 | `TArray<TSoftObjectPtr<UTexture2D>>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AngleDeg` | `float` |
| `Right` | `const TArray<TSoftObjectPtr<UTexture2D>>&` |
| `DownRight` | `const TArray<TSoftObjectPtr<UTexture2D>>&` |
| `Down` | `const TArray<TSoftObjectPtr<UTexture2D>>&` |
| `LeftDown` | `const TArray<TSoftObjectPtr<UTexture2D>>&` |
| `Left` | `const TArray<TSoftObjectPtr<UTexture2D>>&` |
| `LeftUp` | `const TArray<TSoftObjectPtr<UTexture2D>>&` |
| `Up` | `const TArray<TSoftObjectPtr<UTexture2D>>&` |
| `UpRight` | `const TArray<TSoftObjectPtr<UTexture2D>>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "CurveRoad|Move") static TArray<TSoftObjectPtr<UTexture2D>> SelectGifByAngle(float AngleDeg, const TArray<TSoftObjectPtr<UTexture2D>>& Right, const TArray<TSoftObjectPtr<UTexture2D>>& DownRight, const TArray<TSoftObjectPtr<UTexture2D>>& Down, const TArray<TSoftObjectPtr<UTexture2D>>& LeftDown, const TArray<TSoftObjectPtr<UTexture2D>>& Left, const TArray<TSoftObjectPtr<UTexture2D>>& LeftUp, const TArray<TSoftObjectPtr<UTexture2D>>& Up, const TArray<TSoftObjectPtr<UTexture2D>>& ...`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 由朝向角度(度)在 8 组方向 gif 帧序列里选一组返回(下标顺序同 GetEightDirIndex:Right/DownRight/Down/LeftDown/Left/LeftUp/Up/UpRight)。
> 每个方向是一组帧贴图(TArray);返回选中方向的整组帧,直接接 GifImage 的帧数组。
> 直接喂 UERW_WorldMapMoveItemBase::UpdateMoveItem 的 OutAngle,取代蓝图里 ~40 节点的角度级联。

---
