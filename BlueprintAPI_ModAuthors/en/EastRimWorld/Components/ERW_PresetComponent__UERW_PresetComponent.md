# `class` `UERW_PresetComponent`

**Source header:** `EastRimWorld/Components/ERW_PresetComponent.h`

---

## Functional description (from header comments)

> 建筑预设组件

## Blueprint-exposed variables

### Property `BuildID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FName BuildID;` |

**Notes:**

> 建筑表ID

---

### Property `RoofPartType`

| Field | Details |
|------|------|
| C++ type | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) ERoofPartType RoofPartType;` |

**Notes:**

> 屋顶部位类型

---

### Property `WallPillarID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FName WallPillarID;` |

**Notes:**

> 接缝柱对应的墙的ID

---

## Blueprint-exposed functions

### Function `CalcCenterLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Locations` | `const TArray<FVector>&` |
| `Center` | `FVector&` |
| `Size` | `FIntVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void CalcCenterLocation(const TArray<FVector>& Locations , FVector& Center , FIntVector& Size);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 计算地基中心位置

---
