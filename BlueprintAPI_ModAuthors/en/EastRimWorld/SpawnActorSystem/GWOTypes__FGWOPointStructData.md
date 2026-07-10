# `struct` `FGWOPointStructData`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Data of a single spawn point (box transform, instance index, activation state, and spawn entry list)

## Blueprint-exposed variables

### Property `boxTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FTransform boxTransform;` |

**Notes:**

> Transform of the spawn box at this point

---

### Property `instanceIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int instanceIndex = 0;` |

**Notes:**

> Instanced mesh instance index corresponding to this point

---

### Property `bIsSpawnPoint`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bIsSpawnPoint = false;` |

**Notes:**

> Whether this point is selected as a spawn point

---

### Property `bIsActivate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bIsActivate = false;` |

**Notes:**

> Whether this point is currently activated

---

### Property `spawnDataArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOActorSpawnStruct> spawnDataArr;` |

**Notes:**

> Array of actor spawn entries assigned to this point

---

### Property `spawnPointCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int spawnPointCount = 0;` |

**Notes:**

> Spawn point count for this point

---
