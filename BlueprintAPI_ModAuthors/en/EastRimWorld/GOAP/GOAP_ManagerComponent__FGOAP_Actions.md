# `struct` `FGOAP_Actions`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 包含同类型GOAP_Action的结构体

## Blueprint-exposed variables

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | TMap<[FGOAP_Action](GOAP_Data__FGOAP_Action.md) , bool> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGOAP_Action , bool> Actions;` |

**Notes:**

> GOAP_Action的TMap
> TMap<GOAP_Action , 是否活跃>

---
