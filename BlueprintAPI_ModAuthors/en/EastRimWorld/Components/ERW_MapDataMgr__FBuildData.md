# `struct` `FBuildData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BuildConfigId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) FName BuildConfigId;` |

**Source comments:**

> 建筑配置ID

---

### Property `BuildingIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) TArray<FGuid> BuildingIds;` |

**Source comments:**

> 未完成的建筑id数组

---

### Property `BuildIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame , BlueprintReadWrite) TArray<FGuid> BuildIds;` |

**Source comments:**

> 已完成的建筑id数组

---
