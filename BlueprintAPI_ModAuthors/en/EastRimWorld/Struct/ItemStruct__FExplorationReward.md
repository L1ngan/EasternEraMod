# `struct` `FExplorationReward`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> Exploration Reward data structure.

## Blueprint-exposed variables

### Property `Rewards`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FAllTypeItemDrop](ItemStruct__FAllTypeItemDrop.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName, FAllTypeItemDrop> Rewards;` |

**Notes:**

> 物品ID及数量

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) int32 Weight = 0;` |

**Notes:**

> 权重

---
