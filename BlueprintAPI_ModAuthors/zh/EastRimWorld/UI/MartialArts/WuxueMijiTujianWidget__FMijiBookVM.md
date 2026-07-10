# `struct` `FMijiBookVM`

**源码头文件:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## 功能说明（来自头文件注释）

> 秘籍书视图模型

## 蓝图暴露变量

### 属性 `BookID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName BookID;` |

**说明:**

> 书籍ID（FMartialArtsBookData 的 ID，DT 行名）

---

### 属性 `BookName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText BookName;` |

**说明:**

> 书籍名称

---

### 属性 `CategoryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName CategoryID;` |

**说明:**

> 所属分类ID（FMartialArtsBookCategoryData 的 ID）

---

### 属性 `CollectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EMijiCollectState CollectState = EMijiCollectState::Uncollected;` |

**说明:**

> 收集状态

---

### 属性 `MoveIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FName> MoveIDs;` |

**说明:**

> 包含的招式ID（源自 FMartialArtsBookData::GiveAbility）

---

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Desc;` |

**说明:**

> 招式描述·第1行（技能标签，来自 FMartialArtsBookData::FormatSkillEntryTag，对齐 MADetailTip 的 W_Item_Desc_jnbq）

---

### 属性 `Desc2`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Desc2;` |

**说明:**

> 招式描述·第2行（首层词条说明，来自 MartialArtsLevels 首层 FormatEntriesDescribe，对齐 W_Item_Desc_1stCeng）

---

### 属性 `Founder`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Founder;` |

**说明:**

> 祖师

---

### 属性 `Quality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemQuality` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EItemQuality Quality = EItemQuality::None;` |

**说明:**

> 品质（来源：书本自身 FInventoryGeneralData::ItemQuality，按本区分）
> 视觉：BP 用此枚举查 GameConfigComponent 的 ItemQualityName / ItemQualityFrameTexture

---

### 属性 `RealmReq`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 RealmReq = 0;` |

**说明:**

> 阅读/修炼需要的境界等级（来自 FBookInfo::RealmLevel）

---

### 属性 `RealmReqText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText RealmReqText;` |

**说明:**

> 境界门槛中文名（=GM->GetRealmDataByLevel(RealmReq).LevelName，招式详情"境界门槛"行显示用）

---

### 属性 `Tiers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMijiTierVM](WuxueMijiTujianWidget__FMijiTierVM.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FMijiTierVM> Tiers;` |

**说明:**

> 逐层进度（来自 FMartialArtsBookData::MartialArtsLevels，按 Level 升序）

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TSoftObjectPtr<UTexture2D> Icon;` |

**说明:**

> 秘籍图片（来自 FMartialArtsBookData::MartialArtsIcon，中间秘籍图片格用）

---

### 属性 `MajorCategories`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsMajorCategories](../../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EMartialArtsMajorCategories MajorCategories = EMartialArtsMajorCategories::None;` |

**说明:**

> 武学大类（来自 FMartialArtsBookData::MajorCategories）

---

### 属性 `AttributeClassification`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsAttributeClassification](../../Struct/CommonEnum__EMartialArtsAttributeClassification.md) |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**说明:**

> 属性分类（来自 FMartialArtsBookData::AttributeClassification）

---

### 属性 `RequiredAttrText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText RequiredAttrText;` |

**说明:**

> 属性要求（C++ 预 join 的单行文本，如"悟性 ≥ 30  智力 ≥ 20"；来自 FBookInfo::Attributes）

---

### 属性 `LearnableCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 LearnableCount = 0;` |

**说明:**

> 可学习次数（玩家拥有的该书实体按耐久模型可学次数之和，见 GetLearnableCount）

---

### 属性 `CoolDownTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") float CoolDownTime = 0.f;` |

**说明:**

> 冷却时间（来自 FMartialArtsBookData::CoolDownTime）

---

### 属性 `FragmentOwned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 FragmentOwned = 0;` |

**说明:**

> 残卷：已拥有张数（来自 UMartialArtsFragmentSubsystem::GetOwnedFragmentCount）

---

### 属性 `FragmentTotal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 FragmentTotal = 0;` |

**说明:**

> 残卷：需要总张数（残卷配方 RequiredFragmentItemIDs 数量；0=该书无残卷配方）

---

### 属性 `ExchangeCostText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText ExchangeCostText;` |

**说明:**

> 兑换残卷"拥有/需要"文本(如"3/99"；书未配置 ExchangeFragmentCost 则为空)

---

### 属性 `ExchangeQualityText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText ExchangeQualityText;` |

**说明:**

> 兑换残卷品质名(如"金色秘籍残卷")

---

### 属性 `bCanExchange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") bool bCanExchange = false;` |

**说明:**

> 是否可兑换(配置了消耗、存档残卷足够、且未收藏)

---

### 属性 `ExchangeHintText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText ExchangeHintText;` |

**说明:**

> 不可兑换原因提示("该秘籍不可兑换"/"残卷不足"/"已拥有,无需兑换"；可兑换时为空)

---
