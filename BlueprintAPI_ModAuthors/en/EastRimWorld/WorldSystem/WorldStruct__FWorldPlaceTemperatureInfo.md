# `struct` `FWorldPlaceTemperatureInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 温度信息

## Blueprint-exposed variables

### Property `Hour`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int Hour = 0;` |

**Notes:**

> 时间

---

### Property `TemperatureChange`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int TemperatureChange = 0;` |

**Notes:**

> 温度变化

---

### Property `Season`

| Field | Details |
|------|------|
| C++ type | [EERWSeason](WorldStruct__EERWSeason.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EERWSeason Season = EERWSeason::Spring;` |

**Notes:**

> 季节

---
