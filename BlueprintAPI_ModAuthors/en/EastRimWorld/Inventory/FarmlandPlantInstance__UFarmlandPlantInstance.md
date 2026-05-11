# `class` `UFarmlandPlantInstance`

**Source header:** `EastRimWorld/Inventory/FarmlandPlantInstance.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `bAutoOperator`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bAutoOperator;` |

**Source comments:**

> 区分是自动操作还是玩家手动操作

---

### Property `BelongFarmlandId`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleInstanceOnly,meta=(AllowPrivateAccess)) FGuid BelongFarmlandId;` |

**Source comments:**

> 归属田地的guid

---

## Blueprint-exposed functions

### Function `GetBelongFarmlandId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `const FGuid&` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) const FGuid& GetBelongFarmlandId() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---
