# `struct` `FApprenticeshipRewardSetRef`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────
> 奖励池内的集合引用(SetID + 抽中权重)
> ─────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `SetID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="RewardPool" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardPool") FName SetID;` |

**Notes:**

> 引用的奖励集合 ID(DT_ApprenticeshipRewardSet RowName)

---

### Property `SetWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="RewardPool" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardPool") float SetWeight = 1.f;` |

**Notes:**

> 本集合在所属奖励池内被抽中的权重(池内多集合按此加权选 1)

---
