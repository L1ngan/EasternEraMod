# `struct` `FLightSkillResolvedParams`

**Source header:** `EastRimWorld/MartialArts/MartialArtsSkillEntryChangeLightSkill.h`

---

## Functional description (from header comments)

> 轻功运行时解算参数：以技能配置行（FGameAbilityStruct 的 LightSkill 字段）为基准，
> 叠加该武学全部 ChangeLightSkillParam 词条后得到。每次激活轻功时即时计算。

## Blueprint-exposed variables

### Property `Distance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") float Distance = 0.f;` |

**Notes:**

> 移动距离（cm）

---

### Property `Speed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") float Speed = 1.f;` |

**Notes:**

> 移动速度（cm/s）

---

### Property `bTeleportToFront`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") bool bTeleportToFront = false;` |

**Notes:**

> 瞬移到目标前方

---

### Property `bTeleportToBack`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") bool bTeleportToBack = false;` |

**Notes:**

> 瞬移到目标后方

---

### Property `TeleportOffset`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") float TeleportOffset = 0.f;` |

**Notes:**

> 瞬移落点相对目标朝向的偏移（cm）

---

### Property `CastingEffectLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") float CastingEffectLevel = 1.f;` |

**Notes:**

> 施法期间 GE 的应用等级

---

### Property `BeginSpawns`

| Field | Details |
|------|------|
| C++ type | `TArray<FAbilityProjectileStruct>` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") TArray<FAbilityProjectileStruct> BeginSpawns;` |

**Notes:**

> 起点生成物

---

### Property `EndSpawns`

| Field | Details |
|------|------|
| C++ type | `TArray<FAbilityProjectileStruct>` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") TArray<FAbilityProjectileStruct> EndSpawns;` |

**Notes:**

> 终点生成物

---

### Property `CollisionSpawns`

| Field | Details |
|------|------|
| C++ type | `TArray<FAbilityProjectileStruct>` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") TArray<FAbilityProjectileStruct> CollisionSpawns;` |

**Notes:**

> 碰撞处生成物（撞到障碍时在命中点生成）

---

### Property `CastingTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") FGameplayTagContainer CastingTags;` |

**Notes:**

> 施法期间标签

---

### Property `CastingGEs`

| Field | Details |
|------|------|
| C++ type | `TArray<TSubclassOf<UGameplayEffect>>` |
| Reflection specifiers | BlueprintReadOnly, Category="LightSkill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") TArray<TSubclassOf<UGameplayEffect>> CastingGEs;` |

**Notes:**

> 施法期间 GE

---
