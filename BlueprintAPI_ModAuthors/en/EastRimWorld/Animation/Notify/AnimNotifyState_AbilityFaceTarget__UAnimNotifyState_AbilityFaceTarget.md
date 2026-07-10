# `class` `UAnimNotifyState_AbilityFaceTarget`

**Source header:** `EastRimWorld/Animation/Notify/AnimNotifyState_AbilityFaceTarget.h`

---

## Functional description (from header comments)

> Anim notify state that keeps the character rotating to face the target during an ability, with a capped move distance toward the target.

## Blueprint-exposed variables

### Property `MoveMaxDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float MoveMaxDistance = 0.f;` |

**Notes:**

> Maximum distance to move toward the target (in centimeters), defaults to 0.

---

### Property `RotationSpeed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float RotationSpeed = 0.f;` |

**Notes:**

> Rotation speed when turning to face the target, defaults to 0.

---
