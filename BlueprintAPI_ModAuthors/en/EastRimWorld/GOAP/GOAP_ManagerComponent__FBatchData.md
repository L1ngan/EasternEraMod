# `struct` `FBatchData`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 批量处理的数据

## Blueprint-exposed variables

### Property `BatchData`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FBatchActions](GOAP_ManagerComponent__FBatchActions.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TMap<int32 , FBatchActions> BatchData;` |

**Notes:**

> TMap<批次 , 批量处理的Action的数据>

---

### Property `BatchIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() int32 BatchIndex { INDEX_NONE };` |

**Notes:**

> 批次索引

---
