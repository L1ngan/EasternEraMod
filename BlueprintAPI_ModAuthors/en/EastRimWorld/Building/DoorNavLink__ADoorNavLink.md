# `class` `ADoorNavLink`

**Source header:** `EastRimWorld/Building/DoorNavLink.h`

---

## Functional description (from header comments)

> Door navigation link actor derived from ANavLinkProxy; the nav link's start/end positions and traversal direction can be updated at runtime.

## Blueprint-exposed functions

### Function `UpdateNavLink`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartPosition` | `FVector` |
| `EndPosition` | `FVector` |
| `(unnamed / type only)` | `ENavLinkDirection::Type NavLinkDirection = ENavLinkDirection::BothWays` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateNavLink(FVector StartPosition,FVector EndPosition,ENavLinkDirection::Type NavLinkDirection = ENavLinkDirection::BothWays);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新导航链接

---
