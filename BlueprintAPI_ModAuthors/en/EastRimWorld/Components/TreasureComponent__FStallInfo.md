# `struct` `FStallInfo`

**Source header:** `EastRimWorld/Components/TreasureComponent.h`

---

## Functional description (from header comments)

> 珍宝阁购买信息

## Blueprint-exposed variables

### Property `StallDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) FText StallDesc;` |

**Notes:**

> 货架描述

---

### Property `StallSlots`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) int32 StallSlots = 0;` |

**Notes:**

> 当前已解锁栏位数量

---

### Property `TotalStallSlots`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) int32 TotalStallSlots = 0;` |

**Notes:**

> 栏位数量上限

---
