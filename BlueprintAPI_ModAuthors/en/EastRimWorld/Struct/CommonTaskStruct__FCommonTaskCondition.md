# `struct` `FCommonTaskCondition`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> 达成任务的条件

## Blueprint-exposed variables

### Property `Describe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Describe;` |

**Notes:**

> 条件描述

---

### Property `SubDescribes`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FText> SubDescribes;` |

**Notes:**

> 次级描述

---

### Property `SubConditionIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> SubConditionIDs;` |

**Notes:**

> 次级条件ID

---

### Property `CoverTipsID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName CoverTipsID;` |

**Notes:**

> 遮罩Tips配置表ID

---

### Property `CommonTaskConditionType`

| Field | Details |
|------|------|
| C++ type | [ECommonTaskConditionType](CommonTaskStruct__ECommonTaskConditionType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonTaskConditionType CommonTaskConditionType = ECommonTaskConditionType::None;` |

**Notes:**

> 条件类型

---

### Property `RequiredID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName RequiredID;` |

**Notes:**

> 所需类型ID 例如 资源id  建筑id 没有则不填

---

### Property `RequiredValue`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int RequiredValue;` |

**Notes:**

> 所需值

---

### Property `CurrentValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CurrentValue;` |

**Notes:**

> 当前值

---

### Property `ConditionValueUpdateType`

| Field | Details |
|------|------|
| C++ type | [EConditionValueUpdateType](CommonTaskStruct__EConditionValueUpdateType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EConditionValueUpdateType ConditionValueUpdateType = EConditionValueUpdateType::Addition;` |

**Notes:**

> 更新类型

---

### Property `ConditionValueCompareType`

| Field | Details |
|------|------|
| C++ type | [EConditionValueCompareType](CommonTaskStruct__EConditionValueCompareType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EConditionValueCompareType ConditionValueCompareType = EConditionValueCompareType::GreatThanOrEqualTo;` |

**Notes:**

> 条件数值的比较类型

---

### Property `ConditionState`

| Field | Details |
|------|------|
| C++ type | [ECompleteState](CommonTaskStruct__ECompleteState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) ECompleteState ConditionState = ECompleteState::Unfinished;` |

**Notes:**

> 条件状态

---

### Property `ConditionSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ConditionSchedule;` |

**Notes:**

> 条件进度

---

### Property `BuildingType`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int BuildingType;` |

**Notes:**

> 任务关联的建筑物类型

---

### Property `FiltrateTypeID`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int FiltrateTypeID;` |

**Notes:**

> 相同建筑物的不同类型

---

### Property `bDynamicCondition`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bDynamicCondition = false;` |

**Notes:**

> 是否会更加实际数值改变条件状态

---

### Property `ExecuteStateTips`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FText ExecuteStateTips;` |

**Notes:**

> 执行状态tips

---

### Property `ExtraParam1`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 ExtraParam1 = 0;` |

**Notes:**

> 额外参数1

---

### Property `FailedTipText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText FailedTipText;` |

**Notes:**

> 条件检查不通过时的提示文本

---
