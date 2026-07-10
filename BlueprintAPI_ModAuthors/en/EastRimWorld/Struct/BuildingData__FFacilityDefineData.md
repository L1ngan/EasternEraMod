# `struct` `FFacilityDefineData`

**Source header:** `EastRimWorld/Struct/BuildingData.h`

---

## Functional description (from header comments)

> Facility smart object definition data: contains the interaction anim montage and the facility interaction anim montage

## Blueprint-exposed variables

### Property `AnimMontage`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UAnimMontage>` |
| Reflection specifiers | BlueprintReadOnly, Category="Animation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "Animation") TSoftObjectPtr<UAnimMontage> AnimMontage;` |

**Notes:**

> 交互动画

---

### Property `FacilityAnimMontage`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UAnimMontage>` |
| Reflection specifiers | BlueprintReadOnly, Category="Animation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "Animation") TSoftObjectPtr<UAnimMontage> FacilityAnimMontage;` |

**Notes:**

> 设施交互动画

---
