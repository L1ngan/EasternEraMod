# `struct` `FBreakdownActionConfigData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 崩溃行为配置结构

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Name;` |

**Notes:**

> 名称

---

### Property `BreakdownType`

| Field | Details |
|------|------|
| C++ type | [EBreakdownType](ERW_Enumerations__EBreakdownType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EBreakdownType BreakdownType = EBreakdownType::Depression;` |

**Notes:**

> 崩溃类型

---

### Property `Exist`

| Field | Details |
|------|------|
| C++ type | TMap<[EBreakdownExistType](ERW_Enumerations__EBreakdownExistType.md) , int32> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<EBreakdownExistType , int32> Exist;` |

**Notes:**

> 崩溃存在类型

---

### Property `RecoverBuffID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName RecoverBuffID;` |

**Notes:**

> 崩溃结束后触发的恢复BUFF

---

### Property `NoBreakdownTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 NoBreakdownTime { 0 };` |

**Notes:**

> 恢复期间不会崩溃持续时间(秒)

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FText> Desc;` |

**Notes:**

> 描述

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Weight { 0 };` |

**Notes:**

> 权重

---

### Property `Conditions`

| Field | Details |
|------|------|
| C++ type | TMap<[ECommonConditionType](ERW_Enumerations__ECommonConditionType.md) , [FConditions](ERW_CommonTypes__FConditions.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ECommonConditionType , FConditions> Conditions;` |

**Notes:**

> 满足条件
> TMap<条件类型 , 条件>

---
