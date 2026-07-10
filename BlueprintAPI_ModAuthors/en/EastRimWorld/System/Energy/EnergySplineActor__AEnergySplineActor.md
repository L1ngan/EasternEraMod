# `class` `AEnergySplineActor`

**Source header:** `EastRimWorld/System/Energy/EnergySplineActor.h`

---

## Functional description (from header comments)

> Energy Spline Actor actor type.

## Blueprint-exposed functions

### Function `InitSplineActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void InitSplineActor();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Executes the Init Spline Actor operation.

---

### Function `UpdateSplineLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartPosition` | `FVector` |
| `EndPosition` | `FVector` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void UpdateSplineLocation(FVector StartPosition,FVector EndPosition);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 更新联系的位置

---
