# `class` `UERW_RoadBranchWidget`

**源码头文件:** `EastRimWorld/UI/ERW_RoadBranchWidget.h`

---

## 功能说明（来自头文件注释）

> 一条分支容器。放在 ERW_CurveRoadWidget 的 MarkerSlot 中,带目标城市 id;
> 内部按子项顺序摆红点(形状点),末端红点 = 通向该城市的连接点。
> 约定:本控件应铺满 MarkerSlot(anchors 0-1, offset 0),使内部红点的 CanvasPanelSlot 坐标
> 直接等于路面(ERW_CurveRoadWidget)局部坐标,无需跨层换算。

## 蓝图暴露变量

### 属性 `CityId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="RoadBranch" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RoadBranch") FName CityId;` |

**说明:**

> 这条分支通向的城市 id

---

### 属性 `DotCanvas`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UPanelWidget>` |
| 反射说明符 | BlueprintReadOnly, Category="RoadBranch" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly, Category = "RoadBranch") TObjectPtr<UPanelWidget> DotCanvas;` |

**说明:**

> 可选:指定放红点的容器;不绑定则用本控件根面板。红点用 CanvasPanelSlot 定位

---

## 蓝图暴露函数

### 函数 `GetDotPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="RoadBranch" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutPoints` | `TArray<FVector2D>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "RoadBranch") void GetDotPoints(TArray<FVector2D>& OutPoints) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按子项顺序返回内部红点坐标(分支局部空间;约定分支铺满 MarkerSlot 时即路面坐标)

---
