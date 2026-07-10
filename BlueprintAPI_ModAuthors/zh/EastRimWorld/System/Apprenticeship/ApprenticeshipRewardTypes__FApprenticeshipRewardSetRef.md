# `struct` `FApprenticeshipRewardSetRef`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipRewardTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────
> 奖励池内的集合引用(SetID + 抽中权重)
> ─────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `SetID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="RewardPool" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardPool") FName SetID;` |

**说明:**

> 引用的奖励集合 ID(DT_ApprenticeshipRewardSet RowName)

---

### 属性 `SetWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="RewardPool" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RewardPool") float SetWeight = 1.f;` |

**说明:**

> 本集合在所属奖励池内被抽中的权重(池内多集合按此加权选 1)

---
