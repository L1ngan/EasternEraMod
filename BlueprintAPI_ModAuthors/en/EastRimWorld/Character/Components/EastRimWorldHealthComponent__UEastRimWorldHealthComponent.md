# `class` `UEastRimWorldHealthComponent`

**Source header:** `EastRimWorld/Character/Components/EastRimWorldHealthComponent.h`

---

## Functional description (from header comments)

> UEastRimWorldHealthComponent
> An actor component used to handle anything related to health.

## Blueprint-exposed variables

### Property `OrganName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FText OrganName;` |

---

### Property `OnHealthChanged`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_AttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnHealthChanged;` |

**Source comments:**

> Delegate fired when the health value has changed. This is called on the client but the instigator may not be valid

---

### Property `OnCurMaxHealthChanged`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_AttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnCurMaxHealthChanged;` |

**Source comments:**

> Delegate fired when the max health value has changed. This is called on the client but the instigator may not be valid

---

### Property `OnMaxHealthChanged`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_AttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnMaxHealthChanged;` |

---

### Property `OnDamageShieldChanged`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_AttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnDamageShieldChanged;` |

**Source comments:**

> 罡气值改变

---

### Property `OnMaxDamageShieldChanged`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_AttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnMaxDamageShieldChanged;` |

**Source comments:**

> 罡气值最大值改变

---

### Property `OnInspirationChanged`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_AttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnInspirationChanged;` |

**Source comments:**

> 感悟值改变

---

### Property `OnRobotEnergyMaxValueChanged`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_AttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnRobotEnergyMaxValueChanged;` |

**Source comments:**

> 机关人能源最大值改变

---

### Property `OnRobotEnergyCurValueChanged`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_AttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnRobotEnergyCurValueChanged;` |

**Source comments:**

> 机关人当前能源改变

---

### Property `OnDeathStarted`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_DeathEvent` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_DeathEvent OnDeathStarted;` |

**Source comments:**

> Delegate fired when the death sequence has started.

---

### Property `OnDeathFinished`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_DeathEvent` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_DeathEvent OnDeathFinished;` |

**Source comments:**

> Delegate fired when the death sequence has finished.

---

### Property `OnKnockDown`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_KnockDown` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_KnockDown OnKnockDown;` |

**Source comments:**

> 被击倒

---

### Property `OnKnockDownFinished`

| Field | Details |
|------|------|
| C++ type | `FEastRimWorldHealth_KnockDown` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_KnockDown OnKnockDownFinished;` |

---

### Property `OnGOAPAttributeChanged`

| Field | Details |
|------|------|
| C++ type | `FOnGOAPAttributeChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnGOAPAttributeChanged OnGOAPAttributeChanged;` |

**Source comments:**

> 当GOAP相关属性值改变时

---

### Property `OnCharacterTemperatureChanged`

| Field | Details |
|------|------|
| C++ type | `FCharacterTemperatureChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FCharacterTemperatureChanged OnCharacterTemperatureChanged;` |

**Source comments:**

> 温度变化

---

### Property `OnNutritionValueChanged`

| Field | Details |
|------|------|
| C++ type | `FOnNutritionValueChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnNutritionValueChanged OnNutritionValueChanged;` |

**Source comments:**

> 营养值改变

---

## Blueprint-exposed functions

### Function `FindHealthComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="EastRimWorld|Health" |
| Return type | [UEastRimWorldHealthComponent](EastRimWorldHealthComponent__UEastRimWorldHealthComponent.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `const AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "EastRimWorld|Health") static UEastRimWorldHealthComponent* FindHealthComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UEastRimWorldHealthComponent>() : nullptr); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> Returns the health component if one exists on the specified actor.

---

### Function `GetHealth`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Health" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetHealth() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Returns the current health value.

---

### Function `GetMaxHealth`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Health" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetMaxHealth() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Returns the current maximum health value.

---

### Function `GetHealthNormalized`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Health" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetHealthNormalized() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 当前生命值的百分比（以最大健康值为基础） Returns the current health in the range [0.0, 1.0].

---

### Function `GetCurMaxHealthNormalized`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Health" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetCurMaxHealthNormalized() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 当前最大生命值的百分比（以最大健康值为基础）

---

### Function `GetFreeWeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Health" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetFreeWeight() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 剩余可携带重量（通过 HealthSet 获取）

---

### Function `GetNutritionValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Health" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetNutritionValue() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 当前营养值（通过 HealthSet 获取）

---

### Function `GetMaxNutritionValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Health" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetMaxNutritionValue() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 营养值上限（通过 HealthSet 获取）

---

### Function `GetInspiration`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|Health" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetInspiration() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 当前感悟值（通过 HealthSet 获取）

---

### Function `GetDamageShield`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|DamageShield" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|DamageShield") float GetDamageShield() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 当前罡气值

---

### Function `GetMaxDamageShield`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|DamageShield" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|DamageShield") float GetMaxDamageShield() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 最大罡气值

---

### Function `GetDamageShieldNormalized`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|DamageShield" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|DamageShield") float GetDamageShieldNormalized() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 罡气值百分比（相比最大生命值）

---

### Function `StartDeath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void StartDeath();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> Begins the death sequence for the owner.

---

### Function `GetMoodValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetMoodValue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
