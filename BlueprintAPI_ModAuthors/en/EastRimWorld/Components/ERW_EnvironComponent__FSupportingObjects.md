# `struct` `FSupportingObjects`

**Source header:** `EastRimWorld/Components/ERW_EnvironComponent.h`

---

## Functional description (from header comments)

> 格子坐标对应的配套物体

## Blueprint-exposed variables

### Property `Objects`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , FGuid> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TMap<FGridPosition , FGuid> Objects;` |

**Source comments:**

> TMap<相对格子坐标 , 配套物体的Guid>

---
