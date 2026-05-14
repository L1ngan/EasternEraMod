# `struct` `FEastRimWorldTeamTrackingInfo`

**Source header:** `EastRimWorld/Teams/EastRimWorldTeamSubsystem.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `TeamAgents`

| Field | Details |
|------|------|
| C++ type | `TArray<TScriptInterface<IEastRimWorldTeamAgentInterface>>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<TScriptInterface<IEastRimWorldTeamAgentInterface>> TeamAgents;` |

---

### Property `GameplayTeamInfo`

| Field | Details |
|------|------|
| C++ type | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FGameplayTeamInfo GameplayTeamInfo;` |

---

### Property `TeamBuff`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FCommonBuff> TeamBuff;` |

---
