# `struct` `FPostStationGenerateConfig`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## Functional description (from header comments)

> Post station generation config row: force ID, weight, generation config IDs, destroy conditions and lifetime.

## Blueprint-exposed variables

### Property `WorldForceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName WorldForceID;` |

**Notes:**

> 势力ID

---

### Property `BaseWeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BaseWeight;` |

**Notes:**

> 基础权重（最终权重=BaseWeight+好感度*FavorabilityWeightRate）

---

### Property `FavorabilityWeightRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float FavorabilityWeightRate;` |

**Notes:**

> 势力好感度权重系数

---

### Property `GenerateConfigIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> GenerateConfigIDs;` |

**Notes:**

> 生成配置ID(DT_MonsterGenerationConfig表ID)

---

### Property `DestroyCondition`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCommonTaskCondition> DestroyCondition;` |

**Notes:**

> List of conditions that trigger destruction of this generation.

---

### Property `DestroyRemoveTaskRecord`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> DestroyRemoveTaskRecord;` |

**Notes:**

> NPC销毁清除任务记录

---

### Property `ExistTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ExistTime;` |

**Notes:**

> 生成对象的存续时间(-1无限制)

---
