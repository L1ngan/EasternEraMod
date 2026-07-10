# `enum` `EActivateAbilitiesRemovePolicy`

**Source header:** `EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect.h`

---

## Functional description (from header comments)

> Policy for handling granted abilities when the gameplay effect is removed: cancel immediately or remove after the ability ends

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `CancelAbilityImmediately` |  | Active abilities are immediately canceled and the ability is removed. |
| `RemoveAbilityOnEnd` |  | Active abilities are allowed to finish, and then removed. |
