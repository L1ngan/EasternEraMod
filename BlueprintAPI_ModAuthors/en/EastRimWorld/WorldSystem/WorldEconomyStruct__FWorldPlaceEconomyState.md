# `struct` `FWorldPlaceEconomyState`

**Source header:** `EastRimWorld/WorldSystem/WorldEconomyStruct.h`

---

## Functional description (from header comments)

> 据点税收 / 流民相关的累计计数(SaveGame)

## Blueprint-exposed variables

### Property `Order`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float Order = 70.f;` |

**Notes:**

> 当前治安(0-100),初始来自 FWorldPlaceInfo::InitOrder

---

### Property `TaxDecreasePopulationCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 TaxDecreasePopulationCount = 0;` |

**Notes:**

> 因税收高而导致人口减少的连续次数(产生流民后重置为 0)

---

### Property `PendingBuildingTax`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 PendingBuildingTax = 0;` |

**Notes:**

> 累计的"未发放"建筑产出税收(税收周期内)

---

### Property `PendingTradeTax`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) int32 PendingTradeTax = 0;` |

**Notes:**

> 累计的"未发放"商贸产出税收(税收周期内)

---

### Property `LastTaxSettleGameTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float LastTaxSettleGameTime = 0.f;` |

**Notes:**

> 上一次税收结算的 GameTime

---
