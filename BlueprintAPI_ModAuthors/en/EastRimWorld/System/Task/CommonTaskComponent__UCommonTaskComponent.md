# `class` `UCommonTaskComponent`

**Source header:** `EastRimWorld/System/Task/CommonTaskComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `CurrentTask`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Task" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite, SaveGame,Category = "Task") TArray<FCommonTaskInstance> CurrentTask;` |

**Source comments:**

> 当前任务

---

### Property `OnUpdateTaskDelegate`

| Field | Details |
|------|------|
| C++ type | `FUpdateTaskDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FUpdateTaskDelegate OnUpdateTaskDelegate;` |

---

### Property `OnAddTaskDelegate`

| Field | Details |
|------|------|
| C++ type | `FAddTaskDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FAddTaskDelegate OnAddTaskDelegate;` |

**Source comments:**

> 新增任务

---

### Property `OnRemoveTaskDelegate`

| Field | Details |
|------|------|
| C++ type | `FRemoveTaskDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FRemoveTaskDelegate OnRemoveTaskDelegate;` |

**Source comments:**

> 移除任务

---

### Property `OnAddTrackTaskDelegate`

| Field | Details |
|------|------|
| C++ type | `FAddTrackTaskDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FAddTrackTaskDelegate OnAddTrackTaskDelegate;` |

**Source comments:**

> 添加追踪任务

---

### Property `OnRemoveTrackTaskDelegate`

| Field | Details |
|------|------|
| C++ type | `FRemoveTrackTaskDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FRemoveTrackTaskDelegate OnRemoveTrackTaskDelegate;` |

**Source comments:**

> 移除追踪任务

---

### Property `OnTaskComponentLoadSucceedDelegate`

| Field | Details |
|------|------|
| C++ type | `FTaskComponentLoadSucceedDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FTaskComponentLoadSucceedDelegate OnTaskComponentLoadSucceedDelegate;` |

**Source comments:**

> 加载成功

---

### Property `TrackTasks`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame,meta=(AllowPrivateAccess = true)) TArray<FGuid> TrackTasks;` |

**Source comments:**

> 追踪任务

---

## Blueprint-exposed functions

### Function `CheckCanAcceptTaskByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanAcceptTaskByID(const FName& TaskID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `CheckCanAcceptTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInfo` | const [FCommonTaskInfo](../../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckCanAcceptTask(const FCommonTaskInfo& TaskInfo);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `RemoveTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Guid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveTask(const FGuid & Guid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除任务

---

### Function `FindTaskByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Guid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) FCommonTaskInstance FindTaskByGuid(const FGuid& Guid);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `FindTaskByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) FCommonTaskInstance FindTaskByID(const FName& TaskID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `BroadcastUpdateTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Task` | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastUpdateTask(FCommonTaskInstance Task);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 调用委托

---

### Function `UpdateTaskProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Condition` | const [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateTaskProgress(const FCommonTaskCondition & Condition);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新任务进度

---

### Function `CompleteTaskByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CompleteTaskByID(const FName& TaskID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 完成一个任务

---

### Function `BroadcastLoadSucceed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastLoadSucceed();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 调用委托

---

### Function `CheckHaveTaskByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckHaveTaskByID(FName TaskID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查是否含有此ID的任务

---

### Function `GetAllTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCommonTaskInstance> GetAllTask() { return CurrentTask; };`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有任务

---

### Function `CheckPreTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInfo` | const [FCommonTaskInfo](../../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckPreTask(const FCommonTaskInfo& TaskInfo);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查前置任务

---

### Function `CheckRepelTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInfo` | const [FCommonTaskInfo](../../Struct/CommonTaskStruct__FCommonTaskInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckRepelTask(const FCommonTaskInfo& TaskInfo);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查阻断任务

---

### Function `CheckTaskCompleted`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTaskID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckTaskCompleted(const FName& InTaskID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查是否完成过某个任务

---

### Function `GetTaskCompletedTimes`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTaskID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int GetTaskCompletedTimes(const FName& InTaskID);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取任务完成次数

---

### Function `SubmitItemToTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName&` |
| `SubmitItems` | const TArray<[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SubmitItemToTask(const FName& TaskID,const TArray<FItemSimpleData>& SubmitItems);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 提交任务物品

---

### Function `CheckSubmitItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckSubmitItem(const FName& TaskID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查任务是否提交了物品

---

### Function `SubmitTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTaskGuid` | `const FGuid&` |
| `SelectedAwards` | const TArray<[FTaskSelectableAward](../../Struct/CommonTaskStruct__FTaskSelectableAward.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SubmitTask(const FGuid& InTaskGuid,const TArray<FTaskSelectableAward>& SelectedAwards);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 提交任务

---

### Function `GiveAwards`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInstance` | const [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)& |
| `SelectedAwards` | const TArray<[FTaskSelectableAward](../../Struct/CommonTaskStruct__FTaskSelectableAward.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GiveAwards(const FCommonTaskInstance& TaskInstance,const TArray<FTaskSelectableAward>& SelectedAwards);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 给奖励

---

### Function `AddTrackTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddTrackTask(const FGuid& TaskGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加跟踪任务

---

### Function `RemoveTrackTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInstance` | const [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveTrackTask(const FCommonTaskInstance& TaskInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除跟踪任务

---

### Function `TryTriggerFunction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InFunction` | const [FTriggerFunction](../../Struct/CommonTaskStruct__FTriggerFunction.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TryTriggerFunction(const FTriggerFunction& InFunction);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 触发功能

---

### Function `ResetTaskProgressByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResetTaskProgressByGuid(const FGuid& TaskGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 重置未完成任务进度

---

### Function `RemoveCompleteTaskRecord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InTaskID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveCompleteTaskRecord(FName InTaskID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `AddNPCTaskRecord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterID` | `const FName&` |
| `TaskID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddNPCTaskRecord(const FName& CharacterID,const FName& TaskID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetNPCTaskRecord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetNPCTaskRecord(const FName& CharacterID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
