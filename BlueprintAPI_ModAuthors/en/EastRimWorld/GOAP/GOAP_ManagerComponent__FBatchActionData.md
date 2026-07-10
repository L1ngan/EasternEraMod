# `struct` `FBatchActionData`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 批量处理的Action的数据

## Blueprint-exposed variables

### Property `ActionData`

| Field | Details |
|------|------|
| C++ type | [FActionData](GOAP_ManagerComponent__FActionData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FActionData ActionData;` |

**Notes:**

> Action数据

---

### Property `ActiveOwnerGuids`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid , bool>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FGuid , bool> ActiveOwnerGuids;` |

**Notes:**

> 活跃Action的Owner的Guid
> TMap<Owner的Guid , 占位符>

---
