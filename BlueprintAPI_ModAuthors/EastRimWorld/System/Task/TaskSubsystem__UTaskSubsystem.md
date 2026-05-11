# `class` `UTaskSubsystem`

**源码头文件：** `EastRimWorld/System/Task/TaskSubsystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `GetInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="TaskSubsystem" |
| 返回类型 | `UTaskSubsystem *` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure, Category = "TaskSubsystem") static UTaskSubsystem * GetInstance();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `UpdateTaskCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="TaskSubsystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Condition` | `const FCommonTaskCondition &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") void UpdateTaskCondition(const FCommonTaskCondition & Condition);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新任务条件

---

### 函数 `CheckConditionCompletion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="TaskSubsystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Condition` | `UPARAM(ref) FCommonTaskCondition &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") void CheckConditionCompletion(UPARAM(ref) FCommonTaskCondition & Condition);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查条件是否满足

---

### 函数 `CheckConditionCompletionByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="TaskSubsystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionID` | `const FName &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") bool CheckConditionCompletionByID(const FName & ConditionID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查条件是否满足

---

### 函数 `CheckConditionCompletionByIDs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="TaskSubsystem" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionIDs` | `TArray<FName>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") bool CheckConditionCompletionByIDs(TArray<FName> ConditionIDs);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查条件数组是否都满足

---
