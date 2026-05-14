# `struct` `FSpecifiedItemActions`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 指定物品的Action数据

## Blueprint-exposed variables

### Property `Data`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FItemInfoActions](GOAP_ManagerComponent__FItemInfoActions.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , FItemInfoActions> Data;` |

**Source comments:**

> TMap<GOAP目标 , 物品信息对应的GOAP Action数据>

---
