# `class` `ABreakThroughManager`

**Source header:** `EastRimWorld/System/BreakThrough/BreakThroughManager.h`

---

## Functional description (from header comments)

> 角色突破管理器

## Blueprint-exposed variables

### Property `OnBreakThroughStateChanged`

| Field | Details |
|------|------|
| C++ type | `FOnBreakThroughStateChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBreakThroughStateChanged OnBreakThroughStateChanged;` |

**Source comments:**

> 委托：突破状态变化

---

### Property `OnBreakThroughProgressUpdated`

| Field | Details |
|------|------|
| C++ type | `FOnBreakThroughProgressUpdated` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBreakThroughProgressUpdated OnBreakThroughProgressUpdated;` |

**Source comments:**

> 委托：突破进度更新

---

### Property `OnBreakThroughCompleted`

| Field | Details |
|------|------|
| C++ type | `FOnBreakThroughCompleted` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBreakThroughCompleted OnBreakThroughCompleted;` |

**Source comments:**

> 委托：突破完成

---

### Property `OnBreakThroughInterrupted`

| Field | Details |
|------|------|
| C++ type | `FOnBreakThroughInterrupted` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBreakThroughInterrupted OnBreakThroughInterrupted;` |

**Source comments:**

> 委托：突破中断

---

### Property `OpenSelectBreakThroughUI_Delegate`

| Field | Details |
|------|------|
| C++ type | `FOpenSelectBreakThroughUI` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOpenSelectBreakThroughUI OpenSelectBreakThroughUI_Delegate;` |

**Source comments:**

> 打开右侧择地突破的UI

---

### Property `OnCheckBreakThroughRoom`

| Field | Details |
|------|------|
| C++ type | `FOnCheckBreakThroughRoom` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCheckBreakThroughRoom OnCheckBreakThroughRoom;` |

**Source comments:**

> 检查突破房间信息委托

---

### Property `SelectingLocationCharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FGuid SelectingLocationCharacterGuid;` |

**Source comments:**

> 当前正在选择地点的角色Guid

---

## Blueprint-exposed functions

### Function `GetBreakThroughManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [ABreakThroughManager](BreakThroughManager__ABreakThroughManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) static ABreakThroughManager* GetBreakThroughManager();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `StartSelectLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartSelectLocation(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 开始择地突破（进入选择地点模式）

---

### Function `CanBreakThroughAtLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CanBreakThroughAtLocation(const FVector& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查位置是否可以突破

---

### Function `GetBreakThroughRoomInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBreakThroughRoomInfo(const FVector& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取突破地点的房间信息

---

### Function `ConfirmBreakThroughLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ConfirmBreakThroughLocation(const FVector& Location);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 确认突破地点并开始突破

---

### Function `CancelSelectLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelSelectLocation();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 取消择地突破

---

### Function `BreakthroughCancel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BreakthroughCancel(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 突破中取消

---

### Function `BreakthroughFinish`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BreakthroughFinish(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 突破完成

---

### Function `ConfirmBreakThroughResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `bConfirm` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ConfirmBreakThroughResult(const FGuid& CharacterGuid, bool bConfirm);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 确认突破结果

---

### Function `GetCharacterBreakThroughInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `OutInfo` | [FBreakThroughInfo](BreakThroughStruct__FBreakThroughInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetCharacterBreakThroughInfo(const FGuid& CharacterGuid, FBreakThroughInfo& OutInfo) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色的突破信息

---

### Function `IsCharacterBreakingThrough`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsCharacterBreakingThrough(const FGuid& CharacterGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查角色是否正在突破

---

### Function `CalculateBreakThroughBonus`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacter` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| `TrainingRoomLevel` | `int32` |
| `ElementValue` | `float` |
| `ElementType` | `const EFiveElementType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalculateBreakThroughBonus(AEastRimWorldCharacter * InCharacter, int32 TrainingRoomLevel, float ElementValue,const EFiveElementType ElementType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 计算突破点数加成

---

### Function `IsTrainingRoom`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Location` | `const FVector&` |
| `OutRoomInfo` | [FRoomInfo](../../ERW_ConfigTypes__FRoomInfo.md) & |
| `OutElementType` | `EFiveElementType&` |
| `OutLevel` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsTrainingRoom(const FVector& Location,FRoomInfo & OutRoomInfo, EFiveElementType& OutElementType, int32& OutLevel) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查房间是否为指定类型的练功房

---

### Function `OnCharacterReachedTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnCharacterReachedTarget(const FGuid& CharacterGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 处理角色到达目标点

---

### Function `OpenSelectBreakThroughUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OpenSelectBreakThroughUI();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 处理角色到达目标点

---
