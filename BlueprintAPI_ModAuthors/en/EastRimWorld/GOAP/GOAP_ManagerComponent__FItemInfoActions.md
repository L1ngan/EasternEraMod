# `struct` `FItemInfoActions`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 物品信息对应的GOAP Action数据

## Blueprint-exposed variables

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FGOAP_Action](GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FUObjectData , FGOAP_Action> Actions;` |

**Notes:**

> TMap<物品的数据 , GOAP Action>

---
