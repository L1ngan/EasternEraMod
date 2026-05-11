# `class` `ADialogueManager`

**Source header:** `EastRimWorld/System/Dialogue/DialogueManager.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `UnderWayDialogueInfo`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FDialogueSpec](DialogueStruct__FDialogueSpec.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FDialogueSpec> UnderWayDialogueInfo;` |

**Source comments:**

> 已经进行中的对话被中断的对话

---

### Property `QueueDialogueInfo`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FDialogueSpec](DialogueStruct__FDialogueSpec.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FDialogueSpec> QueueDialogueInfo;` |

**Source comments:**

> 队列中即将开始的对话

---

### Property `DialogueTriggerCount`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,int> DialogueTriggerCount;` |

**Source comments:**

> 对话已经触发的次数

---

### Property `CurDialogueInfo`

| Field | Details |
|------|------|
| C++ type | [FDialogueSpec](DialogueStruct__FDialogueSpec.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FDialogueSpec CurDialogueInfo;` |

**Source comments:**

> 当前的对话信息

---

## Blueprint-exposed functions

### Function `GetDialogueManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [ADialogueManager](DialogueManager__ADialogueManager.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static ADialogueManager * GetDialogueManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `TriggerDialogueByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DialogueID` | `FName` |
| `nullptr` | `AActor * Initiator =` |
| `nullptr` | `AActor * Target =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TriggerDialogueByID(FName DialogueID,AActor * Initiator = nullptr,AActor * Target = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID 触发一个对话

---

### Function `TriggerDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDialogueInfo` | const [FDialogueGroup](DialogueStruct__FDialogueGroup.md) & |
| `nullptr` | `AActor * Initiator =` |
| `nullptr` | `AActor * Target =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TriggerDialogue(const FDialogueGroup & InDialogueInfo,AActor * Initiator = nullptr,AActor * Target = nullptr);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过信息触发对话

---

### Function `RemoveDialogueToQueue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DialogueGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveDialogueToQueue(const FGuid & DialogueGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除队列中的对话

---

### Function `StartNextDialogueGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartNextDialogueGroup();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开始下一个对话分组

---

### Function `SuspendCurDialogueGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SuspendCurDialogueGroup();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 暂停当前对话分组

---

### Function `ResumeDialogueGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DialogueGuid` | `const FGuid &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResumeDialogueGroup(const FGuid & DialogueGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 继续对话对话分组

---

### Function `CancelCurDialogueGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelCurDialogueGroup();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 取消当前对话分组

---

### Function `EndCurDialogueGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EndCurDialogueGroup();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 结束当前对话分组

---

### Function `GetCurDialogueSpec`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FDialogueSpec](DialogueStruct__FDialogueSpec.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FDialogueSpec GetCurDialogueSpec();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取当前对话实例

---

### Function `SelectDialogueOption`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DialogueID` | `FName` |
| `InDialogueOption` | const [FDialogueOption](DialogueStruct__FDialogueOption.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SelectDialogueOption(FName DialogueID,const FDialogueOption & InDialogueOption);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 选择对话选项

---

### Function `StartNextDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DialogueID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartNextDialogue(FName DialogueID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开始对话下一个句

---

### Function `CheckDialogueOptionClickCondition`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDialogueOption` | UPARAM(ref) [FDialogueOption](DialogueStruct__FDialogueOption.md) & |
| `OutFailedText` | `TArray<FText>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckDialogueOptionClickCondition(UPARAM(ref) FDialogueOption & InDialogueOption,TArray<FText>& OutFailedText);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查对话选项点击条件

---

### Function `TriggerDialogueOptionFunctions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDialogueOption` | const [FDialogueOption](DialogueStruct__FDialogueOption.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TriggerDialogueOptionFunctions(const FDialogueOption & InDialogueOption);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 触发对话选项功能

---

### Function `FindPlayerDialogueInitiator`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `AActor*` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AActor* FindPlayerDialogueInitiator();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetRandOptions`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InDialogueInfo` | const [FDialogueInfo](DialogueStruct__FDialogueInfo.md)& |
| `OutOptionIDs` | TArray<[FDialogueOption](DialogueStruct__FDialogueOption.md)>& |
| `InCharacter` | class [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) void GetRandOptions(const FDialogueInfo& InDialogueInfo,TArray<FDialogueOption>& OutOptionIDs,class AEastRimWorldCharacter* InCharacter);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---
