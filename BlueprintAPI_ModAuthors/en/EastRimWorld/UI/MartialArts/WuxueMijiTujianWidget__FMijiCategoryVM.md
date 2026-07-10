# `struct` `FMijiCategoryVM`

**Source header:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## Functional description (from header comments)

> 秘籍分类视图模型

## Blueprint-exposed variables

### Property `CategoryID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName CategoryID;` |

**Notes:**

> 分类ID

---

### Property `CategoryName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText CategoryName;` |

**Notes:**

> 分类名称

---

### Property `BookIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FName> BookIDs;` |

**Notes:**

> 该分类下的书籍ID

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> 秘籍(分类)图片（=该分类第一本招式的 ItemIcon，秘籍详情右侧图片格用）

---

### Property `BookType`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") EMartialArtsBookType BookType = EMartialArtsBookType::None;` |

**Notes:**

> 顶层类型（图鉴顶层标签分组用，来自分类配置 BookType）

---

### Property `Founder`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Founder;` |

**Notes:**

> 祖师（来自分类配置 Founder，秘籍详情用）

---

### Property `Quality`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Quality;` |

**Notes:**

> 稀有度（来自分类配置 BookQuality，秘籍详情"稀有度"行）

---

### Property `MajorCategory`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText MajorCategory;` |

**Notes:**

> 大类文本（顶层类型 BookType 的显示名，秘籍详情"大类"行）

---

### Property `UnlockTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText UnlockTitle;` |

**Notes:**

> 解锁名号（集齐奖励称号 CollectPrize；为空显示"无"）

---

### Property `CollectedCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 CollectedCount = 0;` |

**Notes:**

> 该秘籍已收集招式数（书籍状态==Collected 计数，秘籍详情"书籍收集 X/Y"）

---

### Property `TotalCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 TotalCount = 0;` |

**Notes:**

> 该秘籍招式总数（BookIDs.Num()）

---

### Property `CollectText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText CollectText;` |

**Notes:**

> 收集进度文本"已收集/总数"（如"16/178"，秘籍详情"书籍收集"行右值）

---

### Property `CollectPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") float CollectPercent = 0.f;` |

**Notes:**

> 收集进度 0~1（书籍收集进度条 Bar_Collect 用）

---

### Property `CollectStatusText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText CollectStatusText;` |

**Notes:**

> 收集状态文本（全部收集→"全部收集"，否则→"已收集/总数"，进度条下方 Txt_CollectSub 用）

---

### Property `BookStates`

| Field | Details |
|------|------|
| C++ type | TArray<[EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<EMijiCollectState> BookStates;` |

**Notes:**

> 每本招式(书)的收集状态(与 BookIDs 平行，收集网格格子染色用)

---

### Property `MinRealmReq`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 MinRealmReq = 0;` |

**Notes:**

> 境界门槛(该秘籍所有招式里最低的境界要求 RealmLevel)

---

### Property `MinRealmReqText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText MinRealmReqText;` |

**Notes:**

> 境界门槛中文名（=GM->GetRealmDataByLevel(MinRealmReq).LevelName，秘籍详情"境界门槛"行显示用）

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText Desc;` |

**Notes:**

> 秘籍介绍（来自分类配置 BookDesc，秘籍详情用）

---
