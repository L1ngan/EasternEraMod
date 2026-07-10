# `struct` `FItemActions`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 每种物品对应的Action数据

## Blueprint-exposed variables

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FActionData](GOAP_ManagerComponent__FActionData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , FActionData> Actions;` |

**Notes:**

> TMap<物品ID , Action数据>

---
