# `struct` `FRoomTemperatureScoreData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> Configuration data mapping a room temperature range to a score.

## Blueprint-exposed variables

### Property `MinTemperature`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float MinTemperature = 0.f;` |

**Notes:**

> Lower bound of the temperature range.

---

### Property `MaxTemperature`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float MaxTemperature = 0.f;` |

**Notes:**

> Upper bound of the temperature range.

---

### Property `Score`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float Score = 0.f;` |

**Notes:**

> Score awarded for this temperature range.

---
