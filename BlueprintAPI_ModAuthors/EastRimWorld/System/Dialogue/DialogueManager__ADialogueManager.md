# `class` `ADialogueManager`

**源码头文件：** `EastRimWorld/System/Dialogue/DialogueManager.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `UnderWayDialogueInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FDialogueSpec](DialogueStruct__FDialogueSpec.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FDialogueSpec> UnderWayDialogueInfo;` |

**源码注释：**

> 已经进行中的对话被中断的对话

---

### 属性 `QueueDialogueInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FDialogueSpec](DialogueStruct__FDialogueSpec.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FDialogueSpec> QueueDialogueInfo;` |

**源码注释：**

> 队列中即将开始的对话

---

### 属性 `DialogueTriggerCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,int> DialogueTriggerCount;` |

**源码注释：**

> 对话已经触发的次数

---

### 属性 `CurDialogueInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FDialogueSpec](DialogueStruct__FDialogueSpec.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FDialogueSpec CurDialogueInfo;` |

**源码注释：**

> 当前的对话信息

---

## 蓝图暴露函数

### 函数 `GetDialogueManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [ADialogueManager](DialogueManager__ADialogueManager.md) * |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) static ADialogueManager * GetDialogueManager();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool TriggerDialogueByID(FName DialogueID,AActor * Initiator = nullptr,AActor * Target = nullptr);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool TriggerDialogue(const FDialogueGroup & InDialogueInfo,AActor * Initiator = nullptr,AActor * Target = nullptr);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过信息触发对话

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveDialogueToQueue(const FGuid & DialogueGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除队列中的对话

---

### 函数 `StartNextDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StartNextDialogueGroup();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 开始下一个对话分组

---

### 函数 `SuspendCurDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SuspendCurDialogueGroup();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ResumeDialogueGroup(const FGuid & DialogueGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 继续对话对话分组

---

### 函数 `CancelCurDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CancelCurDialogueGroup();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 取消当前对话分组

---

### 函数 `EndCurDialogueGroup`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EndCurDialogueGroup();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 结束当前对话分组

---

### 函数 `GetCurDialogueSpec`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FDialogueSpec](DialogueStruct__FDialogueSpec.md) |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FDialogueSpec GetCurDialogueSpec();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SelectDialogueOption(FName DialogueID,const FDialogueOption & InDialogueOption);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StartNextDialogue(FName DialogueID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckDialogueOptionClickCondition(UPARAM(ref) FDialogueOption & InDialogueOption,TArray<FText>& OutFailedText);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TriggerDialogueOptionFunctions(const FDialogueOption & InDialogueOption);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 触发对话选项功能

---

### 函数 `FindPlayerDialogueInitiator`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `AActor*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AActor* FindPlayerDialogueInitiator();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) void GetRandOptions(const FDialogueInfo& InDialogueInfo,TArray<FDialogueOption>& OutOptionIDs,class AEastRimWorldCharacter* InCharacter);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---
