# `struct` `FPlaceDisposal`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `PlaceDisposalType`

| Field | Details |
|------|------|
| C++ type | `EPlaceDisposalType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPlaceDisposalType PlaceDisposalType = EPlaceDisposalType::OccupyPlace;` |

**Source comments:**

> 处置类型

---

### Property `Weight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Weight = 1;` |

**Source comments:**

> 基础权重

---

### Property `ChangeWeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ChangeWeight = 0;` |

**Source comments:**

> 每一点正邪值改变的权重 邪恶为负值 正义为正值

---

### Property `GoodOpinion`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) int32 GoodOpinion = 0;` |

**Source comments:**

> 好感度变化

---

### Property `JusticeValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 JusticeValue = 0;` |

**Source comments:**

> 正义值变化

---

### Property `RewardMultiple`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RewardMultiple = 0;` |

**Source comments:**

> 奖励倍率

---
