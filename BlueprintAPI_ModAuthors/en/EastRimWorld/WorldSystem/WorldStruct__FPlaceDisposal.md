# `struct` `FPlaceDisposal`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> Place Disposal data structure.

## Blueprint-exposed variables

### Property `PlaceDisposalType`

| Field | Details |
|------|------|
| C++ type | [EPlaceDisposalType](WorldStruct__EPlaceDisposalType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPlaceDisposalType PlaceDisposalType = EPlaceDisposalType::OccupyPlace;` |

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

> 基础权重

---

### Property `ChangeWeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ChangeWeight = 0;` |

**Notes:**

> 每一点正邪值改变的权重 邪恶为负值 正义为正值

---

### Property `GoodOpinion`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) int32 GoodOpinion = 0;` |

**Notes:**

> 好感度变化

---

### Property `JusticeValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 JusticeValue = 0;` |

**Notes:**

> 正义值变化

---

### Property `RewardMultiple`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RewardMultiple = 0;` |

**Notes:**

> 奖励倍率

---
