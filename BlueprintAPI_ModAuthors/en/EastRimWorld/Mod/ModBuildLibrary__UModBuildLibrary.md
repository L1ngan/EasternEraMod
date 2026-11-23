# `class` `UModBuildLibrary`

**Source header:** `EastRimWorld/Mod/ModBuildLibrary.h`

---

## Functional description (from header comments)

> 建造界面 Mod 接口。Lua:UE.UModBuildLibrary.函数名(WorldContext, ...)
> 分类数据:一级大类 BuildListCategorizeConfig → 二级子类 BuildTabConfig(Category = 一级 ID) → 建筑菜单行 BuildingUI(Category = 二级 ID, 行 ID = 建筑 ID);
> 列表顺序按建筑配置 BuildConfig 的行序。运行期注册只改内存里的表, 不进存档, 读档/新开局后要重新注册。
> "已解锁"与建造菜单一致:存档解锁列表里有, 且二楼没开放时不含通往上层的楼梯(新手引导期间菜单只显示引导解锁的建筑, 这里不区分)。

## Blueprint-exposed functions

### Function `GetBuildCategoryConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `CategoryId` | `FName` |
| `OutRow` | [FModBuildListCategorizeStruct](../../CreateModPlugin/Public/BuildDataStruct__FModBuildListCategorizeStruct.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool GetBuildCategoryConfig(const UObject* WorldContextObject , FName CategoryId , FModBuildListCategorizeStruct& OutRow);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 一级大类的配置行

---

### Function `GetBuildTabConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `TabId` | `FName` |
| `OutRow` | [FModBuildTabStruct](../../CreateModPlugin/Public/BuildDataStruct__FModBuildTabStruct.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool GetBuildTabConfig(const UObject* WorldContextObject , FName TabId , FModBuildTabStruct& OutRow);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 二级子类的配置行

---

### Function `GetBuildUIData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |
| `OutRow` | [FModBuildUIData](../../CreateModPlugin/Public/BuildDataStruct__FModBuildUIData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool GetBuildUIData(const UObject* WorldContextObject , FName BuildId , FModBuildUIData& OutRow);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 建筑在建造菜单里的配置行(所属子类、显示名、图标、描述)

---

### Function `GetAllBuildCategoryIds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static TArray<FName> GetAllBuildCategoryIds(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 全部一级大类 ID, 按 Sort 升序

---

### Function `GetAllBuildTabIds`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `CategoryId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static TArray<FName> GetAllBuildTabIds(const UObject* WorldContextObject , FName CategoryId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 二级子类 ID, 按 Sort 升序;CategoryId 不为 None 时只返回该大类下的

---

### Function `GetBuildTabIdByBuildId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static FName GetBuildTabIdByBuildId(const UObject* WorldContextObject , FName BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 建筑所属的二级子类(查不到返回 None)

---

### Function `GetBuildCategoryIdByTabId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `TabId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static FName GetBuildCategoryIdByTabId(const UObject* WorldContextObject , FName TabId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 二级子类所属的一级大类(查不到返回 None)

---

### Function `GetBuildIdsByTab`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `TabId` | `FName` |
| `bOnlyUnlocked` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static TArray<FName> GetBuildIdsByTab(const UObject* WorldContextObject , FName TabId , bool bOnlyUnlocked);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 子类下的建筑, 按建造菜单的显示顺序(建筑配置行序);bOnlyUnlocked 为 true 时只要已解锁的

---

### Function `RegisterBuildCategory`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `CategoryId` | `FName` |
| `Row` | const [FModBuildListCategorizeStruct](../../CreateModPlugin/Public/BuildDataStruct__FModBuildListCategorizeStruct.md)& |
| `true` | `bool bOverrideExisting =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool RegisterBuildCategory(const UObject* WorldContextObject , FName CategoryId , const FModBuildListCategorizeStruct& Row , bool bOverrideExisting = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 新增或覆盖一级大类:写入 DisplayName / Sort / Icon。同一级里 Sort 不能和别的大类重复(菜单按 Sort 排按钮, 重复会丢掉一个)

---

### Function `RegisterBuildTab`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `TabId` | `FName` |
| `Row` | const [FModBuildTabStruct](../../CreateModPlugin/Public/BuildDataStruct__FModBuildTabStruct.md)& |
| `true` | `bool bOverrideExisting =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool RegisterBuildTab(const UObject* WorldContextObject , FName TabId , const FModBuildTabStruct& Row , bool bOverrideExisting = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 新增或覆盖二级子类:写入 TabName / Sort / Category。Category 必须是已有的一级大类;同一大类下 Sort 不能和别的子类重复

---

### Function `RegisterBuildUIData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |
| `Row` | const [FModBuildUIData](../../CreateModPlugin/Public/BuildDataStruct__FModBuildUIData.md)& |
| `true` | `bool bOverrideExisting =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool RegisterBuildUIData(const UObject* WorldContextObject , FName BuildId , const FModBuildUIData& Row , bool bOverrideExisting = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 新增或覆盖建筑的菜单行:写入 Category / DisplayName / Icon / Desc。建筑配置必须有这一行, Category 必须是已有子类;已有行不能改 Category(房间、组合、囚室设施按建筑所在子类匹配)

---

### Function `RefreshBuildMenu`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static void RefreshBuildMenu(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 让建造菜单按当前表重算分类并重建按钮(菜单还没创建时什么都不做)

---

### Function `GetBuildMenuWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `UUserWidget*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static UUserWidget* GetBuildMenuWidget(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当前界面里的建造菜单控件(只读用, 例如配合 GetWidgetByName 量原生控件位置)

---

### Function `IsBuildMenuOpen`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool IsBuildMenuOpen(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否展开了某个大类(子类行和列表可见)

---

### Function `OpenBuildMenu`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `CategoryId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool OpenBuildMenu(const UObject* WorldContextObject , FName CategoryId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 打开底栏建造页签;CategoryId 不为 None 时同时展开该大类(大类下要有已解锁建筑)

---

### Function `CloseBuildMenu`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static void CloseBuildMenu(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 收起展开的大类

---

### Function `SelectBuildCategory`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `CategoryId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool SelectBuildCategory(const UObject* WorldContextObject , FName CategoryId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 展开指定一级大类(同玩家点大类图标)

---

### Function `SelectBuildTab`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `TabId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool SelectBuildTab(const UObject* WorldContextObject , FName TabId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 显示指定二级子类(同玩家点子类按钮;大类没展开会先展开);TabId 为 None 时切到当前大类的「全部」

---

### Function `SelectBuildItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool SelectBuildItem(const UObject* WorldContextObject , FName BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 同玩家在列表里点这个建筑:先切到它所在的子类, 再进入放置

---

### Function `ShowBuildItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildIds` | `const TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool ShowBuildItems(const UObject* WorldContextObject , const TArray<FName>& BuildIds);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 原生列表只显示给定建筑(要先展开大类;空数组恢复按子类显示, 切子类或收起大类也会恢复)

---

### Function `GetCurrentBuildCategoryId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static FName GetCurrentBuildCategoryId(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 展开的一级大类(收起时为 None)

---

### Function `GetCurrentBuildTabId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static FName GetCurrentBuildTabId(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 显示的二级子类(「全部」或收起时为 None)

---

### Function `GetSelectedBuildId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static FName GetSelectedBuildId(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 菜单里选中的建筑:列表点了直接进入放置, 所以就是正在放置的建筑(没在放置为 None)

---

### Function `BeginPlaceBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool BeginPlaceBuilding(const UObject* WorldContextObject , FName BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 让玩家进入该建筑的放置预览(同点建造菜单里的建筑, 之后的放下、拖线、框选与原生一致)。要已解锁、在基地里操控玩家 Pawn, 且鼠标指在场景里。
> BuildId 是规格本体且用 SetBuildVariant 记了规格时, 放记住的规格(记住的规格已失效或改挂到别的本体时忘掉它、放本体)

---

### Function `CancelPlaceBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static void CancelPlaceBuilding(const UObject* WorldContextObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消当前放置(同放置中按右键);没在放置时什么都不做

---

### Function `IsPlacingBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `OutBuildId` | `FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool IsPlacingBuilding(const UObject* WorldContextObject , FName& OutBuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否正在放置建筑, OutBuildId 为正在放置的建筑

---

### Function `CanPlaceCurrentBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `OutTipsType` | [EPlaceBuildingTipsType](../ERW_Enumerations__EPlaceBuildingTipsType.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool CanPlaceCurrentBuilding(const UObject* WorldContextObject , EPlaceBuildingTipsType& OutTipsType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当前预览位置能否放下;不能放时 OutTipsType 为原因(没在放置时返回 false, OutTipsType 为 Normal)

---

### Function `GetBuildVariants`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `TArray<FModBuildVariantInfo>`（[FModBuildVariantInfo](ModBuildLibrary__FModBuildVariantInfo.md)） |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static TArray<FModBuildVariantInfo> GetBuildVariants(const UObject* WorldContextObject , FName BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 建筑的全部可选规格:BuildId 填本体或任一有效规格行都行;本体在前, 规格按建筑配置行序。没配规格返回 1 条(本体);建筑不存在或是无效规格行返回空数组

---

### Function `SetBuildVariant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |
| `VariantId` | `FName` |
| `OutReason` | [EBuildUnavailableReason](ModBuildLibrary__EBuildUnavailableReason.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool SetBuildVariant(const UObject* WorldContextObject , FName BuildId , FName VariantId , EBuildUnavailableReason& OutReason);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 记住「这个本体以后经 BeginPlaceBuilding / SelectBuildItem 放置时用哪个规格」:只在内存、不进存档、不动当前预览(要换预览再调 BeginPlaceBuilding)。
> VariantId 填本体 = 恢复默认。失败返回 false 并给原因, 记忆不变

---

### Function `GetBuildVariant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `OutBuildId` | `FName&` |
| `OutVariantId` | `FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool GetBuildVariant(const UObject* WorldContextObject , FName& OutBuildId , FName& OutVariantId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当前放置会话放的是哪一行:正在放置时返回 true, OutVariantId = 正在放的建筑 ID, OutBuildId = 它的本体(普通行、无效规格行为自己);没在放置返回 false、两者为 None。
> 不说明落点能否放下(看 CanPlaceCurrentBuilding);混合多件的预设放置只反映放置组件锁存的那一个 ID

---

### Function `GetSelectedBuildVariant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static FName GetSelectedBuildVariant(const UObject* WorldContextObject , FName BuildId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 这个本体记住的规格(没记过、或记住的已失效时返回本体自己), 用于画规格菜单的选中态;BuildId 填规格行时按它的本体查

---

### Function `RegisterBuildMenuWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `Slot` | [EBuildMenuModSlot](../UI/Building/BuildMenuWidgetBase__EBuildMenuModSlot.md) |
| `WidgetClass` | `TSubclassOf<UUserWidget>` |
| `0` | `int32 Order =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static int32 RegisterBuildMenuWidget(const UObject* WorldContextObject , EBuildMenuModSlot Slot , TSubclassOf<UUserWidget> WidgetClass , int32 Order = 0);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 在建造菜单的预留位置放 Mod 控件:菜单每次创建都会生成一个实例并发 OnBuildMenuModWidgetCreated;同一位置按 Order 从小到大排。返回登记号, 失败为 0

---

### Function `UnregisterBuildMenuWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `RegisterId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool UnregisterBuildMenuWidget(const UObject* WorldContextObject , int32 RegisterId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 撤销登记并移除菜单里的实例

---

### Function `GetBuildMenuModWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `UUserWidget*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `RegisterId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static UUserWidget* GetBuildMenuModWidget(const UObject* WorldContextObject , int32 RegisterId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当前菜单里该登记号对应的控件实例(菜单没创建时为空)

---

### Function `CanBuild`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `BuildId` | `FName` |
| `OutReason` | [EBuildUnavailableReason](ModBuildLibrary__EBuildUnavailableReason.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool CanBuild(const UObject* WorldContextObject , FName BuildId , EBuildUnavailableReason& OutReason);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 建筑能否建造;不能时 OutReason 为原因

---

### Function `CanUseBuildTab`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System|Build" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `TabId` | `FName` |
| `OutReason` | [EBuildUnavailableReason](ModBuildLibrary__EBuildUnavailableReason.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , Category = "Mod System|Build") static bool CanUseBuildTab(const UObject* WorldContextObject , FName TabId , EBuildUnavailableReason& OutReason);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 子类在建造菜单里是否可用(有已解锁建筑才会出现按钮);不可用时 OutReason 为原因

---
