# `struct` `FAbilityInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Runtime ability info: ability class, active flag, remaining cooldown and ability level

## Blueprint-exposed variables

### Property `Ability`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UGameplayAbility>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TSubclassOf<UGameplayAbility> Ability;` |

**Notes:**

> GameplayAbility class of this ability

---

### Property `bIsActive`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bIsActive = false;` |

**Notes:**

> Whether the ability is currently active

---

### Property `CooldownTimeRemaining`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float CooldownTimeRemaining = 0.f;` |

**Notes:**

> Remaining cooldown time of the ability, in seconds

---

### Property `AbilityLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 AbilityLevel = 1;` |

**Notes:**

> Ability level

---
