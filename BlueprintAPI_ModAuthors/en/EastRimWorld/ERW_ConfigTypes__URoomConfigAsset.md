# `class` `URoomConfigAsset`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 房间配置资产

## Blueprint-exposed variables

### Property `RoomScoreTypeData`

| Field | Details |
|------|------|
| C++ type | TMap<[ERoomScoreType](ERW_Enumerations__ERoomScoreType.md),[FRoomScoreDataArray](ERW_ConfigTypes__FRoomScoreDataArray.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomScoreType,FRoomScoreDataArray> RoomScoreTypeData;` |

**Notes:**

> 房间各类型评分分数段信息

---

### Property `RoomTemperatureScoreData`

| Field | Details |
|------|------|
| C++ type | TArray<[FRoomTemperatureScoreData](ERW_ConfigTypes__FRoomTemperatureScoreData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FRoomTemperatureScoreData> RoomTemperatureScoreData;` |

**Notes:**

> 房间温度区间分数

---

### Property `RoomSizeTemperatureRates`

| Field | Details |
|------|------|
| C++ type | TArray<[FRoomSizeTemperatureRate](ERW_ConfigTypes__FRoomSizeTemperatureRate.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FRoomSizeTemperatureRate> RoomSizeTemperatureRates;` |

**Notes:**

> 房间大小对应的温度系数(结算房间温度时乘以这个)

---
