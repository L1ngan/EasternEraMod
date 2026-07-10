# `struct` `FGenerationInstanceInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 生成的实例

## Blueprint-exposed variables

### Property `GenerationGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid GenerationGuid;` |

**Notes:**

> 生成队列中的唯一GUID

---

### Property `InstanceGenerationActorInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FInstanceGenerationActorInfo](WorldStruct__FInstanceGenerationActorInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FInstanceGenerationActorInfo> InstanceGenerationActorInfos;` |

**Notes:**

> 生成的实例

---

### Property `GenerationNumber`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int GenerationNumber = 0;` |

**Notes:**

> 生成的数量

---
