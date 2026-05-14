# `struct` `FGWOSaveSector`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `location`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector location = FVector::ZeroVector;` |

---

### Property `sectorStatus`

| Field | Details |
|------|------|
| C++ type | `EGWOSectorStatus` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EGWOSectorStatus sectorStatus = EGWOSectorStatus::INACTIVE;` |

---

### Property `sectorVisual`

| Field | Details |
|------|------|
| C++ type | `EGWOSectorVisual` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EGWOSectorVisual sectorVisual = EGWOSectorVisual::SIDE;` |

---

### Property `sectorID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int sectorID = -1;` |

---

### Property `frozenActorsArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FGWOSaveFrozenActorStruct](GWOSaveGame__FGWOSaveFrozenActorStruct.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FGWOSaveFrozenActorStruct> frozenActorsArr;` |

---
