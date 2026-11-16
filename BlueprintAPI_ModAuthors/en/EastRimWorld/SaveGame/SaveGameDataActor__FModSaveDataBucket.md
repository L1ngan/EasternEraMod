# `struct` `FModSaveDataBucket`

**Source header:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## Functional description (from header comments)

> One mod's per-save key/value data.

## Blueprint-exposed variables

### Property `Values`

| Field | Details |
|------|------|
| C++ type | `TMap<FString, FString>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) TMap<FString, FString> Values;` |

**Notes:**

> Key -> value (format defined by the mod).

---
