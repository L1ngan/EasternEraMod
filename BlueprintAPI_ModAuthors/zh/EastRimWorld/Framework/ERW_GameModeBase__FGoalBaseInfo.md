# `struct` `FGoalBaseInfo`

**源码头文件:** `EastRimWorld/Framework/ERW_GameModeBase.h`

---

## 功能说明（来自头文件注释）

> GOAP目标信息

## 蓝图暴露变量

### 属性 `BaseScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float BaseScore { 0 };` |

**说明:**

> 基础分值

---

### 属性 `WorkSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName WorkSchedule;` |

**说明:**

> 工作日程

---

### 属性 `GoalCategory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGOAPGoalCategory](../ERW_Enumerations__EGOAPGoalCategory.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) EGOAPGoalCategory GoalCategory = EGOAPGoalCategory::Work;` |

**说明:**

> GOAP目标分类

---
