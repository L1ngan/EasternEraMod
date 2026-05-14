# `struct` `FGameplayTagActions`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> Gameplay标签对应的Action数据

## Blueprint-exposed variables

### Property `ActionData`

| Field | Details |
|------|------|
| C++ type | TMap<FGameplayTag , [FItemActions](GOAP_ManagerComponent__FItemActions.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGameplayTag , FItemActions> ActionData;` |

**Source comments:**

> TMap<Gameplay标签 , 物品Action数据>

---
