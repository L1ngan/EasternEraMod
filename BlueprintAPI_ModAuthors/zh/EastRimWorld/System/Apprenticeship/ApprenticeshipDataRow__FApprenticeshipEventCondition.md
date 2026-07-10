# `struct` `FApprenticeshipEventCondition`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow.h`

---

## 功能说明（来自头文件注释）

> Apprenticeship Event Condition 数据结构。

## 蓝图暴露变量

### 属性 `Type`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EApprenticeshipConditionType](ApprenticeshipDataRow__EApprenticeshipConditionType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Condition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Condition") EApprenticeshipConditionType Type = EApprenticeshipConditionType::RealmLevel;` |

**说明:**

> 条件类型

---

### 属性 `MinValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Condition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Condition") int32 MinValue = 0;` |

**说明:**

> 数值下限(境界=境界等级 / 好感=好感值)

---

### 属性 `MaxValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Condition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Condition") int32 MaxValue = 0;` |

**说明:**

> 数值上限(<=0 或 < MinValue 视为无上限)

---

### 属性 `ForceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Condition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Condition", meta = (EditConditionHides, EditCondition = "Type == EApprenticeshipConditionType::ForceFavorability")) FName ForceID;` |

**说明:**

> Type=门派好感度 时:对比哪个门派(ForceID=DT_WorldForceInfoConfig RowName)对玩家的好感

---
