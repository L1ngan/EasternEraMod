# `struct` `FEastRimWorldGameplayEffectContext`

**Source header:** `EastRimWorld/AbilitySystem/EastRimWorldGameplayEffectContext.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `CartridgeID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 CartridgeID = -1;` |

**Source comments:**

> ID to allow the identification of multiple bullets that were part of the same cartridge

---

### Property `HitLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector HitLocation = FVector::ZeroVector;` |

**Source comments:**

> 碰撞点

---

### Property `Direction`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FVector Direction = FVector::ZeroVector;` |

**Source comments:**

> 方向

---

### Property `Target`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<AActor>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TWeakObjectPtr<AActor> Target;` |

**Source comments:**

> 目标

---

### Property `InstigatorGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FGuid InstigatorGuid;` |

**Source comments:**

> 发起者GUID

---

### Property `InstigatorTeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 InstigatorTeamID = 255;` |

**Source comments:**

> 发起者team

---

### Property `BattlefieldRolesType`

| Field | Details |
|------|------|
| C++ type | `EBattlefieldRolesType` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() EBattlefieldRolesType BattlefieldRolesType = EBattlefieldRolesType::Hero;` |

**Source comments:**

> 发起者的类型

---

### Property `Parameter`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() float Parameter = 0.f;` |

**Source comments:**

> 额外的参数 1.控制时长

---

### Property `AbilitySourceObject`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<const UObject>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TWeakObjectPtr<const UObject> AbilitySourceObject;` |

**Source comments:**

> Ability Source object (should implement IEastRimWorldAbilitySourceInterface). NOT replicated currently

---

### Property `GameplayEffectTipText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FText GameplayEffectTipText;` |

---
