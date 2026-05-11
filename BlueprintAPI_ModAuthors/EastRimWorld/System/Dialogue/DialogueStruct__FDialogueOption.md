# `struct` `FDialogueOption`

**源码头文件：** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## 功能说明（来自头文件注释）

> 对话选项

## 蓝图暴露变量

### 属性 `OptionText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OptionText;` |

**源码注释：**

> 选项的文字

---

### 属性 `NextDialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NextDialogueID = NAME_None;` |

**源码注释：**

> 点击后进行的下一个对话 如果为None则结束当前对话

---

### 属性 `TriggeredTaskID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName TriggeredTaskID = NAME_None;` |

**源码注释：**

> 触发的世界任务ID

---

### 属性 `TriggeredStationTaskID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName TriggeredStationTaskID = NAME_None;` |

**源码注释：**

> 触发的驻地任务ID

---

### 属性 `TriggeredEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName TriggeredEvent = NAME_None;` |

**源码注释：**

> 触发的世界事件

---

### 属性 `Conditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FCommonTaskCondition>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCommonTaskCondition> Conditions;` |

**源码注释：**

> 解锁此选项的条件

---

### 属性 `ClickConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FCommonTaskCondition>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCommonTaskCondition> ClickConditions;` |

**源码注释：**

> 点击时检查的条件

---

### 属性 `TriggerFunctions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FDialogueTriggerFunctionData>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueTriggerFunctionData> TriggerFunctions;` |

**源码注释：**

> 成功点击时触发的功能

---

### 属性 `DialogueOptionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EDialogueOptionType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EDialogueOptionType DialogueOptionType = EDialogueOptionType::None;` |

**源码注释：**

> 选项类型

---

### 属性 `SubmitItemToTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SubmitItemToTask;` |

**源码注释：**

> 提交物品到任务

---

### 属性 `TaskNPCId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TaskNPCId;` |

**源码注释：**

> 用来将可触发的任务关联到某个NPC,做NPC头顶任务提示用

---
