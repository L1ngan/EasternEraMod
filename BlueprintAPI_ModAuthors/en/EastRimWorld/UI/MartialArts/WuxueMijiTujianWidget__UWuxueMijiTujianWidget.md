# `class` `UWuxueMijiTujianWidget`

**Source header:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## Functional description (from header comments)

> 武学秘籍图鉴 控制器 Widget。
> 逻辑层：拉取分类 + 书籍配置，计算每本书的收集状态，缓存 VM，供蓝图侧展示。
> 视觉与列表装配由 WBP（BlueprintImplementableEvent 回调）完成。

## Blueprint-exposed variables

### Property `CachedCategories`

| Field | Details |
|------|------|
| C++ type | TArray<[FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FMijiCategoryVM> CachedCategories;` |

**Notes:**

> 缓存的分类 VM

---

### Property `CachedBooks`

| Field | Details |
|------|------|
| C++ type | TArray<[FMijiBookVM](WuxueMijiTujianWidget__FMijiBookVM.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FMijiBookVM> CachedBooks;` |

**Notes:**

> 缓存的书籍 VM

---

### Property `SelectedCategoryID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName SelectedCategoryID;` |

**Notes:**

> 当前选中的秘籍分类ID

---

### Property `SelectedBookID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName SelectedBookID;` |

**Notes:**

> 当前选中的书籍ID

---

### Property `SelectedMoveID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName SelectedMoveID;` |

**Notes:**

> 当前选中的招式ID

---

## Blueprint-exposed functions

### Function `RefreshAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") void RefreshAll();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 重新拉取全部分类+书籍配置，重建 VM 缓存并计算收集状态，最后回调 OnPanelRefreshed

---

### Function `ComputeBookState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") EMijiCollectState ComputeBookState(FName BookID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 计算某本书的收集状态。
> 收集状态来源：武学残卷子系统 UMartialArtsFragmentSubsystem。
>   IsFragmentSetComplete==true  => Collected
>   否则 GetOwnedFragmentCount>0  => Fragment
>   否则                          => Uncollected
> 注：残卷子系统按 TargetBookID（完本书ID，与图鉴 BookID 同名）查配方；无配方的书将恒为 Uncollected。

---

### Function `GetCategories`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | TArray<[FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiCategoryVM> GetCategories() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有分类 VM（已按 RefreshAll 缓存）

---

### Function `GetBookTypes`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | TArray<[EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<EMartialArtsBookType> GetBookTypes() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有存在的顶层书籍类型（BookType，用于左侧顶层标签，按枚举顺序去重）

---

### Function `GetCategoriesByBookType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | TArray<[FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBookType` | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiCategoryVM> GetCategoriesByBookType(EMartialArtsBookType InBookType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按顶层类型返回其下的分类 VM（用于顶层标签的子标签）

---

### Function `GetCategoriesByBookTypeFiltered`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | TArray<[FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBookType` | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |
| `bAll` | `bool` |
| `Filter` | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiCategoryVM> GetCategoriesByBookTypeFiltered(EMartialArtsBookType InBookType, bool bAll, EMijiCollectState Filter) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按顶层类型 + 收集状态筛选分类。bAll=true 返回全部；否则按 Filter 过滤该分类的 BookStates：
>  Collected(已得)=任意招式已收藏；Fragment(残卷)=任意招式为残卷；Uncollected(未知)=全无(既无收藏也无残卷)。

---

### Function `GetCategoryCountByFilter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bAll` | `bool` |
| `Filter` | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") int32 GetCategoryCountByFilter(bool bAll, EMijiCollectState Filter) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按收集状态统计秘籍(分类)总数(跨全部顶层类型)：bAll=true 统计全部；否则按 Filter(判定同上)

---

### Function `GetFilterTabText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Prefix` | `const FText&` |
| `bAll` | `bool` |
| `Filter` | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") FText GetFilterTabText(const FText& Prefix, bool bAll, EMijiCollectState Filter) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 顶部筛选标签文本："前缀(数量)"，如"全部(178)"。数量=GetCategoryCountByFilter。

---

### Function `GetBookTypeMoveCountText`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBookType` | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") FText GetBookTypeMoveCountText(EMartialArtsBookType InBookType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 大类头部右上角文本"已得X/总共Y"：X=该类下 Collected/Fragment(有残卷也算)招式本数之和；Y=该类下招式本总数。

---

### Function `GetBookTypeName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBookType` | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") FText GetBookTypeName(EMartialArtsBookType InBookType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取顶层类型显示名：优先 GamePlayConfigurationAsset.MartialArtsBookTypeDict.MajorCatName，未配则回退内置中文名（供折叠头文本用）

---

### Function `GetLearnableCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") int32 GetLearnableCount(FName BookID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 可学习次数：枚举玩家拥有的该书实体，按耐久模型（floor(耐久/单次学习耗耐久)，无耐久上限记 1）求和

---

### Function `GetBooksByFilter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | TArray<[FMijiBookVM](WuxueMijiTujianWidget__FMijiBookVM.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Filter` | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |
| `bAll` | `bool` |
| `CategoryFilter` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiBookVM> GetBooksByFilter(EMijiCollectState Filter, bool bAll, FName CategoryFilter) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按筛选返回书籍 VM。
> @param Filter         收集状态筛选（bAll=true 时忽略）
> @param bAll           true => "全部" 页签，忽略 Filter
> @param CategoryFilter 分类筛选；NAME_None => 全部分类

---

### Function `GetBookVM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |
| `OutVM` | [FMijiBookVM](WuxueMijiTujianWidget__FMijiBookVM.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") bool GetBookVM(FName BookID, FMijiBookVM& OutVM) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按 BookID 取缓存的书 VM(兑换成功后刷新详情用)。找到返回 true。

---

### Function `TryExchangeBook`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") bool TryExchangeBook(FName BookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 兑换武学：校验书的 ExchangeFragmentCost(品质→数量) vs 存档 MartialFragments，
>  足够则扣残卷并发完本书(复用残卷合成的 AddItemToPostStation 给书路径)，成功后 RefreshAll。

---

### Function `GetQualifiedDisciplesForBook`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji|传授" |
| Return type | `TArray<FGuid>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji|传授") TArray<FGuid> GetQualifiedDisciplesForBook(FName BookID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 传授前置：返回门派里能读这本书的弟子 Guid（玩家已拥有该书 + CheckBookReadingConditions 通过）。供选人器筛选。

---

### Function `TeachBookToDisciple`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji|传授" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |
| `DiscipleGuid` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji|传授") bool TeachBookToDisciple(FName BookID, FGuid DiscipleGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 传授：让指定弟子去读这本书（其 AIController 派 GoToGetBookToRead 的 GOAP 读书任务）。成功返回 true。

---

### Function `TeachBookToSelected`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji|传授" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |
| `SelectedGuids` | `const TArray<FGuid>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji|传授") bool TeachBookToSelected(FName BookID, const TArray<FGuid>& SelectedGuids);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 传授（选人器版）：教给列表首个弟子（W_ChooseCharacter 单选，Selecteds_Arr）。避开 BP Array_Get 通配符坑；空则 false。

---

### Function `GetMovesForBook`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | TArray<[FMijiMoveVM](WuxueMijiTujianWidget__FMijiMoveVM.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiMoveVM> GetMovesForBook(FName BookID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取某本书的招式 VM 列表

---

### Function `SelectCategory`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CategoryID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") void SelectCategory(FName CategoryID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 选中某个秘籍分类：记录选择并回调 OnCategorySelected（右侧填秘籍详情用）

---

### Function `SelectBook`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") void SelectBook(FName BookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 选中某本书：记录选择并回调 OnBookSelected

---

### Function `SelectMove`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MoveID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") void SelectMove(FName MoveID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 选中某个招式：回调 OnMoveSelected

---

### Function `RequestLearn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Miji" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Miji") void RequestLearn(FName BookID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 请求学习某本书（STUB：日志 + 回调 OnRequestLearn；真实选人器后续阶段实现）

---

### Function `OnPanelRefreshed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Miji" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnPanelRefreshed();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 面板数据刷新完成

---

### Function `OnCategorySelected`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Miji" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Category` | const [FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnCategorySelected(const FMijiCategoryVM& Category);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 选中某个秘籍分类

---

### Function `OnBookSelected`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Miji" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Book` | const [FMijiBookVM](WuxueMijiTujianWidget__FMijiBookVM.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnBookSelected(const FMijiBookVM& Book);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 选中某本书

---

### Function `OnMoveSelected`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Miji" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Move` | const [FMijiMoveVM](WuxueMijiTujianWidget__FMijiMoveVM.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnMoveSelected(const FMijiMoveVM& Move);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 选中某个招式

---

### Function `OnRequestLearn`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="Miji" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BookID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnRequestLearn(FName BookID);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 请求学习

---
