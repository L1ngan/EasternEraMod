# `class` `UTaskSubsystem`

**源码头文件:** `EastRimWorld/System/Task/TaskSubsystem.h`

---

## 功能说明（来自头文件注释）

> Task Subsystem UObject 类型。

## 蓝图暴露函数

### 函数 `GetInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="TaskSubsystem" |
| 返回类型 | [UTaskSubsystem](TaskSubsystem__UTaskSubsystem.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "TaskSubsystem") static UTaskSubsystem * GetInstance();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Instance。

---

### 函数 `UpdateTaskCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="TaskSubsystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Condition` | const [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") void UpdateTaskCondition(const FCommonTaskCondition & Condition);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

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
| `Condition` | UPARAM(ref) [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") void CheckConditionCompletion(UPARAM(ref) FCommonTaskCondition & Condition);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

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

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") bool CheckConditionCompletionByID(const FName & ConditionID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

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

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "TaskSubsystem") bool CheckConditionCompletionByIDs(TArray<FName> ConditionIDs);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查条件数组是否都满足

---
