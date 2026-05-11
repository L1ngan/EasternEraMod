# `struct` `FGWOActorReplaceParameters`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `replaceableStaticMesh`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FSoftObjectPath replaceableStaticMesh;` |

---

### Property `locationOffset`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FVector locationOffset = FVector::ZeroVector;` |

---

### Property `rotatorOffset`

| Field | Details |
|------|------|
| C++ type | `FRotator` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FRotator rotatorOffset = FRotator::ZeroRotator;` |

---
