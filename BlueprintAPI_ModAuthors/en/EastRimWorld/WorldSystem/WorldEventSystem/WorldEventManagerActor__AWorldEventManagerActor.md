# `class` `AWorldEventManagerActor`

**Source header:** `EastRimWorld/WorldSystem/WorldEventSystem/WorldEventManagerActor.h`

---

## Functional description (from header comments)

> World Event Manager Actor actor type.

## Blueprint-exposed variables

### Property `WorldEventSpawnConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FWorldEventSpawnConfig](WorldEventManagerActor__FWorldEventSpawnConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FWorldEventSpawnConfig> WorldEventSpawnConfigs;` |

**Notes:**

> 需要倒计时的生成事件配置

---

### Property `WorldEventInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FWorldEventInfo> WorldEventInfos;` |

**Notes:**

> 已经生成的事件

---

### Property `UnderWayWorldEventInfo`

| Field | Details |
|------|------|
| C++ type | [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) FWorldEventInfo UnderWayWorldEventInfo;` |

**Notes:**

> 正在进行的事件

---

### Property `PauseWorldEventInfos`

| Field | Details |
|------|------|
| C++ type | TMap<int,[FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) TMap<int,FWorldEventInfo> PauseWorldEventInfos;` |

**Notes:**

> 固化的世界事件

---

### Property `TaskComponent`

| Field | Details |
|------|------|
| C++ type | [UCommonTaskComponent](../../System/Task/CommonTaskComponent__UCommonTaskComponent.md)* |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,SaveGame,BlueprintReadOnly, meta = (AllowPrivateAccess = "true")) UCommonTaskComponent* TaskComponent;` |

**Notes:**

> 任务组件

---

### Property `OnActivateWorldEventDelegate`

| Field | Details |
|------|------|
| C++ type | `FWorldEventDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FWorldEventDelegate OnActivateWorldEventDelegate;` |

**Notes:**

> 激活世界事件

---

### Property `OnRemoveActivateWorldEventDelegate`

| Field | Details |
|------|------|
| C++ type | `FWorldEventDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FWorldEventDelegate OnRemoveActivateWorldEventDelegate;` |

**Notes:**

> 移除世界事件

---

### Property `OnUpdateWorldEventDelegate`

| Field | Details |
|------|------|
| C++ type | `FWorldEventDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FWorldEventDelegate OnUpdateWorldEventDelegate;` |

**Notes:**

> 更新世界事件

---

### Property `OnUpdateWorldEventTimeDelegate`

| Field | Details |
|------|------|
| C++ type | `FWorldEventDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FWorldEventDelegate OnUpdateWorldEventTimeDelegate;` |

**Notes:**

> 更新世界事件时间

---

### Property `OnUpdateWorldTaskDelegate`

| Field | Details |
|------|------|
| C++ type | `FUpdateWorldTaskDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FUpdateWorldTaskDelegate OnUpdateWorldTaskDelegate;` |

**Notes:**

> 更新世界任务

---

### Property `OnAddWorldTaskDelegate`

| Field | Details |
|------|------|
| C++ type | `FAddWorldTaskDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FAddWorldTaskDelegate OnAddWorldTaskDelegate;` |

**Notes:**

> On Add World Task Delegate event or callback.

---

### Property `OnUpdatePauseSlot`

| Field | Details |
|------|------|
| C++ type | `FUpdatePauseSlotDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FUpdatePauseSlotDelegate OnUpdatePauseSlot;` |

**Notes:**

> 更新暂停槽

---

## Blueprint-exposed functions

### Function `GetWorldEventManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [AWorldEventManagerActor](WorldEventManagerActor__AWorldEventManagerActor.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static AWorldEventManagerActor * GetWorldEventManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get World Event Manager.

---

### Function `CheckHaveWorldEventConfigCanSpawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckHaveWorldEventConfigCanSpawn();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否有世界事件可以生成

---

### Function `CheckWorldEventConfigAlreadySpawn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldEventSpawnConfig` | const [FWorldEventSpawnConfig](WorldEventManagerActor__FWorldEventSpawnConfig.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckWorldEventConfigAlreadySpawn(const FWorldEventSpawnConfig & WorldEventSpawnConfig);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否此世界事件已经生成

---

### Function `FindWorldEventInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldEventGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldEventInfo FindWorldEventInfo(const FGuid & WorldEventGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找世界事件

---

### Function `SetWorldEventExploreState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldEventGuid` | `const FGuid &` |
| `bExplore` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetWorldEventExploreState(const FGuid & WorldEventGuid ,bool bExplore);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置事件的探索状态

---

### Function `SetWorldEventBattleState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldEventGuid` | `const FGuid &` |
| `WorldEventChangeStateType` | [EWorldEventChangeStateType](WorldEventManagerActor__EWorldEventChangeStateType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetWorldEventBattleState(const FGuid & WorldEventGuid,EWorldEventChangeStateType WorldEventChangeStateType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置事件的战斗状态

---

### Function `RecoverWorldEventBattleState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecoverWorldEventBattleState();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 异常关闭游戏处理事件状态

---

### Function `FindWorldEventDetail`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldEventDetail](WorldEventManagerActor__FWorldEventDetail.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DetailID` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldEventDetail FindWorldEventDetail(const FName DetailID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Find World Event Detail.

---

### Function `ActivateWorldEventByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldEventID` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ActivateWorldEventByID(const FName WorldEventID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 激活一个世界事件

---

### Function `TriggerWorldEventByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldEventGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerWorldEventByGuid(const FGuid & WorldEventGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过GUID触发一个世界事件

---

### Function `TriggerWorldEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldEventInfo` | [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerWorldEvent(FWorldEventInfo & WorldEventInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 触发一个世界事件

---

### Function `GetVacancyPauseSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int GetVacancyPauseSlot();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取一个空缺的固化槽

---

### Function `CheckSlotUnlocked`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SlotIndex` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckSlotUnlocked(int SlotIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查槽位是否解锁

---

### Function `FindUnlockedSlotInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FUnlockedPauseSlotInfo](WorldEventManagerActor__FUnlockedPauseSlotInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SlotIndex` | `const int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FUnlockedPauseSlotInfo FindUnlockedSlotInfo(const int SlotIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查找解锁的槽位信息

---

### Function `FindSlotWorldEventInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SlotIndex` | `const int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldEventInfo FindSlotWorldEventInfo(const int SlotIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取槽位上的世界事件

---

### Function `SetSlotWorldEventInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWorldEventInfo` | const [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SetSlotWorldEventInfo(const FWorldEventInfo & InWorldEventInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 世界事件到槽位

---

### Function `RemoveSlotWorldEventInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWorldEventInfo` | const [FWorldEventInfo](WorldEventManagerActor__FWorldEventInfo.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemoveSlotWorldEventInfo(const FWorldEventInfo & InWorldEventInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 从槽位中移除世界事件

---

### Function `CheckAllPauseSlotInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckAllPauseSlotInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查所有暂停槽的信息是否发生改变

---

### Function `UpdateWorldTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInfo` | [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateWorldTask(FCommonTaskInstance TaskInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新任务

---

### Function `TriggerWorldTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldTaskID` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerWorldTask(const FName WorldTaskID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 触发一个世界任务

---

### Function `GetWorldTaskRewards`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskInfo` | const [FCommonTaskInstance](../../Struct/CommonTaskStruct__FCommonTaskInstance.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetWorldTaskRewards(const FCommonTaskInstance & TaskInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取任务奖励

---

### Function `UpdateTaskCondition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Condition` | const [FCommonTaskCondition](../../Struct/CommonTaskStruct__FCommonTaskCondition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateTaskCondition(const FCommonTaskCondition& Condition);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新任务条件

---

### Function `AddTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `FName` |
| `TaskGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddTask(FName TaskID,FGuid TaskGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加任务

---

### Function `CheckHaveNewTask`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckHaveNewTask();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否有新的任务

---

### Function `SetNewTaskState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskGuid` | `FGuid` |
| `bNewTask` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetNewTaskState(FGuid TaskGuid,bool bNewTask);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置任务状态

---
