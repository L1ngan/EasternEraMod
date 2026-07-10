# `struct` `FCommonTaskInfo`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 任务

## 蓝图暴露变量

### 属性 `HeadLine`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText HeadLine;` |

**说明:**

> 标题

---

### 属性 `Describe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Describe;` |

**说明:**

> 描述

---

### 属性 `TriggerCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskCondition](CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCommonTaskCondition> TriggerCondition;` |

**说明:**

> 接受任务条件

---

### 属性 `ConditionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ConditionID;` |

**说明:**

> 任务条件

---

### 属性 `RepelTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> RepelTask;` |

**说明:**

> 阻断任务(当配置在此字段的任务被玩家已完成时，当前任务不可被接受或可见)

---

### 属性 `PreTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> PreTask;` |

**说明:**

> 前置任务(需完成全部任务后才可接受当前任务)

---

### 属性 `PostTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> PostTask;` |

**说明:**

> 后置任务(完成当前任务后，将后置任务添加到”已接”列表(玩家不可见)，以此作为判断接受其他任务的条件；当玩家达到接受后置任务的条件时，接取此任务后，将此任务在”已接”列表显现(玩家可见))

---

### 属性 `WorldPlaceIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> WorldPlaceIDs;` |

**说明:**

> 任务对应的地点ID

---

### 属性 `bAutoComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bAutoComplete;` |

**说明:**

> 任务完成条件满足时是否自动完成该任务(用来区别需要手动点击完成的任务)

---

### 属性 `TaskAward`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,int> TaskAward;` |

**说明:**

> 奖励(废弃.....)

---

### 属性 `TaskAwards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> TaskAwards;` |

**说明:**

> 奖励

---

### 属性 `SelectableAwards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTaskSelectableAward](CommonTaskStruct__FTaskSelectableAward.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition="!bAutoComplete")) TArray<FTaskSelectableAward> SelectableAwards;` |

**说明:**

> 可选奖励

---

### 属性 `MaxCanSelectAwardNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition="!bAutoComplete")) int32 MaxCanSelectAwardNum = 999;` |

**说明:**

> 最大可选几个奖励

---

### 属性 `MaxRandAwardSetNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxRandAwardSetNum = 0;` |

**说明:**

> 最大随机奖励集个数

---

### 属性 `RandAwardSetsWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,float> RandAwardSetsWeight;` |

**说明:**

> 随机奖励权重(DT_DropItemConfig ID,权重)

---

### 属性 `DialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName DialogueID;` |

**说明:**

> 对应的对话配置表ID

---

### 属性 `PopupID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName PopupID;` |

**说明:**

> 弹窗配置表ID

---

### 属性 `PopupTipsID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName PopupTipsID;` |

**说明:**

> 弹出Tips配置表ID

---

### 属性 `UnlockIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [EBeginnerGuideUnlockType](CommonTaskStruct__EBeginnerGuideUnlockType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName , EBeginnerGuideUnlockType> UnlockIDs;` |

**说明:**

> 当前步骤解锁的ID

---

### 属性 `TaskType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECommonTaskType](CommonTaskStruct__ECommonTaskType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ECommonTaskType TaskType = ECommonTaskType::None;` |

**说明:**

> 任务类型

---

### 属性 `TaskBeingEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EBeginnerGuideEventType](CommonTaskStruct__EBeginnerGuideEventType.md), FName> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EBeginnerGuideEventType, FName> TaskBeingEvent;` |

**说明:**

> 任务开始事件

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

### 属性 `ExecuteStateTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FText ExecuteStateTips;` |

**说明:**

> 任务状态的tips

---

### 属性 `TaskGrouping`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int TaskGrouping;` |

**说明:**

> 任务的分组 相同组的任务会相互覆盖 不覆盖填0

---

### 属性 `bRepetition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool bRepetition = true;` |

**说明:**

> 是否重复发布

---

### 属性 `Priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int Priority;` |

**说明:**

> 任务列表排序优先级

---

### 属性 `Parameter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int Parameter;` |

**说明:**

> 任务跳转的百科页签

---

### 属性 `TaskIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta = (AllowedClasses = "Texture2D")) FSoftObjectPath TaskIcon;` |

**说明:**

> 任务显示的图片

---

### 属性 `bRemoveAfterCompletion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bRemoveAfterCompletion = true;` |

**说明:**

> 是否完成后从组件中移除

---

### 属性 `TaskTimeOut`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int TaskTimeOut = INDEX_NONE;` |

**说明:**

> 任务时效 -1为没有时间限制

---

### 属性 `bCanGiveUp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bCanGiveUp = false;` |

**说明:**

> 是否可以放弃

---

### 属性 `TriggerFunction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTriggerFunction](CommonTaskStruct__FTriggerFunction.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FTriggerFunction> TriggerFunction;` |

**说明:**

> 可以触发的功能

---

### 属性 `PublisherType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPublisherType](CommonTaskStruct__EPublisherType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EPublisherType PublisherType = EPublisherType::None;` |

**说明:**

> 任务发布者类型

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

### 属性 `SubmitItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemSimpleData> SubmitItems;` |

**说明:**

> 需要提交的物品

---

### 属性 `TaskPlaceTimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TaskPlaceTimeLimit;` |

**说明:**

> 任务地点时间限制(-1无限)

---
