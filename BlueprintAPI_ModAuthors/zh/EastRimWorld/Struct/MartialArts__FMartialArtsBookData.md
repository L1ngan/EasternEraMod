# `struct` `FMartialArtsBookData`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 武学书籍

## 蓝图暴露变量

### 属性 `MajorCategories`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsMajorCategories](MartialArts__EMartialArtsMajorCategories.md) |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") EMartialArtsMajorCategories MajorCategories = EMartialArtsMajorCategories::None;` |

**说明:**

> 武学大类

---

### 属性 `AttributeClassification`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsAttributeClassification](CommonEnum__EMartialArtsAttributeClassification.md) |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**说明:**

> 武学属性分类

---

### 属性 `UsageType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsMajorUsageType](MartialArts__EMartialArtsMajorUsageType.md) |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsMajorUsageType UsageType = EMartialArtsMajorUsageType::None;` |

**说明:**

> 使用方式

---

### 属性 `NeedWeaponTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EWeaponType>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TArray<EWeaponType> NeedWeaponTypes;` |

**说明:**

> 此武学使用需要的武器类型

---

### 属性 `MartialArtsLevels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int,[FMartialArtsLevel](MartialArts__FMartialArtsLevel.md)> |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TMap<int,FMartialArtsLevel> MartialArtsLevels;` |

**说明:**

> 包含的武学等级

---

### 属性 `LevelConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FDataTableRowHandle` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel",meta = (RowType = "/Script/EastRimWorld.MartialArtsLevelConfig")) FDataTableRowHandle LevelConfig;` |

**说明:**

> 等级经验配置

---

### 属性 `CoolDownTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") float CoolDownTime = 36.f;` |

**说明:**

> 冷却时间

---

### 属性 `CoolDownTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") FGameplayTagContainer CoolDownTag;` |

**说明:**

> 冷却标签

---

### 属性 `SkillEntryTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") FText SkillEntryTag;` |

**说明:**

> 技能词条标签

---

### 属性 `FormatSkillEntryTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") FFormatText FormatSkillEntryTag;` |

**说明:**

> 技能词条标签（格式化文本）

---

### 属性 `MartialArtsIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") TSoftObjectPtr<UTexture2D> MartialArtsIcon;` |

**说明:**

> 武学图标

---

### 属性 `LevelGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UGameplayEffect>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") TSubclassOf<UGameplayEffect> LevelGameplayEffect;` |

**说明:**

> 等级属性GE

---

### 属性 `GiveAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FName> GiveAbility;` |

**说明:**

> 获得得技能

---

### 属性 `BaseAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") FName BaseAbility;` |

**说明:**

> 关联的基础技能

---

### 属性 `LevelSkillEntry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,FLevelSkillEntry>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TMap<int,FLevelSkillEntry> LevelSkillEntry;` |

**说明:**

> 包含的词条池子

---

### 属性 `ComprehendCost`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts|参悟" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts|参悟") int32 ComprehendCost = 0;` |

**说明:**

> 参悟（重洗全部已生效词条槽）消耗的历练点数

---

### 属性 `ExchangeFragmentCost`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EItemQuality,int32>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts|兑换" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts|兑换") TMap<EItemQuality,int32> ExchangeFragmentCost;` |

**说明:**

> 兑换本武学所需残卷（品质→数量）。残卷来源 = ASaveGameDataActor::MartialFragments（按品质计数的全局武学残卷）；
> 玩家在每个所列品质上的残卷数 ≥ 对应数量，即可兑换本武学。

---
