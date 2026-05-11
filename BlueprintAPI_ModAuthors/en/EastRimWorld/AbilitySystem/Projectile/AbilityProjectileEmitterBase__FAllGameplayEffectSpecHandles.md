# `struct` `FAllGameplayEffectSpecHandles`

**Source header:** `EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `GameplayEffectSpecHandles`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayEffectSpecHandle>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGameplayEffectSpecHandle> GameplayEffectSpecHandles;` |

---

### Property `InstigatorActor`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> InstigatorActor = nullptr;` |

**Source comments:**

> 发起者

---

### Property `BuildingDamage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BuildingDamage = 0.f;` |

**Source comments:**

> 建筑物伤害

---

### Property `Target`

| Field | Details |
|------|------|
| C++ type | `TWeakObjectPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> Target = nullptr;` |

**Source comments:**

> 目标

---

### Property `InstigatorGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid InstigatorGuid;` |

**Source comments:**

> 发起者GUID

---
