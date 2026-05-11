# `struct` `FPostStationGenerateLine`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `GenerateLineConfig`

| Field | Details |
|------|------|
| C++ type | [FPostStationGenerateLineConfig](PostStationStruct__FPostStationGenerateLineConfig.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FPostStationGenerateLineConfig GenerateLineConfig;` |

---

### Property `GenerateInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FPostStationGenerateInfo](PostStationStruct__FPostStationGenerateInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPostStationGenerateInfo> GenerateInfos;` |

---

### Property `GenerateState`

| Field | Details |
|------|------|
| C++ type | `EPostStationGenerateState` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPostStationGenerateState GenerateState;` |

**Source comments:**

> 当前的生成状态

---

### Property `GenerateConditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCommonTaskCondition> GenerateConditions;` |

**Source comments:**

> 开始生成的条件

---

### Property `bCanStartGenerate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bCanStartGenerate;` |

**Source comments:**

> 能否开始生成

---

### Property `RetryGenerateInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RetryGenerateInterval;` |

**Source comments:**

> 重新尝试生成的间隔

---

### Property `OccupySockets`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> OccupySockets;` |

**Source comments:**

> 旧版每线独立池；运行时由 AEasternEraPostStationActor 的 NPCStation* 统一维护，读档后会清空并迁移

---

### Property `EmptySockets`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> EmptySockets;` |

---

### Property `SpawnTimesCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 SpawnTimesCount;` |

**Source comments:**

> 总计生成过多少次

---
