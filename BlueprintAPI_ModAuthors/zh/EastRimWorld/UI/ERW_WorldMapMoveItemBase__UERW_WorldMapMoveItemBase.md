# `class` `UERW_WorldMapMoveItemBase`

**源码头文件:** `EastRimWorld/UI/ERW_WorldMapMoveItemBase.h`

---

## 功能说明（来自头文件注释）

> 世界地图移动图标(moveitem)C++ 基类。把"按城市顺序沿曲线路求当前坐标"的逻辑全放这里:
> - RoadContainer = WB_WorldMap1 的 CanvasPanel_127(里面是若干 WBP_CurveRoad)
> - UpdateMoveItem(MoveInfo):按 MovePointMap 的有序城市,逐段在路里取 GetPointOnRoute,
>   结果直接设到自身 CanvasPanelSlot;路线(城市序列)变化时才重建缓存,平时零遍历。
> WB_WorldMapMoveItem 应 reparent 到本类。

## 蓝图暴露变量

### 属性 `RoadContainer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UPanelWidget>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldMapMove" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldMapMove") TObjectPtr<UPanelWidget> RoadContainer;` |

**说明:**

> 路容器(WB_WorldMap1 的 CanvasPanel_127)。设一次即可,内部自动收集其中的 WBP_CurveRoad

---

### 属性 `SiegePullbackPixels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldMapMove" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldMapMove") float SiegePullbackPixels = 50.f;` |

**说明:**

> 围城(Besieging)时,沿路距目标城回退的像素数;item 停在城外这个距离处

---

## 蓝图暴露函数

### 函数 `SetRoadContainer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldMapMove" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InContainer` | `UPanelWidget*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldMapMove") void SetRoadContainer(UPanelWidget* InContainer);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置路容器并立即收集路列表(WB_WorldMap1 生成 item 时调一次,传 CanvasPanel_127)

---

### 函数 `UpdateMoveItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldMapMove" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveInfo` | const [FCharacterWorldMoveInfo2D](../WorldSystem/WorldStruct__FCharacterWorldMoveInfo2D.md)& |
| `OutAngle` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldMapMove") bool UpdateMoveItem(const FCharacterWorldMoveInfo2D& MoveInfo, float& OutAngle);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按移动信息更新本 item 坐标(直接设到自身 CanvasPanelSlot),返回当前朝向角度(度)。
> OutAngle = Atan2(切线.Y, 切线.X) 的度数(屏幕坐标 Y 向下:0=右,90=下,180/-180=左,-90=上;范围 -180~180)。
> 路线变化时自动重建缓存,每帧只查表。返回是否成功(成功才更新了位置)。

---
