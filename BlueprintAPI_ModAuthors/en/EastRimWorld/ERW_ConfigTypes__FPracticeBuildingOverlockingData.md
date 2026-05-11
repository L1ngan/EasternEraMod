# `struct` `FPracticeBuildingOverlockingData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OverlockingLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 OverlockingLevel = 0;` |

**Source comments:**

> 超频优先级

---

### Property `OverlockingProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OverlockingProbability = 0.f;` |

**Source comments:**

> 超频概率

---

### Property `OverlockingProportion`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OverlockingProportion = 0.f;` |

**Source comments:**

> 超频比例

---

### Property `OverlockingExpend`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 OverlockingExpend = 0;` |

**Source comments:**

> 超频消耗

---

### Property `OverlockingTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OverlockingTime = 0.f;` |

**Source comments:**

> 超频时长

---

### Property `OverlockingCD`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OverlockingCD = 0.f;` |

**Source comments:**

> 冷却时长

---

### Property `PracticeReduceDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float PracticeReduceDurability = 0.f;` |

**Source comments:**

> 超频每次修炼减少的耐久度（负数）

---

### Property `CharacterPracticeGetBuffProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float CharacterPracticeGetBuffProbability = 0.f;` |

**Source comments:**

> 当前超频时角色修炼获得BUFF的概率

---

### Property `PracticeBuildingWhenOverlockingCharacterAddInjury`

| Field | Details |
|------|------|
| C++ type | TArray<[FOverlockingAddInjuryData](ERW_CommonTypes__FOverlockingAddInjuryData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FOverlockingAddInjuryData> PracticeBuildingWhenOverlockingCharacterAddInjury;` |

**Source comments:**

> 当前超频可能使修炼的角色获得的伤势数组

---

### Property `OverlockingIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> OverlockingIcon;` |

**Source comments:**

> 显示图标

---
