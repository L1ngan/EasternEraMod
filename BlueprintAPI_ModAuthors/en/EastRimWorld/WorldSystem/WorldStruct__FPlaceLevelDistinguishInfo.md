# `struct` `FPlaceLevelDistinguishInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> Place Level Distinguish Info data structure.

## Blueprint-exposed variables

### Property `LevelOutPut`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,FItemSimpleData> LevelOutPut;` |

**Notes:**

> 增加产出(逐级累加)

---

### Property `CanBuildBuildings`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> CanBuildBuildings;` |

**Notes:**

> 增加可建造建筑(逐级累加)

---
