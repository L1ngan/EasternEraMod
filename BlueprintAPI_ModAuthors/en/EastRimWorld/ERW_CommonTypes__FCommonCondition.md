# `struct` `FCommonCondition`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> 通用条件

## Blueprint-exposed variables

### Property `ValueType`

| Field | Details |
|------|------|
| C++ type | `EConditionValueType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EConditionValueType ValueType { EConditionValueType::Int };` |

**Source comments:**

> 条件检测值类型

---

### Property `Query`

| Field | Details |
|------|------|
| C++ type | `EConditionQuery` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EConditionQuery Query { EConditionQuery::IsEqualTo };` |

**Source comments:**

> 条件判断规则

---

### Property `IdeaValue`

| Field | Details |
|------|------|
| C++ type | [FConditionValue](ERW_CommonTypes__FConditionValue.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite) FConditionValue IdeaValue;` |

**Source comments:**

> 想法条件值

---
