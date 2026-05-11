# `class` `UCommonBuffComponent`

**Source header:** `EastRimWorld/Character/Components/CommonBuffComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `BuffArray`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FCommonBuff> BuffArray;` |

**Source comments:**

> 拥有的buff

---

### Property `OnRemoveBuffDelegate`

| Field | Details |
|------|------|
| C++ type | `FRemoveBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FRemoveBuffDelegate OnRemoveBuffDelegate;` |

---

### Property `OnAddBuffDelegate`

| Field | Details |
|------|------|
| C++ type | `FAddBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FAddBuffDelegate OnAddBuffDelegate;` |

---

### Property `OnUpdateBuffDelegate`

| Field | Details |
|------|------|
| C++ type | `FUpdateBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FUpdateBuffDelegate OnUpdateBuffDelegate;` |

---

## Blueprint-exposed functions

### Function `AddBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddBuffInfo` | [FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md) |
| `true` | `bool bCoverBuff =` |
| `true` | `bool bSave =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddBuff(FCommonBuff AddBuffInfo,bool bCoverBuff = true,bool bSave = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加buff
> 
> / @param AddBuffInfo 需要添加的buff
> / @param bCoverBuff 是否要覆盖
> / @return 是否成功

---

### Function `AddBuffByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuffID` | `FName` |
| `true` | `bool bCoverBuff =` |
| `true` | `bool bSave =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddBuffByID(FName BuffID, bool bCoverBuff = true,bool bSave = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID添加buff

---

### Function `AddBuffByArrayID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuffIDs` | `TArray<FName>` |
| `true` | `bool bCoverBuff =` |
| `true` | `bool bSave =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddBuffByArrayID(TArray<FName> BuffIDs, bool bCoverBuff = true,bool bSave = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加id数组的buff

---

### Function `RemoveBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuffID` | `const FName &` |
| `true` | `bool bUpdateEffect =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemoveBuff(const FName & BuffID,bool bUpdateEffect = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除buff

---

### Function `BroadcastUpdateBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastUpdateBuff();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetAllBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md)> & |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> & GetAllBuff();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有buff 包含未激活的buff

---

### Function `GetAllActivateBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetAllActivateBuff();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有激活的buff

---
