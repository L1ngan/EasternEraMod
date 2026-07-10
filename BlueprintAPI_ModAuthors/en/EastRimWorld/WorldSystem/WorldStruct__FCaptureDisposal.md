# `struct` `FCaptureDisposal`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 俘虏的处置

## Blueprint-exposed variables

### Property `CaptureCharacterDisposalType`

| Field | Details |
|------|------|
| C++ type | [ECaptureCharacterDisposalType](WorldStruct__ECaptureCharacterDisposalType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECaptureCharacterDisposalType CaptureCharacterDisposalType = ECaptureCharacterDisposalType::None;` |

**Notes:**

> 处置类型

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Weight = 1;` |

**Notes:**

> 权重

---

### Property `FavorabilityChanges`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float FavorabilityChanges = 0.f;` |

**Notes:**

> 好感度变化

---

### Property `ReputationChanges`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ReputationChanges = 0.f;` |

**Notes:**

> 声望变化

---
