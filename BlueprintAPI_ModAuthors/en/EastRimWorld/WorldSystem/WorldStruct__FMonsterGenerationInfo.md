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

**Notes:**

> 生成的配置ID

---

### Property `GenerationGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid GenerationGuid;` |

**Notes:**

> 生成信息Guid

---

### Property `GenerationState`

| Field | Details |
|------|------|
| C++ type | [EGenerationStateType](WorldStruct__EGenerationStateType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGenerationStateType GenerationState = EGenerationStateType::None;` |

**Notes:**

> 生成的状态

---

### Property `GenerationMonster`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> GenerationMonster;` |

**Notes:**

> 生成的怪物

---

### Property `StateTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StateTime = 0.f;` |

**Notes:**

> 当前状态时间

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**Notes:**

> TeamID

---

### Property `bUpdateGenerationTime`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bUpdateGenerationTime = false;` |

**Notes:**

> 广播生成事件

---

### Property `NeeGenerateSetData`

| Field | Details |
|------|------|
| C++ type | TArray<[FGenerationSetData](WorldStruct__FGenerationSetData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGenerationSetData> NeeGenerateSetData;` |

**Notes:**

> 需要生成的实例

---
