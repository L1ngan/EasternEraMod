# `struct` `FActivateAbilitiesConfig`

**Source header:** `EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect.h`

---

## Functional description (from header comments)

> Config entry for abilities granted by a gameplay effect: ability ID, grant level, input ID, removal policy and control effect data

## Blueprint-exposed variables

### Property `AbilityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") FName AbilityID;` |

**Notes:**

> ID of the ability to grant

---

### Property `LevelScalableFloat`

| Field | Details |
|------|------|
| C++ type | `FScalableFloat` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition", DisplayName = "Level", meta=(UIMin=0.0)) FScalableFloat LevelScalableFloat = FScalableFloat{ 1.0f };` |

**Notes:**

> What level to grant this ability at

---

### Property `InputID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") int32 InputID = INDEX_NONE;` |

**Notes:**

> Input ID to bind this ability to

---

### Property `RemovalPolicy`

| Field | Details |
|------|------|
| C++ type | [EActivateAbilitiesRemovePolicy](ActivateAbilitiesGameplayEffect__EActivateAbilitiesRemovePolicy.md) |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") EActivateAbilitiesRemovePolicy RemovalPolicy = EActivateAbilitiesRemovePolicy::RemoveAbilityOnEnd;` |

**Notes:**

> What will remove this ability later

---

### Property `ControlEffectData`

| Field | Details |
|------|------|
| C++ type | `FControlEffectData` |
| Reflection specifiers | Category="Ability Definition" |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") FControlEffectData ControlEffectData;` |

**Notes:**

> Control effect data attached when granting the ability

---
