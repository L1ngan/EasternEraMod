# `struct` `FActionData`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> Actor对应的GOAP_Action的数据

## Blueprint-exposed variables

### Property `OwnerData`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FGOAP_Actions](GOAP_ManagerComponent__FGOAP_Actions.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FUObjectData , FGOAP_Actions> OwnerData;` |

**Notes:**

> TMap<Owner的数据 , GOAP_Action数组>

---
