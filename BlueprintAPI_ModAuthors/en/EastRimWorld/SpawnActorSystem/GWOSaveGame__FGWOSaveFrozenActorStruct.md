# `struct` `FGWOSaveFrozenActorStruct`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

## Functional description (from header comments)

> Save-data struct for a frozen actor, holding all information needed to rebuild the actor on defrost (converted from runtime FGWOFrozenActorStruct)

## Blueprint-exposed variables

### Property `transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FTransform transform = FTransform::Identity;` |

**Notes:**

> World transform (location/rotation/scale) of the actor when frozen

---

### Property `sectorIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int sectorIndex = -1;` |

**Notes:**

> Index of the owning sector in the sectors array; -1 means unassigned

---

### Property `actorIndex`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int actorIndex = -1;` |

**Notes:**

> Index of this actor in the spawn data array; -1 means invalid

---

### Property `spawnDistanceSquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float spawnDistanceSquare = 0.f;` |

**Notes:**

> Squared spawn distance used for distance checks

---

### Property `destroyDistanceSquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float destroyDistanceSquare = 0.f;` |

**Notes:**

> Squared destroy distance used for distance checks

---

### Property `noSpawnDistanceSquare`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float noSpawnDistanceSquare = 0.f;` |

**Notes:**

> Squared no-spawn distance (actor is not spawned when too close)

---

### Property `distanceCheck`

| Field | Details |
|------|------|
| C++ type | [EGWOAxes](GWOTypes__EGWOAxes.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EGWOAxes distanceCheck = EGWOAxes::XYZ;` |

**Notes:**

> Axes used for distance checking (EGWOAxes, default XYZ)

---

### Property `uniqID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int uniqID = -1;` |

**Notes:**

> Globally unique ID of the actor in the GWO system; -1 means invalid

---

### Property `lifeTimeInBackground`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float lifeTimeInBackground = 0.f;` |

**Notes:**

> Lifetime in seconds the actor may remain in the background (frozen) state

---

### Property `timeInsertInBackground`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() double timeInsertInBackground = 0.f;` |

**Notes:**

> Timestamp recorded when the actor was inserted into the background (frozen)

---

### Property `sectorID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int sectorID = -1;` |

**Notes:**

> ID of the owning sector; -1 means unassigned

---

### Property `bReplaceStaticMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bReplaceStaticMesh = false;` |

**Notes:**

> Whether the actor is replaced by a static mesh instance while frozen

---

### Property `replaceParameters`

| Field | Details |
|------|------|
| C++ type | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FGWOActorReplaceParameters replaceParameters;` |

**Notes:**

> Parameters for static mesh replacement while frozen (FGWOActorReplaceParameters)

---

### Property `ActorType`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() uint8 ActorType = 0;` |

**Notes:**

> Actor type identifier (uint8)

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `uint8` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() uint8 TeamID = 0;` |

**Notes:**

> Team/faction ID (uint8)

---

### Property `ActorInfoID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName ActorInfoID;` |

**Notes:**

> Row ID of the actor's config data table entry (FName)

---

### Property `BoxLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FVector BoxLocation = FVector::ZeroVector;` |

**Notes:**

> Location of the spawn box this actor belongs to

---

### Property `IdleRange`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 IdleRange = 1000.f;` |

**Notes:**

> Idle wander range radius (default 1000)

---

### Property `CharacterSaveData`

| Field | Details |
|------|------|
| C++ type | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FCharacterSaveData CharacterSaveData;` |

**Notes:**

> Character save data (FCharacterSaveData) preserving the character's component state

---
