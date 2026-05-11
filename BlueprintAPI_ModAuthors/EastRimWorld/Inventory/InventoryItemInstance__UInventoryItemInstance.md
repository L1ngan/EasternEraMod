# `class` `UInventoryItemInstance`

**源码头文件：** `EastRimWorld/Inventory/InventoryItemInstance.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `ItemGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGuid ItemGuid;` |

---

### 属性 `ItemTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform ItemTransform;` |

**源码注释：**

> 物品在世界中的位置

---

### 属性 `InstanceIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 InstanceIndex = -1;` |

**源码注释：**

> 在持有者上的索引 例如ISM组件上的实例索引-1时无效 通常为不可靠 只有在PCGActor上可靠

---

### 属性 `SmallGrids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWarehouseSmallGrid](../Struct/ItemStruct__FWarehouseSmallGrid.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FWarehouseSmallGrid> SmallGrids;` |

**源码注释：**

> 此物品占用的小格子信息

---

### 属性 `GroundSoilType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGroundSoilType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**源码注释：**

> 物品所在的地面类型

---

### 属性 `GroundRichPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float GroundRichPercent = 1;` |

**源码注释：**

> 物品所在的地面肥沃度

---

### 属性 `CurStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UStaticMesh> CurStaticMesh;` |

**源码注释：**

> 当前显示的模型

---

### 属性 `bOperationMark`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bOperationMark = false;` |

**源码注释：**

> 是否被操作标记

---

### 属性 `bSelectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bSelectState = false;` |

**源码注释：**

> 是否是选中状态

---

### 属性 `bHoveringState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) bool bHoveringState = false;` |

**源码注释：**

> 是否是悬浮状态

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECommonButtonType,bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**源码注释：**

> 相关按钮的状态 是否选中

---

### 属性 `InventoryManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UInventoryManagerComponent](InventoryManagerComponent__UInventoryManagerComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UInventoryManagerComponent> InventoryManagerComponent = nullptr;` |

**源码注释：**

> 他是谁在管理(目前仅指管理器) ,不可为空

---

### 属性 `SubstituteActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AInventoryEntityActor> SubstituteActor = nullptr;` |

**源码注释：**

> 此实例的替身actor

---

### 属性 `InventoryItemWidgetActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AInventoryItemWidgetActor> InventoryItemWidgetActor = nullptr;` |

**源码注释：**

> 此实例的ui显示actor

---

### 属性 `OnItemDestory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnItemDestory` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnItemDestory OnItemDestory;` |

---

### 属性 `CurDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float CurDurability = -1;` |

**源码注释：**

> 当前耐久度

---

### 属性 `CopyedTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float CopyedTime = 0.f;` |

**源码注释：**

> 复制时间（已经进行复制的时间）

---

### 属性 `CopyNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int CopyNum= 0;` |

**源码注释：**

> 已经复制的次数

---

### 属性 `CurAirDryingDegree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int CurAirDryingDegree = 0;` |

**源码注释：**

> 当前风干度

---

### 属性 `WorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

---

### 属性 `InventoryItemInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInstancedStruct` |
| 反射说明符 | BlueprintReadOnly, Category="ItemaInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly,Category= "ItemaInfo") FInstancedStruct InventoryItemInfo;` |

**源码注释：**

> 道具的信息

---

### 属性 `InventoryItemStateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EInventoryItemStateType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EInventoryItemStateType InventoryItemStateType = EInventoryItemStateType::None;` |

**源码注释：**

> 物品状态

---

## 蓝图暴露函数

### 函数 `IsItemEnough`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool IsItemEnough();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查物品数量是否足够

---

### 函数 `RemoveReservedList`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveReservedList();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除预留物品列表

---

### 函数 `ItemDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void ItemDestroy();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 销毁

---

### 函数 `OnInventoryManagerOwnerDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void OnInventoryManagerOwnerDestroy();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetNewInventoryManagerComponent(UInventoryManagerComponent * InNewInventoryManagerComponent,UObject* InManifestationObject,int InInstanceIndex = -1,bool bAddInventoryManager = true);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetSubstituteActor(AInventoryEntityActor * InSubstituteActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置替身actor

---

### 函数 `CreateInventorySubstitute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)* |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AInventoryEntityActor* CreateInventorySubstitute();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建替身

---

### 函数 `ReleaseInventorySubstitute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ReleaseInventorySubstitute();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 释放替身

---

### 函数 `ReleaseInventoryWidgetActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ReleaseInventoryWidgetActor();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 释放数量actor

---

### 函数 `GetInventoryActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [AInventoryEntityActor](InventoryEntityActor__AInventoryEntityActor.md)* |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AInventoryEntityActor* GetInventoryActor();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void DepositOnWarehouse(UInventoryManagerComponent * InNewInventoryManagerComponent , AActor * DepositionActor ,const TArray<FWarehouseSmallGrid> & InSmallGrids);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void DepositOnTradeArea(UInventoryManagerComponent * InNewInventoryManagerComponent , AActor * DepositionActor ,const TArray<FWarehouseSmallGrid> & InSmallGrids,bool bShowMesh = true,bool bShowUI = true);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckSameType(UInventoryItemInstance * OtherItemInstance);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckSameTypeByID(FName OtherItemID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual int ChangeItemCount(int InChangeNumber,float InShelfLife);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckMaxStack(int & OutCanPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 物品是否已经堆叠到上限

---

### 函数 `GetItemCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) int GetItemCount();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取物品的数量

---

### 函数 `UpdateItemShowInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateItemShowInfo();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UStaticMeshComponent * CreateStaticMeshComponentToActor(AActor * InActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) AInventoryItemWidgetActor * CreateItemWidgetToActor(AActor * InActor,bool bAutoSet = true);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void SetInventoryItemTransform(const FTransform & InNewTransform);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetInventoryWidgetActor(AInventoryItemWidgetActor* InInventoryItemWidgetActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置新的ui显示

---

### 函数 `UpdateInventoryItemInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateInventoryItemInfo();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 广播更新物品信息

---

### 函数 `GetInventoryGeneralData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FInventoryGeneralData](../Struct/ItemStruct__FInventoryGeneralData.md) |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FInventoryGeneralData GetInventoryGeneralData();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int GetCarryItemNumber(AEastRimWorldAIController_Human* Agent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取搬运物品的数量

---

### 函数 `UpdateInventoryItemTemperature`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateInventoryItemTemperature();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新物品所在的温度

---

### 函数 `GetTemperatureEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetTemperatureEfficiency();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 更新温度

---

### 函数 `GetTemperatureOnLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual int GetTemperatureOnLocation();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void EatItemByActionID(AActor * EatActor,const FName & ActionID,int32 Number);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过action ID食用物品

---

### 函数 `GetStorageSpace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `EStorageSpace` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual EStorageSpace GetStorageSpace(){return EStorageSpace::OutDoor;}`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前的环境

---

### 函数 `GetStorageSpaceEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetStorageSpaceEfficiency(){return 1.0f;}`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前的环境效率

---

### 函数 `WriteCopyBook`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void WriteCopyBook();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 抄录书籍

---

### 函数 `ItemChangeOrDestroyRemoveAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void ItemChangeOrDestroyRemoveAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 物品改变或者销毁时处理action

---
