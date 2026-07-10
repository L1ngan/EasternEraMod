# `class` `AWorldEventManagerActor`

**源码头文件:** `EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor.h`

---

## 功能说明（来自头文件注释）

> World Event Manager Actor Actor 类型。

## 蓝图暴露变量

### 属性 `WorldEventSpawnConfigs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWorldEventSpawnConfig](WorldEventManagerActor__FWorldEventSpawnConfig.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FWorldEventSpawnConfig> WorldEventSpawnConfigs;` |

**说明:**

> 需要倒计时的生成事件配置

---

### 属性 `WorldEventInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FWorldEventInfo> WorldEventInfos;` |

**说明:**

> 已经生成的事件

---

### 属性 `UnderWayWorldEventInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) FWorldEventInfo UnderWayWorldEventInfo;` |

**说明:**

> 正在进行的事件

---

### 属性 `PauseWorldEventInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int,[FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TMap<int,FWorldEventInfo> PauseWorldEventInfos;` |

**说明:**

> 固化的世界事件

---

### 属性 `TaskComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [UCommonTaskComponent](../../System/Task/CommonTaskComponent__UCommonTaskComponent.md)* |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,SaveGame,BlueprintReadOnly, meta = (AllowPrivateAccess = "true")) UCommonTaskComponent* TaskComponent;` |

**说明:**

> 任务组件

---

### 属性 `OnActivateWorldEventDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FWorldEventDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FWorldEventDelegate OnActivateWorldEventDelegate;` |

**说明:**

> 激活世界事件

---

### 属性 `OnRemoveActivateWorldEventDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FWorldEventDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FWorldEventDelegate OnRemoveActivateWorldEventDelegate;` |

**说明:**

> 移除世界事件

---

### 属性 `OnUpdateWorldEventDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FWorldEventDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FWorldEventDelegate OnUpdateWorldEventDelegate;` |

**说明:**

> 更新世界事件

---

### 属性 `OnUpdateWorldEventTimeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FWorldEventDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FWorldEventDelegate OnUpdateWorldEventTimeDelegate;` |

**说明:**

> 更新世界事件时间

---

### 属性 `OnUpdateWorldTaskDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUpdateWorldTaskDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FUpdateWorldTaskDelegate OnUpdateWorldTaskDelegate;` |

**说明:**

> 更新世界任务

---

### 属性 `OnAddWorldTaskDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAddWorldTaskDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FAddWorldTaskDelegate OnAddWorldTaskDelegate;` |

**说明:**

> On Add World Task Delegate 事件或回调。

---

### 属性 `OnUpdatePauseSlot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUpdatePauseSlotDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FUpdatePauseSlotDelegate OnUpdatePauseSlot;` |

**说明:**

> 更新暂停槽

---

## 蓝图暴露函数

### 函数 `GetWorldEventManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [AWorldEventManagerActor](WorldEventManagerActor__AWorldEventManagerActor.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) static AWorldEventManagerActor * GetWorldEventManager();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get World Event Manager。

---

### 函数 `CheckHaveWorldEventConfigCanSpawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckHaveWorldEventConfigCanSpawn();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否有世界事件可以生成

---

### 函数 `CheckWorldEventConfigAlreadySpawn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldEventSpawnConfig` | const [FWorldEventSpawnConfig](WorldEventManagerActor__FWorldEventSpawnConfig.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckWorldEventConfigAlreadySpawn(const FWorldEventSpawnConfig & WorldEventSpawnConfig);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否此世界事件已经生成

---

### 函数 `FindWorldEventInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldEventGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FWorldEventInfo FindWorldEventInfo(const FGuid & WorldEventGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找世界事件

---

### 函数 `SetWorldEventExploreState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldEventGuid` | `const FGuid &` |
| `bExplore` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetWorldEventExploreState(const FGuid & WorldEventGuid ,bool bExplore);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置事件的探索状态

---

### 函数 `SetWorldEventBattleState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldEventGuid` | `const FGuid &` |
| `WorldEventChangeStateType` | [EWorldEventChangeStateType](WorldEventManagerActor__EWorldEventChangeStateType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetWorldEventBattleState(const FGuid & WorldEventGuid,EWorldEventChangeStateType WorldEventChangeStateType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置事件的战斗状态

---

### 函数 `RecoverWorldEventBattleState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RecoverWorldEventBattleState();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 异常关闭游戏处理事件状态

---

### 函数 `FindWorldEventDetail`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FWorldEventDetail](WorldEventManagerActor__FWorldEventDetail.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DetailID` | `const FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FWorldEventDetail FindWorldEventDetail(const FName DetailID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Find World Event Detail。

---

### 函数 `ActivateWorldEventByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldEventID` | `const FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ActivateWorldEventByID(const FName WorldEventID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 激活一个世界事件

---

### 函数 `TriggerWorldEventByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldEventGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerWorldEventByGuid(const FGuid & WorldEventGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过GUID触发一个世界事件

---

### 函数 `TriggerWorldEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldEventInfo` | [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerWorldEvent(FWorldEventInfo & WorldEventInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 触发一个世界事件

---

### 函数 `GetVacancyPauseSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int GetVacancyPauseSlot();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取一个空缺的固化槽

---

### 函数 `CheckSlotUnlocked`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SlotIndex` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckSlotUnlocked(int SlotIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查槽位是否解锁

---

### 函数 `FindUnlockedSlotInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FUnlockedPauseSlotInfo](WorldEventManagerActor__FUnlockedPauseSlotInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SlotIndex` | `const int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FUnlockedPauseSlotInfo FindUnlockedSlotInfo(const int SlotIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找解锁的槽位信息

---

### 函数 `FindSlotWorldEventInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SlotIndex` | `const int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FWorldEventInfo FindSlotWorldEventInfo(const int SlotIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取槽位上的世界事件

---

### 函数 `SetSlotWorldEventInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWorldEventInfo` | const [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SetSlotWorldEventInfo(const FWorldEventInfo & InWorldEventInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 世界事件到槽位

---

### 函数 `RemoveSlotWorldEventInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWorldEventInfo` | const [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RemoveSlotWorldEventInfo(const FWorldEventInfo & InWorldEventInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从槽位中移除世界事件

---

### 函数 `CheckAllPauseSlotInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckAllPauseSlotInfo();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查所有暂停槽的信息是否发生改变

---

### 函数 `UpdateWorldTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInfo` | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateWorldTask(FCommonTaskInstance TaskInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新任务

---

### 函数 `TriggerWorldTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldTaskID` | `const FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerWorldTask(const FName WorldTaskID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 触发一个世界任务

---

### 函数 `GetWorldTaskRewards`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskInfo` | const [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetWorldTaskRewards(const FCommonTaskInstance & TaskInfo);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取任务奖励

---

### 函数 `UpdateTaskCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Condition` | const [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateTaskCondition(const FCommonTaskCondition& Condition);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新任务条件

---

### 函数 `AddTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskID` | `FName` |
| `TaskGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool AddTask(FName TaskID,FGuid TaskGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加任务

---

### 函数 `CheckHaveNewTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckHaveNewTask();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否有新的任务

---

### 函数 `SetNewTaskState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskGuid` | `FGuid` |
| `bNewTask` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetNewTaskState(FGuid TaskGuid,bool bNewTask);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置任务状态

---
