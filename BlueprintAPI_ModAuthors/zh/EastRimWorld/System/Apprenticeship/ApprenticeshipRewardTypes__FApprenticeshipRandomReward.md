# `struct` `FApprenticeshipRandomReward`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────
> 带权重的随机奖励候选(引用 RewardID, 便于复用)
> ─────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `RewardID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") FName RewardID;` |

**说明:**

> 引用的奖励 ID(DT_ApprenticeshipReward RowName)

---

### 属性 `Weight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Reward") float Weight = 1.f;` |

**说明:**

> 在随机候选里的抽取权重(越大越易被抽中)

---
