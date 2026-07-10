# `struct` `FPrioriActionData`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 优先处理的批量Action

## Blueprint-exposed variables

### Property `BatchData`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FPrioriBatchData](GOAP_ManagerComponent__FPrioriBatchData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TMap<FUObjectData , FPrioriBatchData> BatchData;` |

**Notes:**

> TMap<Owner的数据 , 批量Action数据>

---
