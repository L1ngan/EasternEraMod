# `class` `UAreaPaletteAsset`

**Source header:** `EastRimWorld/System/AreaControl/AreaPaletteAsset.h`

---

## Functional description (from header comments)

> Area Palette Asset UObject type.

## Blueprint-exposed variables

### Property `Palette`

| Field | Details |
|------|------|
| C++ type | TArray<[FAreaPaletteEntry](AreaControlTypes__FAreaPaletteEntry.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Area" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Area") TArray<FAreaPaletteEntry> Palette;` |

**Notes:**

> 调色板槽位（默认 12 槽，色值待美术填）

---

## Blueprint-exposed functions

### Function `GetPaletteColors`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Area" |
| Return type | `TArray<FColor>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Area") TArray<FColor> GetPaletteColors() const { TArray<FColor> Colors; Colors.Reserve(Palette.Num()); for (const FAreaPaletteEntry& Entry : Palette) { Colors.Add(Entry.Color); } return Colors; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> UI 调色板数据源

---
