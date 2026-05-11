# `struct` `FMonsterGenerationInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 怪物生成

## Blueprint-exposed variables

### Property `MonsterGenerationConfig`

| Field | Details |
|------|------|
| C++ type | [FMonsterGenerationConfig](WorldStruct__FMonsterGenerationConfig.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FMonsterGenerationConfig MonsterGenerationConfig;` |

**Source comments:**

> 生成的配置ID

---

### Property `GenerationGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid GenerationGuid;` |

**Source comments:**

> 生成信息Guid

---

### Property `GenerationState`

| Field | Details |
|------|------|
| C++ type | `EGenerationStateType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGenerationStateType GenerationState = EGenerationStateType::None;` |

**Source comments:**

> 生成的状态

---

### Property `GenerationMonster`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> GenerationMonster;` |

**Source comments:**

> 生成的怪物

---

### Property `StateTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StateTime = 0.f;` |

**Source comments:**

> 当前状态时间

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**Source comments:**

> TeamID

---

### Property `bUpdateGenerationTime`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bUpdateGenerationTime = false;` |

**Source comments:**

> 广播生成事件

---

### Property `NeeGenerateSetData`

| Field | Details |
|------|------|
| C++ type | TArray<[FGenerationSetData](WorldStruct__FGenerationSetData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGenerationSetData> NeeGenerateSetData;` |

**Source comments:**

> 需要生成的实例

---
