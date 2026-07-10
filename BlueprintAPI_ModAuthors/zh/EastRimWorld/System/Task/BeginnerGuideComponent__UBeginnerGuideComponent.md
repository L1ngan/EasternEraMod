# `class` `UBeginnerGuideComponent`

**源码头文件:** `EastRimWorld/System/Task/BeginnerGuideComponent.h`

---

## 功能说明（来自头文件注释）

> Beginner Guide Component UObject 类型。

## 蓝图暴露变量

### 属性 `GameModeBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | class [AERW_GameModeBase](../../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| 反射说明符 | BlueprintReadWrite, Category="Guide" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "Guide") class AERW_GameModeBase* GameModeBase = nullptr;` |

**说明:**

> Game Mode Base 字段。

---

### 属性 `GameInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | class [UERW_GameInstanceBase](../../Framework/ERW_GameInstanceBase__UERW_GameInstanceBase.md) * |
| 反射说明符 | BlueprintReadWrite, Category="Guide" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "Guide") class UERW_GameInstanceBase * GameInstance = nullptr;` |

**说明:**

> Game Instance 字段。

---

### 属性 `IsCompleteGuide`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Guide" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Guide") bool IsCompleteGuide = false;` |

**说明:**

> 是否已经完成了新手引导

---

### 属性 `NoviceTaskInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Guide" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame, Category = "Guide") TArray<FCommonTaskInstance> NoviceTaskInfo;` |

**说明:**

> 新手任务

---

### 属性 `CurNoviceTaskInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| 反射说明符 | BlueprintReadWrite, Category="Guide" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame, Category = "Guide") FCommonTaskInstance CurNoviceTaskInfo;` |

**说明:**

> 当前的新手引导任务

---

### 属性 `CountNoviceTaskNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Guide" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame, Category = "Guide") int CountNoviceTaskNumber = 0;` |

**说明:**

> 总的新手引导任务数量

---

### 属性 `UnlockIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [EBeginnerGuideUnlockType](../../Struct/CommonTaskStruct__EBeginnerGuideUnlockType.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , EBeginnerGuideUnlockType> UnlockIDs;` |

**说明:**

> 已解锁的ID
> TMap<ID , 解锁类型>

---

### 属性 `WaitingQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool WaitingQueue { false };` |

**说明:**

> 是否是等待队列(UI动画播放中已完成的条件应该加入等待队列中)

---

### 属性 `SelectActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AGOAP_ActorBase](../../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) AGOAP_ActorBase* SelectActor = nullptr;` |

**说明:**

> 选中的Actor

---

### 属性 `SelectItemInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UInventoryItemInstance](../../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UInventoryItemInstance* SelectItemInstance { nullptr };` |

**说明:**

> 选中的物品

---

### 属性 `SceneManager`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AERW_SceneManager](../../ERW_SceneManager__AERW_SceneManager.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) AERW_SceneManager* SceneManager { nullptr };` |

**说明:**

> Scene Manager 字段。

---

### 属性 `DialogueIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 DialogueIndex { 0 };` |

**说明:**

> 对话索引

---

### 属性 `TipsIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 TipsIndex { 0 };` |

**说明:**

> Tips索引

---

### 属性 `OnUpdateNextNoviceTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateNextNoviceTask` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateNextNoviceTask OnUpdateNextNoviceTask;` |

**说明:**

> 更新下个新手引导任务

---

### 属性 `OnNextDialogue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnNextDialogue` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnNextDialogue OnNextDialogue;` |

**说明:**

> 下一步新手引导对话通知

---

### 属性 `OnNextCoverTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnNextCoverTips` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnNextCoverTips OnNextCoverTips;` |

**说明:**

> 遮罩Tips下一步通知

---

### 属性 `ShowCoverTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FShowCoverTips` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FShowCoverTips ShowCoverTips;` |

**说明:**

> 显示遮罩Tips通知

---

### 属性 `OnAddWaitingQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnAddWaitingQueue` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnAddWaitingQueue OnAddWaitingQueue;` |

**说明:**

> 加入等待队列通知

---

### 属性 `OnBeginnerGuideDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FBeginnerGuideDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FBeginnerGuideDelegate OnBeginnerGuideDelegate;` |

**说明:**

> 更新任务委托

---

### 属性 `OnCompleteBeginnerGuideDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FCompleteBeginnerGuideDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FCompleteBeginnerGuideDelegate OnCompleteBeginnerGuideDelegate;` |

**说明:**

> 更新任务委托

---

## 蓝图暴露函数

### 函数 `ReceiveAward`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | [ANewGameResourceSpawnerActor](../../Actor/NewGameResourceSpawnerActor__ANewGameResourceSpawnerActor.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReceiveAward(ANewGameResourceSpawnerActor* Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 领取奖励

---

### 函数 `UpdateNextNoviceTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateNextNoviceTask();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 下一个新手任务

---

### 函数 `InitNoviceGuide`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNoviceTaskInfos` | `const TArray<FName>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitNoviceGuide(const TArray<FName> InNoviceTaskInfos);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化新手引导

---

### 函数 `UpdateNoviceTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInfo` | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateNoviceTask(FCommonTaskInstance TaskInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新任务

---

### 函数 `CheckCurrentTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckCurrentTask(const FName& ConditionID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查当前任务

---

### 函数 `BroadcastBeginnerGuide`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | const [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) &Task |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BroadcastBeginnerGuide(const FCommonTaskInstance &Task);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 调用委托

---

### 函数 `CompleteAllBeginnerGuide`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CompleteAllBeginnerGuide();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 完成所有新手引导任务

---

### 函数 `BroadcastCompleteBeginnerGuide`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BroadcastCompleteBeginnerGuide();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 调用委托

---

### 函数 `GetNextNoviceTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FCommonTaskInstance GetNextNoviceTask();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取下一个新手任务

---

### 函数 `CheckNoviceTaskComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckNoviceTaskComplete();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新任务

---

### 函数 `CheckHaveGuideTaskComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `const FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckHaveGuideTaskComplete(const FName TaskID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Check Have Guide Task Complete。

---

### 函数 `AddShownCoverTips`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddShownCoverTips(const FName& ConditionID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入显示过遮罩Tips的条件

---

### 函数 `IsConditionFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionType` | [ECommonTaskConditionType](../../Struct/CommonTaskStruct__ECommonTaskConditionType.md) |
| `RequiredID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsConditionFinished(ECommonTaskConditionType ConditionType , const FName& RequiredID) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查条件是否完成

---

### 函数 `IsFinishedCurTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsFinishedCurTask() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查当前任务是否完成

---

### 函数 `GetConditionData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionType` | [ECommonTaskConditionType](../../Struct/CommonTaskStruct__ECommonTaskConditionType.md) |
| `RequiredID` | `const FName&` |
| `ConditionData` | [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetConditionData(ECommonTaskConditionType ConditionType , const FName& RequiredID , FCommonTaskCondition& ConditionData) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得条件数据

---

### 函数 `HasCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionType` | [ECommonTaskConditionType](../../Struct/CommonTaskStruct__ECommonTaskConditionType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool HasCondition(ECommonTaskConditionType ConditionType) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查当前新手引导是否有指定条件

---

### 函数 `IsConditionExist`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionType` | [ECommonTaskConditionType](../../Struct/CommonTaskStruct__ECommonTaskConditionType.md) |
| `RequiredID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsConditionExist(ECommonTaskConditionType ConditionType , const FName& RequiredID) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查指定条件是否存在

---

### 函数 `HasRequiredID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool HasRequiredID(const FName& ID) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查当前新手引导是否有指定ID

---

### 函数 `GetConditionTypeByRequiredID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | [ECommonTaskConditionType](../../Struct/CommonTaskStruct__ECommonTaskConditionType.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) ECommonTaskConditionType GetConditionTypeByRequiredID(const FName& ID) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 通过指定ID获得条件类型

---

### 函数 `GetConditionByConditionType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionType` | [ECommonTaskConditionType](../../Struct/CommonTaskStruct__ECommonTaskConditionType.md) |
| `TaskCondition` | [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool GetConditionByConditionType(ECommonTaskConditionType ConditionType , FCommonTaskCondition& TaskCondition) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 通过条件类型获得条件数据

---

### 函数 `NextDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void NextDialogue();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 下一步对话

---

### 函数 `NextCoverTips`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void NextCoverTips();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 遮罩Tips下一步

---

### 函数 `CurrentTaskEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CurrentTaskEnd();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 当前任务结束

---

### 函数 `CloseBeginnerGuide`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | [ANewGameResourceSpawnerActor](../../Actor/NewGameResourceSpawnerActor__ANewGameResourceSpawnerActor.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CloseBeginnerGuide(ANewGameResourceSpawnerActor* Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 关闭新手引导

---

### 函数 `AddUnlockID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `UnlockType` | [EBeginnerGuideUnlockType](../../Struct/CommonTaskStruct__EBeginnerGuideUnlockType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddUnlockID(const FName& ID , EBeginnerGuideUnlockType UnlockType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加入已解锁ID

---

### 函数 `UpdateGuideProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConditionType` | [ECommonTaskConditionType](../../Struct/CommonTaskStruct__ECommonTaskConditionType.md) |
| `RequiredID` | `const FName&` |
| `0` | `int32 ExtraParam1 =` |
| `1` | `int32 Num =` |
| `false` | `bool CheckSubsequentTask =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateGuideProgress(ECommonTaskConditionType ConditionType , const FName& RequiredID , int32 ExtraParam1 = 0 , int32 Num = 1 , bool CheckSubsequentTask = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新新手引导进度

---
