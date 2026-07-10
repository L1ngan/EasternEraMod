# `struct` `FGWOSpawnerStruct`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Spawner entry recorded in a sector (spawner actor GUID and its point index list)

## Blueprint-exposed variables

### Property `SpawnerActorGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FGuid SpawnerActorGUID;` |

**Notes:**

> GUID of the spawner actor

---

### Property `pointsArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<int> pointsArr;` |

**Notes:**

> Array of this spawner's spawn point indexes within the sector

---
