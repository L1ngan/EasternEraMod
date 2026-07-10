# `class` `UBreakThroughConfigurationAsset`

**源码头文件:** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## 功能说明（来自头文件注释）

> 突破配置资产

## 蓝图暴露变量

### 属性 `RoomBonusMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RoomBonusMax = 0.5f;` |

**说明:**

> 房间加成（房间等级*10%）

---

### 属性 `RoomBonusPerLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RoomBonusPerLevel = 0.1f;` |

**说明:**

> Room Bonus Per Level 字段。

---

### 属性 `MoodBonusMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MoodBonusMax = 0.5f;` |

**说明:**

> 心情加成（当前心情值/2000）

---

### 属性 `MoodBonusDivisor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MoodBonusDivisor = 2000.0f;` |

**说明:**

> Mood Bonus Divisor 字段。

---

### 属性 `TalentBonusMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TalentBonusMax = 0.25f;` |

**说明:**

> 资质加成（资质*0.5%）

---

### 属性 `TalentBonusMultiplier`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TalentBonusMultiplier = 0.005f;` |

**说明:**

> Talent Bonus Multiplier 字段。

---

### 属性 `ElementBonusMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ElementBonusMax = 0.25f;` |

**说明:**

> 五行加成（房间对应五行*0.5%）

---

### 属性 `ElementBonusMultiplier`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ElementBonusMultiplier = 0.005f;` |

**说明:**

> Element Bonus Multiplier 字段。

---

### 属性 `WeatherBonuses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWeatherBonusConfig](BreakThroughStruct__FWeatherBonusConfig.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FWeatherBonusConfig> WeatherBonuses;` |

**说明:**

> 天气加成（每种天气单独配置）

---

### 属性 `WeatherBonusMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float WeatherBonusMax = 0.25f;` |

**说明:**

> Weather Bonus Max 字段。

---

### 属性 `ExperienceBonusMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ExperienceBonusMax = 0.25f;` |

**说明:**

> 经验加成（同境界突破次数*10%）

---

### 属性 `ExperienceBonusPerBreakThrough`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ExperienceBonusPerBreakThrough = 0.1f;` |

**说明:**

> Experience Bonus Per Break Through 字段。

---

### 属性 `QiConsumptionPerSecond`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float QiConsumptionPerSecond = 1.0f;` |

**说明:**

> 每秒消耗的罡气

---

### 属性 `BreakThroughPointsPerSecond`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BreakThroughPointsPerSecond = 1.0f;` |

**说明:**

> 每秒获得的突破点数

---

### 属性 `ConsumeDamageShieldEffect_SetByCaller`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UGameplayEffect>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UGameplayEffect> ConsumeDamageShieldEffect_SetByCaller;` |

**说明:**

> 扣除罡气值GE

---
