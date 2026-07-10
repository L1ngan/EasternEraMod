# `struct` `FPracticePointCD`

**Source header:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## Functional description (from header comments)

> Cooldown data for a character gaining comprehension training/retrace points.

## Blueprint-exposed variables

### Property `TrainingPointCD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float TrainingPointCD = 0.f;` |

**Notes:**

> Cooldown for gaining training points.

---

### Property `RetracePointCD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float RetracePointCD = 0.f;` |

**Notes:**

> Cooldown for gaining retrace points.

---
