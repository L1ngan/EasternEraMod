# `struct` `FModGenerationData`

**Source header:** `CreateModPlugin/Public/GenerationMonster.h`

---

## Functional description (from header comments)

> A single generation config entry: spawn positions, character IDs, count, character type, extra goals and gameplay effects applied on spawn

## Blueprint-exposed variables

### Property `GenerationPosition`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,FVector>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,FVector> GenerationPosition;` |

**Notes:**

> 生成的位置 如果是战场小兵模板则不填

---

### Property `CharacterIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CharacterIDs;` |

**Notes:**

> 生成的ID 最终生成的数量是 配置的ID * Number 字段(如果GenerationActorType配置为SpawnPostStationChivalrousByPresetID这里填预设角色表id)

---

### Property `Number`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Number = 1;` |

**Notes:**

> 生成的数量

---

### Property `CharacterType`

| Field | Details |
|------|------|
| C++ type | [EModCharacterType](BaseDataStruct__EModCharacterType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModCharacterType CharacterType = EModCharacterType::Human;` |

**Notes:**

> 角色类型

---

### Property `AddGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> AddGoals;` |

**Notes:**

> 新增的Goals

---

### Property `GameplayEffects`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftClassPtr<UGameplayEffect>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftClassPtr<UGameplayEffect>> GameplayEffects;` |

**Notes:**

> 生成时应用的GE

---

### Property `MovingRange`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MovingRange = 0.f;` |

**Notes:**

> 闲逛时移动的范围 以出生点为中心

---

### Property `ID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ID;` |

**Notes:**

> Unique ID of this generation config, used for hashing and equality comparison

---
