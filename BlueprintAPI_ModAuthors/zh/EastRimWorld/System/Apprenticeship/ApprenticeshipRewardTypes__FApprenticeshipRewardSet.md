# `struct` `FApprenticeshipRewardSet`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────
> 奖励集合(DT_ApprenticeshipRewardSet 行, 继承 FDataBase; RowName/ID = SetID)
> 被奖励池的 RewardSets 通过 SetID 引用, 可跨池复用
> ─────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `FixedRewardIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="RewardSet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardSet") TArray<FName> FixedRewardIDs;` |

**说明:**

> 固定奖励:命中本集合后全部发放(引用 DT_ApprenticeshipReward RowName)

---

### 属性 `RandomRewards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipRandomReward](ApprenticeshipRewardTypes__FApprenticeshipRandomReward.md)> |
| 反射说明符 | BlueprintReadWrite, Category="RewardSet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardSet") TArray<FApprenticeshipRandomReward> RandomRewards;` |

**说明:**

> 随机奖励候选:每个带权重(引用 RewardID), 从中抽取 RandomPick 个

---

### 属性 `RandomPickMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="RewardSet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardSet") int32 RandomPickMin = 1;` |

**说明:**

> 从随机候选抽取的个数下限([Min,Max] 间随机取整;不重复抽)

---

### 属性 `RandomPickMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="RewardSet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardSet") int32 RandomPickMax = 1;` |

**说明:**

> 从随机候选抽取的个数上限

---
