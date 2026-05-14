# `struct` `FTargetActorInfo`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 目标Actor的信息

## Blueprint-exposed variables

### Property `ActorType`

| Field | Details |
|------|------|
| C++ type | `EActorType` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EActorType ActorType { EActorType::None };` |

**Source comments:**

> Actor的类型

---

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid;` |

**Source comments:**

> Actor的Guid

---
