# `class` `UERW_WorkScheduleComponent`

**Source header:** `EastRimWorld/Components/ERW_WorkScheduleComponent.h`

---

## Functional description (from header comments)

> 工作日程管理组件

## Blueprint-exposed variables

### Property `WorkSchedules`

| Field | Details |
|------|------|
| C++ type | TMap<FString , [FWorkScheduleData](ERW_WorkScheduleComponent__FWorkScheduleData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FString , FWorkScheduleData> WorkSchedules;` |

**Notes:**

> 工作日程
> TMap<日程名称 , 工作日程数据>

---

### Property `DefaultScheduleName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FText DefaultScheduleName;` |

**Notes:**

> 工作日程默认名称

---

### Property `OnWorkScheduleChanged`

| Field | Details |
|------|------|
| C++ type | `FOnWorkScheduleChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorkScheduleChanged OnWorkScheduleChanged;` |

**Notes:**

> 当工作日程变化时

---

### Property `OnWorkScheduleRemoved`

| Field | Details |
|------|------|
| C++ type | `FOnWorkScheduleRemoved` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnWorkScheduleRemoved OnWorkScheduleRemoved;` |

**Notes:**

> 当工作日程移除时

---

### Property `OnRemoveDeadCharacter`

| Field | Details |
|------|------|
| C++ type | `FOnRemoveDeadCharacter` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnRemoveDeadCharacter OnRemoveDeadCharacter;` |

**Notes:**

> 移除死亡角色

---

## Blueprint-exposed functions

### Function `AddWorkSchedule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ScheduleName` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddWorkSchedule(FString& ScheduleName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入工作日程

---

### Function `RemoveWorkSchedule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ScheduleName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveWorkSchedule(const FString& ScheduleName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除工作日程

---

### Function `UpdateWorkSchedule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ScheduleName` | `const FString&` |
| `Hour` | `int32` |
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateWorkSchedule(const FString& ScheduleName , int32 Hour , const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新工作日程

---

### Function `ChangeWorkScheduleName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OldName` | `const FString&` |
| `NewName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ChangeWorkScheduleName(const FString& OldName , const FString& NewName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 改变工作日程名称

---

### Function `GetOtherScheduleCharacters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ScheduleName` | `const FString&` |
| `OtherCharacters` | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetOtherScheduleCharacters(const FString& ScheduleName , TArray<AEastRimWorldCharacter*>& OtherCharacters);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得其他工作日程的角色

---

### Function `TransferAgent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Agent` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `ToScheduleName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TransferAgent(AEastRimWorldCharacter* Agent , const FString& ToScheduleName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 转移角色到指定工作日程

---
