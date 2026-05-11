# `struct` `FForceFavorabilityConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力好感度配置

## Blueprint-exposed variables

### Property `ForceFavorabilityType`

| Field | Details |
|------|------|
| C++ type | `EForceFavorabilityType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceFavorabilityType ForceFavorabilityType = EForceFavorabilityType::Bland;` |

**Source comments:**

> 好感度类型

---

### Property `FavorabilityMin`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float FavorabilityMin = 0.f;` |

**Source comments:**

> 区间最小值

---

### Property `FavorabilityMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float FavorabilityMax = 0.f;` |

**Source comments:**

> 区间最大值

---

### Property `FavoriteName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText FavoriteName;` |

**Source comments:**

> 好感名称

---
