# `struct` `FWorldMapRoadConfigInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

---

## Functional description (from header comments)

> 世界地图曲线路(WBP_CurveRoad / UERW_CurveRoadWidget)配置。
> 独立表 DT_WorldMapRoadConfig，行名(KEY) = 路 id。
> 覆盖 UERW_CurveRoadWidget 的全部可编辑字段(形状 / 渲染 / 路网) + 它在 CanvasPanel_127 的 slot。
> 还原：由新增的 UERW_CurveRoadWidget::ApplyConfig 读本行 → 设属性 + (数据建网) + 重绘。
>  - bHasFork=false：单路径，用 Start/End/TurnPoints + ConnectedCities。
>  - bHasFork=true ：分叉网络，用 ForkPoint + Branches(每分支末点通向一城)。

## Blueprint-exposed variables

### Property `SlotPosition`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Slot" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slot") FVector2D SlotPosition = FVector2D::ZeroVector;` |

**Notes:**

> —— 在 CanvasPanel_127 的 slot ——

---

### Property `SlotSize`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Slot" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Slot") FVector2D SlotSize = FVector2D(876.f, 764.f);` |

**Notes:**

> Slot Size field.

---

### Property `StartPoint`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Shape" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") FVector2D StartPoint = FVector2D::ZeroVector;` |

**Notes:**

> —— 形状(单路径模式) ——

---

### Property `EndPoint`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Shape" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") FVector2D EndPoint = FVector2D(200.f, 0.f);` |

**Notes:**

> End Point field.

---

### Property `TurnPoints`

| Field | Details |
|------|------|
| C++ type | `TArray<FVector2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Shape" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") TArray<FVector2D> TurnPoints;` |

**Notes:**

> Turn Points field.

---

### Property `bSmoothTurns`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Shape" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") bool bSmoothTurns = true;` |

**Notes:**

> Boolean flag indicating whether Smooth Turns is enabled or true.

---

### Property `BendAmount`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Shape" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") float BendAmount = 80.f;` |

**Notes:**

> Bend Amount field.

---

### Property `bUseExplicitControlPoints`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Shape" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") bool bUseExplicitControlPoints = false;` |

**Notes:**

> Boolean flag indicating whether Use Explicit Control Points is enabled or true.

---

### Property `ControlPoint1`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Shape" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") FVector2D ControlPoint1 = FVector2D(66.f, 0.f);` |

**Notes:**

> Control Point 1 field.

---

### Property `ControlPoint2`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Shape" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shape") FVector2D ControlPoint2 = FVector2D(133.f, 0.f);` |

**Notes:**

> Control Point 2 field.

---

### Property `StartWidth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Render" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") float StartWidth = 24.f;` |

**Notes:**

> —— 渲染 ——

---

### Property `EndWidth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Render" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") float EndWidth = 24.f;` |

**Notes:**

> End Width field.

---

### Property `Segments`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Render" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render", meta = (ClampMin = "2")) int32 Segments = 48;` |

**Notes:**

> Segments field.

---

### Property `RoadBrushResource`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UObject>` |
| Reflection specifiers | BlueprintReadWrite, Category="Render" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") TSoftObjectPtr<UObject> RoadBrushResource;` |

**Notes:**

> 路面贴图或 UI 材质(还原时设到 RoadBrush.ResourceObject)

---

### Property `bTileTexture`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Render" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") bool bTileTexture = true;` |

**Notes:**

> Boolean flag indicating whether Tile Texture is enabled or true.

---

### Property `TileLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Render" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") float TileLength = 128.f;` |

**Notes:**

> Tile Length field.

---

### Property `Tint`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadWrite, Category="Render" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") FLinearColor Tint = FLinearColor::White;` |

**Notes:**

> Tint field.

---

### Property `ForkHubRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Render" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render") float ForkHubRadius = 0.f;` |

**Notes:**

> Fork Hub Radius field.

---

### Property `bUseMarkers`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Network" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") bool bUseMarkers = false;` |

**Notes:**

> —— 路网 ——
> 配置化后建议 false：直接用本表的点 / 分支建网，不再依赖 MarkerSlot 里手摆的红点

---

### Property `bHideMarkersAtRuntime`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Network" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") bool bHideMarkersAtRuntime = true;` |

**Notes:**

> Boolean flag indicating whether Hide Markers At Runtime is enabled or true.

---

### Property `ConnectedCities`

| Field | Details |
|------|------|
| C++ type | TArray<[FWorldMapRoadCityLink](WorldMapLayoutStruct__FWorldMapRoadCityLink.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Network" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") TArray<FWorldMapRoadCityLink> ConnectedCities;` |

**Notes:**

> 单路径模式：直接连接的城市

---

### Property `bHasFork`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Network" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") bool bHasFork = false;` |

**Notes:**

> 分叉网络模式

---

### Property `ForkPoint`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Network" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") FVector2D ForkPoint = FVector2D::ZeroVector;` |

**Notes:**

> Fork Point field.

---

### Property `Branches`

| Field | Details |
|------|------|
| C++ type | TArray<[FWorldMapRoadBranchConfig](WorldMapLayoutStruct__FWorldMapRoadBranchConfig.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Network" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Network") TArray<FWorldMapRoadBranchConfig> Branches;` |

**Notes:**

> Branches field.

---

### Property `RoadLength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="MoveTime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoveTime") float RoadLength = 0.f;` |

**Notes:**

> —— 移动时间用 ——
> 这条路的真实曲线长度(road-local 像素;与城市 dataPos 同 1:1 尺度,可直接和 CalculateLen 直线距离比较)。
> dump 时由 UERW_CurveRoadWidget::GetCurveLength() 填。WorldMapManage 据此按真实路长算 NeedTotalTime。

---
