# `class` `AEnergySplineActor`

**Source header:** `EastRimWorld/System/Energy/EnergySplineActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed functions

### Function `InitSplineActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void InitSplineActor();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

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

**Source comments:**

> 更新联系的位置

---
