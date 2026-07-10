# `struct` `FPostStationGenerateLine`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## Functional description (from header comments)

> Runtime data of one post station generate line: line config, per-slot generation infos, generate state and socket pools.

## Blueprint-exposed variables

### Property `GenerateLineConfig`

| Field | Details |
|------|------|
| C++ type | [FPostStationGenerateLineConfig](PostStationStruct__FPostStationGenerateLineConfig.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FPostStationGenerateLineConfig GenerateLineConfig;` |

**Notes:**

> Configuration of this generate line (FPostStationGenerateLineConfig).

---

### Property `GenerateInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FPostStationGenerateInfo](PostStationStruct__FPostStationGenerateInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPostStationGenerateInfo> GenerateInfos;` |

**Notes:**

> Generation infos of each slot on this line.

---

### Property `GenerateState`

| Field | Details |
|------|------|
| C++ type | [EPostStationGenerateState](PostStationStruct__EPostStationGenerateState.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPostStationGenerateState GenerateState;` |

**Notes:**

> 当前的生成状态

---

### Property `GenerateConditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCommonTaskCondition> GenerateConditions;` |

**Notes:**

> 开始生成的条件

---

### Property `bCanStartGenerate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bCanStartGenerate;` |

**Notes:**

> 能否开始生成

---

### Property `RetryGenerateInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RetryGenerateInterval;` |

**Notes:**

> 重新尝试生成的间隔

---

### Property `OccupySockets`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> OccupySockets;` |

**Notes:**

> 旧版每线独立池；运行时由 AEasternEraPostStationActor 的 NPCStation* 统一维护，读档后会清空并迁移

---

### Property `EmptySockets`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> EmptySockets;` |

**Notes:**

> Legacy per-line empty socket pool; at runtime maintained by the unified NPCStation pool on the post station actor and cleared/migrated after load.

---

### Property `SpawnTimesCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 SpawnTimesCount;` |

**Notes:**

> 总计生成过多少次

---
