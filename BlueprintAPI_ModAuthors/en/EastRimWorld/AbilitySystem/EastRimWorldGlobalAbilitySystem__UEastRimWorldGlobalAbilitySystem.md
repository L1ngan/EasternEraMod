# `class` `UEastRimWorldGlobalAbilitySystem`

**Source header:** `EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem.h`

---

## Functional description (from header comments)

> Global ability system (world subsystem) that applies/removes abilities, gameplay effects and global buffs uniformly across all registered ASCs

## Blueprint-exposed functions

### Function `ApplyAbilityToAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ability` | `TSubclassOf<UGameplayAbility>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="EastRimWorld") void ApplyAbilityToAll(TSubclassOf<UGameplayAbility> Ability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> /无特殊情况不使用这些方法，统一通过buff系统施加效果 属性*****************/

---

### Function `ApplyEffectToAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Effect` | `TSubclassOf<UGameplayEffect>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="EastRimWorld") void ApplyEffectToAll(TSubclassOf<UGameplayEffect> Effect);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Applies the given gameplay effect to all registered ASCs (prefer the buff system unless there is a special case)

---

### Function `RemoveAbilityFromAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Ability` | `TSubclassOf<UGameplayAbility>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void RemoveAbilityFromAll(TSubclassOf<UGameplayAbility> Ability);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the given ability from all registered ASCs

---

### Function `RemoveEffectFromAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Effect` | `TSubclassOf<UGameplayEffect>` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void RemoveEffectFromAll(TSubclassOf<UGameplayEffect> Effect);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the given gameplay effect from all registered ASCs

---

### Function `SetBasicAttributeFromAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Attribute` | `const FGameplayAttribute&` |
| `Value` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void SetBasicAttributeFromAll(const FGameplayAttribute& Attribute,float Value);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 此方法只会在增加临时属性时使用 不支持存档 如需要存档 则使用Buff系统增加属性

---

### Function `ApplyBuffFromAllByBuffID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuffID` | `FName` |
| `bTemporary` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void ApplyBuffFromAllByBuffID(FName BuffID,bool bTemporary);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Applies a buff by buff ID to all registered targets; bTemporary distinguishes temporary from persistent

---

### Function `ApplyBuffFromAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CommonBuff` | const [FCommonBuff](../Struct/CommonStruct__FCommonBuff.md) & |
| `bTemporary` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void ApplyBuffFromAll(const FCommonBuff & CommonBuff,bool bTemporary);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Applies the given common buff to all registered targets; bTemporary distinguishes temporary (not saved) from persistent

---

### Function `RemoveBuffFromAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CommonID` | `const FName &` |
| `bTemporary` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void RemoveBuffFromAll(const FName & CommonID,bool bTemporary);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the buff with the given ID from all registered targets; bTemporary distinguishes temporary from persistent

---
