# `struct` `FDeployableCityOption`

**Source header:** `EastRimWorld/WorldSystem/WorldDirector.h`

---

## Functional description (from header comments)

> 出征出发地点下拉选项：玩家可作为起点的城(城 SGUID + 显示城名)。仅作 UI 临时返回值, 不入存档(故字段不标 SaveGame)

## Blueprint-exposed variables

### Property `CityGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="World|Battle" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "World|Battle") FGuid CityGuid;` |

**Notes:**

> 城的 SGUID(写入 W_GoForBattle.SGUID，FindWorldPlace 按此查)

---

### Property `CityName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="World|Battle" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "World|Battle") FText CityName;` |

**Notes:**

> 城的显示名(WorldPlaceInfo.PlaceName)

---
