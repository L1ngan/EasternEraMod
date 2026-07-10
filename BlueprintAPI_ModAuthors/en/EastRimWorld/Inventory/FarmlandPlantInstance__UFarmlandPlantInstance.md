# `class` `UFarmlandPlantInstance`

**Source header:** `EastRimWorld/Inventory/FarmlandPlantInstance.h`

---

## Functional description (from header comments)

> Farmland plant instance, a collectible belonging to a specific farmland

## Blueprint-exposed variables

### Property `bAutoOperator`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bAutoOperator;` |

**Notes:**

> 区分是自动操作还是玩家手动操作

---

### Property `BelongFarmlandId`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleInstanceOnly,meta=(AllowPrivateAccess)) FGuid BelongFarmlandId;` |

**Notes:**

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

**Notes:**

> Returns the GUID of the farmland this plant belongs to

---
