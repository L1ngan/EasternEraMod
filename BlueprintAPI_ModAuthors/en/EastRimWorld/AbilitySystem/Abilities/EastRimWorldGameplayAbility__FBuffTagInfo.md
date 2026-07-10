# `struct` `FBuffTagInfo`

**Source header:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

---

## Functional description (from header comments)

> Buff tag info config: unique tag, icon, name and description

## Blueprint-exposed variables

### Property `BuffTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag BuffTag;` |

**Notes:**

> Buff的唯一Tag

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> Buff的图标

---

### Property `BuffName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BuffName;` |

**Notes:**

> Buff名称

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;` |

**Notes:**

> 描述

---
