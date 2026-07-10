# `struct` `FApprenticeshipRewardSet`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────
> 奖励集合(DT_ApprenticeshipRewardSet 行, 继承 FDataBase; RowName/ID = SetID)
> 被奖励池的 RewardSets 通过 SetID 引用, 可跨池复用
> ─────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `FixedRewardIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="RewardSet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardSet") TArray<FName> FixedRewardIDs;` |

**Notes:**

> 固定奖励:命中本集合后全部发放(引用 DT_ApprenticeshipReward RowName)

---

### Property `RandomRewards`

| Field | Details |
|------|------|
| C++ type | TArray<[FApprenticeshipRandomReward](ApprenticeshipRewardTypes__FApprenticeshipRandomReward.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="RewardSet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardSet") TArray<FApprenticeshipRandomReward> RandomRewards;` |

**Notes:**

> 随机奖励候选:每个带权重(引用 RewardID), 从中抽取 RandomPick 个

---

### Property `RandomPickMin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="RewardSet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardSet") int32 RandomPickMin = 1;` |

**Notes:**

> 从随机候选抽取的个数下限([Min,Max] 间随机取整;不重复抽)

---

### Property `RandomPickMax`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="RewardSet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardSet") int32 RandomPickMax = 1;` |

**Notes:**

> 从随机候选抽取的个数上限

---
