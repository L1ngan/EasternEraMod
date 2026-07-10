# `struct` `FMartialArtsEntries`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 武学词条

## Blueprint-exposed variables

### Property `EffectiveAfterEquippingGameplayEffects`

| Field | Details |
|------|------|
| C++ type | `TArray<TSubclassOf<UGameplayEffect>>` |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<TSubclassOf<UGameplayEffect>> EffectiveAfterEquippingGameplayEffects;` |

**Notes:**

> 装备时立即生效的GE

---

### Property `EffectiveAfterEquippingGameplayAttributes`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FName> EffectiveAfterEquippingGameplayAttributes;` |

**Notes:**

> 装备时增加的属性

---

### Property `AbilityTargetEntriesEffects`

| Field | Details |
|------|------|
| C++ type | TArray<[FAbilityTargetEntriesEffect](MartialArts__FAbilityTargetEntriesEffect.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FAbilityTargetEntriesEffect> AbilityTargetEntriesEffects;` |

**Notes:**

> 释放技能时触发的额外效果

---

### Property `SelfGameplayTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") FGameplayTagContainer SelfGameplayTags;` |

**Notes:**

> 装备时给予自己的标签

---

### Property `GiveAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FName> GiveAbility;` |

**Notes:**

> 获得的技能 关联GameAbilityStruct

---

### Property `ReduceCooldown`

| Field | Details |
|------|------|
| C++ type | TArray<[FReduceCoolDownConfig](MartialArts__FReduceCoolDownConfig.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FReduceCoolDownConfig> ReduceCooldown;` |

**Notes:**

> 减少冷却时间的配置

---
