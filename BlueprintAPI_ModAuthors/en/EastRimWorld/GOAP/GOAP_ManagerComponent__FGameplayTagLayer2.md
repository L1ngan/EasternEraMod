# `struct` `FGameplayTagLayer2`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 第二层标签包含GOAPAction的数据

## Blueprint-exposed variables

### Property `Layer2Data`

| Field | Details |
|------|------|
| C++ type | TMap<FString , [FGameplayTagLayer3](GOAP_ManagerComponent__FGameplayTagLayer3.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FString , FGameplayTagLayer3> Layer2Data;` |

**Notes:**

> TMap<第二层的标签 , 第三层的数据>

---
