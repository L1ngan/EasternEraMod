# `struct` `FMovesBookSkillEntryAbilityState`

**Source header:** `EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys.h`

---

## Functional description (from header comments)

> 已生效的 GiveAbilitys 词条授予记录（卸载招式时移除）。

## Blueprint-exposed variables

### Property `ExtraGrantedAbilityIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FName> ExtraGrantedAbilityIDs;` |

**Notes:**

> List of extra ability IDs granted by the GiveNewAbilitys entry (removed by this list when the move is unequipped)

---

### Property `bReplacedBaseAbility`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bReplacedBaseAbility = false;` |

**Notes:**

> Whether the move's BaseAbility has been replaced by the skill entry

---

### Property `ReplacementAbilityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName ReplacementAbilityID = NAME_None;` |

**Notes:**

> Ability ID that replaces the original BaseAbility (NAME_None means no replacement)

---
