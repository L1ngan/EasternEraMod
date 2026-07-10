# `class` `UWorldEconomyFunctionLibrary`

**源码头文件:** `EastRimWorld/WorldSystem/WorldEconomyFunctionLibrary.h`

---

## 功能说明（来自头文件注释）

> World Economy Function Library UObject 类型。

## 蓝图暴露函数

### 函数 `CalcTradeProsperityGain`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Prosperity" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OtherPopulation` | `int32` |
| `OtherFavorability` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Prosperity") static float CalcTradeProsperityGain(int32 OtherPopulation, float OtherFavorability);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 商贸获得繁荣度。
> 公式:Max(1, p * (0.01 + 0.09 * (f + 1200) / 2400))
> @param OtherPopulation  对方据点人口 p
> @param OtherFavorability 对方好感度 f(-1200~+1200)

---

### 函数 `CalcBattleProsperityLoss`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Prosperity" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CurrentProsperity` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Prosperity") static float CalcBattleProsperityLoss(float CurrentProsperity);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 战斗后据点繁荣度减少值(任何战斗结束都触发,作为基础值;防守失败再额外扣)
> 公式:当前繁荣度 × Rand(0.05, 0.1)

---

### 函数 `CalcProsperityAdjustedOutputNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Prosperity" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BaseNum` | `int32` |
| `CurrentProsperity` | `float` |
| `MaxProsperity` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Prosperity") static int32 CalcProsperityAdjustedOutputNum(int32 BaseNum, float CurrentProsperity, float MaxProsperity);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 产出数量增幅(数量)
> 公式(向下取整):Num × (1 + 当前繁荣度 / Max Prosperity)

---

### 函数 `CalcProsperityAdjustedOutputInterval`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Prosperity" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BaseInterval` | `int32` |
| `CurrentProsperity` | `float` |
| `MaxProsperity` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Prosperity") static int32 CalcProsperityAdjustedOutputInterval(int32 BaseInterval, float CurrentProsperity, float MaxProsperity);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 产出周期缩短(秒)
> 公式(向下取整):Interval × (1 - 当前繁荣度 / Max Prosperity × 2)
> 注:策划文档原文未对负值做约束;此处约束最小值为 1

---

### 函数 `CalcTaxPopulationChangeProb`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Population" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaxRatio` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Population") static float CalcTaxPopulationChangeProb(float TaxRatio);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 税收对人口的变化概率
> 公式:P = 0.1 + 1.5 × |t - 0.5|
> @param TaxRatio 当前据点税收比例 t(0-1)

---

### 函数 `CalcTaxPopulationChangeAmount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldEconomy|Population" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CurrentPopulation` | `int32` |
| `TaxRatio` | `float` |
| `（匿名/仅类型）` | `float TaxRegulationCoefficient = 0.1f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldEconomy|Population") static int32 CalcTaxPopulationChangeAmount(int32 CurrentPopulation, float TaxRatio, float TaxRegulationCoefficient = 0.1f);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 税收对人口的变化量(向下取整,可正可负)
> 当 t != 0.5:N = 当前人口 × 系数 × (0.5 - t)
> 当 t == 0.5:N = 当前人口 × 系数 × Rand(-0.1, 0.1)
> @param TaxRegulationCoefficient 通常取 DA_WorldGameConfigurationAsset::TaxRegulationPopulationCoefficient(默认 0.1)

---

### 函数 `CalcRefugeeBirthProb`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Population" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConsecutiveDecreaseCount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Population") static float CalcRefugeeBirthProb(int32 ConsecutiveDecreaseCount);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 流民产生概率
> 公式:P = Min(1, n × (0.1 + n/100))
> @param ConsecutiveDecreaseCount 连续减人口次数 n

---

### 函数 `CalcRefugeeAmount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Population" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CurrentPopulation` | `int32` |
| `ConsecutiveDecreaseCount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Population") static int32 CalcRefugeeAmount(int32 CurrentPopulation, int32 ConsecutiveDecreaseCount);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 流民产生数量(向上取整)
> 公式:N = 当前人口 × Min(0.3, n/20)

---

### 函数 `SplitRefugees`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldEconomy|Population" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TotalRefugee` | `int32` |
| `FromPlaceGuid` | `FGuid` |
| `OutBatches` | TArray<[FRefugeeBatch](WorldEconomyStruct__FRefugeeBatch.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldEconomy|Population") static void SplitRefugees(int32 TotalRefugee, FGuid FromPlaceGuid, TArray<FRefugeeBatch>& OutBatches);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 拆分流民为若干股(实现策划文档"二、人口 / 流民 / 拆分"逻辑)
> - 总数 < 3:单股,不拆分
> - 总数 ≥ 3:拆分次数 Rand(1, 5),每股 Rand(1, 剩余)

---

### 函数 `CalcConstructionTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Population" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BaseTime` | `int32` |
| `CurrentPopulation` | `int32` |
| `（匿名/仅类型）` | `float EfficiencyCoeff = 100.f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Population") static int32 CalcConstructionTime(int32 BaseTime, int32 CurrentPopulation, float EfficiencyCoeff = 100.f);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 据点建筑修建速度增幅(单位秒,向下取整)
> 公式:t × (0.5 + 0.5 × (系数 / p)^0.5)
> @param BaseTime           建造耗时基础值 t
> @param CurrentPopulation  当前人口 p
> @param EfficiencyCoeff    DA_WorldGameConfigurationAsset::PopulationConstructionEfficiency (默认 100)

---

### 函数 `CalcPopulationTaxIncome`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Tax" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Population` | `int32` |
| `Order` | `float` |
| `TaxRatio` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Tax") static float CalcPopulationTaxIncome(int32 Population, float Order, float TaxRatio);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 人口产出税收(完整公式)
> 公式:M = (1-T) × P × (0.6 + 0.009 × S)
> @param Population 当前人口 P
> @param Order      当前治安 S(0-100)
> @param TaxRatio   税收比例 T(0-1)

---

### 函数 `CalcPopulationBaseConsume`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Tax" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Population` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Tax") static float CalcPopulationBaseConsume(int32 Population);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 人口基础消耗 = 人口总数 × 0.1

---

### 函数 `CalcStationedCharacterConsume`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Tax" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StationedCount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Tax") static float CalcStationedCharacterConsume(int32 StationedCount);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 驻扎弟子消耗 = 弟子人数 × 10

---

### 函数 `GetOrderStage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Order" |
| 返回类型 | [EWorldPlaceOrderStage](WorldEconomyStruct__EWorldPlaceOrderStage.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Order` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Order") static EWorldPlaceOrderStage GetOrderStage(float Order);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 治安阶段(0-100 → 安宁/纷扰/混乱/动荡)
> 边界遵循策划文档原文(40-49 段优先归到"混乱")

---

### 函数 `CalcOrderChangeByPopulation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldEconomy|Order" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CurrentPopulation` | `int32` |
| `MaxPopulation` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldEconomy|Order") static int32 CalcOrderChangeByPopulation(int32 CurrentPopulation, int32 MaxPopulation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 人口变化后,治安变化值(向上取整,可正可负)
> 公式:N = (0.5 - r) × 20 + Rand(-3, 3),r = Po / Pm

---

### 函数 `CalcRiotTriggerProb`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Order" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Order` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Order") static float CalcRiotTriggerProb(float Order);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 治安触发暴乱的概率
> 公式:P = Max(0.01, Min(0.5, 0.5 - 0.0049 × S))

---

### 函数 `CalcRebellionTriggerProb`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Order" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RiotDurationSec` | `float` |
| `Order` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Order") static float CalcRebellionTriggerProb(float RiotDurationSec, float Order);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 暴乱结束后触发叛乱的概率
> 公式:P = Max(0, Min(0.5, 0.1 × T/960 + 0.008 × (1-S)))
> @param RiotDurationSec  暴乱持续秒数 T
> @param Order            当前治安 S(0-100)

---

### 函数 `CalcRiotDuration`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Riot" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Order` | `float` |
| `OrderBuildingCount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Riot") static float CalcRiotDuration(float Order, int32 OrderBuildingCount);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 暴乱基础持续时间(秒)
> 公式:s = 960 × (9 - 0.08 × S)
> 拥有治安建筑后再乘:(1 - 治安建筑数 / 10)

---

### 函数 `CalcRiotProsperityLossPerTick`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Riot" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Prosperity` | `float` |
| `Population` | `int32` |
| `MaxPopulation` | `int32` |
| `Order` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Riot") static int32 CalcRiotProsperityLossPerTick(float Prosperity, int32 Population, int32 MaxPopulation, float Order);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 暴乱单次扣繁荣量(向上取整)
> 公式:N = Max(1, Pr × Po/Pm × (100-S)/100 × 0.2)

---

### 函数 `CalcRiotPopulationLossPerTick`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Riot" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Population` | `int32` |
| `Order` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Riot") static int32 CalcRiotPopulationLossPerTick(int32 Population, float Order);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 暴乱单次扣人口量(向上取整)
> 公式:N = Max(1, Po × (100-S)/100 × 0.05)

---

### 函数 `CalcRebellionProsperityLoss`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Rebellion" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Prosperity` | `float` |
| `Population` | `int32` |
| `MaxPopulation` | `int32` |
| `Order` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Rebellion") static int32 CalcRebellionProsperityLoss(float Prosperity, int32 Population, int32 MaxPopulation, float Order);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 叛乱一次性扣繁荣量(向上取整)
> 公式:N = Max(1, Pr × Po/Pm × (100-S)/100 × 0.5)

---

### 函数 `CalcRebellionPopulationLoss`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldEconomy|Rebellion" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Population` | `int32` |
| `Order` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldEconomy|Rebellion") static int32 CalcRebellionPopulationLoss(int32 Population, float Order);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 叛乱一次性扣人口量(向上取整)
> 公式:N = Max(1, Po × (100-S)/100 × 0.2)

---
