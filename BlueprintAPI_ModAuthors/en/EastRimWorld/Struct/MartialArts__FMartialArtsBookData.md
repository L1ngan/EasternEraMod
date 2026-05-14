# `struct` `FMartialArtsBookData`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 武学书籍

## Blueprint-exposed variables

### Property `MajorCategories`

| Field | Details |
|------|------|
| C++ type | `EMartialArtsMajorCategories` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") EMartialArtsMajorCategories MajorCategories = EMartialArtsMajorCategories::None;` |

**Source comments:**

> 武学大类

---

### Property `AttributeClassification`

| Field | Details |
|------|------|
| C++ type | `EMartialArtsAttributeClassification` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**Source comments:**

> 武学属性分类

---

### Property `UsageType`

| Field | Details |
|------|------|
| C++ type | `EMartialArtsMajorUsageType` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsMajorUsageType UsageType = EMartialArtsMajorUsageType::None;` |

**Source comments:**

> 使用方式

---

### Property `NeedWeaponTypes`

| Field | Details |
|------|------|
| C++ type | `TArray<EWeaponType>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TArray<EWeaponType> NeedWeaponTypes;` |

**Source comments:**

> 此武学使用需要的武器类型

---

### Property `MartialArtsLevels`

| Field | Details |
|------|------|
| C++ type | TMap<int,[FMartialArtsLevel](MartialArts__FMartialArtsLevel.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TMap<int,FMartialArtsLevel> MartialArtsLevels;` |

**Source comments:**

> 包含的武学等级

---

### Property `LevelConfig`

| Field | Details |
|------|------|
| C++ type | `FDataTableRowHandle` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel",meta = (RowType = "/Script/EastRimWorld.MartialArtsLevelConfig")) FDataTableRowHandle LevelConfig;` |

**Source comments:**

> 等级经验配置

---

### Property `CoolDownTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") float CoolDownTime = 36.f;` |

**Source comments:**

> 冷却时间

---

### Property `CoolDownTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") FGameplayTagContainer CoolDownTag;` |

**Source comments:**

> 冷却标签

---

### Property `SkillEntryTag`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") FText SkillEntryTag;` |

**Source comments:**

> 技能词条标签

---

### Property `FormatSkillEntryTag`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") FFormatText FormatSkillEntryTag;` |

**Source comments:**

> 技能词条标签（格式化文本）

---

### Property `MartialArtsIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") TSoftObjectPtr<UTexture2D> MartialArtsIcon;` |

**Source comments:**

> 武学图标

---

### Property `LevelGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") TSubclassOf<UGameplayEffect> LevelGameplayEffect;` |

**Source comments:**

> 等级属性GE

---

### Property `GiveAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FName> GiveAbility;` |

**Source comments:**

> 获得得技能

---

### Property `BaseAbility`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") FName BaseAbility;` |

**Source comments:**

> 关联的基础技能

---
