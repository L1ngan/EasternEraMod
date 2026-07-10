# `struct` `FMartialArtsSkillEntryGiveAbilitysResolve`

**Source header:** `EastRimWorld/MartialArts/MartialArtsSkillEntryGiveAbilitys.h`

---

## Functional description (from header comments)

> 招式书籍技能词条 GiveAbilitys 解析结果（用于 GrantMovesBookAbilities）。

## Blueprint-exposed variables

### Property `BaseAbilityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName BaseAbilityID = NAME_None;` |

**Notes:**

> 最终授予的 BaseAbility（可能被 Replace 替换）

---

### Property `bReplacedBaseAbility`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() bool bReplacedBaseAbility = false;` |

**Notes:**

> BaseAbility 是否被词条替换（移除时不应再删原 BaseAbility 行）

---

### Property `ExtraAbilityIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FName> ExtraAbilityIDs;` |

**Notes:**

> GiveNewAbilitys 额外授予的技能 ID

---
