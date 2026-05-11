# `class` `AWorldLightActor`

**Source header:** `EastRimWorld/WorldSystem/WorldLightActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `WorldLightType`

| Field | Details |
|------|------|
| C++ type | `EWorldLightType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldLightType WorldLightType = EWorldLightType::None;` |

**Source comments:**

> 世界光照类型

---

## Blueprint-exposed functions

### Function `SetWorldLightEnable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bEnable` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetWorldLightEnable(bool bEnable);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 设置光照开关

---
