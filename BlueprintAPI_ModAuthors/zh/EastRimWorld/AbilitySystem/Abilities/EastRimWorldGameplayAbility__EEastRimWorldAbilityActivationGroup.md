# `enum` `EEastRimWorldAbilityActivationGroup`

**源码头文件:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

---

## 功能说明（来自头文件注释）

> EEastRimWorldAbilityActivationGroup
> Defines how an ability activates in relation to other abilities.

## 枚举值

| 值 | 显示名 | 说明 |
|------|------|------|
| `Independent` |  | Ability runs independently of all other abilities. |
| `Exclusive_Replaceable` |  | Ability is canceled and replaced by other exclusive abilities. |
| `Exclusive_Blocking` |  | Ability blocks all other exclusive abilities from activating. |
| `MAX` |  | 枚举数量上限占位值（Hidden，不作为实际激活分组使用） |
