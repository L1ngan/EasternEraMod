# `struct` `FGWOActorReplaceParameters`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Parameters for replacing an actor with a static mesh instance (mesh and location/rotation offsets)

## Blueprint-exposed variables

### Property `replaceableStaticMesh`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FSoftObjectPath replaceableStaticMesh;` |

**Notes:**

> Soft object path of the static mesh used to replace the actor

---

### Property `locationOffset`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FVector locationOffset = FVector::ZeroVector;` |

**Notes:**

> Location offset of the replacement mesh relative to the actor

---

### Property `rotatorOffset`

| Field | Details |
|------|------|
| C++ type | `FRotator` |
| Reflection specifiers | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FRotator rotatorOffset = FRotator::ZeroRotator;` |

**Notes:**

> Rotation offset of the replacement mesh relative to the actor

---
