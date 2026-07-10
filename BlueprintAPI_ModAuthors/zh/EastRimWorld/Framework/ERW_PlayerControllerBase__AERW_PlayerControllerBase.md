# `class` `AERW_PlayerControllerBase`

**源码头文件:** `EastRimWorld/Framework/ERW_PlayerControllerBase.h`

---

## 功能说明（来自头文件注释）

> PlayerController 基类，负责背包资源管理、物品生成、队伍角色查询与主界面 UI 等

## 蓝图暴露变量

### 属性 `InventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UInventoryManagerComponent](../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="Inventory" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent;` |

**说明:**

> 背包管理组件

---

### 属性 `OnInventoryItemInstanceDestroy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnInventoryItemInstance` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnInventoryItemInstance OnInventoryItemInstanceDestroy;` |

**说明:**

> ~End of IInventoryInterface interface
> 物品删除

---

### 属性 `OnInventoryItemInstanceAddition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnInventoryItemInstance` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnInventoryItemInstance OnInventoryItemInstanceAddition;` |

**说明:**

> 物品添加

---

### 属性 `OnInventoryItemInstanceUpdate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnInventoryItemInstance` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnInventoryItemInstance OnInventoryItemInstanceUpdate;` |

**说明:**

> 更新物品信息

---

### 属性 `OnPopupInfoUIChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnPopupInfoUIChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnPopupInfoUIChange OnPopupInfoUIChange;` |

**说明:**

> 更新通用信息界面

---

### 属性 `OnCreateRobotDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCreateRobotDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCreateRobotDelegate OnCreateRobotDelegate;` |

**说明:**

> 创建机关人

---

### 属性 `OnDestoryRobotDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnDestoryRobotDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnDestoryRobotDelegate OnDestoryRobotDelegate;` |

**说明:**

> 销毁机关人

---

### 属性 `OnItemUseStateChangeEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnItemUseStateChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnItemUseStateChange OnItemUseStateChangeEvent;` |

**说明:**

> [自定义事件]当物品的使用状态改变

---

### 属性 `OnUnLockItemEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUnLockItem` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUnLockItem OnUnLockItemEvent;` |

**说明:**

> 解锁了物品(建筑菜单红点)

---

### 属性 `IsLeftShiftPressed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool IsLeftShiftPressed { false };` |

**说明:**

> 左Shift键是否按下

---

### 属性 `SelectedCharacterTabIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 SelectedCharacterTabIndex = 0;` |

**说明:**

> 当前选中的角色页签索引

---

### 属性 `OnStartSettleAccountsDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBattlefieldDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBattlefieldDelegate OnStartSettleAccountsDelegate;` |

**说明:**

> 结算开始委托

---

### 属性 `OnAttackerMoveToWorldPlaceDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBattlefieldDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBattlefieldDelegate OnAttackerMoveToWorldPlaceDelegate;` |

**说明:**

> 攻击方已经到达战场

---

### 属性 `OnCharactersStartWanderDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCharactersStartWanderDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCharactersStartWanderDelegate OnCharactersStartWanderDelegate;` |

**说明:**

> 角色开始游荡

---

## 蓝图暴露函数

### 函数 `K2_InitWorldPlayerController`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, DisplayName= "InitWorldPlayerController") void K2_InitWorldPlayerController();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 进入世界后初始化控制器的蓝图实现事件

---

### 函数 `K2_InitPlayerControllerOnWorldPlace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, DisplayName= "InitPlayerControllerOnWorldPlace") void K2_InitPlayerControllerOnWorldPlace();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 进入世界地点后初始化控制器的蓝图实现事件

---

### 函数 `RemoveUnlockItemTip`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UnlockItemId` | `FName` |
| `UnlockItemType` | [ETechUnlockItemType](../Struct/TechnologyStruct__ETechUnlockItemType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveUnlockItemTip(FName UnlockItemId, ETechUnlockItemType UnlockItemType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除解锁物品提示

---

### 函数 `FindUnlockItemTip`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UnlockItemId` | `FName` |
| `UnlockItemType` | [ETechUnlockItemType](../Struct/TechnologyStruct__ETechUnlockItemType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool FindUnlockItemTip(FName UnlockItemId, ETechUnlockItemType UnlockItemType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查找解锁物品提示

---

### 函数 `ShowNotifyMessage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Text` | `const FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ShowNotifyMessage(const FText& Text);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 显示通知消息

---

### 函数 `GetNumberOfResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GroundInventoryType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |
| `InGameplayTag` | `FGameplayTag` |
| `InResourceID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int GetNumberOfResources(EGroundInventoryType GroundInventoryType,FGameplayTag InGameplayTag,FName InResourceID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取拥有的资源数量

---

### 函数 `GetAllOwendResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutResources` | TArray<[FItemNumData](../Struct/ItemStruct__FItemNumData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllOwendResources(TArray<FItemNumData>& OutResources);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当前拥有的所有资源及其数量列表

---

### 函数 `GetAllOwendResourcesTagMapInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutResources` | UPARAM(ref) TMap<FGameplayTag,[FItemNumData](../Struct/ItemStruct__FItemNumData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllOwendResourcesTagMapInfo(UPARAM(ref) TMap<FGameplayTag,FItemNumData>& OutResources);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取拥有的所有资源按照TMap<FGameplayTag,FInventoryGeneralData>的方式

---

### 函数 `CheckHaveOwenResource`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResource` | `const TMap<FName,int> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckHaveOwenResource(const TMap<FName,int> & InResource);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取是否拥有这些资源

---

### 函数 `CheckHaveFood`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckHaveFood();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否拥有实物

---

### 函数 `GetCanConsumeResourcesNums`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResourcesIDs` | `const TArray<FName> &` |
| `OutNum` | `TMap<FName,int32>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetCanConsumeResourcesNums(const TArray<FName> & InResourcesIDs,TMap<FName,int32>& OutNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> /获取当前可用于消耗的物资(排除正在使用和预留的物品)

---

### 函数 `CheckCanComsumeResourceEnough`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResource` | `const TMap<FName,int32>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanComsumeResourceEnough(const TMap<FName,int32>& InResource);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查可消耗物资是否足够

---

### 函数 `ConsumeResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResource` | `UPARAM(ref) TMap<FName,int32> &` |
| `true` | `bool bEnoughConsume =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ConsumeResources(UPARAM(ref) TMap<FName,int32> & InResource,bool bEnoughConsume = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> /消耗物资(例如城镇升级),返回失败不产生消耗(排除正在使用和预留的物品)
> //// @param bEnoughConsume 是否物品足够才消耗,设为false即使不够也会把能消耗的都消耗掉

---

### 函数 `GenerateAllTypeItemToWorldByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResourceID` | `FName` |
| `InResourceNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `InventoryType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |
| `（匿名/仅类型）` | `float InRadius = 500.f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GenerateAllTypeItemToWorldByID(FName InResourceID, int InResourceNumber, FTransform InSpawnTransform,ULevel * CurLevel, EGroundInventoryType InventoryType,float InRadius = 500.f);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据ID生成物品

---

### 函数 `GenerateAllTypeItemToWorldByInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInfo` | `FInstancedStruct` |
| `InResourceNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `（匿名/仅类型）` | `float InRadius = 500.f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GenerateAllTypeItemToWorldByInfo(FInstancedStruct ItemInfo, int InResourceNumber, FTransform InSpawnTransform,ULevel * CurLevel,float InRadius = 500.f);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据数据生成物品

---

### 函数 `GenerateAllTypeItemToWorldByInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `InResourceNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `（匿名/仅类型）` | `float InRadius = 500.f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GenerateAllTypeItemToWorldByInstance(UInventoryItemInstance* ItemInstance, int InResourceNumber, FTransform InSpawnTransform,ULevel * CurLevel,float InRadius = 500.f);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据实例生成物品

---

### 函数 `CheckAndGetSuitableLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FTransform` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRadius` | `float` |
| `InSpawnTransform` | `FTransform` |
| `InResourceID` | `FName` |
| `InResourceNumber` | `int&` |
| `nullptr` | `AActor* ActorToIgnore =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FTransform CheckAndGetSuitableLocation(float InRadius , FTransform InSpawnTransform , FName InResourceID , int& InResourceNumber , AActor* ActorToIgnore = nullptr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 判断位置是否合适，不合适随机周边一个位置，并判断周围是否有相同的物品

---

### 函数 `TryMergeNormalItemIntoNearbyStacks`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `FName` |
| `ItemCount` | `int32` |
| `SampleLocation` | `const FVector&` |
| `Radius` | `float` |
| `nullptr` | `AActor* ActorToIgnore =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 TryMergeNormalItemIntoNearbyStacks(FName ItemID , int32 ItemCount , const FVector& SampleLocation , float Radius , AActor* ActorToIgnore = nullptr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 在半径内查找地面 SingleItem 中与 ItemID 相同的堆叠并尽量合并（用于 NormalItem）；返回剩余未能合并的数量。

---

### 函数 `GenerateIDItemToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResourceID` | `FName` |
| `InResourceNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `InventoryType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AInventoryItemSet * GenerateIDItemToWorld(FName InResourceID,int InResourceNumber,FTransform InSpawnTransform,ULevel * CurLevel , EGroundInventoryType InventoryType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按资源 ID 在世界中生成物品集，返回生成的 AInventoryItemSet

---

### 函数 `GenerateEquipmentToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipmentQualityRang` | const [FEquipmentQualityRange](../Struct/CommonStruct__FEquipmentQualityRange.md) & |
| `InEquipmentNumber` | `int` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AInventoryItemSet * GenerateEquipmentToWorld(const FEquipmentQualityRange & EquipmentQualityRang,int InEquipmentNumber,FTransform InSpawnTransform,ULevel * CurLevel,const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> void GenerateEquipmentData(const FEquipmentQualityRange & EquipmentQualityRang,FString CharacterName = "");
> 根据配置生成一个物品到世界中

---

### 函数 `GenerateInfoItemToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInfo` | `FInstancedStruct` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |
| `1` | `int InEquipmentNumber =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AInventoryItemSet* GenerateInfoItemToWorld(FInstancedStruct ItemInfo,FTransform InSpawnTransform,ULevel * CurLevel,int InEquipmentNumber = 1);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据装备信息生成一个物品丢到世界中

---

### 函数 `DebugDrawAIVision`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AI` | class [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `128` | `int32 NumSamples =` |
| `（匿名/仅类型）` | `float Duration = 0.15f` |
| `（匿名/仅类型）` | `float ZLift = 50.f` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DebugDrawAIVision(class AEastRimWorldAIController* AI , int32 NumSamples = 128 , float Duration = 0.15f , float ZLift = 50.f);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 调试绘制AI视野

---

### 函数 `GenerateInstanceItemToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AInventoryItemSet* GenerateInstanceItemToWorld(UInventoryItemInstance* ItemInstance,FTransform InSpawnTransform,ULevel * CurLevel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据实例生成一个物品丢到世界中

---

### 函数 `GenerateItemSaveDateToWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UseItemSaveData` | [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) |
| `InRadius` | `float` |
| `InSpawnTransform` | `FTransform` |
| `CurLevel` | `ULevel *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GenerateItemSaveDateToWorld(FUseItemSaveData UseItemSaveData,float InRadius , FTransform InSpawnTransform,ULevel * CurLevel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 根据存档信息生成物品到世界中

---

### 函数 `CheckHaveOwenResourceByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GameplayTags` | `TArray<FGameplayTag>` |
| `InResourceNumber` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckHaveOwenResourceByTag(TArray<FGameplayTag> GameplayTags,int InResourceNumber);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 是否拥有包含这些标签的资源

---

### 函数 `GetAllPlayerTeamCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllPlayerTeamCharacter(TArray<AEastRimWorldCharacter_Human*>& OutCharacters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有玩家队伍角色

---

### 函数 `GetPlayerTeamCharacterByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AEastRimWorldCharacter_Human* GetPlayerTeamCharacterByGuid(const FGuid& CharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过GUID获取玩家队伍中一个角色信息

---

### 函数 `GetCharacterByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `true` | `bool bPlayerTeam =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AEastRimWorldCharacter_Human* GetCharacterByGuid(const FGuid& CharacterGuid, bool bPlayerTeam = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过Guid查询角色（可以不限制玩家）

---

### 函数 `GetAllRobotTeamCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter_Summons](../Character/EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllRobotTeamCharacter(TArray<AEastRimWorldCharacter_Summons*>& OutCharacters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有玩家队伍机关人角色

---

### 函数 `GetAllFightRobotTeamCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter_Summons](../Character/EastRimWorldCharacter_Summons__AEastRimWorldCharacter_Summons.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllFightRobotTeamCharacter(TArray<AEastRimWorldCharacter_Summons*>& OutCharacters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有玩家队伍战斗机关人角色

---

### 函数 `GetAllAnimaTeamCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter_Animal](../Character/EastRimWorldCharacter_Animal__AEastRimWorldCharacter_Animal.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllAnimaTeamCharacter(TArray<AEastRimWorldCharacter_Animal*>& OutCharacters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有玩家队伍动物

---

### 函数 `GetAllCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllCharacter(TArray<AEastRimWorldCharacter*>& OutCharacters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有角色(包括人物 动物 召唤物)

---

### 函数 `GetAllCharacter2`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCharacters` | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllCharacter2(TArray<AEastRimWorldCharacter*>& OutCharacters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有角色（人物/动物/召唤物）的第二版查询接口，与 GetAllCharacter 功能相同

---

### 函数 `GetGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActionID` | `const FName&` |
| `ItemID` | `const FName&` |
| `GOAPAction` | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void GetGOAPAction(const FName& ActionID , const FName& ItemID , FGOAP_Action& GOAPAction);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> /////////////临时做法 后续更改获取这个配置的方式*******///////////////////////////

---

### 函数 `FindItemByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* FindItemByGuid(FGuid InGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按 GUID 查找背包中的物品实例

---

### 函数 `CreateMainUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MainWidgetUI` | const TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void CreateMainUI(const TSoftClassPtr<UEastRimWorldActivatableWidget> & MainWidgetUI);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 创建主界面UI

---

### 函数 `HideAllUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bHide` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void HideAllUI(bool bHide);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置所有ui隐藏

---

### 函数 `GetInputEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) bool GetInputEnabled();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 返回玩家输入当前是否启用

---

### 函数 `SetPlayMoviesMask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bShow` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SetPlayMoviesMask(bool bShow);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 设置播放影片遮罩的显示或隐藏（蓝图实现）

---

### 函数 `SpawnBuildingFaultProjectile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildingActor` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md) * |
| `AbilityProjectileStruct` | `const FAbilityProjectileStruct &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SpawnBuildingFaultProjectile(ABuildingActorBase * BuildingActor,const FAbilityProjectileStruct & AbilityProjectileStruct);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成建筑物故障投射物

---

### 函数 `ShowMessageBox`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Title` | `const FText&` |
| `Message` | `const FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShowMessageBox(const FText& Title,const FText& Message);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 显示带标题与内容的消息框（蓝图实现）

---

### 函数 `TestPrintCurrentCameraName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Debug" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Debug") void TestPrintCurrentCameraName();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 测试：在日志中输出 PlayerCameraManager、GetViewTarget、GetViewTargetPawn 名称

---

### 函数 `OnHumanControlledChanged`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Vision|Debug" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Human` | class [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `bControlled` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Vision|Debug") void OnHumanControlledChanged(class AEastRimWorldCharacter_Human* Human, bool bControlled);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 征召目标变化：用于统一管理唯一显示的视野扇形（仅在被征召者上显示）

---

### 函数 `BeginVisionBatch`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Vision|Debug" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Vision|Debug") void BeginVisionBatch();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 批量征召开始：进入批量模式（期间不显示任何扇形）

---

### 函数 `EndVisionBatch`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Vision|Debug" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Vision|Debug") void EndVisionBatch();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 批量征召结束：根据人数决定显示（==1 显示；否则隐藏）

---

### 函数 `NotifyVisionSelectionChanged`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Vision|Debug" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category="Vision|Debug") void NotifyVisionSelectionChanged();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选中状态变化后通知：立即按“征召+选中+唯一”规则重算显示

---

### 函数 `WM_TargetDump`

| 项目 | 内容 |
|------|------|
| 反射说明符 | （仅蓝图可见相关标记） |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `); (BlueprintCallable` |
| `InPlace` | Category="WM") void WM_SetSelectedPlace(class [AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）:** `UFUNCTION(Exec) void WM_TargetDump(); UFUNCTION(BlueprintCallable, Category="WM") void WM_SetSelectedPlace(class AWorldPlace* InPlace);`

**用法说明:** 详见蓝图编辑器中该节点的引脚与分类。

**说明:**

> WM Target Dump 字段。

---
