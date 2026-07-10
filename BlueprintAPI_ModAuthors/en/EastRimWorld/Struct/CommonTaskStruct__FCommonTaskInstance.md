# `struct` `FCommonTaskInstance`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> 任务

## Blueprint-exposed variables

### Property `TaskID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") FName TaskID;` |

**Notes:**

> 实际的taskID

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

### Property `TaskTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaskTime = INDEX_NONE;` |

**Notes:**

> 剩余超时时间 -1无限

---

### Property `bNewTask`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") bool bNewTask = false;` |

**Notes:**

> 新任务

---

### Property `ExecuteState`

| Field | Details |
|------|------|
| C++ type | [ECommonTaskExecuteState](CommonTaskStruct__ECommonTaskExecuteState.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") ECommonTaskExecuteState ExecuteState = ECommonTaskExecuteState::None;` |

**Notes:**

> 任务的执行状态

---

### Property `TaskState`

| Field | Details |
|------|------|
| C++ type | [ECompleteState](CommonTaskStruct__ECompleteState.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") ECompleteState TaskState = ECompleteState::Unfinished;` |

**Notes:**

> 任务完成状态

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

### Property `SubConditions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FCommonTaskCondition](CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") TMap<FName , FCommonTaskCondition> SubConditions;` |

**Notes:**

> 次级条件
> TMap<主条件ID , 条件数据>

---

### Property `DialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") FName DialogueID;` |

**Notes:**

> 对话配置表ID

---

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Runtime") FGuid Guid;` |

**Notes:**

> 任务guid

---

### Property `PublisherGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") FGuid PublisherGuid;` |

**Notes:**

> 发布者guid

---

### Property `bRemoveAfterCompletion`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Runtime" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Runtime") bool bRemoveAfterCompletion = true;` |

**Notes:**

> 完成任务需归档到玩家”已完成列表”，选false表示记录在已完成任务中

---

### Property `bAutoComplete`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bAutoComplete = true;` |

**Notes:**

> 任务完成条件满足时是否自动完成该任务(用来区别需要手动点击完成的任务)

---

### Property `bShow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bShow = true;` |

**Notes:**

> 是否在任务列表中展示

---

### Property `WorldPlaceIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WorldPlaceIDs;` |

**Notes:**

> World Place I Ds field.

---
