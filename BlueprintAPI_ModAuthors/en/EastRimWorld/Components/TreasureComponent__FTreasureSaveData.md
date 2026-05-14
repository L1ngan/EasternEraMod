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

**Source comments:**

> 商品信息

---

### Property `TreasureResource`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FSaveItemArr](TreasureComponent__FSaveItemArr.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<int32 , FSaveItemArr> TreasureResource;` |

---

### Property `SaveStalls`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FStallInfo](TreasureComponent__FStallInfo.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<int32 , FStallInfo> SaveStalls;` |

---

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
