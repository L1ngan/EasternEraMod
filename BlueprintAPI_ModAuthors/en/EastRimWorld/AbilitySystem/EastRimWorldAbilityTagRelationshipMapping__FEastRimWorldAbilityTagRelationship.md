# `struct` `FEastRimWorldAbilityTagRelationship`

**Source header:** `EastRimWorld/AbilitySystem/EastRimWorldAbilityTagRelationshipMapping.h`

---

## Functional description (from header comments)

> Struct that defines the relationship between different ability tags

## Blueprint-exposed variables

### Property `AbilityTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, Category = Ability, meta = (Categories = "Gameplay.Action")) FGameplayTag AbilityTag;` |

**Notes:**

> The tag that this container relationship is about. Single tag, but abilities can have multiple of these

---

### Property `AbilityTagsToBlock`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, Category = Ability) FGameplayTagContainer AbilityTagsToBlock;` |

**Notes:**

> The other ability tags that will be blocked by any ability using this tag

---

### Property `AbilityTagsToCancel`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, Category = Ability) FGameplayTagContainer AbilityTagsToCancel;` |

**Notes:**

> The other ability tags that will be canceled by any ability using this tag

---

### Property `ActivationRequiredTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, Category = Ability) FGameplayTagContainer ActivationRequiredTags;` |

**Notes:**

> If an ability has the tag, this is implicitly added to the activation required tags of the ability

---

### Property `ActivationBlockedTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, Category = Ability) FGameplayTagContainer ActivationBlockedTags;` |

**Notes:**

> If an ability has the tag, this is implicitly added to the activation blocked tags of the ability

---
