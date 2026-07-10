# `struct` `FLevelConfigData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 难度相关配置

## Blueprint-exposed variables

### Property `IsCustomize`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool IsCustomize { false };` |

**Notes:**

> 是否是自定义

---

### Property `DifficultyTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText DifficultyTitle;` |

**Notes:**

> 难度标题

---

### Property `DifficultyDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText DifficultyDesc;` |

**Notes:**

> 难度描述

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> 普通图标

---

### Property `HighlightIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> HighlightIcon;` |

**Notes:**

> 选中高亮图标

---

### Property `Bg`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> Bg;` |

**Notes:**

> 普通背景图片

---

### Property `HighlightBg`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> HighlightBg;` |

**Notes:**

> 选中高亮背景图片

---

### Property `ResourceCoinNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 ResourceCoinNum { 0 };` |

**Notes:**

> 资源积分数量

---

### Property `StoryCoinNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 StoryCoinNum { 0 };` |

**Notes:**

> 剧本积分数量

---

### Property `ProtagonistSkillPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 ProtagonistSkillPoint { 0 };` |

**Notes:**

> 主角技能点数

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FName , float> Attributes;` |

**Notes:**

> 人物初始技能加成

---

### Property `ResourceOutputRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float ResourceOutputRate { 0.f };` |

**Notes:**

> 采集物产出比例

---

### Property `AttributeChangeSpeedText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText AttributeChangeSpeedText;` |

**Notes:**

> 角色属性变化速度UI文本

---

### Property `AttributeChangeSpeed`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftClassPtr<UGameplayEffect> AttributeChangeSpeed;` |

**Notes:**

> 角色属性变化速度

---

### Property `BaseMood`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float BaseMood { 0.f };` |

**Notes:**

> 难度对应的基础心情

---

### Property `ResourceText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText ResourceText;` |

**Notes:**

> 资源文本

---

### Property `InitResources`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FName , int32> InitResources;` |

**Notes:**

> 难度对应的初始资源
> TMap<物品ID , 数量>

---

### Property `WorkExperienceBonus`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float WorkExperienceBonus { 1.f };` |

**Notes:**

> 工作经验加成系数（= ExperienceRate）

---

### Property `WorkEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float WorkEfficiency { 0.f };` |

**Notes:**

> 工作效率

---

### Property `SelectFeatureNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 SelectFeatureNum { 0 };` |

**Notes:**

> 可选特性数量

---

### Property `BuildingDurabilityRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float BuildingDurabilityRate { 0.f };` |

**Notes:**

> 建筑耐久比率

---

### Property `ItemExpirationRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float ItemExpirationRate { 0.f };` |

**Notes:**

> 物品保质期比率

---

### Property `MartialArtsExperienceBonusText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText MartialArtsExperienceBonusText;` |

**Notes:**

> 武学经验加成UI文本

---

### Property `MartialArtsExperienceBonus`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftClassPtr<UGameplayEffect> MartialArtsExperienceBonus;` |

**Notes:**

> 武学经验加成

---

### Property `RecyclingPriceRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float RecyclingPriceRate { 0.f };` |

**Notes:**

> 商人回收价格比率

---

### Property `SellingPriceRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float SellingPriceRate { 0.f };` |

**Notes:**

> 商人出售价格比率

---

### Property `OtherFactionStrengthText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText OtherFactionStrengthText;` |

**Notes:**

> 其他门派强度UI文本

---

### Property `OtherFactionStrength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OtherFactionStrength { 0.f };` |

**Notes:**

> 其他门派强度

---

### Property `AttackFrequencyText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText AttackFrequencyText;` |

**Notes:**

> 袭击发生频率UI文本

---

### Property `AttackFrequency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float AttackFrequency { 0.f };` |

**Notes:**

> 袭击发生频率

---

### Property `EnemyStrengthText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText EnemyStrengthText;` |

**Notes:**

> 敌人强度UI文本

---

### Property `EnemyStrength`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftClassPtr<UGameplayEffect> EnemyStrength;` |

**Notes:**

> 敌人强度

---

### Property `RefineAndLockPointsRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float RefineAndLockPointsRate { 0.f };` |

**Notes:**

> 洗练点和锁定点比率

---

### Property `InitBuffs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FName> InitBuffs;` |

**Notes:**

> 难度对应的初始BUFF

---
