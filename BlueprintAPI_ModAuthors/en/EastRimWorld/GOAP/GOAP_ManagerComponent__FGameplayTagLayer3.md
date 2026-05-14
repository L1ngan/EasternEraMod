# `struct` `FGameplayTagLayer3`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 第三场标签包含GOAPAction的数据

## Blueprint-exposed variables

### Property `Layer3Data`

| Field | Details |
|------|------|
| C++ type | TMap<FString , [FGameplayTagActions](GOAP_ManagerComponent__FGameplayTagActions.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FString , FGameplayTagActions> Layer3Data;` |

**Source comments:**

> TMap<第三层的标签 , 标签对应的物品ID>

---
