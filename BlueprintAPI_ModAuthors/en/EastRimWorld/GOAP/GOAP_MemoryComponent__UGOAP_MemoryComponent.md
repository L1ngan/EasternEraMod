# `class` `UGOAP_MemoryComponent`

**Source header:** `EastRimWorld/GOAP/GOAP_MemoryComponent.h`

---

## Functional description (from header comments)

> GOAP记忆组件

## Blueprint-exposed variables

### Property `Memories`

| Field | Details |
|------|------|
| C++ type | TMap<[EGOAP_ConditionType](GOAP_Enumerations__EGOAP_ConditionType.md) , [FMemoryData](GOAP_MemoryComponent__FMemoryData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<EGOAP_ConditionType , FMemoryData> Memories;` |

**Notes:**

> GOAP前置条件类型对应的记忆值
> TMap<GOAP前置条件类型 , 记忆数据>

---

### Property `OnMemoryUpdated`

| Field | Details |
|------|------|
| C++ type | `FOnMemoryUpdated` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnMemoryUpdated OnMemoryUpdated;` |

**Notes:**

> 当GOAP记忆更新时

---

## Blueprint-exposed functions

### Function `GetMemoryInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionType` | [EGOAP_ConditionType](GOAP_Enumerations__EGOAP_ConditionType.md) |
| `ID` | `const FName&` |
| `GOAPValue` | [FGOAP_Value](GOAP_Data__FGOAP_Value.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetMemoryInfo(EGOAP_ConditionType ConditionType , const FName& ID , FGOAP_Value& GOAPValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取记忆值

---

### Function `UpdateMemory`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Delete` | `bool` |
| `ConditionType` | [EGOAP_ConditionType](GOAP_Enumerations__EGOAP_ConditionType.md) |
| `ID` | `const FName&` |
| `GOAPValue` | const [FGOAP_Value](GOAP_Data__FGOAP_Value.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateMemory(bool Delete , EGOAP_ConditionType ConditionType , const FName& ID , const FGOAP_Value& GOAPValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新记忆

---

### Function `IsMemoryDifferent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Delete` | `bool` |
| `ConditionType` | [EGOAP_ConditionType](GOAP_Enumerations__EGOAP_ConditionType.md) |
| `ID` | `const FName&` |
| `GOAPValue` | const [FGOAP_Value](GOAP_Data__FGOAP_Value.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsMemoryDifferent(bool Delete , EGOAP_ConditionType ConditionType , const FName& ID , const FGOAP_Value& GOAPValue) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查记忆值是否不同

---
