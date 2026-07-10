# `struct` `FGoalBaseInfo`

**Source header:** `EastRimWorld/Framework/ERW_GameModeBase.h`

---

## Functional description (from header comments)

> GOAP目标信息

## Blueprint-exposed variables

### Property `BaseScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float BaseScore { 0 };` |

**Notes:**

> 基础分值

---

### Property `WorkSchedule`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName WorkSchedule;` |

**Notes:**

> 工作日程

---

### Property `GoalCategory`

| Field | Details |
|------|------|
| C++ type | [EGOAPGoalCategory](../ERW_Enumerations__EGOAPGoalCategory.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) EGOAPGoalCategory GoalCategory = EGOAPGoalCategory::Work;` |

**Notes:**

> GOAP目标分类

---
