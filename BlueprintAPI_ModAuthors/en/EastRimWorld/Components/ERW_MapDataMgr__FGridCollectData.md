# `struct` `FGridCollectData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 地格属性

## Blueprint-exposed variables

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UWorld>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UWorld> Level;` |

**Notes:**

> 关卡名

---

### Property `SurfaceType`

| Field | Details |
|------|------|
| C++ type | `TEnumAsByte<EPhysicalSurface>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,SaveGame) TEnumAsByte<EPhysicalSurface> SurfaceType = EPhysicalSurface::SurfaceType_Default;` |

**Notes:**

> 物理材质surface类型

---

### Property `GroundSoilType`

| Field | Details |
|------|------|
| C++ type | [EGroundSoilType](../ERW_Enumerations__EGroundSoilType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,SaveGame) EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**Notes:**

> 地形材质对应的土地类型

---

### Property `GroundRichPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float GroundRichPercent = 0.f;` |

**Notes:**

> 肥沃度百分比

---
