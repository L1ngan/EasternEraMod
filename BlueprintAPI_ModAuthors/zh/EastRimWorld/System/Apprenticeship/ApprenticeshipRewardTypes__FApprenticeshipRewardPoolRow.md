# `struct` `FApprenticeshipRewardPoolRow`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────
> 奖励池(DT_RewardPool 行, 继承 FDataBase; RowName/ID = PoolID, 事件行 RewardPoolID 引用)
> ─────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `RewardSets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipRewardSetRef](ApprenticeshipRewardTypes__FApprenticeshipRewardSetRef.md)> |
| 反射说明符 | BlueprintReadWrite, Category="RewardPool" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardPool") TArray<FApprenticeshipRewardSetRef> RewardSets;` |

**说明:**

> 多个奖励集合引用(按 SetWeight 抽中 1 个结算)

---
