# `struct` `FAllGameplayEffectSpecHandles`

**Source header:** `EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase.h`

---

## Functional description (from header comments)

> Collection of all GameplayEffect information carried by a projectile (effect spec handles, control effects, instigator, target, building damage, etc.).

## Blueprint-exposed variables

### Property `GameplayEffectSpecHandles`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayEffectSpecHandle>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGameplayEffectSpecHandle> GameplayEffectSpecHandles;` |

**Notes:**

> Array of GameplayEffect spec handles.

---

### Property `ControlEffect`

| Field | Details |
|------|------|
| C++ type | `TArray<FControlEffectData>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() TArray<FControlEffectData> ControlEffect;` |

**Notes:**

> Array of control effect data.

---

### Property `InstigatorActor`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> InstigatorActor = nullptr;` |

**Notes:**

> 发起者

---

### Property `BuildingDamage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BuildingDamage = 0.f;` |

**Notes:**

> 建筑物伤害

---

### Property `Target`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> Target = nullptr;` |

**Notes:**

> 目标

---

### Property `InstigatorGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid InstigatorGuid;` |

**Notes:**

> 发起者GUID

---
