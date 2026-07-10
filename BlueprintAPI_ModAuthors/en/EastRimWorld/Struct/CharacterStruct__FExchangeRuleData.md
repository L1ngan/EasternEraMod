# `struct` `FExchangeRuleData`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> Martial-arts exchange (sparring) rule data: random flag, allow flag and per-subtype toggle map

## Blueprint-exposed variables

### Property `bIsRandom`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsRandom = true;` |

**Notes:**

> Whether selection is random

---

### Property `bIsAllow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsAllow = true;` |

**Notes:**

> Whether this rule is allowed

---

### Property `SubTypeData`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32 , bool> SubTypeData;` |

**Notes:**

> Per-subtype toggle map (subtype index -> allowed or not)

---
