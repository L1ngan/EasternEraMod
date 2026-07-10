# `class` `UInventoryManagerComponent`

**源码头文件:** `EastRimWorld/Inventory/InventoryManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 库存管理组件，管理物品实例的增删、堆叠、存档以及仓库/交易区格位

## 蓝图暴露变量

### 属性 `UseItemSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FUseItemSaveData> UseItemSaveData;` |

**说明:**

> 存档时临时复制 存档结束后删除

---

### 属性 `CollectSaveDataMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FCollectSaveDataList](../Struct/ItemStruct__FCollectSaveDataList.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TMap<FName,FCollectSaveDataList> CollectSaveDataMap;` |

**说明:**

> 采集物存档数据映射表（物品ID→存档数据列表）

---

### 属性 `FarmlandPlantSaveDataMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FFarmlandPlantSaveDataList](../Struct/ItemStruct__FFarmlandPlantSaveDataList.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TMap<FName,FFarmlandPlantSaveDataList> FarmlandPlantSaveDataMap;` |

**说明:**

> 农田种植物存档数据映射表（物品ID→存档数据列表）

---

### 属性 `InventoryItemNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) int InventoryItemNumber = 0;` |

**说明:**

> 物品数量（存档字段）

---

### 属性 `CharacterBackpackSlotNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere , Blueprintable) int32 CharacterBackpackSlotNum;` |

**说明:**

> 角色背包槽位数量

---

### 属性 `ItemData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid , [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGuid , UInventoryItemInstance*> ItemData;` |

**说明:**

> Guid对应的物品实例

---

### 属性 `InventoryItemSetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EInventoryItemSetType](../Struct/ItemStruct__EInventoryItemSetType.md) |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="InventoryManagerComponent|Inventory" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryManagerComponent|Inventory", Meta = (AllowPrivateAccess = "true"),SaveGame) EInventoryItemSetType InventoryItemSetType = EInventoryItemSetType::None;` |

**说明:**

> 此组件的拥有者的库存类型

---

### 属性 `NotPutInItemTagContainer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) FGameplayTagContainer NotPutInItemTagContainer;` |

**说明:**

> 不可放入的类型

---

### 属性 `StoragePriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) int32 StoragePriority;` |

**说明:**

> 仓库存储优先级

---

### 属性 `TradeAreaEndGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FGridPosition TradeAreaEndGridPos;` |

**说明:**

> UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame)
> FGridPosition TradeAreaStartGridPos;

---

### 属性 `TradeAreaStartPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FVector TradeAreaStartPos;` |

**说明:**

> 交易区起始点世界位置

---

### 属性 `TradeAreaEndPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FVector TradeAreaEndPos;` |

**说明:**

> 交易区结束点世界位置

---

### 属性 `TradeAreaThirdPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FVector TradeAreaThirdPos;` |

**说明:**

> 交易区第三点世界位置

---

### 属性 `TradeAreaCurGridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadWrite,SaveGame) FGridPosition TradeAreaCurGridPos;` |

**说明:**

> 交易区当前格子坐标

---

### 属性 `ItemActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* , [UGOAP_ActionComponent](../GOAP/GOAP_ActionComponent__UGOAP_ActionComponent.md)*> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TMap<UInventoryItemInstance* , UGOAP_ActionComponent*> ItemActions;` |

**说明:**

> 物品对应的GOAP Action
> TMap<物品数据 , GOAP Action组件>

---

### 属性 `ItemMemories`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* , [UGOAP_MemoryComponent](../GOAP/GOAP_MemoryComponent__UGOAP_MemoryComponent.md)*> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TMap<UInventoryItemInstance* , UGOAP_MemoryComponent*> ItemMemories;` |

**说明:**

> 物品对应的GOAP记忆
> TMap<物品数据 , GOAP记忆组件>

---

## 蓝图暴露函数

### 函数 `DynamicAddInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UInstancedStaticMeshComponent *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InInventoryItemInfo` | `const FInstancedStruct &` |
| `InstanceTransform` | `const FTransform &` |
| `OutIndex` | `int &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UInstancedStaticMeshComponent * DynamicAddInstance(const FInstancedStruct & InInventoryItemInfo,const FTransform & InstanceTransform,int & OutIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加实例

---

### 函数 `GetItemNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetItemNum(FName ItemId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 查询物品的数量(不是总数，找到的第一堆物品的数量)

---

### 函数 `GetItemTotalNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetItemTotalNum(FName ItemId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 查询玩家拥有的某个物品的总数量

---

### 函数 `GetItemNumNotEquiped`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetItemNumNotEquiped(FName ItemId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 查询物品的数量(排除装备在身上的)

---

### 函数 `GetItemNumByItemState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemId` | `FName` |
| `InUseState` | [EItemUseState](../Struct/ItemStruct__EItemUseState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetItemNumByItemState(FName ItemId,EItemUseState InUseState);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取对应状态的物品数量

---

### 函数 `GetItemInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemId` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) UInventoryItemInstance * GetItemInstance(FName ItemId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取对应id的物品实例

---

### 函数 `CreateCanUseInventoryItemInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="InventoryItemInstance" |
| 返回类型 | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `InCollectItem` | `const FInstancedStruct&` |
| `InItemTransform` | `const FTransform &` |
| `InItemCount` | `const int32` |
| `（匿名/仅类型）` | [EInventoryItemStateType](../Struct/ItemStruct__EInventoryItemStateType.md) InInventoryItemStateType = [EInventoryItemStateType](../Struct/ItemStruct__EInventoryItemStateType.md)::Collected |
| `nullptr` | `UObject * InManifestationObject =` |
| `（匿名/仅类型）` | `const int32 InInstanceIndex = -1` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category = "InventoryItemInstance") static UInventoryItemInstance * CreateCanUseInventoryItemInstance(UInventoryManagerComponent * InInventoryManagerComponent,const FInstancedStruct& InCollectItem,const FTransform & InItemTransform,const int32 InItemCount,EInventoryItemStateType InInventoryItemStateType = EInventoryItemStateType::Collected,UObject * InManifestationObject = nullptr,const int32 InInstanceIndex = -1);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> ~End of IInventoryInterface interface
> 创建一个物品实例到指定管理器

---

### 函数 `GetAllCanUseItemSimpleData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutData` | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllCanUseItemSimpleData(TMap<FName,FItemSimpleData>& OutData);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取所有可用物品的简单数据（物品ID→简单数据）

---

### 函数 `GetAllItemsData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutData` | TArray<[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)> & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllItemsData(TArray<FTravelerGoodsInfo> & OutData);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取所有物品的简单数据（不区分使用状态）

---

### 函数 `GetAllTradeGoodData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutData` | TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |
| `InUseState` | [EItemUseState](../Struct/ItemStruct__EItemUseState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetAllTradeGoodData(TMap<FName,FTravelerGoodsInfo>& OutData,EItemUseState InUseState);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 按物品使用状态获取所有交易货物数据

---

### 函数 `GetUseItemSaveDataByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemID` | `FName` |
| `NeedNum` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FUseItemSaveData> GetUseItemSaveDataByID(FName InItemID , int32 NeedNum);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过ID拿指定数量的物品

---

### 函数 `GetAllInventoryItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | const TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> & |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) const TArray<UInventoryItemInstance*> & GetAllInventoryItems();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取此组件管理的所有实例

---

### 函数 `InitInventoryData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InInventoryItemSetType` | [EInventoryItemSetType](../Struct/ItemStruct__EInventoryItemSetType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitInventoryData(EInventoryItemSetType InInventoryItemSetType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化数据

---

### 函数 `GetCanPlaceItemNumberByInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewInventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int GetCanPlaceItemNumberByInstance(UInventoryItemInstance * NewInventoryItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以放置下此实例的数量

---

### 函数 `GetCanPlaceItemNumberByItemID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemID` | `FName` |
| `InNumber` | `int` |
| `GroundInventoryType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int GetCanPlaceItemNumberByItemID(FName InItemID,int InNumber,EGroundInventoryType GroundInventoryType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否可以放置下此ID物品的数量

---

### 函数 `GetCanUseGridNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BLueprintCallable,BlueprintPure) int32 GetCanUseGridNum();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取可用格子数量

---

### 函数 `TakeOutInventoryItemInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName` |
| `InItemCount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UInventoryItemInstance * TakeOutInventoryItemInstance(const FName ItemID,int32 InItemCount);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取对应数量的物品实例 取用仓库物品使用 InventoryItemInstanceTransferToOtherManager方法 (注意此时，物品仍然在原管理组件中，需操作返回的实例对象重新添加到另外的管理组件)

---

### 函数 `TakeOutInventoryItemInstanceByInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| `InItemCount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UInventoryItemInstance * TakeOutInventoryItemInstanceByInstance(UInventoryItemInstance * InItemInstance,int32 InItemCount);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按指定物品实例取出对应数量的物品实例（物品仍在原管理组件中，需自行添加到其他管理组件）

---

### 函数 `InventoryItemInstanceTransferToOtherManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OtherManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `ItemID` | `const FName` |
| `InItemCount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UInventoryItemInstance * InventoryItemInstanceTransferToOtherManager(UInventoryManagerComponent * OtherManagerComponent,const FName ItemID,int32 InItemCount);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 转移对应数量的物品放入到另一个管理组件中 返回实际转移的实例 如果没有则为空

---

### 函数 `RemoveInventoryItemInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName` |
| `InItemCount` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveInventoryItemInstance(const FName ItemID,int32 InItemCount);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除对应数量的物品

---

### 函数 `ConsumeInventoryItemInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItems` | `UPARAM(ref) TMap<FName,int32> &` |
| `true` | `bool bEnoughConsume =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool ConsumeInventoryItemInstance(UPARAM(ref) TMap<FName,int32> & InItems,bool bEnoughConsume = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> /消耗物品
> / @param bEnoughConsume 是否物品足够才消耗

---

### 函数 `GetInventoryItemByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetInventoryItemByType(EGroundInventoryType ItemType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> / 按类型获取装备数组
> / @param ItemType 物品类型
> / @return

---

### 函数 `GetMartialArtsBookInstancesItemByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MajorCate` | [EMartialArtsMajorCategories](../Struct/MartialArts__EMartialArtsMajorCategories.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetMartialArtsBookInstancesItemByType(EMartialArtsMajorCategories MajorCate);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> / 按类型获取武学书籍数组
> / @param MajorCate 武学大类（None表示查询全部）
> / @return

---

### 函数 `GetBookInfoDataByBookType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BookType` | [EBookClassificationType](../Struct/MartialArts__EBookClassificationType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetBookInfoDataByBookType(EBookClassificationType BookType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> / 按书籍类型查询书籍信息
> / @param BookType
> / @return

---

### 函数 `GetFoodDataByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FoodType` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetFoodDataByType(int32 FoodType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按类型获取食物数据

---

### 函数 `CanUseItemForControlBehavior`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="InventoryManagerComponent" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetObject` | `UObject*` |
| `GroundInventoryType` | [EGroundInventoryType](../Struct/CommonEnum__EGroundInventoryType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "InventoryManagerComponent") bool CanUseItemForControlBehavior(UObject* TargetObject, EGroundInventoryType GroundInventoryType) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 目标为指定地面物品类型、ItemUseState 为 None（食物校验 Food/Drug，装备需有 EquipmentType）

---

### 函数 `GetEquItemInstancesItemByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemType1` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType2` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |
| `UseState` | [EItemUseState](../Struct/ItemStruct__EItemUseState.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetEquItemInstancesItemByType(EEquipmentType ItemType1,EArmorType ArmorType2,EItemUseState UseState);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> / 按类型获取装备和武器数组
> / @param ItemType 物品类型
> / @return

---

### 函数 `GetEquItemInstancesItemByType2`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemType1` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType2` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |
| `CharInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetEquItemInstancesItemByType2(EEquipmentType ItemType1,EArmorType ArmorType2,UInventoryManagerComponent* CharInventoryManagerComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> / 查询未使用的装备和自己的装备
> / @param ItemType1 大类型
> / @param ArmorType2 小类型
> / @param CharInventoryManagerComponent 角色的物品管理组件
> / @return

---

### 函数 `GetPuppetEquipmentInstancesByType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipType` | [EEquipmentType](../Struct/CommonEnum__EEquipmentType.md) |
| `ArmorType` | [EArmorType](../Struct/CommonEnum__EArmorType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UInventoryItemInstance*> GetPuppetEquipmentInstancesByType(EEquipmentType EquipType,EArmorType ArmorType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 查询傀儡装备

---

### 函数 `GetAllSmallGrid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | const TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) const TArray<FWarehouseSmallGrid>& GetAllSmallGrid();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有仓库小格子信息

---

### 函数 `AddItemBySimpleData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FInstancedStruct>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InResources` | const TMap<FName, [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FInstancedStruct> AddItemBySimpleData(const TMap<FName, FItemSimpleData>& InResources);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加物品通过简单的信息

---
