# `struct` `FTreasureSaveData`

**Source header:** `EastRimWorld/Components/TreasureComponent.h`

---

## Functional description (from header comments)

> 珍宝阁保存信息

## Blueprint-exposed variables

### Property `TreasureItems`

| Field | Details |
|------|------|
| C++ type | TArray<[FTreasureItemSubData](TreasureComponent__FTreasureItemSubData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TArray<FTreasureItemSubData> TreasureItems;` |

**Notes:**

> 商品信息

---

### Property `TreasureResource`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FSaveItemArr](TreasureComponent__FSaveItemArr.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<int32 , FSaveItemArr> TreasureResource;` |

**Notes:**

> Saved map of item data per display cabinet, keyed by cabinet index.

---

### Property `SaveStalls`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FStallInfo](TreasureComponent__FStallInfo.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<int32 , FStallInfo> SaveStalls;` |

**Notes:**

> Saved map of stall info, keyed by stall index.

---

### Property `AutomaticReplenishmentTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) float AutomaticReplenishmentTime = 0.f;` |

**Notes:**

> 自动补货冷却时间

---

### Property `SaveLog`

| Field | Details |
|------|------|
| C++ type | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TArray<FLogData> SaveLog;` |

**Notes:**

> Saved list of treasure pavilion log entries.

---

### Property `TreasureCount`

| Field | Details |
|------|------|
| C++ type | TArray<[FTreasureStatisticsInfo](TreasureComponent__FTreasureStatisticsInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TArray<FTreasureStatisticsInfo> TreasureCount;` |

**Notes:**

> Saved list of current-period exchange statistics for items.

---

### Property `TotalTreasureCount`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TMap<FName , FTreasureStatisticsTotalInfo> TotalTreasureCount;` |

**Notes:**

> Saved map of total exchange statistics per item, keyed by item ID.

---
