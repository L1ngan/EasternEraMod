# `struct` `FActivateAbilitiesConfig`

**Source header:** `EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `AbilityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") FName AbilityID;` |

---

### Property `LevelScalableFloat`

| Field | Details |
|------|------|
| C++ type | `FScalableFloat` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition", DisplayName = "Level", meta=(UIMin=0.0)) FScalableFloat LevelScalableFloat = FScalableFloat{ 1.0f };` |

**Source comments:**

> What level to grant this ability at

---

### Property `InputID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") int32 InputID = INDEX_NONE;` |

**Source comments:**

> Input ID to bind this ability to

---

### Property `RemovalPolicy`

| Field | Details |
|------|------|
| C++ type | `EActivateAbilitiesRemovePolicy` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") EActivateAbilitiesRemovePolicy RemovalPolicy = EActivateAbilitiesRemovePolicy::RemoveAbilityOnEnd;` |

**Source comments:**

> What will remove this ability later

---

### Property `ControlEffectData`

| Field | Details |
|------|------|
| C++ type | `FControlEffectData` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") FControlEffectData ControlEffectData;` |

---
