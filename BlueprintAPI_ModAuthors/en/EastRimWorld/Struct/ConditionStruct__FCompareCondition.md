# `struct` `FCompareCondition`

**Source header:** `EastRimWorld/Struct/ConditionStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `Query`

| Field | Details |
|------|------|
| C++ type | `TEnumAsByte<ELUniQuery>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ELUniQuery> Query = ELUniQuery::IsEqualTo;` |

**Source comments:**

> 比较类型

---

### Property `UniValue`

| Field | Details |
|------|------|
| C++ type | `FLUniValue` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FLUniValue UniValue;` |

**Source comments:**

> 数值

---

### Property `ConditionDescribe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText ConditionDescribe;` |

**Source comments:**

> 条件描述

---
