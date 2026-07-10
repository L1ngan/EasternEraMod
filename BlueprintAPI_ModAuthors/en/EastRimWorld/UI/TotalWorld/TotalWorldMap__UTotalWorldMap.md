# `class` `UTotalWorldMap`

**Source header:** `EastRimWorld/UI/TotalWorld/TotalWorldMap.h`

---

## Functional description (from header comments)

> Total World Map UObject type.

## Blueprint-exposed variables

### Property `ScaleOnceValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ScaleOnceValue;` |

**Notes:**

> 单次缩放比例

---

### Property `CurrentScale`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float CurrentScale;` |

**Notes:**

> 当前缩放比例

---

### Property `MaxExpansionValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxExpansionValue;` |

**Notes:**

> 最大扩大为：

---

### Property `MinShrinkValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MinShrinkValue;` |

**Notes:**

> 最小缩放为：

---

### Property `MapSizeBox`

| Field | Details |
|------|------|
| C++ type | `USizeBox *` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) USizeBox * MapSizeBox = nullptr;` |

**Notes:**

> Map Size Box field.

---

### Property `MapImage`

| Field | Details |
|------|------|
| C++ type | `UImage*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) UImage* MapImage;` |

**Notes:**

> 内部滚动框

---

### Property `MapScaleBox`

| Field | Details |
|------|------|
| C++ type | `UScaleBox *` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) UScaleBox * MapScaleBox = nullptr;` |

**Notes:**

> 缩放框

---

### Property `MapImageInitX`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float MapImageInitX;` |

**Notes:**

> 地图初始大小X

---

### Property `MapImageInitY`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float MapImageInitY;` |

**Notes:**

> 地图初始大小Y

---

### Property `SpeedAnim`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SpeedAnim = 1.0f;` |

**Notes:**

> Speed Anim field.

---

### Property `MinimumRollAfterCalculationX`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MinimumRollAfterCalculationX;` |

**Notes:**

> private:
> 计算后的最小滚动X

---

### Property `MaximumRollAfterCalculationX`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MaximumRollAfterCalculationX;` |

**Notes:**

> 计算后的最大滚动X

---

### Property `MinimumRollAfterCalculationY`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MinimumRollAfterCalculationY;` |

**Notes:**

> 计算后的最小滚动Y

---

### Property `MaximumRollAfterCalculationY`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float MaximumRollAfterCalculationY;` |

**Notes:**

> 计算后的最大滚动Y

---

### Property `BeyondBorderLocalX`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float BeyondBorderLocalX;` |

**Notes:**

> 超出的临时X

---

### Property `BeyondBorderLocalY`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float BeyondBorderLocalY;` |

**Notes:**

> 超出的临时Y

---

### Property `TimerHandle`

| Field | Details |
|------|------|
| C++ type | `FTimerHandle` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FTimerHandle TimerHandle;` |

**Notes:**

> 创建一个定时器用于实现播放回弹动画效果

---

### Property `bMouseLeftButtonMove`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bMouseLeftButtonMove = false;` |

**Notes:**

> Boolean flag indicating whether Mouse Left Button Move is enabled or true.

---

### Property `MoveMultiplying`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MoveMultiplying = -10.0f;` |

**Notes:**

> Move Multiplying field.

---

### Property `CityLayoutTable`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="LayoutConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayoutConfig") TSoftObjectPtr<UDataTable> CityLayoutTable;` |

**Notes:**

> 城市布局配置表（行结构 FWorldMapItemLayoutInfo，行名=城市 ForceID）。Dump 目标 + 还原数据源

---

### Property `RoadConfigTable`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadWrite, Category="LayoutConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayoutConfig") TSoftObjectPtr<UDataTable> RoadConfigTable;` |

**Notes:**

> 曲线路配置表（行结构 FWorldMapRoadConfigInfo）。Dump 目标

---

### Property `bAutoRestoreCityLayout`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="LayoutConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayoutConfig") bool bAutoRestoreCityLayout = false;` |

**Notes:**

> 勾选则 NativeConstruct 时自动按 CityLayoutTable 还原城市坐标（运行时数据驱动布局）

---

### Property `bAutoRestoreRoadConfig`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="LayoutConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LayoutConfig") bool bAutoRestoreRoadConfig = false;` |

**Notes:**

> 勾选则 NativeConstruct 时自动按 RoadConfigTable 还原曲线路（运行时数据驱动，ApplyConfig 重建路网）

---

## Blueprint-exposed functions

### Function `SkipToAppointMapLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector2D&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SkipToAppointMapLocation(const FVector2D& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Skip To Appoint Map Location field.

---

### Function `FocusCityByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CityGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void FocusCityByGuid(const FGuid& CityGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按城市guid定位: 地图放大到最大(MaxExpansionValue)并把该城市尽量移到屏幕中心(超出地图边界时贴边clamp)。城市坐标取自 AWorldMapManage::PointMap(画布中心相对空间)

---

### Function `UpdateMapPosition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateMapPosition();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Update Map Position operation.

---

### Function `UpdateMapScale`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InScale` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateMapScale(float InScale);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Update Map Scale operation.

---

### Function `OnMouseMoveWithDelta`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DeltaVec` | `FVector2D` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnMouseMoveWithDelta(FVector2D DeltaVec);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> On Mouse Move With Delta event or callback.

---

### Function `RestoreCityLayout`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="LayoutConfig" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "LayoutConfig") int32 RestoreCityLayout();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 运行时还原城市坐标：遍历活 WidgetTree 的 CanvasPanel_55 子控件，按 ForceID 查 CityLayoutTable，SetPosition/ZOrder。返回还原数

---

### Function `RestoreRoadConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="LayoutConfig" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "LayoutConfig") int32 RestoreRoadConfig();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 运行时还原曲线路：遍历 CanvasPanel_127 的 UERW_CurveRoadWidget，按名查 RoadConfigTable，ApplyConfig + 设 slot 位置。返回还原数

---

### Function `DumpCityLayoutTo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="LayoutConfig" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Table` | `UDataTable*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "LayoutConfig") int32 DumpCityLayoutTo(UDataTable* Table);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 核心 dump：读 CanvasPanel_55 子控件(slot坐标 + 反射读 ForceID/FindRange/ShowColor/IsMy/NearPoints/NearCity)，全量重写 Table。返回写入行数

---

### Function `DumpRoadConfigTo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="LayoutConfig" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Table` | `UDataTable*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "LayoutConfig") int32 DumpRoadConfigTo(UDataTable* Table);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 核心 dump：读 CanvasPanel_127 下的 UERW_CurveRoadWidget 子控件，全量重写 Table。返回写入行数

---
