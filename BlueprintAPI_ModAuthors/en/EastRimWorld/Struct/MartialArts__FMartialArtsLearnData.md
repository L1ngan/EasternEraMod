# `struct` `FMartialArtsLearnData`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 学习的武学信息

## Blueprint-exposed variables

### Property `Level`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="LearnData") int Level = 0;` |

**Source comments:**

> 等级

---

### Property `TotalExperience`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="LearnData") float TotalExperience = 0.f;` |

**Source comments:**

> 总经验

---

### Property `CurExperience`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="LearnData") float CurExperience = 0.f;` |

**Source comments:**

> 当前

---

### Property `MartialArtsBookID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LearnData") FName MartialArtsBookID;` |

**Source comments:**

> 武学数据的ID

---

### Property `AttributeClassification`

| Field | Details |
|------|------|
| C++ type | `EMartialArtsAttributeClassification` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LearnData") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**Source comments:**

> 武学属性分类

---
