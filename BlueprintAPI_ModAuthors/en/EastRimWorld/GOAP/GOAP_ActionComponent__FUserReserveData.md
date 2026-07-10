# `struct` `FUserReserveData`

**Source header:** `EastRimWorld/GOAP/GOAP_ActionComponent.h`

---

## Functional description (from header comments)

> 用户预留的物品数据

## Blueprint-exposed variables

### Property `ItemID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FName ItemID;` |

**Notes:**

> 物品ID

---

### Property `Num`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 Num { 0 };` |

**Notes:**

> 预留数量

---
