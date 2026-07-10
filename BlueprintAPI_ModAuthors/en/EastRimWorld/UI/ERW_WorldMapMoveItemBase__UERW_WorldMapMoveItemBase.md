# `class` `UERW_WorldMapMoveItemBase`

**Source header:** `EastRimWorld/UI/ERW_WorldMapMoveItemBase.h`

---

## Functional description (from header comments)

> 世界地图移动图标(moveitem)C++ 基类。把"按城市顺序沿曲线路求当前坐标"的逻辑全放这里:
> - RoadContainer = WB_WorldMap1 的 CanvasPanel_127(里面是若干 WBP_CurveRoad)
> - UpdateMoveItem(MoveInfo):按 MovePointMap 的有序城市,逐段在路里取 GetPointOnRoute,
>   结果直接设到自身 CanvasPanelSlot;路线(城市序列)变化时才重建缓存,平时零遍历。
> WB_WorldMapMoveItem 应 reparent 到本类。

## Blueprint-exposed variables

### Property `RoadContainer`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UPanelWidget>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldMapMove" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldMapMove") TObjectPtr<UPanelWidget> RoadContainer;` |

**Notes:**

> 路容器(WB_WorldMap1 的 CanvasPanel_127)。设一次即可,内部自动收集其中的 WBP_CurveRoad

---

### Property `SiegePullbackPixels`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldMapMove" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldMapMove") float SiegePullbackPixels = 50.f;` |

**Notes:**

> 围城(Besieging)时,沿路距目标城回退的像素数;item 停在城外这个距离处

---

## Blueprint-exposed functions

### Function `SetRoadContainer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldMapMove" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InContainer` | `UPanelWidget*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldMapMove") void SetRoadContainer(UPanelWidget* InContainer);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置路容器并立即收集路列表(WB_WorldMap1 生成 item 时调一次,传 CanvasPanel_127)

---

### Function `UpdateMoveItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldMapMove" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveInfo` | const [FCharacterWorldMoveInfo2D](../WorldSystem/WorldStruct__FCharacterWorldMoveInfo2D.md)& |
| `OutAngle` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldMapMove") bool UpdateMoveItem(const FCharacterWorldMoveInfo2D& MoveInfo, float& OutAngle);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按移动信息更新本 item 坐标(直接设到自身 CanvasPanelSlot),返回当前朝向角度(度)。
> OutAngle = Atan2(切线.Y, 切线.X) 的度数(屏幕坐标 Y 向下:0=右,90=下,180/-180=左,-90=上;范围 -180~180)。
> 路线变化时自动重建缓存,每帧只查表。返回是否成功(成功才更新了位置)。

---
