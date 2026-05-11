# `struct` `FRoofActors`

**Source header:** `EastRimWorld/Components/ERW_AreaOperationComponent.h`

---

## Functional description (from header comments)

> 同一屋顶部位类型显示和隐藏的Actor

## Blueprint-exposed variables

### Property `VisibleActors`

| Field | Details |
|------|------|
| C++ type | `TMap<AActor* , bool>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<AActor* , bool> VisibleActors;` |

**Source comments:**

> 显示的Actor
> TMap<Actor , 占位符>

---

### Property `HideActors`

| Field | Details |
|------|------|
| C++ type | `TMap<AActor* , bool>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<AActor* , bool> HideActors;` |

**Source comments:**

> 隐藏的Actor
> TMap<Actor , 占位符>

---
