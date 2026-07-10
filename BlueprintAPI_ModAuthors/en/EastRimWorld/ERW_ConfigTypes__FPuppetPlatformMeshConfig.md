# `struct` `FPuppetPlatformMeshConfig`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 傀儡台

## Blueprint-exposed variables

### Property `MeshTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform MeshTransform;` |

**Notes:**

> 模型相对位置

---

### Property `IdleAnim`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UAnimationAsset>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UAnimationAsset> IdleAnim;` |

**Notes:**

> 待机动画

---
