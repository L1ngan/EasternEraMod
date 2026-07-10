# `class` `UWuxueMijiTujianWidget`

**源码头文件:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## 功能说明（来自头文件注释）

> 武学秘籍图鉴 控制器 Widget。
> 逻辑层：拉取分类 + 书籍配置，计算每本书的收集状态，缓存 VM，供蓝图侧展示。
> 视觉与列表装配由 WBP（BlueprintImplementableEvent 回调）完成。

## 蓝图暴露变量

### 属性 `CachedCategories`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FMijiCategoryVM> CachedCategories;` |

**说明:**

> 缓存的分类 VM

---

### 属性 `CachedBooks`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMijiBookVM](WuxueMijiTujianWidget__FMijiBookVM.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") TArray<FMijiBookVM> CachedBooks;` |

**说明:**

> 缓存的书籍 VM

---

### 属性 `SelectedCategoryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName SelectedCategoryID;` |

**说明:**

> 当前选中的秘籍分类ID

---

### 属性 `SelectedBookID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName SelectedBookID;` |

**说明:**

> 当前选中的书籍ID

---

### 属性 `SelectedMoveID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Miji" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName SelectedMoveID;` |

**说明:**

> 当前选中的招式ID

---

## 蓝图暴露函数

### 函数 `RefreshAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") void RefreshAll();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重新拉取全部分类+书籍配置，重建 VM 缓存并计算收集状态，最后回调 OnPanelRefreshed

---

### 函数 `ComputeBookState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") EMijiCollectState ComputeBookState(FName BookID) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算某本书的收集状态。
> 收集状态来源：武学残卷子系统 UMartialArtsFragmentSubsystem。
>   IsFragmentSetComplete==true  => Collected
>   否则 GetOwnedFragmentCount>0  => Fragment
>   否则                          => Uncollected
> 注：残卷子系统按 TargetBookID（完本书ID，与图鉴 BookID 同名）查配方；无配方的书将恒为 Uncollected。

---

### 函数 `GetCategories`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | TArray<[FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiCategoryVM> GetCategories() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有分类 VM（已按 RefreshAll 缓存）

---

### 函数 `GetBookTypes`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | TArray<[EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md)> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<EMartialArtsBookType> GetBookTypes() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有存在的顶层书籍类型（BookType，用于左侧顶层标签，按枚举顺序去重）

---

### 函数 `GetCategoriesByBookType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | TArray<[FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBookType` | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiCategoryVM> GetCategoriesByBookType(EMartialArtsBookType InBookType) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按顶层类型返回其下的分类 VM（用于顶层标签的子标签）

---

### 函数 `GetCategoriesByBookTypeFiltered`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | TArray<[FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBookType` | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |
| `bAll` | `bool` |
| `Filter` | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiCategoryVM> GetCategoriesByBookTypeFiltered(EMartialArtsBookType InBookType, bool bAll, EMijiCollectState Filter) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按顶层类型 + 收集状态筛选分类。bAll=true 返回全部；否则按 Filter 过滤该分类的 BookStates：
>  Collected(已得)=任意招式已收藏；Fragment(残卷)=任意招式为残卷；Uncollected(未知)=全无(既无收藏也无残卷)。

---

### 函数 `GetCategoryCountByFilter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bAll` | `bool` |
| `Filter` | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") int32 GetCategoryCountByFilter(bool bAll, EMijiCollectState Filter) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按收集状态统计秘籍(分类)总数(跨全部顶层类型)：bAll=true 统计全部；否则按 Filter(判定同上)

---

### 函数 `GetFilterTabText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Prefix` | `const FText&` |
| `bAll` | `bool` |
| `Filter` | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") FText GetFilterTabText(const FText& Prefix, bool bAll, EMijiCollectState Filter) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 顶部筛选标签文本："前缀(数量)"，如"全部(178)"。数量=GetCategoryCountByFilter。

---

### 函数 `GetBookTypeMoveCountText`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBookType` | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") FText GetBookTypeMoveCountText(EMartialArtsBookType InBookType) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 大类头部右上角文本"已得X/总共Y"：X=该类下 Collected/Fragment(有残卷也算)招式本数之和；Y=该类下招式本总数。

---

### 函数 `GetBookTypeName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBookType` | [EMartialArtsBookType](../../Struct/MartialArts__EMartialArtsBookType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") FText GetBookTypeName(EMartialArtsBookType InBookType) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取顶层类型显示名：优先 GamePlayConfigurationAsset.MartialArtsBookTypeDict.MajorCatName，未配则回退内置中文名（供折叠头文本用）

---

### 函数 `GetLearnableCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") int32 GetLearnableCount(FName BookID) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 可学习次数：枚举玩家拥有的该书实体，按耐久模型（floor(耐久/单次学习耗耐久)，无耐久上限记 1）求和

---

### 函数 `GetBooksByFilter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | TArray<[FMijiBookVM](WuxueMijiTujianWidget__FMijiBookVM.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Filter` | [EMijiCollectState](WuxueMijiTujianWidget__EMijiCollectState.md) |
| `bAll` | `bool` |
| `CategoryFilter` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiBookVM> GetBooksByFilter(EMijiCollectState Filter, bool bAll, FName CategoryFilter) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按筛选返回书籍 VM。
> @param Filter         收集状态筛选（bAll=true 时忽略）
> @param bAll           true => "全部" 页签，忽略 Filter
> @param CategoryFilter 分类筛选；NAME_None => 全部分类

---

### 函数 `GetBookVM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |
| `OutVM` | [FMijiBookVM](WuxueMijiTujianWidget__FMijiBookVM.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") bool GetBookVM(FName BookID, FMijiBookVM& OutVM) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按 BookID 取缓存的书 VM(兑换成功后刷新详情用)。找到返回 true。

---

### 函数 `TryExchangeBook`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") bool TryExchangeBook(FName BookID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 兑换武学：校验书的 ExchangeFragmentCost(品质→数量) vs 存档 MartialFragments，
>  足够则扣残卷并发完本书(复用残卷合成的 AddItemToPostStation 给书路径)，成功后 RefreshAll。

---

### 函数 `GetQualifiedDisciplesForBook`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji|传授" |
| 返回类型 | `TArray<FGuid>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji|传授") TArray<FGuid> GetQualifiedDisciplesForBook(FName BookID) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 传授前置：返回门派里能读这本书的弟子 Guid（玩家已拥有该书 + CheckBookReadingConditions 通过）。供选人器筛选。

---

### 函数 `TeachBookToDisciple`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji|传授" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |
| `DiscipleGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji|传授") bool TeachBookToDisciple(FName BookID, FGuid DiscipleGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 传授：让指定弟子去读这本书（其 AIController 派 GoToGetBookToRead 的 GOAP 读书任务）。成功返回 true。

---

### 函数 `TeachBookToSelected`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji|传授" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |
| `SelectedGuids` | `const TArray<FGuid>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji|传授") bool TeachBookToSelected(FName BookID, const TArray<FGuid>& SelectedGuids);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 传授（选人器版）：教给列表首个弟子（W_ChooseCharacter 单选，Selecteds_Arr）。避开 BP Array_Get 通配符坑；空则 false。

---

### 函数 `GetMovesForBook`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | TArray<[FMijiMoveVM](WuxueMijiTujianWidget__FMijiMoveVM.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") TArray<FMijiMoveVM> GetMovesForBook(FName BookID) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取某本书的招式 VM 列表

---

### 函数 `SelectCategory`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CategoryID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") void SelectCategory(FName CategoryID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选中某个秘籍分类：记录选择并回调 OnCategorySelected（右侧填秘籍详情用）

---

### 函数 `SelectBook`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") void SelectBook(FName BookID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选中某本书：记录选择并回调 OnBookSelected

---

### 函数 `SelectMove`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MoveID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") void SelectMove(FName MoveID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选中某个招式：回调 OnMoveSelected

---

### 函数 `RequestLearn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Miji" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Miji") void RequestLearn(FName BookID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 请求学习某本书（STUB：日志 + 回调 OnRequestLearn；真实选人器后续阶段实现）

---

### 函数 `OnPanelRefreshed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Miji" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnPanelRefreshed();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 面板数据刷新完成

---

### 函数 `OnCategorySelected`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Miji" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Category` | const [FMijiCategoryVM](WuxueMijiTujianWidget__FMijiCategoryVM.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnCategorySelected(const FMijiCategoryVM& Category);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 选中某个秘籍分类

---

### 函数 `OnBookSelected`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Miji" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Book` | const [FMijiBookVM](WuxueMijiTujianWidget__FMijiBookVM.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnBookSelected(const FMijiBookVM& Book);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 选中某本书

---

### 函数 `OnMoveSelected`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Miji" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Move` | const [FMijiMoveVM](WuxueMijiTujianWidget__FMijiMoveVM.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnMoveSelected(const FMijiMoveVM& Move);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 选中某个招式

---

### 函数 `OnRequestLearn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="Miji" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "Miji") void OnRequestLearn(FName BookID);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 请求学习

---
