# `struct` `FParticleEffectData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 建筑粒子效果数据

## Blueprint-exposed variables

### Property `UseNiagara`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool UseNiagara { false };` |

**Notes:**

> 是否使用Niagara粒子

---

### Property `NiagaraSystem`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<class UNiagaraSystem>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , meta=(EditConditionHides , EditCondition="UseNiagara")) TSoftObjectPtr<class UNiagaraSystem> NiagaraSystem;` |

**Notes:**

> Niagara粒子效果

---

### Property `ParticleSystem`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<class UParticleSystem>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , meta=(EditConditionHides , EditCondition="!UseNiagara")) TSoftObjectPtr<class UParticleSystem> ParticleSystem;` |

**Notes:**

> 粒子效果

---

### Property `Transform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FTransform Transform;` |

**Notes:**

> 粒子效果的Transform

---
