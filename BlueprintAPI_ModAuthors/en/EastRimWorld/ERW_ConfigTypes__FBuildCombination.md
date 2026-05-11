# `struct` `FBuildCombination`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 建筑组合配置结构

## Blueprint-exposed variables

### Property `CombinationName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText CombinationName;` |

**Source comments:**

> 组合名称

---

### Property `CoreFacilityNeed`

| Field | Details |
|------|------|
| C++ type | [FFacilityNeed](ERW_ConfigTypes__FFacilityNeed.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FFacilityNeed CoreFacilityNeed;` |

**Source comments:**

> 核心设施需求(只会取BuildingTabId或BuildingIds中的第一个)

---

### Property `OtherFacilityNeed`

| Field | Details |
|------|------|
| C++ type | TArray<[FFacilityNeed](ERW_ConfigTypes__FFacilityNeed.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FFacilityNeed> OtherFacilityNeed;` |

**Source comments:**

> 配套设施需求

---

### Property `FacilityNeedNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 FacilityNeedNum = 0;` |

**Source comments:**

> 设施需求数量(不包含核心设施)

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Desc;` |

**Source comments:**

> 描述

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> Icon;` |

**Source comments:**

> 图标

---

### Property `GlobalBuffs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName> GlobalBuffs;` |

**Source comments:**

> 全局buff

---
