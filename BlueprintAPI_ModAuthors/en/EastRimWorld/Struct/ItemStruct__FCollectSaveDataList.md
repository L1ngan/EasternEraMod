# `struct` `FCollectSaveDataList`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> Collect Save Data List data structure.

## Blueprint-exposed variables

### Property `CollectSaveData`

| Field | Details |
|------|------|
| C++ type | TArray<[FCollectSaveData](ItemStruct__FCollectSaveData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FCollectSaveData> CollectSaveData;` |

**Notes:**

> Collect Save Data field.

---
