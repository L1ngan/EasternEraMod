# `struct` `FApprenticeshipRewardPoolRow`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────
> 奖励池(DT_RewardPool 行, 继承 FDataBase; RowName/ID = PoolID, 事件行 RewardPoolID 引用)
> ─────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `RewardSets`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipRewardSetRef](ApprenticeshipRewardTypes__FApprenticeshipRewardSetRef.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="RewardPool" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardPool") TArray<FApprenticeshipRewardSetRef> RewardSets;` |

**Notes:**

> 多个奖励集合引用(按 SetWeight 抽中 1 个结算)

---
