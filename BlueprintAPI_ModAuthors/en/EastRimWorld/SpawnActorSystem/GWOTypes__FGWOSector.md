# `struct` `FGWOSector`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## Functional description (from header comments)

> World optimization sector data (location, status, frozen actors and spawner point lists)

## Blueprint-exposed variables

### Property `boxRef`

| Field | Details |
|------|------|
| C++ type | `class UBoxComponent*` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(Transient) class UBoxComponent* boxRef = nullptr;` |

**Notes:**

> Reference to the sector's box component (runtime cache, not serialized)

---

### Property `location`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector location = FVector::ZeroVector;` |

**Notes:**

> World location of the sector

---

### Property `sectorStatus`

| Field | Details |
|------|------|
| C++ type | [EGWOSectorStatus](GWOTypes__EGWOSectorStatus.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EGWOSectorStatus sectorStatus = EGWOSectorStatus::INACTIVE;` |

**Notes:**

> Current runtime status of the sector (active/cache/idle/inactive)

---

### Property `sectorVisual`

| Field | Details |
|------|------|
| C++ type | [EGWOSectorVisual](GWOTypes__EGWOSectorVisual.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EGWOSectorVisual sectorVisual = EGWOSectorVisual::SIDE;` |

**Notes:**

> Debug visualization category of the sector

---

### Property `sectorID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int sectorID = -1;` |

**Notes:**

> ID of the sector (-1 means invalid)

---

### Property `frozenActorsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOFrozenActorStruct](GWOTypes__FGWOFrozenActorStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOFrozenActorStruct> frozenActorsArr;` |

**Notes:**

> Array of frozen actor data within this sector

---

### Property `spawnerPointsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSpawnerStruct](GWOTypes__FGWOSpawnerStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSpawnerStruct> spawnerPointsArr;` |

**Notes:**

> Array of spawners and their spawn point indexes within this sector

---
