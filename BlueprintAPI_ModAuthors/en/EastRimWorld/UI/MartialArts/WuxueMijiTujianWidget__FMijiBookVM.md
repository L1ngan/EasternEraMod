# `struct` `FMijiBookVM`

**Source header:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## Functional description (from header comments)

> 秘籍书视图模型

## Blueprint-exposed variables

### Property `BookID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName BookID;` |

**Notes:**

> 书籍ID（FMartialArtsBookData 的 ID，DT 行名）

---

### Property `BookName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText BookName;` |

**Notes:**

> 书籍名称

---

### Property `CategoryID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName CategoryID;` |

**Notes:**

> 所属分类ID（FMartialArtsBookCategoryData 的 ID）

---

### Property `CollectState`

| Field | Details |
|------|------|
| C++ type | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EMijiCollectState CollectState = EMijiCollectState::Uncollected;` |

**Notes:**

> 收集状态

---

### Property `MoveIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FName> MoveIDs;` |

**Notes:**

> 包含的招式ID（源自 FMartialArtsBookData::GiveAbility）

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Desc;` |

**Notes:**

> 招式描述·第1行（技能标签，来自 FMartialArtsBookData::FormatSkillEntryTag，对齐 MADetailTip 的 W_Item_Desc_jnbq）

---

### Property `Desc2`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Desc2;` |

**Notes:**

> 招式描述·第2行（首层词条说明，来自 MartialArtsLevels 首层 FormatEntriesDescribe，对齐 W_Item_Desc_1stCeng）

---

### Property `Founder`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Founder;` |

**Notes:**

> 祖师

---

### Property `Quality`

| Field | Details |
|------|------|
| C++ type | `EItemQuality` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EItemQuality Quality = EItemQuality::None;` |

**Notes:**

> 品质（来源：书本自身 FInventoryGeneralData::ItemQuality，按本区分）
> 视觉：BP 用此枚举查 GameConfigComponent 的 ItemQualityName / ItemQualityFrameTexture

---

### Property `RealmReq`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 RealmReq = 0;` |

**Notes:**

> 阅读/修炼需要的境界等级（来自 FBookInfo::RealmLevel）

---

### Property `RealmReqText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText RealmReqText;` |

**Notes:**

> 境界门槛中文名（=GM->GetRealmDataByLevel(RealmReq).LevelName，招式详情"境界门槛"行显示用）

---

### Property `Tiers`

| Field | Details |
|------|------|
| C++ type | TArray<[FMijiTierVM](WuxueMijiTujianWidget__FMijiTierVM.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FMijiTierVM> Tiers;` |

**Notes:**

> 逐层进度（来自 FMartialArtsBookData::MartialArtsLevels，按 Level 升序）

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> 秘籍图片（来自 FMartialArtsBookData::MartialArtsIcon，中间秘籍图片格用）

---

### Property `MajorCategories`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsMajorCategories](../../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EMartialArtsMajorCategories MajorCategories = EMartialArtsMajorCategories::None;` |

**Notes:**

> 武学大类（来自 FMartialArtsBookData::MajorCategories）

---

### Property `AttributeClassification`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**Notes:**

> 属性分类（来自 FMartialArtsBookData::AttributeClassification）

---

### Property `RequiredAttrText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText RequiredAttrText;` |

**Notes:**

> 属性要求（C++ 预 join 的单行文本，如"悟性 ≥ 30  智力 ≥ 20"；来自 FBookInfo::Attributes）

---

### Property `LearnableCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 LearnableCount = 0;` |

**Notes:**

> 可学习次数（玩家拥有的该书实体按耐久模型可学次数之和，见 GetLearnableCount）

---

### Property `CoolDownTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") float CoolDownTime = 0.f;` |

**Notes:**

> 冷却时间（来自 FMartialArtsBookData::CoolDownTime）

---

### Property `FragmentOwned`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 FragmentOwned = 0;` |

**Notes:**

> 残卷：已拥有张数（来自 UMartialArtsFragmentSubsystem::GetOwnedFragmentCount）

---

### Property `FragmentTotal`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 FragmentTotal = 0;` |

**Notes:**

> 残卷：需要总张数（残卷配方 RequiredFragmentItemIDs 数量；0=该书无残卷配方）

---

### Property `ExchangeCostText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText ExchangeCostText;` |

**Notes:**

> 兑换残卷"拥有/需要"文本(如"3/99"；书未配置 ExchangeFragmentCost 则为空)

---

### Property `ExchangeQualityText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText ExchangeQualityText;` |

**Notes:**

> 兑换残卷品质名(如"金色秘籍残卷")

---

### Property `bCanExchange`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") bool bCanExchange = false;` |

**Notes:**

> 是否可兑换(配置了消耗、存档残卷足够、且未收藏)

---

### Property `ExchangeHintText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText ExchangeHintText;` |

**Notes:**

> 不可兑换原因提示("该秘籍不可兑换"/"残卷不足"/"已拥有,无需兑换"；可兑换时为空)

---
