# `struct` `FRobotTypeAction`

**Source header:** `EastRimWorld/ERW_CommonTypes.h`

---

## Functional description (from header comments)

> Structure mapping robot types to action names.

## Blueprint-exposed variables

### Property `RobotTypeAction`

| Field | Details |
|------|------|
| C++ type | TMap<[ERobotType](ERW_Enumerations__ERobotType.md) , FName> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERobotType , FName> RobotTypeAction;` |

**Notes:**

> Map of action name per robot type.

---
