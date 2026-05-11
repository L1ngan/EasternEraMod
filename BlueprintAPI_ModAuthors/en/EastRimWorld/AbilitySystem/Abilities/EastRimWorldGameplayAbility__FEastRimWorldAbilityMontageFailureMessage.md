# `struct` `FEastRimWorldAbilityMontageFailureMessage`

**Source header:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

---

## Functional description (from header comments)

> Failure reason that can be used to play an animation montage when a failure occurs

## Blueprint-exposed variables

### Property `PlayerController`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<APlayerController>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<APlayerController> PlayerController = nullptr;` |

---

### Property `FailureTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FGameplayTagContainer FailureTags;` |

**Source comments:**

> All the reasons why this ability has failed

---

### Property `FailureMontage`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UAnimMontage>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TObjectPtr<UAnimMontage> FailureMontage = nullptr;` |

---
