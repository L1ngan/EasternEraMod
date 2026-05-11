# `class` `UERW_TimerManager`

**Source header:** `EastRimWorld/Components/ERW_TimerManager.h`

---

## Functional description (from header comments)

> 计时器管理组件

## Blueprint-exposed variables

### Property `IsGamePaused`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) bool IsGamePaused { false };` |

**Source comments:**

> 游戏是否暂停

---

## Blueprint-exposed functions

### Function `RegisterAndCreateTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OwnerData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |
| `Time` | `float` |
| `FuncName` | `const FString&` |
| `IsLoop` | `bool` |
| `TimerID` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RegisterAndCreateTimer(const FUObjectData& OwnerData , float Time , const FString& FuncName , bool IsLoop , int32& TimerID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 注册并创建Timer

---

### Function `RegisterAndCreateTimerWithParameters`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OwnerData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |
| `Time` | `float` |
| `FuncName` | `const FString&` |
| `Parameters` | `const TArray<FString>&` |
| `IsLoop` | `bool` |
| `TimerID` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RegisterAndCreateTimerWithParameters(const FUObjectData& OwnerData , float Time , const FString& FuncName , const TArray<FString>& Parameters , bool IsLoop , int32& TimerID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 注册并创建带有参数的Timer

---

### Function `UnregisterAndClearTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimerID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterAndClearTimer(int32 TimerID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 注销并清除Timer

---

### Function `IsTimerValid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimerID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsTimerValid(int32 TimerID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查Timer是否有效

---

### Function `PauseAllTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PauseAllTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 暂停所有的Timer

---

### Function `ResumeAllTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResumeAllTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 恢复所有的Timer

---

### Function `PauseTimerByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimerID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PauseTimerByID(int32 TimerID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 暂停Timer

---

### Function `ResumeTimerByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimerID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ResumeTimerByID(int32 TimerID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 恢复Timer

---

### Function `GetTimerRemaining`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimerID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetTimerRemaining(int32 TimerID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得Timer剩余时间

---

### Function `GetTimerInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimerID` | `int32` |
| `TimerInfo` | [FTimerInfo](ERW_TimerManager__FTimerInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetTimerInfo(int32 TimerID , FTimerInfo& TimerInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得Timer信息

---

### Function `UnregisterAndClearAllTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnregisterAndClearAllTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 注销并清除所有Timer

---
