# `struct` `FGWOSaveSector`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

## Functional description (from header comments)

> Save data of a single sector, including location, status and the frozen actors inside it (converted from runtime FGWOSector)

## Blueprint-exposed variables

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

> Status of the sector (EGWOSectorStatus, default INACTIVE)

---

### Property `sectorVisual`

| Field | Details |
|------|------|
| C++ type | [EGWOSectorVisual](GWOTypes__EGWOSectorVisual.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EGWOSectorVisual sectorVisual = EGWOSectorVisual::SIDE;` |

**Notes:**

> Visual type of the sector (EGWOSectorVisual, default SIDE)

---

### Property `sectorID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int sectorID = -1;` |

**Notes:**

> ID of the sector; -1 means invalid

---

### Property `frozenActorsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSaveFrozenActorStruct](GWOSaveGame__FGWOSaveFrozenActorStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSaveFrozenActorStruct> frozenActorsArr;` |

**Notes:**

> Array of save data for frozen actors inside this sector

---
