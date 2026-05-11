# `class` `ADoorNavLink`

**Source header:** `EastRimWorld/Building/DoorNavLink.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

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

**Source comments:**

> 更新导航链接

---
