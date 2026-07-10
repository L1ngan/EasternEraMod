# `enum` `EEastRimWorldAbilityActivationGroup`

**Source header:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

---

## Functional description (from header comments)

> EEastRimWorldAbilityActivationGroup
> Defines how an ability activates in relation to other abilities.

## Enumerators

| Value | Display name | Description |
|------|------|------|
| `Independent` |  | Ability runs independently of all other abilities. |
| `Exclusive_Replaceable` |  | Ability is canceled and replaced by other exclusive abilities. |
| `Exclusive_Blocking` |  | Ability blocks all other exclusive abilities from activating. |
| `MAX` |  | Enum count sentinel value (Hidden, not used as an actual activation group) |
