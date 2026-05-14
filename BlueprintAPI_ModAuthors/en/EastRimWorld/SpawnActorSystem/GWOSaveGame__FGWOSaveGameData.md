# `struct` `FGWOSaveGameData`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `sectorsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSaveSector](GWOSaveGame__FGWOSaveSector.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSaveSector> sectorsArr;` |

---

### Property `activeSectorsIndexesArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<int> activeSectorsIndexesArr;` |

---

### Property `cacheSectorsIndexesArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<int> cacheSectorsIndexesArr;` |

---

### Property `defrostQueueArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSaveFrozenActorStruct](GWOSaveGame__FGWOSaveFrozenActorStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSaveFrozenActorStruct> defrostQueueArr;` |

---

### Property `spawnerQueueArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOActorSpawnStruct> spawnerQueueArr;` |

---

### Property `unusedUniqIDArr`

| Field | Details |
|------|------|
| C++ type | `TArray<int>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<int> unusedUniqIDArr;` |

---

### Property `worldActorsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOActorSpawnStruct> worldActorsArr;` |

---

### Property `spawnersArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSpawnerIdentification](GWOTypes__FGWOSpawnerIdentification.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSpawnerIdentification> spawnersArr;` |

---

### Property `currentUniqID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int currentUniqID = -1;` |

---
