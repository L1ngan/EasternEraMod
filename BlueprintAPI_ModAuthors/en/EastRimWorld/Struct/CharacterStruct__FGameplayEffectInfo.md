# `struct` `FGameplayEffectInfo`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Runtime GameplayEffect info: effect class, stack count and duration

## Blueprint-exposed variables

### Property `Effect`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UGameplayEffect>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TSubclassOf<UGameplayEffect> Effect;` |

**Notes:**

> GameplayEffect class

---

### Property `StackCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 StackCount = 1;` |

**Notes:**

> Stack count

---

### Property `Duration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float Duration = 0.f;` |

**Notes:**

> Duration in seconds

---
