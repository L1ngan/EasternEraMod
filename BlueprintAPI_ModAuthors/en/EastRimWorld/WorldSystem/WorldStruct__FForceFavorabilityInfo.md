# `struct` `FForceFavorabilityInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力好感信息

## Blueprint-exposed variables

### Property `Guid1`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid1;` |

**Notes:**

> Guid 1 field.

---

### Property `Guid2`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid2;` |

**Notes:**

> Guid 2 field.

---

### Property `ForceFavorabilityType`

| Field | Details |
|------|------|
| C++ type | [EForceFavorabilityType](WorldStruct__EForceFavorabilityType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) EForceFavorabilityType ForceFavorabilityType = EForceFavorabilityType::Neutrality;` |

**Notes:**

> Force Favorability Type field.

---

### Property `Favorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) float Favorability = 0.f;` |

**Notes:**

> 当前好感度

---

### Property `OldFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly) float OldFavorability = 0.f;` |

**Notes:**

> 变化之前的好感度

---
