# `struct` `FGWOSaveGameData`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

## Functional description (from header comments)

> Overall save data of the GWO world optimization system, containing sectors, defrost/spawn queues, spawner identifications and unique ID allocation state

## Blueprint-exposed variables

### Property `sectorsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSaveSector](GWOSaveGame__FGWOSaveSector.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSaveSector> sectorsArr;` |

**Notes:**

> Array of save data for all sectors

---

### Property `activeSectorsIndexesArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<int> activeSectorsIndexesArr;` |

**Notes:**

> Array of indexes of active sectors

---

### Property `cacheSectorsIndexesArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<int> cacheSectorsIndexesArr;` |

**Notes:**

> Array of indexes of cached sectors

---

### Property `defrostQueueArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSaveFrozenActorStruct](GWOSaveGame__FGWOSaveFrozenActorStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSaveFrozenActorStruct> defrostQueueArr;` |

**Notes:**

> Queue of frozen actors waiting to be defrosted and spawned

---

### Property `spawnerQueueArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOActorSpawnStruct> spawnerQueueArr;` |

**Notes:**

> Queue of actors pending spawn from spawners (FGWOActorSpawnStruct)

---

### Property `unusedUniqIDArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<int> unusedUniqIDArr;` |

**Notes:**

> Array of recycled unique IDs available for reuse

---

### Property `worldActorsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOActorSpawnStruct> worldActorsArr;` |

**Notes:**

> Array of spawn data for world actors (FGWOActorSpawnStruct)

---

### Property `spawnersArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSpawnerIdentification](GWOTypes__FGWOSpawnerIdentification.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSpawnerIdentification> spawnersArr;` |

**Notes:**

> Array of spawner identification info (FGWOSpawnerIdentification)

---

### Property `currentUniqID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int currentUniqID = -1;` |

**Notes:**

> The latest unique ID that has been allocated

---
