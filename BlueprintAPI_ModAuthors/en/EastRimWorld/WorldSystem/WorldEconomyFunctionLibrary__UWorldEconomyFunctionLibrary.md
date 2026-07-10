# `class` `UWorldEconomyFunctionLibrary`

**Source header:** `EastRimWorld/WorldSystem/WorldEconomyFunctionLibrary.h`

---

## Functional description (from header comments)

> World Economy Function Library UObject type.

## Blueprint-exposed functions

### Function `CalcTradeProsperityGain`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Prosperity" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OtherPopulation` | `int32` |
| `OtherFavorability` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Prosperity") static float CalcTradeProsperityGain(int32 OtherPopulation, float OtherFavorability);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 商贸获得繁荣度。
> 公式:Max(1, p * (0.01 + 0.09 * (f + 1200) / 2400))
> @param OtherPopulation  对方据点人口 p
> @param OtherFavorability 对方好感度 f(-1200~+1200)

---

### Function `CalcBattleProsperityLoss`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Prosperity" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CurrentProsperity` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Prosperity") static float CalcBattleProsperityLoss(float CurrentProsperity);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 战斗后据点繁荣度减少值(任何战斗结束都触发,作为基础值;防守失败再额外扣)
> 公式:当前繁荣度 × Rand(0.05, 0.1)

---

### Function `CalcProsperityAdjustedOutputNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Prosperity" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BaseNum` | `int32` |
| `CurrentProsperity` | `float` |
| `MaxProsperity` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Prosperity") static int32 CalcProsperityAdjustedOutputNum(int32 BaseNum, float CurrentProsperity, float MaxProsperity);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 产出数量增幅(数量)
> 公式(向下取整):Num × (1 + 当前繁荣度 / Max Prosperity)

---

### Function `CalcProsperityAdjustedOutputInterval`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Prosperity" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BaseInterval` | `int32` |
| `CurrentProsperity` | `float` |
| `MaxProsperity` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Prosperity") static int32 CalcProsperityAdjustedOutputInterval(int32 BaseInterval, float CurrentProsperity, float MaxProsperity);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 产出周期缩短(秒)
> 公式(向下取整):Interval × (1 - 当前繁荣度 / Max Prosperity × 2)
> 注:策划文档原文未对负值做约束;此处约束最小值为 1

---

### Function `CalcTaxPopulationChangeProb`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Population" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaxRatio` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Population") static float CalcTaxPopulationChangeProb(float TaxRatio);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 税收对人口的变化概率
> 公式:P = 0.1 + 1.5 × |t - 0.5|
> @param TaxRatio 当前据点税收比例 t(0-1)

---

### Function `CalcTaxPopulationChangeAmount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldEconomy|Population" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CurrentPopulation` | `int32` |
| `TaxRatio` | `float` |
| `(unnamed / type only)` | `float TaxRegulationCoefficient = 0.1f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldEconomy|Population") static int32 CalcTaxPopulationChangeAmount(int32 CurrentPopulation, float TaxRatio, float TaxRegulationCoefficient = 0.1f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 税收对人口的变化量(向下取整,可正可负)
> 当 t != 0.5:N = 当前人口 × 系数 × (0.5 - t)
> 当 t == 0.5:N = 当前人口 × 系数 × Rand(-0.1, 0.1)
> @param TaxRegulationCoefficient 通常取 DA_WorldGameConfigurationAsset::TaxRegulationPopulationCoefficient(默认 0.1)

---

### Function `CalcRefugeeBirthProb`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Population" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConsecutiveDecreaseCount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Population") static float CalcRefugeeBirthProb(int32 ConsecutiveDecreaseCount);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 流民产生概率
> 公式:P = Min(1, n × (0.1 + n/100))
> @param ConsecutiveDecreaseCount 连续减人口次数 n

---

### Function `CalcRefugeeAmount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Population" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CurrentPopulation` | `int32` |
| `ConsecutiveDecreaseCount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Population") static int32 CalcRefugeeAmount(int32 CurrentPopulation, int32 ConsecutiveDecreaseCount);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 流民产生数量(向上取整)
> 公式:N = 当前人口 × Min(0.3, n/20)

---

### Function `SplitRefugees`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldEconomy|Population" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TotalRefugee` | `int32` |
| `FromPlaceGuid` | `FGuid` |
| `OutBatches` | TArray<[FRefugeeBatch](WorldEconomyStruct__FRefugeeBatch.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldEconomy|Population") static void SplitRefugees(int32 TotalRefugee, FGuid FromPlaceGuid, TArray<FRefugeeBatch>& OutBatches);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 拆分流民为若干股(实现策划文档"二、人口 / 流民 / 拆分"逻辑)
> - 总数 < 3:单股,不拆分
> - 总数 ≥ 3:拆分次数 Rand(1, 5),每股 Rand(1, 剩余)

---

### Function `CalcConstructionTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Population" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BaseTime` | `int32` |
| `CurrentPopulation` | `int32` |
| `(unnamed / type only)` | `float EfficiencyCoeff = 100.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Population") static int32 CalcConstructionTime(int32 BaseTime, int32 CurrentPopulation, float EfficiencyCoeff = 100.f);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 据点建筑修建速度增幅(单位秒,向下取整)
> 公式:t × (0.5 + 0.5 × (系数 / p)^0.5)
> @param BaseTime           建造耗时基础值 t
> @param CurrentPopulation  当前人口 p
> @param EfficiencyCoeff    DA_WorldGameConfigurationAsset::PopulationConstructionEfficiency (默认 100)

---

### Function `CalcPopulationTaxIncome`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Tax" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Population` | `int32` |
| `Order` | `float` |
| `TaxRatio` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Tax") static float CalcPopulationTaxIncome(int32 Population, float Order, float TaxRatio);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 人口产出税收(完整公式)
> 公式:M = (1-T) × P × (0.6 + 0.009 × S)
> @param Population 当前人口 P
> @param Order      当前治安 S(0-100)
> @param TaxRatio   税收比例 T(0-1)

---

### Function `CalcPopulationBaseConsume`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Tax" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Population` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Tax") static float CalcPopulationBaseConsume(int32 Population);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 人口基础消耗 = 人口总数 × 0.1

---

### Function `CalcStationedCharacterConsume`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Tax" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StationedCount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Tax") static float CalcStationedCharacterConsume(int32 StationedCount);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 驻扎弟子消耗 = 弟子人数 × 10

---

### Function `GetOrderStage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Order" |
| Return type | [EWorldPlaceOrderStage](WorldEconomyStruct__EWorldPlaceOrderStage.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Order` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Order") static EWorldPlaceOrderStage GetOrderStage(float Order);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 治安阶段(0-100 → 安宁/纷扰/混乱/动荡)
> 边界遵循策划文档原文(40-49 段优先归到"混乱")

---

### Function `CalcOrderChangeByPopulation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldEconomy|Order" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CurrentPopulation` | `int32` |
| `MaxPopulation` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldEconomy|Order") static int32 CalcOrderChangeByPopulation(int32 CurrentPopulation, int32 MaxPopulation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 人口变化后,治安变化值(向上取整,可正可负)
> 公式:N = (0.5 - r) × 20 + Rand(-3, 3),r = Po / Pm

---

### Function `CalcRiotTriggerProb`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Order" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Order` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Order") static float CalcRiotTriggerProb(float Order);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 治安触发暴乱的概率
> 公式:P = Max(0.01, Min(0.5, 0.5 - 0.0049 × S))

---

### Function `CalcRebellionTriggerProb`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Order" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RiotDurationSec` | `float` |
| `Order` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Order") static float CalcRebellionTriggerProb(float RiotDurationSec, float Order);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 暴乱结束后触发叛乱的概率
> 公式:P = Max(0, Min(0.5, 0.1 × T/960 + 0.008 × (1-S)))
> @param RiotDurationSec  暴乱持续秒数 T
> @param Order            当前治安 S(0-100)

---

### Function `CalcRiotDuration`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Riot" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Order` | `float` |
| `OrderBuildingCount` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Riot") static float CalcRiotDuration(float Order, int32 OrderBuildingCount);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 暴乱基础持续时间(秒)
> 公式:s = 960 × (9 - 0.08 × S)
> 拥有治安建筑后再乘:(1 - 治安建筑数 / 10)

---

### Function `CalcRiotProsperityLossPerTick`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Riot" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Prosperity` | `float` |
| `Population` | `int32` |
| `MaxPopulation` | `int32` |
| `Order` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Riot") static int32 CalcRiotProsperityLossPerTick(float Prosperity, int32 Population, int32 MaxPopulation, float Order);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 暴乱单次扣繁荣量(向上取整)
> 公式:N = Max(1, Pr × Po/Pm × (100-S)/100 × 0.2)

---

### Function `CalcRiotPopulationLossPerTick`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Riot" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Population` | `int32` |
| `Order` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Riot") static int32 CalcRiotPopulationLossPerTick(int32 Population, float Order);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 暴乱单次扣人口量(向上取整)
> 公式:N = Max(1, Po × (100-S)/100 × 0.05)

---

### Function `CalcRebellionProsperityLoss`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Rebellion" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Prosperity` | `float` |
| `Population` | `int32` |
| `MaxPopulation` | `int32` |
| `Order` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Rebellion") static int32 CalcRebellionProsperityLoss(float Prosperity, int32 Population, int32 MaxPopulation, float Order);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 叛乱一次性扣繁荣量(向上取整)
> 公式:N = Max(1, Pr × Po/Pm × (100-S)/100 × 0.5)

---

### Function `CalcRebellionPopulationLoss`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldEconomy|Rebellion" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Population` | `int32` |
| `Order` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Rebellion") static int32 CalcRebellionPopulationLoss(int32 Population, float Order);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 叛乱一次性扣人口量(向上取整)
> 公式:N = Max(1, Po × (100-S)/100 × 0.2)

---
