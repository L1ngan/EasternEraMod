# `struct` `FApprenticeshipRelationEntry`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## Functional description (from header comments)

> 详情-单项关系变化(门派 Guid + 名称 + Delta)

## Blueprint-exposed variables

### Property `ForceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FGuid ForceGuid;` |

**Notes:**

> Force Guid field.

---

### Property `ForceDisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText ForceDisplayName;` |

**Notes:**

> Force Display Name field.

---

### Property `Delta`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") float Delta = 0.f;` |

**Notes:**

> Delta field.

---
