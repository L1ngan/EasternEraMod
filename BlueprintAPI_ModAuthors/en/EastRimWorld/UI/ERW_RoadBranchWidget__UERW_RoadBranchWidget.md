# `class` `UERW_RoadBranchWidget`

**Source header:** `EastRimWorld/UI/ERW_RoadBranchWidget.h`

---

## Functional description (from header comments)

> 一条分支容器。放在 ERW_CurveRoadWidget 的 MarkerSlot 中,带目标城市 id;
> 内部按子项顺序摆红点(形状点),末端红点 = 通向该城市的连接点。
> 约定:本控件应铺满 MarkerSlot(anchors 0-1, offset 0),使内部红点的 CanvasPanelSlot 坐标
> 直接等于路面(ERW_CurveRoadWidget)局部坐标,无需跨层换算。

## Blueprint-exposed variables

### Property `CityId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="RoadBranch" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RoadBranch") FName CityId;` |

**Notes:**

> 这条分支通向的城市 id

---

### Property `DotCanvas`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UPanelWidget>` |
| Reflection specifiers | BlueprintReadOnly, Category="RoadBranch" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(meta = (BindWidgetOptional), BlueprintReadOnly, Category = "RoadBranch") TObjectPtr<UPanelWidget> DotCanvas;` |

**Notes:**

> 可选:指定放红点的容器;不绑定则用本控件根面板。红点用 CanvasPanelSlot 定位

---

## Blueprint-exposed functions

### Function `GetDotPoints`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="RoadBranch" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutPoints` | `TArray<FVector2D>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "RoadBranch") void GetDotPoints(TArray<FVector2D>& OutPoints) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按子项顺序返回内部红点坐标(分支局部空间;约定分支铺满 MarkerSlot 时即路面坐标)

---
