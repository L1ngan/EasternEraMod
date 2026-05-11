# `class` `UPlayerDiplomacyConfigAsset`

**Source header:** `EastRimWorld/Struct/DiplomacyStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `DiplomacyNumLevelLimit`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32,int32> DiplomacyNumLevelLimit;` |

**Source comments:**

> 门派等级可以结交门派的数量限制

---

### Property `DiplomacyCostMoneyCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float DiplomacyCostMoneyCoefficient;` |

**Source comments:**

> 结交所需金钱 = 对方门派声望 * 此系数

---

### Property `DiplomacySuccessAddFavor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float DiplomacySuccessAddFavor;` |

**Source comments:**

> 结交成功增加好感度

---

### Property `DiplomacySuccessTipText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DiplomacySuccessTipText;` |

**Source comments:**

> 结交成功提示文本

---

### Property `BrokenColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrokenColdDown;` |

**Source comments:**

> 断交操作冷却

---

### Property `BrokenColdDownTipText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BrokenColdDownTipText;` |

**Source comments:**

> 断交操作冷却提示文本

---

### Property `BrokenReduceFavor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrokenReduceFavor;` |

**Source comments:**

> 断交减少的好感度(填正数)

---

### Property `RequireTaskColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequireTaskColdDown;` |

**Source comments:**

> 请求任务冷却

---

### Property `RequireHelpColdDown`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequireHelpColdDown;` |

**Source comments:**

> 请求援助冷却

---
