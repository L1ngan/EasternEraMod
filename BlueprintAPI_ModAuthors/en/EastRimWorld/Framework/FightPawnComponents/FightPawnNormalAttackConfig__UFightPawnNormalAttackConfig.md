# `class` `UFightPawnNormalAttackConfig`

**Source header:** `EastRimWorld/Framework/FightPawnComponents/FightPawnNormalAttackConfig.h`

---

## Functional description (from header comments)

> FightPawn normal attack config data asset: decouples 'weapon type to player-specific normal attack ability ID' into a configurable map; after equipment loads, the normal attack GA is looked up by the main weapon type and granted to the ASC, falling back to the weapon's own EquipmentAbility if not found.

## Blueprint-exposed variables

### Property `WeaponTypeToNormalAttackAbility`

| Field | Details |
|------|------|
| C++ type | `TMap<EWeaponType, FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="FightPawn|NormalAttack" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|NormalAttack") TMap<EWeaponType, FName> WeaponTypeToNormalAttackAbility;` |

**Notes:**

> 武器类型 → 普攻技能ID（FName，走 GameMode->GetGameplayAbilityByID 配置表）。
> key 用 EWeaponType（Sword/Blade/Spear/Fist...），value 是普攻 GA 的配置表 ID。

---

## Blueprint-exposed functions

### Function `GetNormalAttackAbilityID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="FightPawn|NormalAttack" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WeaponType` | `EWeaponType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FightPawn|NormalAttack") FName GetNormalAttackAbilityID(EWeaponType WeaponType) const { const FName* Found = WeaponTypeToNormalAttackAbility.Find(WeaponType); return Found ? *Found : NAME_None; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 查询某武器类型对应的普攻技能ID。查不到返回 NAME_None。

---
