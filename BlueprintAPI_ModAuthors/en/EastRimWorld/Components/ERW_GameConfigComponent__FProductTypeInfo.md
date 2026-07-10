# `struct` `FProductTypeInfo`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> Treasure pavilion product type info (type weight and sub-type weight map)

## Blueprint-exposed variables

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float Weight = 0.f;` |

**Notes:**

> Weight of this product type

---

### Property `SublevelInfo`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<int32 , float> SublevelInfo;` |

**Notes:**

> Map of sub-type index to weight

---
