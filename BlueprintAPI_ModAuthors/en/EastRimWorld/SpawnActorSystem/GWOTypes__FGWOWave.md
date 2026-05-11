# `struct` `FGWOWave`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `priority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Spawn Time" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta=(ClampMin="0")) int priority = 0;` |

---

### Property `waveActorListDataTableArr`

| Field | Details |
|------|------|
| C++ type | `TArray<class UDataTable*>` |
| Reflection specifiers | BlueprintReadWrite, Category="Spawn Time" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time") TArray<class UDataTable*> waveActorListDataTableArr;` |

---
