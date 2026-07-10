# `class` `ADialogueManager`

**源码头文件:** `EastRimWorld/System/Dialogue/DialogueManager.h`

---

## 功能说明（来自头文件注释）

> Dialogue Manager Actor 类型。

## 蓝图暴露变量

### 属性 `UnderWayDialogueInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FDialogueSpec](DialogueStruct__FDialogueSpec.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FDialogueSpec> UnderWayDialogueInfo;` |

**说明:**

> 已经进行中的对话被中断的对话

---

### 属性 `QueueDialogueInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FDialogueSpec](DialogueStruct__FDialogueSpec.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FDialogueSpec> QueueDialogueInfo;` |

**说明:**

> 队列中即将开始的对话

---

### 属性 `DialogueTriggerCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,int> DialogueTriggerCount;` |

**说明:**

> 对话已经触发的次数

---

### 属性 `CurDialogueInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FDialogueSpec](DialogueStruct__FDialogueSpec.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FDialogueSpec CurDialogueInfo;` |

**说明:**

> 当前的对话信息

---

## 蓝图暴露函数

### 函数 `GetDialogueManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [ADialogueManager](DialogueManager__ADialogueManager.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) static ADialogueManager * GetDialogueManager();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Dialogue Manager。

---

### 函数 `TriggerDialogueByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DialogueID` | `FName` |
| `nullptr` | `AActor * Initiator =` |
| `nullptr` | `AActor * Target =` |
| `（匿名/仅类型）` | [EDialogueActorType](DialogueStruct__EDialogueActorType.md) InitiatorType = [EDialogueActorType](DialogueStruct__EDialogueActorType.md)::None |
| `（匿名/仅类型）` | [EDialogueActorType](DialogueStruct__EDialogueActorType.md) TargetType = [EDialogueActorType](DialogueStruct__EDialogueActorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool TriggerDialogueByID(FName DialogueID,AActor * Initiator = nullptr,AActor * Target = nullptr,EDialogueActorType InitiatorType = EDialogueActorType::None,EDialogueActorType TargetType = EDialogueActorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过ID 触发一个对话

---

### 函数 `TriggerDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDialogueInfo` | const [FDialogueGroup](DialogueStruct__FDialogueGroup.md) & |
| `nullptr` | `AActor * Initiator =` |
| `nullptr` | `AActor * Target =` |
| `（匿名/仅类型）` | [EDialogueActorType](DialogueStruct__EDialogueActorType.md) InitiatorType = [EDialogueActorType](DialogueStruct__EDialogueActorType.md)::None |
| `（匿名/仅类型）` | [EDialogueActorType](DialogueStruct__EDialogueActorType.md) TargetType = [EDialogueActorType](DialogueStruct__EDialogueActorType.md)::None |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool TriggerDialogue(const FDialogueGroup & InDialogueInfo,AActor * Initiator = nullptr,AActor * Target = nullptr,EDialogueActorType InitiatorType = EDialogueActorType::None,EDialogueActorType TargetType = EDialogueActorType::None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过信息触发对话

---

### 函数 `IsActorInDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActorGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) bool IsActorInDialogue(const FGuid& InActorGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 查询: 某角色(按Guid)当前是否为 进行中/排队/被中断 对话的参与者(发起者或目标)。供外部延迟销毁对话对象(如涌现宿敌NPC等胜负对话结束再销毁)

---

### 函数 `RemoveDialogueToQueue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DialogueGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveDialogueToQueue(const FGuid & DialogueGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除队列中的对话

---

### 函数 `StartNextDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartNextDialogueGroup();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开始下一个对话分组

---

### 函数 `SuspendCurDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SuspendCurDialogueGroup();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 暂停当前对话分组

---

### 函数 `ResumeDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DialogueGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ResumeDialogueGroup(const FGuid & DialogueGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 继续对话对话分组

---

### 函数 `CancelCurDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CancelCurDialogueGroup();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取消当前对话分组

---

### 函数 `EndCurDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EndCurDialogueGroup();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束当前对话分组

---

### 函数 `GetCurDialogueSpec`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FDialogueSpec](DialogueStruct__FDialogueSpec.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FDialogueSpec GetCurDialogueSpec();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前对话实例

---

### 函数 `SelectDialogueOption`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DialogueID` | `FName` |
| `InDialogueOption` | const [FDialogueOption](DialogueStruct__FDialogueOption.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SelectDialogueOption(FName DialogueID,const FDialogueOption & InDialogueOption);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选择对话选项

---

### 函数 `StartNextDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DialogueID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartNextDialogue(FName DialogueID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开始对话下一个句

---

### 函数 `CheckDialogueOptionClickCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDialogueOption` | UPARAM(ref) [FDialogueOption](DialogueStruct__FDialogueOption.md) & |
| `OutFailedText` | `TArray<FText>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckDialogueOptionClickCondition(UPARAM(ref) FDialogueOption & InDialogueOption,TArray<FText>& OutFailedText);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查对话选项点击条件

---

### 函数 `TriggerDialogueOptionFunctions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDialogueOption` | const [FDialogueOption](DialogueStruct__FDialogueOption.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TriggerDialogueOptionFunctions(const FDialogueOption & InDialogueOption);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 触发对话选项功能

---

### 函数 `FindPlayerDialogueInitiator`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `AActor*` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AActor* FindPlayerDialogueInitiator();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取或查询 Find Player Dialogue Initiator。

---

### 函数 `GetRandOptions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDialogueInfo` | const [FDialogueInfo](DialogueStruct__FDialogueInfo.md)& |
| `OutOptionIDs` | TArray<[FDialogueOption](DialogueStruct__FDialogueOption.md)>& |
| `InCharacter` | class [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) void GetRandOptions(const FDialogueInfo& InDialogueInfo,TArray<FDialogueOption>& OutOptionIDs,class AEastRimWorldCharacter* InCharacter);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Rand Options。

---

### 函数 `GetForceRandOptions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDialogueInfo` | const [FDialogueInfo](DialogueStruct__FDialogueInfo.md)& |
| `OutOption` | [FDialogueOption](DialogueStruct__FDialogueOption.md)& |
| `InWorldForce` | class [AWorldForce](../../WorldSystem/WorldForce__AWorldForce.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) void GetForceRandOptions(const FDialogueInfo& InDialogueInfo,FDialogueOption& OutOption,class AWorldForce* InWorldForce);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Force Rand Options。

---
