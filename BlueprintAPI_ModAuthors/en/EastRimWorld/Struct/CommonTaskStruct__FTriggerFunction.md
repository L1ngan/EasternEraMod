# `struct` `FTriggerFunction`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> 触发额外功能

## Blueprint-exposed variables

### Property `OriginTaskID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName OriginTaskID;` |

**Notes:**

> Origin Task ID field.

---

### Property `OriginTaskGUID`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid OriginTaskGUID;` |

**Notes:**

> Origin Task GUID field.

---

### Property `TriggerFunctionType`

| Field | Details |
|------|------|
| C++ type | [ETriggerFunctionType](CommonTaskStruct__ETriggerFunctionType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETriggerFunctionType TriggerFunctionType = ETriggerFunctionType::None;` |

**Notes:**

> 触发额外功能的类型

---

### Property `TriggerTimingType`

| Field | Details |
|------|------|
| C++ type | [ETriggerTimingType](CommonTaskStruct__ETriggerTimingType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETriggerTimingType TriggerTimingType = ETriggerTimingType::None;` |

**Notes:**

> 触发的时机

---

### Property `DelayTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float DelayTime;` |

**Notes:**

> 延迟触发时间 配置-1则代表立即

---

### Property `TriggerPeriod`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FIntPoint TriggerPeriod;` |

**Notes:**

> 触发时段范围值(0-23)可以配置跨天(例(22~4))

---

### Property `NameParams`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> NameParams;` |

**Notes:**

> FName类型参数列表 （看TriggerFunctionType的注释）

---

### Property `IntParams`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<int32> IntParams;` |

**Notes:**

> Int Params field.

---
