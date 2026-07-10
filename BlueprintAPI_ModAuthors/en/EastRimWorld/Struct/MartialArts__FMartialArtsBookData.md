# `struct` `FMartialArtsBookData`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 武学书籍

## Blueprint-exposed variables

### Property `MajorCategories`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsMajorCategories](MartialArts__EMartialArtsMajorCategories.md) |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") EMartialArtsMajorCategories MajorCategories = EMartialArtsMajorCategories::None;` |

**Notes:**

> 武学大类

---

### Property `AttributeClassification`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsAttributeClassification](CommonEnum__EMartialArtsAttributeClassification.md) |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**Notes:**

> 武学属性分类

---

### Property `UsageType`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsMajorUsageType](MartialArts__EMartialArtsMajorUsageType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsMajorUsageType UsageType = EMartialArtsMajorUsageType::None;` |

**Notes:**

> 使用方式

---

### Property `NeedWeaponTypes`

| Field | Details |
|------|------|
| C++ type | `TArray<EWeaponType>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TArray<EWeaponType> NeedWeaponTypes;` |

**Notes:**

> 此武学使用需要的武器类型

---

### Property `MartialArtsLevels`

| Field | Details |
|------|------|
| C++ type | TMap<int,[FMartialArtsLevel](MartialArts__FMartialArtsLevel.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TMap<int,FMartialArtsLevel> MartialArtsLevels;` |

**Notes:**

> 包含的武学等级

---

### Property `LevelConfig`

| Field | Details |
|------|------|
| C++ type | `FDataTableRowHandle` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel",meta = (RowType = "/Script/EastRimWorld.MartialArtsLevelConfig")) FDataTableRowHandle LevelConfig;` |

**Notes:**

> 等级经验配置

---

### Property `CoolDownTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") float CoolDownTime = 36.f;` |

**Notes:**

> 冷却时间

---

### Property `CoolDownTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") FGameplayTagContainer CoolDownTag;` |

**Notes:**

> 冷却标签

---

### Property `SkillEntryTag`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") FText SkillEntryTag;` |

**Notes:**

> 技能词条标签

---

### Property `FormatSkillEntryTag`

| Field | Details |
|------|------|
| C++ type | `FFormatText` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") FFormatText FormatSkillEntryTag;` |

**Notes:**

> 技能词条标签（格式化文本）

---

### Property `MartialArtsIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") TSoftObjectPtr<UTexture2D> MartialArtsIcon;` |

**Notes:**

> 武学图标

---

### Property `LevelGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") TSubclassOf<UGameplayEffect> LevelGameplayEffect;` |

**Notes:**

> 等级属性GE

---

### Property `GiveAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FName> GiveAbility;` |

**Notes:**

> 获得得技能

---

### Property `BaseAbility`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Entries" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") FName BaseAbility;` |

**Notes:**

> 关联的基础技能

---

### Property `LevelSkillEntry`

| Field | Details |
|------|------|
| C++ type | `TMap<int,FLevelSkillEntry>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TMap<int,FLevelSkillEntry> LevelSkillEntry;` |

**Notes:**

> 包含的词条池子

---

### Property `ComprehendCost`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts|参悟" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts|参悟") int32 ComprehendCost = 0;` |

**Notes:**

> 参悟（重洗全部已生效词条槽）消耗的历练点数

---

### Property `ExchangeFragmentCost`

| Field | Details |
|------|------|
| C++ type | `TMap<EItemQuality,int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="MartialArts|兑换" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts|兑换") TMap<EItemQuality,int32> ExchangeFragmentCost;` |

**Notes:**

> 兑换本武学所需残卷（品质→数量）。残卷来源 = ASaveGameDataActor::MartialFragments（按品质计数的全局武学残卷）；
> 玩家在每个所列品质上的残卷数 ≥ 对应数量，即可兑换本武学。

---
