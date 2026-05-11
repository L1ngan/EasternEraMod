# `struct` `FTreasureSaveData`

**Source header:** `EastRimWorld/Components/TreasureComponent.h`

---

## Functional description (from header comments)

> 珍宝阁保存信息

## Blueprint-exposed variables

### Property `AutomaticReplenishmentTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) float AutomaticReplenishmentTime = 0.f;` |

**Source comments:**

> 自动补货冷却时间

---

### Property `SaveLog`

| Field | Details |
|------|------|
| C++ type | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TArray<FLogData> SaveLog;` |

---

### Property `TreasureCount`

| Field | Details |
|------|------|
| C++ type | TArray<[FTreasureStatisticsInfo](TreasureComponent__FTreasureStatisticsInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TArray<FTreasureStatisticsInfo> TreasureCount;` |

---

### Property `TotalTreasureCount`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,VisibleAnywhere) TMap<FName , FTreasureStatisticsTotalInfo> TotalTreasureCount;` |

---
