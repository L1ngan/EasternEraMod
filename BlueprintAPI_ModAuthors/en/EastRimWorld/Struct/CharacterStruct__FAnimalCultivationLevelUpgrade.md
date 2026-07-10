# `struct` `FAnimalCultivationLevelUpgrade`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 动物修炼等级升级功能配置
> 用于配置到达某个等级时增加的各项功能（经验值、行为树、Goals、能力、Buff、属性、掉落组、模型等）

## Blueprint-exposed variables

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Cultivation" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") int32 Level = 1;` |

**Notes:**

> 等级（到达此等级时应用以下配置）

---

### Property `BehaviorTree`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Behavior" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Behavior", meta = (AllowedClasses = "/Script/AIModule.BehaviorTree")) FSoftObjectPath BehaviorTree;` |

**Notes:**

> 更换的行为树（如果为空则不更换，保留之前的行为树）

---

### Property `AddGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Behavior" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Behavior") TArray<FName> AddGoals;` |

**Notes:**

> 添加的Goals列表（到达此等级时添加这些Goals）

---

### Property `RemoveGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Behavior" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Behavior") TArray<FName> RemoveGoals;` |

**Notes:**

> 移除的Goals列表（到达此等级时移除这些Goals）

---

### Property `AbilityIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TArray<FName> AbilityIDs;` |

**Notes:**

> 添加的能力ID列表（GameplayAbility），到达此等级时获得这些能力

---

### Property `BuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TArray<FName> BuffIDs;` |

**Notes:**

> 添加的Buff ID列表（GameplayEffect），到达此等级时获得这些Buff

---

### Property `AttributeBonusGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Attributes" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", meta = (AllowedClasses = "/Script/GameplayAbilities.GameplayEffect")) FSoftClassPath AttributeBonusGameplayEffect;` |

**Notes:**

> 属性提升GameplayEffect，到达此等级时应用此GE来提升属性
> 通过GE来修改属性，而不是直接配置属性值

---

### Property `OverrideDropItemConfig`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Loot" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot") TMap<FName, float> OverrideDropItemConfig;` |

**Notes:**

> 覆盖的掉落组配置（掉落组ID -> 权重），如果为空则不覆盖，保留之前的掉落组
> 到达此等级时，使用此配置覆盖原有的掉落组配置

---

### Property `MeshPath`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Appearance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance", meta = (AllowedClasses = "/Script/Engine.SkeletalMesh")) FSoftObjectPath MeshPath;` |

**Notes:**

> 更换的模型路径（如果为空则不更换，保留之前的模型）
> 到达此等级时更换为此模型

---

### Property `MeshScale`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Appearance" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance") FVector MeshScale = FVector(1.0f, 1.0f, 1.0f);` |

**Notes:**

> 模型缩放比例（可选，用于调整模型大小）

---
