# `struct` `FGWOSaveSpawnedActorStruct`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Save record of a spawned actor (class and unique ID)

## Blueprint-exposed variables

### Property `actorClass`

| Field | Details |
|------|------|
| C++ type | `UClass*` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization") UClass* actorClass = nullptr;` |

**Notes:**

> Class of the spawned actor

---

### Property `uniqID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int uniqID = -1;` |

**Notes:**

> Unique ID of the spawned actor (-1 means unassigned)

---
