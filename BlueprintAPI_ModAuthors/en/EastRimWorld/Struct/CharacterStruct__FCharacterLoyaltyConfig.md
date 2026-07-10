# `struct` `FCharacterLoyaltyConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 角色忠诚度配置

## Blueprint-exposed variables

### Property `Importance`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Loyalty" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loyalty") int32 Importance = 0;` |

**Notes:**

> 重要度

---

### Property `InitLoyalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Loyalty" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loyalty") float InitLoyalty = 0.f;` |

**Notes:**

> 初始忠诚

---

### Property `LoyaltyChangeCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Loyalty" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loyalty") float LoyaltyChangeCoefficient = 1.f;` |

**Notes:**

> 忠诚度变化系数

---

### Property `ForceFavorabilityChangeCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Loyalty" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loyalty") float ForceFavorabilityChangeCoefficient = 1.f;` |

**Notes:**

> 门派好感度变化系数

---

### Property `InviteSuccessRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Loyalty" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loyalty", meta = (ClampMin = 0.f, ClampMax = 1.f)) float InviteSuccessRate = 0.f;` |

**Notes:**

> 邀请成功率

---

### Property `RedeemProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Loyalty" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loyalty", meta = (ClampMin = 0.f, ClampMax = 1.f)) float RedeemProbability = 0.f;` |

**Notes:**

> 赎回概率

---

### Property `RedeemValueRange`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Loyalty" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loyalty") FVector2D RedeemValueRange = FVector2D::ZeroVector;` |

**Notes:**

> 赎回价值

---

### Property `RecruitSuccessRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Loyalty" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loyalty", meta = (ClampMin = 0.f, ClampMax = 1.f)) float RecruitSuccessRate = 0.f;` |

**Notes:**

> 招募成功率

---

### Property `AddReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Execution" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Execution") float AddReputation = 0.f;` |

**Notes:**

> 增加声望

---

### Property `ReduceFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Execution" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Execution") float ReduceFavorability = 0.f;` |

**Notes:**

> 减少好感度

---

### Property `ReduceJustice`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Execution" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Execution") float ReduceJustice = 0.f;` |

**Notes:**

> 减少正邪值

---
