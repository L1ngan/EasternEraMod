# `struct` `FDialogueTriggerFunctionData`

**源码头文件:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## 功能说明（来自头文件注释）

> Dialogue Trigger Function Data 数据结构。

## 蓝图暴露变量

### 属性 `FunctionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EDialogueTriggerFunctionType](DialogueStruct__EDialogueTriggerFunctionType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EDialogueTriggerFunctionType FunctionType = EDialogueTriggerFunctionType::None;` |

**说明:**

> 触发额外功能的类型

---

### 属性 `IntParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> IntParams;` |

**说明:**

> (加减玩家金钱)

---

### 属性 `NameParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> NameParams;` |

**说明:**

> FName类型参数列表 （触发任务填任务id）

---
