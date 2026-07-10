# `struct` `FSpecifiedArrestActions`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> Action set data for specified arrest targets

## Blueprint-exposed variables

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) ,[FGOAP_Actions](GOAP_ManagerComponent__FGOAP_Actions.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FUObjectData ,FGOAP_Actions> Actions;` |

**Notes:**

> Map of arrest actions grouped by target object data

---
