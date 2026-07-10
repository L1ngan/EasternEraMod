# `struct` `FWorldMapItemLayoutInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

---

## Functional description (from header comments)

> 世界地图据点(城市)布局配置。
> 独立表 DT_WorldMapItemLayout，行名(KEY) = 城市 ForceID。
> 用于保存 / 还原 WB_WorldMap1 -> CanvasPanel_55 下 WB_WorldMapCityItem 的 2D 坐标与控件参数。
> 还原：城市 item 在 Construct 里按自身 ForceID 查本表，命中则 SetPosition(自身 CanvasSlot) 并回填参数。
> 城市是 CanvasPanel_55 直接子控件，offset 与 SetPosition 同坐标空间，原样写回即 1:1 复现，不需几何换算。

## Blueprint-exposed variables

### Property `Position`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Layout" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layout") FVector2D Position = FVector2D::ZeroVector;` |

**Notes:**

> 在 CanvasPanel_55 中的 2D 位置(= CanvasPanelSlot 的 offset_left/top，画布中心为原点)

---

### Property `ZOrder`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Layout" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layout") int32 ZOrder = 1;` |

**Notes:**

> 层级(当前手摆全为 1，留作扩展)

---

### Property `FindRange`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Param" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") int32 FindRange = 0;` |

**Notes:**

> 探查范围(城市 item 的 FindRange)

---

### Property `bShowColor`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Param" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") bool bShowColor = false;` |

**Notes:**

> 是否显示颜色(城市 item 的 ShowColor)

---

### Property `bIsMy`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Param" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") bool bIsMy = false;` |

**Notes:**

> 是否为玩家所有(城市 item 的 IsMy)

---

### Property `NearPoints`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Param" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") TArray<FName> NearPoints;` |

**Notes:**

> 邻接点(城市 item 的 NearPoints)

---

### Property `NearCity`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Param" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Param") TArray<FName> NearCity;` |

**Notes:**

> 邻接城(城市 item 的 NearCity)

---
