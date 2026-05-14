# `struct` `FBatchActions`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 批量处理的Action

## Blueprint-exposed variables

### Property `ResourceActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FBatchActionData](GOAP_ManagerComponent__FBatchActionData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , FBatchActionData> ResourceActions;` |

**Source comments:**

> TMap<资源ID , 资源Action数据>

---

### Property `ConstructActions`

| Field | Details |
|------|------|
| C++ type | [FBatchActionData](GOAP_ManagerComponent__FBatchActionData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FBatchActionData ConstructActions;` |

**Source comments:**

> 建造Action

---
