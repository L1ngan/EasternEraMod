# `struct` `FGWOTime`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Spawn time of day (hours plus minutes)

## Blueprint-exposed variables

### Property `hours`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Spawn Time" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta=(ClampMin="0", ClampMax="23")) int hours = 0;` |

**Notes:**

> Hour value, range 0-23

---

### Property `minutes`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Spawn Time" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta=(ClampMin="0", ClampMax="59")) int minutes = 0;` |

**Notes:**

> Minute value, range 0-59

---
