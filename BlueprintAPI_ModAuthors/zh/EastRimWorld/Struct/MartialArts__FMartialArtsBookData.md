# `struct` `FMartialArtsBookData`

**源码头文件:** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 武学书籍

## 蓝图暴露变量

### 属性 `MajorCategories`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EMartialArtsMajorCategories` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") EMartialArtsMajorCategories MajorCategories = EMartialArtsMajorCategories::None;` |

**源码注释:**

> 武学大类

---

### 属性 `AttributeClassification`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EMartialArtsAttributeClassification` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsAttributeClassification AttributeClassification = EMartialArtsAttributeClassification::None;` |

**源码注释:**

> 武学属性分类

---

### 属性 `UsageType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EMartialArtsMajorUsageType` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MartialArts") EMartialArtsMajorUsageType UsageType = EMartialArtsMajorUsageType::None;` |

**源码注释:**

> 使用方式

---

### 属性 `NeedWeaponTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EWeaponType>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TArray<EWeaponType> NeedWeaponTypes;` |

**源码注释:**

> 此武学使用需要的武器类型

---

### 属性 `MartialArtsLevels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int,[FMartialArtsLevel](MartialArts__FMartialArtsLevel.md)> |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") TMap<int,FMartialArtsLevel> MartialArtsLevels;` |

**源码注释:**

> 包含的武学等级

---

### 属性 `LevelConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FDataTableRowHandle` |
| 反射说明符 | BlueprintReadOnly, Category="MartialArtsLevel" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel",meta = (RowType = "/Script/EastRimWorld.MartialArtsLevelConfig")) FDataTableRowHandle LevelConfig;` |

**源码注释:**

> 等级经验配置

---

### 属性 `CoolDownTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") float CoolDownTime = 36.f;` |

**源码注释:**

> 冷却时间

---

### 属性 `CoolDownTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "MartialArts") FGameplayTagContainer CoolDownTag;` |

**源码注释:**

> 冷却标签

---

### 属性 `SkillEntryTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") FText SkillEntryTag;` |

**源码注释:**

> 技能词条标签

---

### 属性 `FormatSkillEntryTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFormatText` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") FFormatText FormatSkillEntryTag;` |

**源码注释:**

> 技能词条标签（格式化文本）

---

### 属性 `MartialArtsIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") TSoftObjectPtr<UTexture2D> MartialArtsIcon;` |

**源码注释:**

> 武学图标

---

### 属性 `LevelGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UGameplayEffect>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MartialArts") TSubclassOf<UGameplayEffect> LevelGameplayEffect;` |

**源码注释:**

> 等级属性GE

---

### 属性 `GiveAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FName> GiveAbility;` |

**源码注释:**

> 获得得技能

---

### 属性 `BaseAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") FName BaseAbility;` |

**源码注释:**

> 关联的基础技能

---
