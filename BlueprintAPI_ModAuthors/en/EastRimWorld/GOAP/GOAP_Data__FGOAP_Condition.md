# `struct` `FGOAP_Condition`

**Source header:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## Functional description (from header comments)

> GOAP判断条件

## Blueprint-exposed variables

### Property `ConditionType`

| Field | Details |
|------|------|
| C++ type | `EGOAP_ConditionType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EGOAP_ConditionType ConditionType { EGOAP_ConditionType::None };` |

**Source comments:**

> 前置条件类型

---

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ID;` |

**Source comments:**

> 前置条件类型对应的具体事物的ID

---

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGuid Guid;` |

**Source comments:**

> 前置条件类型对应的具体事物的ID

---

### Property `Attribute`

| Field | Details |
|------|------|
| C++ type | `FGameplayAttribute` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayAttribute Attribute;` |

**Source comments:**

> 前置条件类型对应的属性

---

### Property `TargetType`

| Field | Details |
|------|------|
| C++ type | `EGOAP_ConditionTargetType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EGOAP_ConditionTargetType TargetType { EGOAP_ConditionTargetType::Agent };` |

**Source comments:**

> 前置条件检测对象

---

### Property `ValueType`

| Field | Details |
|------|------|
| C++ type | `EGOAP_ConditionValueType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EGOAP_ConditionValueType ValueType { EGOAP_ConditionValueType::Bool };` |

**Source comments:**

> 前置条件检测值类型

---

### Property `Query`

| Field | Details |
|------|------|
| C++ type | `EConditionQuery` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) EConditionQuery Query { EConditionQuery::IsEqualTo };` |

**Source comments:**

> 前置条件判断规则

---

### Property `GOAPValue`

| Field | Details |
|------|------|
| C++ type | [FGOAP_Value](GOAP_Data__FGOAP_Value.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGOAP_Value GOAPValue;` |

**Source comments:**

> GOAP值

---

### Property `PathGoals`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPathGoalData](GOAP_Data__FPathGoalData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TMap<FName , FPathGoalData> PathGoals;` |

**Source comments:**

> 条件不满足时的达成路径GOAP目标
> TMap<GOAP目标ID , 目标对应具体事物的ID>

---
