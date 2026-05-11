# `class` `UCommonTaskComponent`

**源码头文件：** `EastRimWorld/System/Task/CommonTaskComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `CurrentTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Task" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite, SaveGame,Category = "Task") TArray<FCommonTaskInstance> CurrentTask;` |

**源码注释：**

> 当前任务

---

### 属性 `OnUpdateTaskDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUpdateTaskDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FUpdateTaskDelegate OnUpdateTaskDelegate;` |

---

### 属性 `OnAddTaskDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAddTaskDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FAddTaskDelegate OnAddTaskDelegate;` |

**源码注释：**

> 新增任务

---

### 属性 `OnRemoveTaskDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FRemoveTaskDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FRemoveTaskDelegate OnRemoveTaskDelegate;` |

**源码注释：**

> 移除任务

---

### 属性 `OnAddTrackTaskDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAddTrackTaskDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FAddTrackTaskDelegate OnAddTrackTaskDelegate;` |

**源码注释：**

> 添加追踪任务

---

### 属性 `OnRemoveTrackTaskDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FRemoveTrackTaskDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FRemoveTrackTaskDelegate OnRemoveTrackTaskDelegate;` |

**源码注释：**

> 移除追踪任务

---

### 属性 `OnTaskComponentLoadSucceedDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTaskComponentLoadSucceedDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FTaskComponentLoadSucceedDelegate OnTaskComponentLoadSucceedDelegate;` |

**源码注释：**

> 加载成功

---

### 属性 `TrackTasks`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,meta=(AllowPrivateAccess = true)) TArray<FGuid> TrackTasks;` |

**源码注释：**

> 追踪任务

---

## 蓝图暴露函数

### 函数 `CheckCanAcceptTaskByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckCanAcceptTaskByID(const FName& TaskID);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CheckCanAcceptTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInfo` | const [FCommonTaskInfo](../../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckCanAcceptTask(const FCommonTaskInfo& TaskInfo);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `RemoveTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Guid` | `const FGuid &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveTask(const FGuid & Guid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除任务

---

### 函数 `FindTaskByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Guid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) FCommonTaskInstance FindTaskByGuid(const FGuid& Guid);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `FindTaskByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) FCommonTaskInstance FindTaskByID(const FName& TaskID);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `BroadcastUpdateTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Task` | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BroadcastUpdateTask(FCommonTaskInstance Task);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 调用委托

---

### 函数 `UpdateTaskProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Condition` | const [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md) & |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateTaskProgress(const FCommonTaskCondition & Condition);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新任务进度

---

### 函数 `CompleteTaskByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CompleteTaskByID(const FName& TaskID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 完成一个任务

---

### 函数 `BroadcastLoadSucceed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BroadcastLoadSucceed();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 调用委托

---

### 函数 `CheckHaveTaskByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckHaveTaskByID(FName TaskID);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查是否含有此ID的任务

---

### 函数 `GetAllTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)> |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FCommonTaskInstance> GetAllTask() { return CurrentTask; };`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有任务

---

### 函数 `CheckPreTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInfo` | const [FCommonTaskInfo](../../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckPreTask(const FCommonTaskInfo& TaskInfo);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查前置任务

---

### 函数 `CheckRepelTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInfo` | const [FCommonTaskInfo](../../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckRepelTask(const FCommonTaskInfo& TaskInfo);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查阻断任务

---

### 函数 `CheckTaskCompleted`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTaskID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckTaskCompleted(const FName& InTaskID);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查是否完成过某个任务

---

### 函数 `GetTaskCompletedTimes`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTaskID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) int GetTaskCompletedTimes(const FName& InTaskID);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取任务完成次数

---

### 函数 `SubmitItemToTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName&` |
| `SubmitItems` | const TArray<[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool SubmitItemToTask(const FName& TaskID,const TArray<FItemSimpleData>& SubmitItems);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 提交任务物品

---

### 函数 `CheckSubmitItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckSubmitItem(const FName& TaskID) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查任务是否提交了物品

---

### 函数 `SubmitTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTaskGuid` | `const FGuid&` |
| `SelectedAwards` | const TArray<[FTaskSelectableAward](../../Struct/CommonTaskStruct__FTaskSelectableAward.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool SubmitTask(const FGuid& InTaskGuid,const TArray<FTaskSelectableAward>& SelectedAwards);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 提交任务

---

### 函数 `GiveAwards`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInstance` | const [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)& |
| `SelectedAwards` | const TArray<[FTaskSelectableAward](../../Struct/CommonTaskStruct__FTaskSelectableAward.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GiveAwards(const FCommonTaskInstance& TaskInstance,const TArray<FTaskSelectableAward>& SelectedAwards);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 给奖励

---

### 函数 `AddTrackTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddTrackTask(const FGuid& TaskGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加跟踪任务

---

### 函数 `RemoveTrackTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInstance` | const [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveTrackTask(const FCommonTaskInstance& TaskInstance);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除跟踪任务

---

### 函数 `TryTriggerFunction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFunction` | const [FTriggerFunction](../../Struct/CommonTaskStruct__FTriggerFunction.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TryTriggerFunction(const FTriggerFunction& InFunction);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 触发功能

---

### 函数 `ResetTaskProgressByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ResetTaskProgressByGuid(const FGuid& TaskGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 重置未完成任务进度

---

### 函数 `RemoveCompleteTaskRecord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTaskID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveCompleteTaskRecord(FName InTaskID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `AddNPCTaskRecord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterID` | `const FName&` |
| `TaskID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddNPCTaskRecord(const FName& CharacterID,const FName& TaskID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetNPCTaskRecord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FName>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FName> GetNPCTaskRecord(const FName& CharacterID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
