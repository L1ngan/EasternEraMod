# `struct` `FRedemptionTextData`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> Redemption text table row: redemption texts mapped to a justice value range

## Blueprint-exposed variables

### Property `JusticeValueRange`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector2D JusticeValueRange = FVector2D::ZeroVector;` |

**Notes:**

> Applicable justice value range (X = min, Y = max)

---

### Property `RedemptionTexts`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FText> RedemptionTexts;` |

**Notes:**

> Redemption texts for this justice value range

---
