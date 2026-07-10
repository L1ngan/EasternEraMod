# `struct` `FBuildData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> Map building data per config ID: the build config ID plus GUID arrays of unfinished and finished buildings

## Blueprint-exposed variables

### Property `BuildConfigId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) FName BuildConfigId;` |

**Notes:**

> 建筑配置ID

---

### Property `BuildingIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) TArray<FGuid> BuildingIds;` |

**Notes:**

> 未完成的建筑id数组

---

### Property `BuildIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) TArray<FGuid> BuildIds;` |

**Notes:**

> 已完成的建筑id数组

---
