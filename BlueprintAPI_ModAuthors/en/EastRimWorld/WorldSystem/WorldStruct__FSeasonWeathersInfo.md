# `struct` `FSeasonWeathersInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 季节天气配置表（参考 UDS_Weather_Settings）

## Blueprint-exposed variables

### Property `Season`

| Field | Details |
|------|------|
| C++ type | `EERWSeason` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EERWSeason Season = EERWSeason::Spring;` |

**Source comments:**

> 季节

---

### Property `WeatherType`

| Field | Details |
|------|------|
| C++ type | `EERWWeather` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EERWWeather WeatherType = EERWWeather::None;` |

**Source comments:**

> 天气配置

---

### Property `WeatherWeight`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int WeatherWeight = 1;` |

**Source comments:**

> 天气权重（小于等于0，不参与随机）

---

### Property `LevelName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName LevelName = NAME_None;` |

**Source comments:**

> 对应地图名称（名称为None或""表示通用配置）

---

### Property `WeatherChangeTransitionTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float WeatherChangeTransitionTime = 20.f;` |

**Source comments:**

> 天气过度时间(秒)

---
