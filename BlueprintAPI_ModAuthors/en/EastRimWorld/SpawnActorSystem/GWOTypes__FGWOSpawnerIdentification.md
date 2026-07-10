# `struct` `FGWOSpawnerIdentification`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Identification and working data set of a single spawner (spawn lists, point sets, priority, etc.)

## Blueprint-exposed variables

### Property `spawnerUniqID`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FString spawnerUniqID = "";` |

**Notes:**

> Unique ID string of the spawner

---

### Property `collectionActorsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOActorSpawnStruct> collectionActorsArr;` |

**Notes:**

> Array of all actor entries collected from spawn lists

---

### Property `actorsSpawnSetArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOActorSpawnStruct> actorsSpawnSetArr;` |

**Notes:**

> Array of actor entries currently set for spawning

---

### Property `allPointsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOPointStructData](GWOTypes__FGWOPointStructData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOPointStructData> allPointsArr;` |

**Notes:**

> Array of all spawn point data of this spawner

---

### Property `spawnPointIndexesArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<int> spawnPointIndexesArr;` |

**Notes:**

> Array of point indexes selected as spawn points

---

### Property `currentPriority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int currentPriority = -1;` |

**Notes:**

> Current wave/priority being processed by the spawner (-1 means not started)

---

### Property `numberActorsPreparedForSpawn`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int numberActorsPreparedForSpawn = 0;` |

**Notes:**

> Number of actors prepared and waiting to spawn

---
