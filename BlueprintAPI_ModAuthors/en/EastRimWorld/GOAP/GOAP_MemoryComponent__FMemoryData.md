# `struct` `FMemoryData`

**Source header:** `EastRimWorld/GOAP/GOAP_MemoryComponent.h`

---

## Functional description (from header comments)

> GOAP记忆数据

## Blueprint-exposed variables

### Property `Data`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGOAP_Value](GOAP_Data__FGOAP_Value.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FName , FGOAP_Value> Data;` |

**Source comments:**

> TMap<ID , GOAP值>

---
