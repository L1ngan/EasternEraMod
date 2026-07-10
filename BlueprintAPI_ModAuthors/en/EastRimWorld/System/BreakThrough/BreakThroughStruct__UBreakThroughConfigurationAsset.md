# `class` `UBreakThroughConfigurationAsset`

**Source header:** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## Functional description (from header comments)

> 突破配置资产

## Blueprint-exposed variables

### Property `RoomBonusMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RoomBonusMax = 0.5f;` |

**Notes:**

> 房间加成（房间等级*10%）

---

### Property `RoomBonusPerLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RoomBonusPerLevel = 0.1f;` |

**Notes:**

> Room Bonus Per Level field.

---

### Property `MoodBonusMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MoodBonusMax = 0.5f;` |

**Notes:**

> 心情加成（当前心情值/2000）

---

### Property `MoodBonusDivisor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float MoodBonusDivisor = 2000.0f;` |

**Notes:**

> Mood Bonus Divisor field.

---

### Property `TalentBonusMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TalentBonusMax = 0.25f;` |

**Notes:**

> 资质加成（资质*0.5%）

---

### Property `TalentBonusMultiplier`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TalentBonusMultiplier = 0.005f;` |

**Notes:**

> Talent Bonus Multiplier field.

---

### Property `ElementBonusMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ElementBonusMax = 0.25f;` |

**Notes:**

> 五行加成（房间对应五行*0.5%）

---

### Property `ElementBonusMultiplier`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ElementBonusMultiplier = 0.005f;` |

**Notes:**

> Element Bonus Multiplier field.

---

### Property `WeatherBonuses`

| Field | Details |
|------|------|
| C++ type | TArray<[FWeatherBonusConfig](BreakThroughStruct__FWeatherBonusConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FWeatherBonusConfig> WeatherBonuses;` |

**Notes:**

> 天气加成（每种天气单独配置）

---

### Property `WeatherBonusMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float WeatherBonusMax = 0.25f;` |

**Notes:**

> Weather Bonus Max field.

---

### Property `ExperienceBonusMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ExperienceBonusMax = 0.25f;` |

**Notes:**

> 经验加成（同境界突破次数*10%）

---

### Property `ExperienceBonusPerBreakThrough`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ExperienceBonusPerBreakThrough = 0.1f;` |

**Notes:**

> Experience Bonus Per Break Through field.

---

### Property `QiConsumptionPerSecond`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float QiConsumptionPerSecond = 1.0f;` |

**Notes:**

> 每秒消耗的罡气

---

### Property `BreakThroughPointsPerSecond`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BreakThroughPointsPerSecond = 1.0f;` |

**Notes:**

> 每秒获得的突破点数

---

### Property `ConsumeDamageShieldEffect_SetByCaller`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftClassPtr<UGameplayEffect> ConsumeDamageShieldEffect_SetByCaller;` |

**Notes:**

> 扣除罡气值GE

---
