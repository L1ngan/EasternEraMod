# `struct` `FCommonTaskInstance`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 任务

## 蓝图暴露变量

### 属性 `TaskID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") FName TaskID;` |

**说明:**

> 实际的taskID

---

### 属性 `DelayTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DelayTime = 0.0f;` |

**说明:**

> 任务的延迟时间

---

### 属性 `TaskTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaskTime = INDEX_NONE;` |

**说明:**

> 剩余超时时间 -1无限

---

### 属性 `bNewTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") bool bNewTask = false;` |

**说明:**

> 新任务

---

### 属性 `ExecuteState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECommonTaskExecuteState](CommonTaskStruct__ECommonTaskExecuteState.md) |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") ECommonTaskExecuteState ExecuteState = ECommonTaskExecuteState::None;` |

**说明:**

> 任务的执行状态

---

### 属性 `TaskState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECompleteState](CommonTaskStruct__ECompleteState.md) |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") ECompleteState TaskState = ECompleteState::Unfinished;` |

**说明:**

> 任务完成状态

---

### 属性 `Condition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskCondition](CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") TArray<FCommonTaskCondition> Condition;` |

**说明:**

> 包含的条件

---

### 属性 `SubConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FCommonTaskCondition](CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") TMap<FName , FCommonTaskCondition> SubConditions;` |

**说明:**

> 次级条件
> TMap<主条件ID , 条件数据>

---

### 属性 `DialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") FName DialogueID;` |

**说明:**

> 对话配置表ID

---

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Runtime") FGuid Guid;` |

**说明:**

> 任务guid

---

### 属性 `PublisherGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") FGuid PublisherGuid;` |

**说明:**

> 发布者guid

---

### 属性 `bRemoveAfterCompletion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") bool bRemoveAfterCompletion = true;` |

**说明:**

> 完成任务需归档到玩家”已完成列表”，选false表示记录在已完成任务中

---

### 属性 `bAutoComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bAutoComplete = true;` |

**说明:**

> 任务完成条件满足时是否自动完成该任务(用来区别需要手动点击完成的任务)

---

### 属性 `bShow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bShow = true;` |

**说明:**

> 是否在任务列表中展示

---

### 属性 `WorldPlaceIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WorldPlaceIDs;` |

**说明:**

> World Place I Ds 字段。

---
