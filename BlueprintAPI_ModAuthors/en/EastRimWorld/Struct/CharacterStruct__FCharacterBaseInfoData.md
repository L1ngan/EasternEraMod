# `struct` `FCharacterBaseInfoData`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 角色的基础信息

## Blueprint-exposed variables

### Property `CharacterID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FName CharacterID;` |

**Notes:**

> 角色id

---

### Property `CharacterType`

| Field | Details |
|------|------|
| C++ type | [ECharacterType](CommonEnum__ECharacterType.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() ECharacterType CharacterType = ECharacterType::None;` |

**Notes:**

> 角色类型

---

### Property `CharacterGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FGuid CharacterGuid;` |

**Notes:**

> 角色Guid

---
