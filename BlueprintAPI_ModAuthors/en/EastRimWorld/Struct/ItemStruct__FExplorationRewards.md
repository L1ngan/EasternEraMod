# `struct` `FExplorationRewards`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> Exploration Rewards data structure.

## Blueprint-exposed variables

### Property `Rewards`

| Field | Details |
|------|------|
| C++ type | TArray<[FExplorationReward](ItemStruct__FExplorationReward.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<FExplorationReward> Rewards;` |

**Notes:**

> 奖池

---

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) int32 Level = -1;` |

**Notes:**

> 需要达到的境界

---
