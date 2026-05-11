# `struct` `FForceFavorabilityInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力好感信息

## Blueprint-exposed variables

### Property `ForceFavorabilityType`

| Field | Details |
|------|------|
| C++ type | `EForceFavorabilityType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) EForceFavorabilityType ForceFavorabilityType = EForceFavorabilityType::Neutrality;` |

---

### Property `Favorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) float Favorability = 0.f;` |

**Source comments:**

> 当前好感度

---

### Property `OldFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) float OldFavorability = 0.f;` |

**Source comments:**

> 变化之前的好感度

---
