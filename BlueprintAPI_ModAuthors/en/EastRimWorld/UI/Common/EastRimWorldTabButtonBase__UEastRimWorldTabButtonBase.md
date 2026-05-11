# `class` `UEastRimWorldTabButtonBase`

**Source header:** `EastRimWorld/UI/Common/EastRimWorldTabButtonBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `LazyImage_Icon`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UCommonLazyImage>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,meta = (BindWidgetOptional)) TObjectPtr<UCommonLazyImage> LazyImage_Icon;` |

---

## Blueprint-exposed functions

### Function `SetIconBrush`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Brush` | `const FSlateBrush&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetIconBrush(const FSlateBrush& Brush);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
