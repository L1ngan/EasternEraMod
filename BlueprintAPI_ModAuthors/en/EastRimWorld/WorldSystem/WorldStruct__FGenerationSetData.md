# `struct` `FGenerationSetData`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 生成的信息

## Blueprint-exposed variables

### Property `GenerationData`

| Field | Details |
|------|------|
| C++ type | TMap<[FGenerationData](WorldStruct__FGenerationData.md),int32> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FGenerationData,int32> GenerationData;` |

**Source comments:**

> 生成对应数据的权重

---

### Property `GenerationNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 GenerationNumber = 1;` |

**Source comments:**

> 一次生成时取多少个配置生成

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 TeamID = 255;` |

**Source comments:**

> 团队ID

---
