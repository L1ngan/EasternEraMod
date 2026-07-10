# `struct` `FGWOWave`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Wave spawn configuration (priority and array of actor list data tables for the wave)

## Blueprint-exposed variables

### Property `priority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Spawn Time" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta=(ClampMin="0")) int priority = 0;` |

**Notes:**

> Wave priority, minimum value 0

---

### Property `waveActorListDataTableArr`

| Field | Details |
|------|------|
| C++ type | `TArray<class UDataTable*>` |
| Reflection specifiers | BlueprintReadWrite, Category="Spawn Time" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time") TArray<class UDataTable*> waveActorListDataTableArr;` |

**Notes:**

> Array of actor spawn list data tables used by this wave

---
