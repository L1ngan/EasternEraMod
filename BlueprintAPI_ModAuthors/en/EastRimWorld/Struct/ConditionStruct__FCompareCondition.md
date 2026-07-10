# `struct` `FCompareCondition`

**Source header:** `EastRimWorld/Struct/ConditionStruct.h`

---

## Functional description (from header comments)

> Compare Condition data structure.

## Blueprint-exposed variables

### Property `Query`

| Field | Details |
|------|------|
| C++ type | `TEnumAsByte<ELUniQuery>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ELUniQuery> Query = ELUniQuery::IsEqualTo;` |

**Notes:**

> 比较类型

---

### Property `UniValue`

| Field | Details |
|------|------|
| C++ type | `FLUniValue` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FLUniValue UniValue;` |

**Notes:**

> 数值

---

### Property `ConditionDescribe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText ConditionDescribe;` |

**Notes:**

> 条件描述

---
