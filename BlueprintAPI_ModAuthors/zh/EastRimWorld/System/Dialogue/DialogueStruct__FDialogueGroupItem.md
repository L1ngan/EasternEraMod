# `struct` `FDialogueGroupItem`

**源码头文件:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## 功能说明（来自头文件注释）

> Dialogue Group Item 数据结构。

## 蓝图暴露变量

### 属性 `StartDialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName StartDialogueID;` |

**说明:**

> 开始对话ID

---

### 属性 `ConditionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ConditionID;` |

**说明:**

> 条件 通用任务条件

---

### 属性 `Conditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCommonTaskCondition> Conditions;` |

**说明:**

> Conditions 字段。

---

### 属性 `TriggerCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int TriggerCount = -1;` |

**说明:**

> 可触发的次数 -1 为无限次 (StartDialogueID在所有DialogueGroup中累计触发的次数)

---
