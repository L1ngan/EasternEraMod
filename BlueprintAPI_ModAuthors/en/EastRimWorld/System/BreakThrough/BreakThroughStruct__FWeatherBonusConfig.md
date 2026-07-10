# `struct` `FWeatherBonusConfig`

**Source header:** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## Functional description (from header comments)

> 天气加成配置

## Blueprint-exposed variables

### Property `WeatherType`

| Field | Details |
|------|------|
| C++ type | [EERWWeather](../../WorldSystem/WorldStruct__EERWWeather.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EERWWeather WeatherType = EERWWeather::None;` |

**Notes:**

> 天气类型

---

### Property `ElementType`

| Field | Details |
|------|------|
| C++ type | [EFiveElementType](../../Struct/CommonEnum__EFiveElementType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EFiveElementType ElementType = EFiveElementType::None;` |

**Notes:**

> 房间五行类型

---

### Property `BonusPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BonusPercent = 0.0f;` |

**Notes:**

> 加成百分比（最高25%）

---
