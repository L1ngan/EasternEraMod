# `class` `UEastRimWorldAbilityCost`

**Source header:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldAbilityCost.h`

---

## Functional description (from header comments)

> Base class for additional ability costs: CheckCost verifies affordability, ApplyCost applies the cost; can be configured to only apply on hit

## Blueprint-exposed variables

### Property `bOnlyApplyCostOnHit`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Costs) bool bOnlyApplyCostOnHit = false;` |

**Notes:**

> If true, this cost should only be applied if this ability hits successfully

---
