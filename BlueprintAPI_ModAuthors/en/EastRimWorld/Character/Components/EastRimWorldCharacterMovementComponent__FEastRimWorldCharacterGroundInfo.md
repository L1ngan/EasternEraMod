# `struct` `FEastRimWorldCharacterGroundInfo`

**Source header:** `EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent.h`

---

## Functional description (from header comments)

> FEastRimWorldCharacterGroundInfo
> Information about the ground under the character.  It only gets updated as needed.

## Blueprint-exposed variables

### Property `GroundHitResult`

| Field | Details |
|------|------|
| C++ type | `FHitResult` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FHitResult GroundHitResult;` |

**Notes:**

> Hit result of the ground trace.

---

### Property `GroundDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float GroundDistance;` |

**Notes:**

> Distance from the character to the ground (in centimeters).

---
