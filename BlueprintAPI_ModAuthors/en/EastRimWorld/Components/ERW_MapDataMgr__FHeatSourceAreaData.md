# `struct` `FHeatSourceAreaData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> Heat source area data: the heat source building GUID and its temperature effect value

## Blueprint-exposed variables

### Property `BuildGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGuid BuildGuid;` |

**Notes:**

> GUID of the heat source building

---

### Property `TemperatureEffect`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 TemperatureEffect;` |

**Notes:**

> Temperature effect value of the heat source

---
