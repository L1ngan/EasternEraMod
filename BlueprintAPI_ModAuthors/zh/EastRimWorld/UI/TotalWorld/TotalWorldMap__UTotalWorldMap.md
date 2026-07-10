# `class` `UTotalWorldMap`

**源码头文件:** `EastRimWorld/UI/TotalWorld/TotalWorldMap.h`

---

## 功能说明（来自头文件注释）

> Total World Map UObject 类型。

## 蓝图暴露变量

### 属性 `ScaleOnceValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ScaleOnceValue;` |

**说明:**

> 单次缩放比例

---

### 属性 `CurrentScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float CurrentScale;` |

**说明:**

> 当前缩放比例

---

### 属性 `MaxExpansionValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxExpansionValue;` |

**说明:**

> 最大扩大为：

---

### 属性 `MinShrinkValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MinShrinkValue;` |

**说明:**

> 最小缩放为：

---

### 属性 `MapSizeBox`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `USizeBox *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) USizeBox * MapSizeBox = nullptr;` |

**说明:**

> Map Size Box 字段。

---

### 属性 `MapImage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UImage*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) UImage* MapImage;` |

**说明:**

> 内部滚动框

---

### 属性 `MapScaleBox`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UScaleBox *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) UScaleBox * MapScaleBox = nullptr;` |

**说明:**

> 缩放框

---

### 属性 `MapImageInitX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float MapImageInitX;` |

**说明:**

> 地图初始大小X

---

### 属性 `MapImageInitY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float MapImageInitY;` |

**说明:**

> 地图初始大小Y

---

### 属性 `SpeedAnim`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SpeedAnim = 1.0f;` |

**说明:**

> Speed Anim 字段。

---

### 属性 `MinimumRollAfterCalculationX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MinimumRollAfterCalculationX;` |

**说明:**

> private:
> 计算后的最小滚动X

---

### 属性 `MaximumRollAfterCalculationX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MaximumRollAfterCalculationX;` |

**说明:**

> 计算后的最大滚动X

---

### 属性 `MinimumRollAfterCalculationY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MinimumRollAfterCalculationY;` |

**说明:**

> 计算后的最小滚动Y

---

### 属性 `MaximumRollAfterCalculationY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MaximumRollAfterCalculationY;` |

**说明:**

> 计算后的最大滚动Y

---

### 属性 `BeyondBorderLocalX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float BeyondBorderLocalX;` |

**说明:**

> 超出的临时X

---

### 属性 `BeyondBorderLocalY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float BeyondBorderLocalY;` |

**说明:**

> 超出的临时Y

---

### 属性 `TimerHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTimerHandle` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FTimerHandle TimerHandle;` |

**说明:**

> 创建一个定时器用于实现播放回弹动画效果

---

### 属性 `bMouseLeftButtonMove`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bMouseLeftButtonMove = false;` |

**说明:**

> 是否 Mouse Left Button Move 的布尔标记。

---

### 属性 `MoveMultiplying`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MoveMultiplying = -10.0f;` |

**说明:**

> Move Multiplying 字段。

---

### 属性 `CityLayoutTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="LayoutConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayoutConfig") TSoftObjectPtr<UDataTable> CityLayoutTable;` |

**说明:**

> 城市布局配置表（行结构 FWorldMapItemLayoutInfo，行名=城市 ForceID）。Dump 目标 + 还原数据源

---

### 属性 `RoadConfigTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadWrite, Category="LayoutConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayoutConfig") TSoftObjectPtr<UDataTable> RoadConfigTable;` |

**说明:**

> 曲线路配置表（行结构 FWorldMapRoadConfigInfo）。Dump 目标

---

### 属性 `bAutoRestoreCityLayout`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="LayoutConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayoutConfig") bool bAutoRestoreCityLayout = false;` |

**说明:**

> 勾选则 NativeConstruct 时自动按 CityLayoutTable 还原城市坐标（运行时数据驱动布局）

---

### 属性 `bAutoRestoreRoadConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="LayoutConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayoutConfig") bool bAutoRestoreRoadConfig = false;` |

**说明:**

> 勾选则 NativeConstruct 时自动按 RoadConfigTable 还原曲线路（运行时数据驱动，ApplyConfig 重建路网）

---

## 蓝图暴露函数

### 函数 `SkipToAppointMapLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector2D&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SkipToAppointMapLocation(const FVector2D& Location);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Skip To Appoint Map Location 字段。

---

### 函数 `FocusCityByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void FocusCityByGuid(const FGuid& CityGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按城市guid定位: 地图放大到最大(MaxExpansionValue)并把该城市尽量移到屏幕中心(超出地图边界时贴边clamp)。城市坐标取自 AWorldMapManage::PointMap(画布中心相对空间)

---

### 函数 `UpdateMapPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateMapPosition();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Update Map Position 操作。

---

### 函数 `UpdateMapScale`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InScale` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateMapScale(float InScale);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Update Map Scale 操作。

---

### 函数 `OnMouseMoveWithDelta`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DeltaVec` | `FVector2D` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnMouseMoveWithDelta(FVector2D DeltaVec);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> On Mouse Move With Delta 事件或回调。

---

### 函数 `RestoreCityLayout`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="LayoutConfig" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "LayoutConfig") int32 RestoreCityLayout();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 运行时还原城市坐标：遍历活 WidgetTree 的 CanvasPanel_55 子控件，按 ForceID 查 CityLayoutTable，SetPosition/ZOrder。返回还原数

---

### 函数 `RestoreRoadConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="LayoutConfig" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "LayoutConfig") int32 RestoreRoadConfig();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 运行时还原曲线路：遍历 CanvasPanel_127 的 UERW_CurveRoadWidget，按名查 RoadConfigTable，ApplyConfig + 设 slot 位置。返回还原数

---

### 函数 `DumpCityLayoutTo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="LayoutConfig" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Table` | `UDataTable*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "LayoutConfig") int32 DumpCityLayoutTo(UDataTable* Table);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 核心 dump：读 CanvasPanel_55 子控件(slot坐标 + 反射读 ForceID/FindRange/ShowColor/IsMy/NearPoints/NearCity)，全量重写 Table。返回写入行数

---

### 函数 `DumpRoadConfigTo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="LayoutConfig" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Table` | `UDataTable*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "LayoutConfig") int32 DumpRoadConfigTo(UDataTable* Table);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 核心 dump：读 CanvasPanel_127 下的 UERW_CurveRoadWidget 子控件，全量重写 Table。返回写入行数

---
