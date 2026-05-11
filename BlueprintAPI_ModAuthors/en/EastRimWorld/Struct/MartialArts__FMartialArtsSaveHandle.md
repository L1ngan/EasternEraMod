# `struct` `FMartialArtsSaveHandle`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 学习武学后保存的信息

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName Name;` |

**Source comments:**

> 武学名称

---

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Level = 0;` |

**Source comments:**

> 武学等级

---

### Property `SpecHandle`

| Field | Details |
|------|------|
| C++ type | `FActiveGameplayEffectHandle` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FActiveGameplayEffectHandle SpecHandle;` |

**Source comments:**

> GE句柄

---
