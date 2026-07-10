# `struct` `FPrioriBatchData`

**Source header:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## Functional description (from header comments)

> 优先执行的批量Action数据

## Blueprint-exposed variables

### Property `Actions`

| Field | Details |
|------|------|
| C++ type | [FBatchActions](GOAP_ManagerComponent__FBatchActions.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FBatchActions Actions;` |

**Notes:**

> Batch action set contained in this batch

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
