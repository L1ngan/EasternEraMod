# `struct` `FGenerationData`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> Generation Data data structure.

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

### Property `GenerationRotation`

| Field | Details |
|------|------|
| C++ type | `FRotator` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FRotator GenerationRotation = FRotator::ZeroRotator;` |

**Notes:**

> 生成的方向 如果是战场小兵模板则不填

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

### Property `bGenerationRemove`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bGenerationRemove = false;` |

**Notes:**

> 生成后是否移除

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
| C++ type | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECharacterType CharacterType = ECharacterType::Human;` |

**Notes:**

> 角色类型

---

### Property `BehaviorTree`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Team" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Team", meta = (AllowedClasses = "/Script/AIModule.BehaviorTree")) FSoftObjectPath BehaviorTree;` |

**Notes:**

> 对应的行为树 不配置则使用默认阵营行为树

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

### Property `RemoveGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> RemoveGoals;` |

**Notes:**

> 移除的Goals

---

### Property `BranchingIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BranchingIndex = 0;` |

**Notes:**

> 分路战场中的分路 从0开始 (例如 战场中3条路  填0 1 2）

---

### Property `BattlefieldRolesType`

| Field | Details |
|------|------|
| C++ type | [EBattlefieldRolesType](../Struct/CommonEnum__EBattlefieldRolesType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattlefieldRolesType BattlefieldRolesType = EBattlefieldRolesType::None;` |

**Notes:**

> 战场中生成后的类型 用于区分不同功能

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

### Property `LevelGameplayEffects`

| Field | Details |
|------|------|
| C++ type | TMap<TSoftClassPtr<UGameplayEffect>, [FEffectLevelData](WorldStruct__FEffectLevelData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSoftClassPtr<UGameplayEffect>, FEffectLevelData> LevelGameplayEffects;` |

**Notes:**

> 生成时应用的带等级GE Key为GE类 Value为等级信息(等级来源+额外等级)

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

### Property `RandomDiscipleConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RandomDiscipleConfigID;` |

**Notes:**

> 随机弟子生成配置ID（DT_RandomDiscipleConfig 表行；仅当所在 FMonsterGenerationConfig.GenerationActorType == SpawnRandomDisciple 时生效）
> CharacterIDs 字段在 SpawnRandomDisciple 类型下留空即可，不参与生成逻辑

---
