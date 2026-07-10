# `struct` `FEastRimWorldTeamTrackingInfo`

**Source header:** `EastRimWorld/Teams/EastRimWorldTeamSubsystem.h`

---

## Functional description (from header comments)

> East Rim World Team Tracking Info data structure.

## Blueprint-exposed variables

### Property `TeamAgents`

| Field | Details |
|------|------|
| C++ type | `TArray<TScriptInterface<IEastRimWorldTeamAgentInterface>>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<TScriptInterface<IEastRimWorldTeamAgentInterface>> TeamAgents;` |

**Notes:**

> Team Agents field.

---

### Property `GameplayTeamInfo`

| Field | Details |
|------|------|
| C++ type | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FGameplayTeamInfo GameplayTeamInfo;` |

**Notes:**

> Gameplay Team Info field.

---

### Property `TeamBuff`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FCommonBuff> TeamBuff;` |

**Notes:**

> Team Buff field.

---
