# `struct` `FModGroupCorrespondingAnim`

**Source header:** `CreateModPlugin/Public/ItemDataStruct.h`

---

## Functional description (from header comments)

> Animation group struct: mapping from group index to anim montage, used for behavior-related animation configs

## Blueprint-exposed variables

### Property `AnimGroup`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UAnimMontage>> AnimGroup;` |

**Notes:**

> Animation group map; key is the group index, value is the corresponding anim montage (soft reference)

---
