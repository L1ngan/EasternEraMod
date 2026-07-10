# `struct` `FMovesBookSkillEntryGameplayEffectState`

**Source header:** `EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys.h`

---

## Functional description (from header comments)

> 招式书籍技能词条 GiveGameEffects 已应用记录（卸载/刷新时移除）。

## Blueprint-exposed variables

### Property `ActiveEffectHandles`

| Field | Details |
|------|------|
| C++ type | `TArray<FActiveGameplayEffectHandle>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FActiveGameplayEffectHandle> ActiveEffectHandles;` |

**Notes:**

> Handles of active GameplayEffects applied by the skill entry (used for removal on unequip/refresh)

---

### Property `AppliedMartialArtsLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 AppliedMartialArtsLevel = 0;` |

**Notes:**

> 施加 GE 时使用的武学等级（用于等级变动时判断是否需要刷新）

---
