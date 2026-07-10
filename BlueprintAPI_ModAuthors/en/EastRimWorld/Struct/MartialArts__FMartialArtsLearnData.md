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

**Notes:**

> 等级

---

### Property `TotalExperience`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="LearnData") float TotalExperience = 0.f;` |

**Notes:**

> 总经验

---

### Property `CurExperience`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="LearnData") float CurExperience = 0.f;` |

**Notes:**

> 当前

---

### Property `MartialArtsBookID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="LearnData") FName MartialArtsBookID;` |

**Notes:**

> 武学数据的ID

---

### Property `AttributeClassification`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsAttributeClassification](CommonEnum__EMartialArtsAttributeClassification.md) |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LearnData") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**Notes:**

> 武学属性分类

---

### Property `SkillEntryIdsByLevel`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="LearnData" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LearnData") TMap<int32, FName> SkillEntryIdsByLevel;` |

**Notes:**

> 每级对应的技能词条 RowName（DT SkillEntryConfig）。该级无 LevelSkillEntry 配置、池为空、标签不满足或抽取失败时，不包含该等级键。

---
