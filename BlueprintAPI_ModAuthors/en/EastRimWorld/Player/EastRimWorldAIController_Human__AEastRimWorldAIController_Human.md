# `class` `AEastRimWorldAIController_Human`

**Source header:** `EastRimWorld/Player/EastRimWorldAIController_Human.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `ReadingTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 ReadingTimerID { -1 };` |

**Source comments:**

> 读书计时器ID

---

### Property `WriteCopyTimerID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 WriteCopyTimerID { -1 };` |

**Source comments:**

> 抄录计时器ID

---

### Property `UsedBed`

| Field | Details |
|------|------|
| C++ type | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , SaveGame) FUObjectData UsedBed;` |

**Source comments:**

> 记录上次使用过的床

---

## Blueprint-exposed functions

### Function `ResetGoalPriority`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void ResetGoalPriority(const FName& GoalID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 重置GOAP目标优先级为默认值

---

### Function `SetUsedBed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Bed` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetUsedBed(AGOAP_ActorBase* Bed);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置使用过的床

---

### Function `ResetGoals`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent, Category="GOAP" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewGoals` | `const TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category="GOAP") void ResetGoals(const TArray<FName>& NewGoals);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 重置所有Goal

---

### Function `UpdateMemberGoals`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent, Category="GOAP" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RemovedGoals` | `const TArray<FName>&` |
| `NewGoals` | `const TArray<FName>&` |
| `false` | `bool IsSetMember =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable , Category="GOAP") void UpdateMemberGoals(const TArray<FName>& RemovedGoals , const TArray<FName>& NewGoals , bool IsSetMember = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Source comments:**

> 更新内外门弟子的GOAP目标

---
