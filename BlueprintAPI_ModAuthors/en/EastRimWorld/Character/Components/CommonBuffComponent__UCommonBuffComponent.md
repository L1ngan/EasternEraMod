# `class` `UCommonBuffComponent`

**Source header:** `EastRimWorld/Character/Components/CommonBuffComponent.h`

---

## Functional description (from header comments)

> Common buff component managing add/remove/activate/suspend of character buffs and the application/cleanup of their gameplay effects.

## Blueprint-exposed variables

### Property `BuffArray`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FCommonBuff> BuffArray;` |

**Notes:**

> 拥有的buff

---

### Property `OnRemoveBuffDelegate`

| Field | Details |
|------|------|
| C++ type | `FRemoveBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FRemoveBuffDelegate OnRemoveBuffDelegate;` |

**Notes:**

> Event fired when a buff is removed; the parameter is the removed buff.

---

### Property `OnAddBuffDelegate`

| Field | Details |
|------|------|
| C++ type | `FAddBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FAddBuffDelegate OnAddBuffDelegate;` |

**Notes:**

> Event fired when a buff is added; the parameter is the added buff.

---

### Property `OnUpdateBuffDelegate`

| Field | Details |
|------|------|
| C++ type | `FUpdateBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FUpdateBuffDelegate OnUpdateBuffDelegate;` |

**Notes:**

> Event fired when the buff list is updated.

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

**Notes:**

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

**Notes:**

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

**Notes:**

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

**Notes:**

> 移除buff

---

### Function `GetBuffByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuffID` | `const FName &` |
| `OutBuff` | [FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBuffByID(const FName & BuffID, FCommonBuff & OutBuff);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过ID获取一个buff信息(找到返回true并填充OutBuff)

---

### Function `BroadcastUpdateBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastUpdateBuff();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Broadcasts the buff update event (OnUpdateBuffDelegate).

---

### Function `GetAllBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md)> & |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> & GetAllBuff();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

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

**Notes:**

> 获取所有激活的buff

---
