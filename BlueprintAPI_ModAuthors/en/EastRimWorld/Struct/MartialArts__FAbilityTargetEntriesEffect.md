# `struct` `FAbilityTargetEntriesEffect`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 技能触发的词条效果

## Blueprint-exposed variables

### Property `AbilityClassifyTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") FGameplayTag AbilityClassifyTag;` |

**Source comments:**

> 技能分类标签(什么技能标签会触发这些效果)

---

### Property `EffectContainerMap`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;` |

**Source comments:**

> 技能效果

---

### Property `AnimationSpawnProjectiles`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag,FAbilityProjectileStruct>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") TMap<FGameplayTag,FAbilityProjectileStruct> AnimationSpawnProjectiles;` |

**Source comments:**

> 触发的投射物

---

### Property `AttributesTag`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") TArray<FGameplayTag> AttributesTag;` |

**Source comments:**

> Tag属性分类标签(例如是什么伤害类型)

---

### Property `ClassifyTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") FGameplayTag ClassifyTag;` |

**Source comments:**

> 分类标签

---
