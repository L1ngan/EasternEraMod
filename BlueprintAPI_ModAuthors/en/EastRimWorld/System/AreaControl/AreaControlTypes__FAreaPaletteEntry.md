# `struct` `FAreaPaletteEntry`

**Source header:** `EastRimWorld/System/AreaControl/AreaControlTypes.h`

---

## Functional description (from header comments)

> 调色板单项（默认 12 槽，色值待美术填，R8）。

## Blueprint-exposed variables

### Property `ColorName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ColorName;` |

**Notes:**

> 颜色名（UI 显示/查找）

---

### Property `Color`

| Field | Details |
|------|------|
| C++ type | `FColor` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor Color = FColor::White;` |

**Notes:**

> 颜色值

---
