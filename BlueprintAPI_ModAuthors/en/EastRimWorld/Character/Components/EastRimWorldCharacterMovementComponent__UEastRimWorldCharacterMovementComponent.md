# `class` `UEastRimWorldCharacterMovementComponent`

**Source header:** `EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent.h`

---

## Functional description (from header comments)

> UEastRimWorldCharacterMovementComponent
> The base character movement component class used by this project.

## Blueprint-exposed functions

### Function `GetGroundInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EastRimWorld|CharacterMovement" |
| Return type | const [FEastRimWorldCharacterGroundInfo](EastRimWorldCharacterMovementComponent__FEastRimWorldCharacterGroundInfo.md)& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|CharacterMovement") const FEastRimWorldCharacterGroundInfo& GetGroundInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the current ground info.  Calling this will update the ground info if it's out of date.

---
