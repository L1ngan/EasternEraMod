# `struct` `FCommonTaskInfo`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> 任务

## Blueprint-exposed variables

### Property `HeadLine`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText HeadLine;` |

**Notes:**

> 标题

---

### Property `Describe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Describe;` |

**Notes:**

> 描述

---

### Property `TriggerCondition`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCommonTaskCondition> TriggerCondition;` |

**Notes:**

> 接受任务条件

---

### Property `ConditionID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ConditionID;` |

**Notes:**

> 任务条件

---

### Property `RepelTask`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> RepelTask;` |

**Notes:**

> 阻断任务(当配置在此字段的任务被玩家已完成时，当前任务不可被接受或可见)

---

### Property `PreTask`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> PreTask;` |

**Notes:**

> 前置任务(需完成全部任务后才可接受当前任务)

---

### Property `PostTask`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> PostTask;` |

**Notes:**

> 后置任务(完成当前任务后，将后置任务添加到”已接”列表(玩家不可见)，以此作为判断接受其他任务的条件；当玩家达到接受后置任务的条件时，接取此任务后，将此任务在”已接”列表显现(玩家可见))

---

### Property `WorldPlaceIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> WorldPlaceIDs;` |

**Notes:**

> 任务对应的地点ID

---

### Property `bAutoComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bAutoComplete;` |

**Notes:**

> 任务完成条件满足时是否自动完成该任务(用来区别需要手动点击完成的任务)

---

### Property `TaskAward`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,int> TaskAward;` |

**Notes:**

> 奖励(废弃.....)

---

### Property `TaskAwards`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> TaskAwards;` |

**Notes:**

> 奖励

---

### Property `SelectableAwards`

| Field | Details |
|------|------|
| C++ type | TArray<[FTaskSelectableAward](CommonTaskStruct__FTaskSelectableAward.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition="!bAutoComplete")) TArray<FTaskSelectableAward> SelectableAwards;` |

**Notes:**

> 可选奖励

---

### Property `MaxCanSelectAwardNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition="!bAutoComplete")) int32 MaxCanSelectAwardNum = 999;` |

**Notes:**

> 最大可选几个奖励

---

### Property `MaxRandAwardSetNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxRandAwardSetNum = 0;` |

**Notes:**

> 最大随机奖励集个数

---

### Property `RandAwardSetsWeight`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,float> RandAwardSetsWeight;` |

**Notes:**

> 随机奖励权重(DT_DropItemConfig ID,权重)

---

### Property `DialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName DialogueID;` |

**Notes:**

> 对应的对话配置表ID

---

### Property `PopupID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName PopupID;` |

**Notes:**

> 弹窗配置表ID

---

### Property `PopupTipsID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName PopupTipsID;` |

**Notes:**

> 弹出Tips配置表ID

---

### Property `UnlockIDs`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [EBeginnerGuideUnlockType](CommonTaskStruct__EBeginnerGuideUnlockType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName , EBeginnerGuideUnlockType> UnlockIDs;` |

**Notes:**

> 当前步骤解锁的ID

---

### Property `TaskType`

| Field | Details |
|------|------|
| C++ type | [ECommonTaskType](CommonTaskStruct__ECommonTaskType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ECommonTaskType TaskType = ECommonTaskType::None;` |

**Notes:**

> 任务类型

---

### Property `TaskBeingEvent`

| Field | Details |
|------|------|
| C++ type | TMap<[EBeginnerGuideEventType](CommonTaskStruct__EBeginnerGuideEventType.md), FName> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EBeginnerGuideEventType, FName> TaskBeingEvent;` |

**Notes:**

> 任务开始事件

---

### Property `DelayTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DelayTime = 0.0f;` |

**Notes:**

> 任务的延迟时间

---

### Property `ExecuteStateTips`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FText ExecuteStateTips;` |

**Notes:**

> 任务状态的tips

---

### Property `TaskGrouping`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int TaskGrouping;` |

**Notes:**

> 任务的分组 相同组的任务会相互覆盖 不覆盖填0

---

### Property `bRepetition`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool bRepetition = true;` |

**Notes:**

> 是否重复发布

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int Priority;` |

**Notes:**

> 任务列表排序优先级

---

### Property `Parameter`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int Parameter;` |

**Notes:**

> 任务跳转的百科页签

---

### Property `TaskIcon`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta = (AllowedClasses = "Texture2D")) FSoftObjectPath TaskIcon;` |

**Notes:**

> 任务显示的图片

---

### Property `bRemoveAfterCompletion`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bRemoveAfterCompletion = true;` |

**Notes:**

> 是否完成后从组件中移除

---

### Property `TaskTimeOut`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int TaskTimeOut = INDEX_NONE;` |

**Notes:**

> 任务时效 -1为没有时间限制

---

### Property `bCanGiveUp`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bCanGiveUp = false;` |

**Notes:**

> 是否可以放弃

---

### Property `TriggerFunction`

| Field | Details |
|------|------|
| C++ type | TArray<[FTriggerFunction](CommonTaskStruct__FTriggerFunction.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FTriggerFunction> TriggerFunction;` |

**Notes:**

> 可以触发的功能

---

### Property `PublisherType`

| Field | Details |
|------|------|
| C++ type | [EPublisherType](CommonTaskStruct__EPublisherType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EPublisherType PublisherType = EPublisherType::None;` |

**Notes:**

> 任务发布者类型

---

### Property `Condition`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") TArray<FCommonTaskCondition> Condition;` |

**Notes:**

> 包含的条件

---

### Property `SubmitItems`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemSimpleData> SubmitItems;` |

**Notes:**

> 需要提交的物品

---

### Property `TaskPlaceTimeLimit`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TaskPlaceTimeLimit;` |

**Notes:**

> 任务地点时间限制(-1无限)

---
