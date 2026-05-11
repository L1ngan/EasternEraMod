# `struct` `FRelativeGridPoses`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 物体的相对格子坐标

## Blueprint-exposed variables

### Property `GridPoses`

| Field | Details |
|------|------|
| C++ type | TArray<[FGridPosition](ERW_CommonTypes__FGridPosition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TArray<FGridPosition> GridPoses;` |

---
