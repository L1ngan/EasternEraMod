# `struct` `FApprenticeshipExpEntry`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 详情-单项武学经验(分类短名 + 累计经验)

## Blueprint-exposed variables

### Property `MartialClass`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") EMartialArtsAttributeClassification MartialClass = EMartialArtsAttributeClassification::None;` |

**Notes:**

> Martial Class field.

---

### Property `ClassDisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText ClassDisplayName;` |

**Notes:**

> Class Display Name field.

---

### Property `Exp`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") float Exp = 0.f;` |

**Notes:**

> Exp field.

---
