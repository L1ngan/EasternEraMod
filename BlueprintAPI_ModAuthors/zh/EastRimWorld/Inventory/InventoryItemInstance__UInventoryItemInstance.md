# `class` `UInventoryItemInstance`

**源码头文件:** `EastRimWorld/Inventory/InventoryItemInstance.h`

---

## 功能说明（来自头文件注释）

> 物品实例基类，管理物品的数据、世界表现（模型/替身/UI）与GOAP交互

## 蓝图暴露变量

### 属性 `ItemGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGuid ItemGuid;` |

**说明:**

> 物品实例的唯一Guid

---

### 属性 `ItemTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform ItemTransform;` |

**说明:**

> 物品在世界中的位置

---

### 属性 `InstanceIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 InstanceIndex = -1;` |

**说明:**

> 在持有者上的索引 例如ISM组件上的实例索引-1时无效 通常为不可靠 只有在PCGActor上可靠

---

### 属性 `SmallGrids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FWarehouseSmallGrid> SmallGrids;` |

**说明:**

> 此物品占用的小格子信息

---

### 属性 `GroundSoilType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundSoilType](../ERW_Enumerations__EGroundSoilType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**说明:**

> 物品所在的地面类型

---

### 属性 `GroundRichPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float GroundRichPercent = 1;` |

**说明:**

> 物品所在的地面肥沃度

---

### 属性 `CurStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UStaticMesh> CurStaticMesh;` |

**说明:**

> 当前显示的模型

---

### 属性 `bOperationMark`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bOperationMark = false;` |

**说明:**

> 是否被操作标记

---

### 属性 `bSelectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bSelectState = false;` |

**说明:**

> 是否是选中状态

---

### 属性 `bHoveringState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bHoveringState = false;` |

**说明:**

> 是否是悬浮状态

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**说明:**

> 相关按钮的状态 是否选中

---

### 属性 `InventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent = nullptr;` |

**说明:**

> 他是谁在管理(目前仅指管理器) ,不可为空

---

### 属性 `SubstituteActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AInventoryEntityActor> SubstituteActor = nullptr;` |

**说明:**

> 此实例的替身actor

---

### 属性 `InventoryItemWidgetActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AInventoryItemWidgetActor> InventoryItemWidgetActor = nullptr;` |

**说明:**

> 此实例的ui显示actor

---

### 属性 `OnItemDestory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnItemDestory` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnItemDestory OnItemDestory;` |

**说明:**

> 物品销毁时广播的委托

---

### 属性 `CurDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float CurDurability = -1;` |

**说明:**

> 当前耐久度

---

### 属性 `CopyedTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float CopyedTime = 0.f;` |

**说明:**

> 复制时间（已经进行复制的时间）

---

### 属性 `CopyNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int CopyNum= 0;` |

**说明:**

> 已经复制的次数

---

### 属性 `CurAirDryingDegree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int CurAirDryingDegree = 0;` |

**说明:**

> 当前风干度

---

### 属性 `WorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

**说明:**

> 所属的世界地点引用

---

### 属性 `InventoryItemInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInstancedStruct` |
| 反射说明符 | BlueprintReadOnly, Category="ItemaInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,Category= "ItemaInfo") FInstancedStruct InventoryItemInfo;` |

**说明:**

> 道具的信息

---

### 属性 `InventoryItemStateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EInventoryItemStateType](../Struct/ItemStruct__EInventoryItemStateType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EInventoryItemStateType InventoryItemStateType = EInventoryItemStateType::None;` |

**说明:**

> 物品状态

---

## 蓝图暴露函数

### 函数 `IsItemEnough`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool IsItemEnough();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查物品数量是否足够

---

### 函数 `RemoveReservedList`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveReservedList();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除预留物品列表

---

### 函数 `ItemDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void ItemDestroy();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 销毁

---

### 函数 `OnInventoryManagerOwnerDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void OnInventoryManagerOwnerDestroy();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 当所属的InventoryManagerComponent销毁/EndPlay时调用。
> 注意：不要在这里再去回调管理器的Add/Remove接口（管理器可能已不可用）。

---

### 函数 `SetNewInventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `InManifestationObject` | `UObject*` |
| `（匿名/仅类型）` | `int InInstanceIndex = -1` |
| `true` | `bool bAddInventoryManager =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetNewInventoryManagerComponent(UInventoryManagerComponent * InNewInventoryManagerComponent,UObject* InManifestationObject,int InInstanceIndex = -1,bool bAddInventoryManager = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> ~End IEastRimWorldCommonInterface
> 设置新拥有者 管理器与拥有者时深度绑定 在管理器或持有者变动时理应一起变动

---

### 函数 `SetSubstituteActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InSubstituteActor` | [AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetSubstituteActor(AInventoryEntityActor * InSubstituteActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置替身actor

---

### 函数 `CreateInventorySubstitute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AInventoryEntityActor* CreateInventorySubstitute();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建替身

---

### 函数 `ReleaseInventorySubstitute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReleaseInventorySubstitute();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放替身

---

### 函数 `ReleaseInventoryWidgetActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReleaseInventoryWidgetActor();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 释放数量actor

---

### 函数 `GetInventoryActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AInventoryEntityActor* GetInventoryActor();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取可以操作此物品的实体 如果是ISM组件的实例则创建替身操作

---

### 函数 `DepositOnWarehouse`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `DepositionActor` | `AActor *` |
| `InSmallGrids` | const TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)> & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DepositOnWarehouse(UInventoryManagerComponent * InNewInventoryManagerComponent , AActor * DepositionActor ,const TArray<FWarehouseSmallGrid> & InSmallGrids);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 存放到仓库中

---

### 函数 `DepositOnTradeArea`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewInventoryManagerComponent` | [UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md) * |
| `DepositionActor` | `AActor *` |
| `InSmallGrids` | const TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)> & |
| `true` | `bool bShowMesh =` |
| `true` | `bool bShowUI =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void DepositOnTradeArea(UInventoryManagerComponent * InNewInventoryManagerComponent , AActor * DepositionActor ,const TArray<FWarehouseSmallGrid> & InSmallGrids,bool bShowMesh = true,bool bShowUI = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将物品存放到交易区的指定小格中，可选择是否显示模型与UI

---

### 函数 `CheckSameType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OtherItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckSameType(UInventoryItemInstance * OtherItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否是相同的物品

---

### 函数 `CheckSameTypeByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OtherItemID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckSameTypeByID(FName OtherItemID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否是相同的物品

---

### 函数 `ChangeItemCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InChangeNumber` | `int` |
| `InShelfLife` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual int ChangeItemCount(int InChangeNumber,float InShelfLife);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 增加物品的数量 返回当前的数量

---

### 函数 `CheckMaxStack`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutCanPlace` | `int &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckMaxStack(int & OutCanPlace);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 物品是否已经堆叠到上限

---

### 函数 `GetItemCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) int GetItemCount();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取物品的数量

---

### 函数 `UpdateItemShowInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateItemShowInfo();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新静态网格体的样式

---

### 函数 `CreateStaticMeshComponentToActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `UStaticMeshComponent *` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActor` | `AActor *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UStaticMeshComponent * CreateStaticMeshComponentToActor(AActor * InActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 基于actor 创建静态网格体组件

---

### 函数 `CreateItemWidgetToActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActor` | `AActor *` |
| `true` | `bool bAutoSet =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) AInventoryItemWidgetActor * CreateItemWidgetToActor(AActor * InActor,bool bAutoSet = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建显示的ui

---

### 函数 `SetInventoryItemTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewTransform` | `const FTransform &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void SetInventoryItemTransform(const FTransform & InNewTransform);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置新的位置旋转

---

### 函数 `SetInventoryWidgetActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InInventoryItemWidgetActor` | [AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetInventoryWidgetActor(AInventoryItemWidgetActor* InInventoryItemWidgetActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置新的ui显示

---

### 函数 `UpdateInventoryItemInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateInventoryItemInfo();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 广播更新物品信息

---

### 函数 `GetInventoryGeneralData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FInventoryGeneralData](../Struct/ItemStruct__FInventoryGeneralData.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FInventoryGeneralData GetInventoryGeneralData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取物品的基础信息

---

### 函数 `GetCarryItemNumber`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldAIController_Human](../Player/EastRimWorldAIController_Human__AEastRimWorldAIController_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int GetCarryItemNumber(AEastRimWorldAIController_Human* Agent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取搬运物品的数量

---

### 函数 `UpdateInventoryItemTemperature`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateInventoryItemTemperature();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新物品所在的温度

---

### 函数 `GetTemperatureEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetTemperatureEfficiency();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 更新温度

---

### 函数 `GetTemperatureOnLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual int GetTemperatureOnLocation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取物品所在位置的温度

---

### 函数 `EatItemByActionID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EatActor` | `AActor *` |
| `ActionID` | `const FName &` |
| `Number` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void EatItemByActionID(AActor * EatActor,const FName & ActionID,int32 Number);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过action ID食用物品

---

### 函数 `GetStorageSpace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [EStorageSpace](../ERW_Enumerations__EStorageSpace.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual EStorageSpace GetStorageSpace(){return EStorageSpace::OutDoor;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前的环境

---

### 函数 `GetStorageSpaceEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetStorageSpaceEfficiency(){return 1.0f;}`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前的环境效率

---

### 函数 `WriteCopyBook`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void WriteCopyBook();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 抄录书籍

---

### 函数 `ItemChangeOrDestroyRemoveAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void ItemChangeOrDestroyRemoveAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 物品改变或者销毁时处理action

---
