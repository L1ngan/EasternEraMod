# `class` `UGOAP_ManagerComponent`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> GOAP管理组件

## 蓝图暴露变量

### 属性 `NormalActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FActionData>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) TMap<FName , FActionData> NormalActions;` |

**源码注释:**

> 普通Action
> TMap<GOAP目标配置表ID , ActionData>

---

### 属性 `ItemActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FItemActions>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName , FItemActions> ItemActions;` |

**源码注释:**

> 物品相关的Action
> TMap<物品相关GOAP目标 , 物品对应的Action>

---

### 属性 `BatchActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FBatchData>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName , FBatchData> BatchActions;` |

**源码注释:**

> 批量处理的Action
> TMap<GOAP目标配置表ID , 批量处理的数据>

---

### 属性 `PreActionData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , FPreActionData> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FUObjectData , FPreActionData> PreActionData;` |

**源码注释:**

> 前置Action
> TMap<当前物体的数据 , 前置Action数据>

---

### 属性 `ConstructPreActionData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , FPreActionData>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<int32 , FPreActionData> ConstructPreActionData;` |

**源码注释:**

> 建造Action相关的前置Action
> TMap<建造批次 , 前置Action数据>

---

### 属性 `SuspendGrowItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , FOccupyObject> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FUObjectData , FOccupyObject> SuspendGrowItems;` |

**源码注释:**

> 暂停生长的采集物
> TMap<采集物的数据 , 占据采集物的建筑数据>

---

### 属性 `PracticeActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , FGOAP_Actions> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) TMap<FUObjectData , FGOAP_Actions> PracticeActions;` |

**源码注释:**

> 修炼相关的Action

---

### 属性 `RemovedAfterCompleteGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<FName> RemovedAfterCompleteGoals;` |

**源码注释:**

> 完成后可以被移除的GOAP目标

---

### 属性 `WorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AWorldPlace> WorldPlace;` |

---

### 属性 `OnActionAdded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnActionAdded` |
| 反射说明符 | BlueprintReadWrite, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintReadWrite) FOnActionAdded OnActionAdded;` |

**源码注释:**

> 当Action添加后广播

---

## 蓝图暴露函数

### 函数 `RecoverLargeUserAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `ActionComponent` | [UGOAP_ActionComponent](GOAP_ActionComponent__UGOAP_ActionComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RecoverLargeUserAction(const FGOAP_Action& Action , UGOAP_ActionComponent* ActionComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 读档后恢复大数量用户的Action

---

### 函数 `AddSpecifiedItemAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddSpecifiedItemAction(AEastRimWorldAIController* Agent , UInventoryItemInstance* ItemInstance , const FGOAP_Action& Action);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 加入指定物品Action

---

### 函数 `RemoveSpecifiedItemAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| `GoalID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveSpecifiedItemAction(AEastRimWorldAIController* Agent , UInventoryItemInstance* ItemInstance , const FName& GoalID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除指定物品Action

---

### 函数 `RemoveSpecifiedItemAllAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveSpecifiedItemAllAction(UInventoryItemInstance* ItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除指定物品所有相关的Action

---

### 函数 `AddAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddAction(const FGOAP_Action& Action);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 添加Action

---

### 函数 `RemoveAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveAction(const FGOAP_Action& Action);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除Action

---

### 函数 `GetBatchIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetBatchIndex(const FName& GoalID);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获得批次

---

### 函数 `AddRTreeNode`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddRTreeNode(const FGOAP_Action& Action);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 加入新节点到R树中

---

### 函数 `RemoveRTreeNode`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveRTreeNode(const FGOAP_Action& Action);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 从R树中删除节点

---

### 函数 `RemoveSuspendGrowItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObjectData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveSuspendGrowItems(const FUObjectData& BuildObjectData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除暂停生长的采集物

---

### 函数 `UpdateActionActivity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `Active` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateActionActivity(const FGOAP_Action& Action , bool Active);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 更新Action是否活跃

---

### 函数 `RemoveCompleteAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveCompleteAction(const FGOAP_Action& Action);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除已完成的Action

---

### 函数 `CheckCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | const [FGOAP_Action](GOAP_Data__FGOAP_Action.md)& |
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `Target` | `UObject*` |
| `MinCost` | `float` |
| `OwnerLocation` | `const FVector&` |
| `IsPathGoal` | `bool` |
| `Plans` | TArray<[FGOAP_Action](GOAP_Data__FGOAP_Action.md)>& |
| `NAME_None` | `FName SpecifiedGoal =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) float CheckCondition(const FGOAP_Action& Action , AEastRimWorldAIController* Agent , UObject* Target , float MinCost , const FVector& OwnerLocation , bool IsPathGoal , TArray<FGOAP_Action>& Plans,FName SpecifiedGoal = NAME_None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查条件是否满足

---

### 函数 `IsPracticeGoal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) static bool IsPracticeGoal(const FName& GoalID);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `CheckSpecifiedItemAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckSpecifiedItemAction(UInventoryItemInstance* ItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查指定物品Action是否存在

---

### 函数 `CheckHaveCharacterGetEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `EquipmentType` | `EEquipmentType` |
| `ArmorType` | `EArmorType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckHaveCharacterGetEquipment(AEastRimWorldAIController* Agent , EEquipmentType EquipmentType , EArmorType ArmorType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查是否正在获取某个部位的装备

---

### 函数 `GetIsGettingEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `EquipmentType` | `EEquipmentType` |
| `ArmorType` | `EArmorType` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* GetIsGettingEquipment(AEastRimWorldAIController* Agent , EEquipmentType EquipmentType , EArmorType ArmorType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取正在获取的某个装备

---
