# `struct` `FGWOFrozenActorStruct`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> Full snapshot data of a frozen (backgrounded) actor, used to destroy it when far away and rebuild it when near

## Blueprint-exposed variables

### Property `actorClass`

| Field | Details |
|------|------|
| C++ type | `UClass*` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() UClass* actorClass = nullptr;` |

**Notes:**

> Class of the frozen actor, used for respawning

---

### Property `transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FTransform transform = FTransform::Identity;` |

**Notes:**

> Actor transform (location/rotation/scale) saved when frozen

---

### Property `sectorIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int sectorIndex = -1;` |

**Notes:**

> Index of the sector the actor belongs to (-1 means invalid)

---

### Property `actorIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int actorIndex = -1;` |

**Notes:**

> Index of the actor in its spawn list (-1 means invalid)

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(); float spawnDistance = 2000.f;` |

---

### Property `?`

| Field | Details |
|------|------|
| C++ type | `` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(); float distanceDestroyOffset = 500.f;` |

---

### Property `spawnDistanceSquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float spawnDistanceSquare = 0.f;` |

**Notes:**

> Cached squared spawn distance

---

### Property `destroyDistanceSquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float destroyDistanceSquare = 0.f;` |

**Notes:**

> Cached squared destroy distance

---

### Property `noSpawnDistanceSquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float noSpawnDistanceSquare = 0.f;` |

**Notes:**

> Cached squared no-spawn distance

---

### Property `distanceCheck`

| Field | Details |
|------|------|
| C++ type | [EGWOAxes](GWOTypes__EGWOAxes.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EGWOAxes distanceCheck = EGWOAxes::XYZ;` |

**Notes:**

> Axes used for distance measurement (XYZ or XY)

---

### Property `uniqID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int uniqID = -1;` |

**Notes:**

> Unique ID of the frozen actor (-1 means unassigned)

---

### Property `lifeTimeInBackground`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float lifeTimeInBackground = 0.f;` |

**Notes:**

> Frozen lifetime of the actor in the background; its data is destroyed after this time

---

### Property `timeInsertInBackground`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() double timeInsertInBackground = 0.f;` |

**Notes:**

> Timestamp recorded when the actor was inserted into the background

---

### Property `sectorID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int sectorID = -1;` |

**Notes:**

> ID of the sector the actor belongs to (-1 means invalid)

---

### Property `bReplaceStaticMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bReplaceStaticMesh = false;` |

**Notes:**

> Whether to replace this actor with a static mesh instance

---

### Property `replaceParameters`

| Field | Details |
|------|------|
| C++ type | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FGWOActorReplaceParameters replaceParameters;` |

**Notes:**

> Parameters used when replacing with a static mesh (mesh and offsets)

---

### Property `ActorType`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() uint8 ActorType = 0;` |

**Notes:**

> Actor type: 1 human, 2 summon, 3 animal

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() uint8 TeamID = 0;` |

**Notes:**

> Team ID of the actor

---

### Property `ActorInfoID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName ActorInfoID;` |

**Notes:**

> Actor info config ID

---

### Property `BoxLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector BoxLocation = FVector::ZeroVector;` |

**Notes:**

> Location of the spawn box the actor belongs to

---

### Property `IdleRange`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 IdleRange = 1000.f;` |

**Notes:**

> Idle wandering range of the actor (in centimeters)

---

### Property `ConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName ConfigID;` |

**Notes:**

> Config table ID of the actor

---

### Property `CharacterSaveData`

| Field | Details |
|------|------|
| C++ type | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FCharacterSaveData CharacterSaveData;` |

**Notes:**

> Character save data captured when frozen, restored on rebuild

---
