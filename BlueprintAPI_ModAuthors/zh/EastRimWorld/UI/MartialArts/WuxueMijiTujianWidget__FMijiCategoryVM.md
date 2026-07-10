# `struct` `FMijiCategoryVM`

**源码头文件:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## 功能说明（来自头文件注释）

> 秘籍分类视图模型

## 蓝图暴露变量

### 属性 `CategoryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName CategoryID;` |

**说明:**

> 分类ID

---

### 属性 `CategoryName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText CategoryName;` |

**说明:**

> 分类名称

---

### 属性 `BookIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FName> BookIDs;` |

**说明:**

> 该分类下的书籍ID

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TSoftObjectPtr<UTexture2D> Icon;` |

**说明:**

> 秘籍(分类)图片（=该分类第一本招式的 ItemIcon，秘籍详情右侧图片格用）

---

### 属性 `BookType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EMartialArtsBookType BookType = EMartialArtsBookType::None;` |

**说明:**

> 顶层类型（图鉴顶层标签分组用，来自分类配置 BookType）

---

### 属性 `Founder`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Founder;` |

**说明:**

> 祖师（来自分类配置 Founder，秘籍详情用）

---

### 属性 `Quality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Quality;` |

**说明:**

> 稀有度（来自分类配置 BookQuality，秘籍详情"稀有度"行）

---

### 属性 `MajorCategory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText MajorCategory;` |

**说明:**

> 大类文本（顶层类型 BookType 的显示名，秘籍详情"大类"行）

---

### 属性 `UnlockTitle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText UnlockTitle;` |

**说明:**

> 解锁名号（集齐奖励称号 CollectPrize；为空显示"无"）

---

### 属性 `CollectedCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 CollectedCount = 0;` |

**说明:**

> 该秘籍已收集招式数（书籍状态==Collected 计数，秘籍详情"书籍收集 X/Y"）

---

### 属性 `TotalCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 TotalCount = 0;` |

**说明:**

> 该秘籍招式总数（BookIDs.Num()）

---

### 属性 `CollectText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText CollectText;` |

**说明:**

> 收集进度文本"已收集/总数"（如"16/178"，秘籍详情"书籍收集"行右值）

---

### 属性 `CollectPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") float CollectPercent = 0.f;` |

**说明:**

> 收集进度 0~1（书籍收集进度条 Bar_Collect 用）

---

### 属性 `CollectStatusText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText CollectStatusText;` |

**说明:**

> 收集状态文本（全部收集→"全部收集"，否则→"已收集/总数"，进度条下方 Txt_CollectSub 用）

---

### 属性 `BookStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<EMijiCollectState> BookStates;` |

**说明:**

> 每本招式(书)的收集状态(与 BookIDs 平行，收集网格格子染色用)

---

### 属性 `MinRealmReq`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 MinRealmReq = 0;` |

**说明:**

> 境界门槛(该秘籍所有招式里最低的境界要求 RealmLevel)

---

### 属性 `MinRealmReqText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText MinRealmReqText;` |

**说明:**

> 境界门槛中文名（=GM->GetRealmDataByLevel(MinRealmReq).LevelName，秘籍详情"境界门槛"行显示用）

---

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Desc;` |

**说明:**

> 秘籍介绍（来自分类配置 BookDesc，秘籍详情用）

---
