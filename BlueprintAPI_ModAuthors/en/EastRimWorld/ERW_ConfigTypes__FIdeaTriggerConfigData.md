# `struct` `FIdeaTriggerConfigData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 想法触发配置结构

## Blueprint-exposed variables

### Property `BuffID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName BuffID;` |

**Source comments:**

> BUFF配置表ID

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | TMap<ECommonConditionType , [FConditions](ERW_CommonTypes__FConditions.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ECommonConditionType , FConditions> Conditions;` |

**Source comments:**

> 触发条件
> TMap<条件类型 , 条件>

---
