# `struct` `FPreActionData`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 前置Action的数据

## Blueprint-exposed variables

### Property `ActionData`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , FName> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FUObjectData , FName> ActionData;` |

**Notes:**

> TMap<Owner的数据 , GOAPAction的ID>

---
