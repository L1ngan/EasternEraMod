# `class` `UEastRimWorldTabButtonBase`

**Source header:** `EastRimWorld/UI/Common/EastRimWorldTabButtonBase.h`

---

## Functional description (from header comments)

> East Rim World Tab Button Base UObject type.

## Blueprint-exposed variables

### Property `LazyImage_Icon`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UCommonLazyImage>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,meta = (BindWidgetOptional)) TObjectPtr<UCommonLazyImage> LazyImage_Icon;` |

**Notes:**

> Lazy Image Icon field.

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

**Notes:**

> Executes the Set Icon Brush operation.

---
