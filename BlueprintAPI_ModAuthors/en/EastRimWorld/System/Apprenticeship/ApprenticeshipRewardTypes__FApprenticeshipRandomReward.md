# `struct` `FApprenticeshipRandomReward`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────
> 带权重的随机奖励候选(引用 RewardID, 便于复用)
> ─────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `RewardID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") FName RewardID;` |

**Notes:**

> 引用的奖励 ID(DT_ApprenticeshipReward RowName)

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") float Weight = 1.f;` |

**Notes:**

> 在随机候选里的抽取权重(越大越易被抽中)

---
