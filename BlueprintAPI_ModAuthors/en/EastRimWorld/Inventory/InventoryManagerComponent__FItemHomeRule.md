# `struct` `FItemHomeRule`

**Source header:** `EastRimWorld/Inventory/InventoryManagerComponent.h`

---

## Functional description (from header comments)

> Item home rule set by a mod on a warehouse.

## Blueprint-exposed variables

### Property `ItemId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FName ItemId;` |

**Notes:**

> Item ID.

---

### Property `bExclusive`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) bool bExclusive = false;` |

**Notes:**

> Exclusive: other warehouses never take the item; otherwise preferred.

---

### Property `ModId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FName ModId;` |

**Notes:**

> The mod that wrote the rule; the rule is ignored while that mod is not loaded.

---
