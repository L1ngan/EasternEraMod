# `struct` `FGridData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 格子数据

## Blueprint-exposed variables

### Property `LayerData`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FEnvironData](ERW_MapDataMgr__FEnvironData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<int32 , FEnvironData> LayerData;` |

**Notes:**

> 每层环境数据
> TMap<层 , 环境数据>

---

### Property `IsHeightSet`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) bool IsHeightSet { false };` |

**Notes:**

> 高度是否设置

---

### Property `FoundationHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float FoundationHeight { 0.f };` |

**Notes:**

> 地基(或水池, 阶梯)高度

---

### Property `MinHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float MinHeight { 0.f };` |

**Notes:**

> 格子最低高度

---

### Property `MaxHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float MaxHeight { 0.f };` |

**Notes:**

> 格子最大高度

---

### Property `CenterHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float CenterHeight { 0.f };` |

**Notes:**

> 格子中心高度

---

### Property `Slope`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float Slope { 0.f };` |

**Notes:**

> 格子的斜率

---

### Property `GroundSoilType`

| Field | Details |
|------|------|
| C++ type | [EGroundSoilType](../ERW_Enumerations__EGroundSoilType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,SaveGame) EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**Notes:**

> 地形材质对应的土地类型 todo...废弃

---

### Property `GroundRichPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float GroundRichPercent = 0.f;` |

**Notes:**

> 土地肥沃度

---
