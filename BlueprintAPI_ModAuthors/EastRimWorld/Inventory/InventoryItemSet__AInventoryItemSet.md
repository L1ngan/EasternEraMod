# `class` `AInventoryItemSet`

**源码头文件：** `EastRimWorld/Inventory/InventoryItemSet.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `bSelectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool bSelectState;` |

**源码注释：**

> 是否是选中状态

---

### 属性 `bHoveringState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool bHoveringState;` |

**源码注释：**

> 是否是悬浮状态

---

### 属性 `InventoryItemSetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EInventoryItemSetType` |
| 反射说明符 | BlueprintReadWrite, Category="InventoryItemSet|Inventory" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "InventoryItemSet|Inventory",SaveGame) EInventoryItemSetType InventoryItemSetType = EInventoryItemSetType::PCGActor;` |

**源码注释：**

> 此集合的类型

---

### 属性 `BoxComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UBoxComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="InventoryItemSet|Inventory" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryItemSet|Inventory", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UBoxComponent> BoxComponent;` |

---

### 属性 `NiagaraComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UNiagaraComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="InventoryItemSet|Inventory" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "InventoryItemSet|Inventory", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UNiagaraComponent> NiagaraComponent;` |

---

### 属性 `InstancedStaticMeshComponents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,TObjectPtr<UInstancedStaticMeshComponent>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TMap<FName,TObjectPtr<UInstancedStaticMeshComponent>> InstancedStaticMeshComponents;` |

---

### 属性 `InventoryItemWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AInventoryItemWidgetActor](InventoryItemWidgetActor__AInventoryItemWidgetActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AInventoryItemWidgetActor> InventoryItemWidget;` |

---

## 蓝图暴露函数

### 函数 `GetItemInstancesByRange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Min` | `const FVector&` |
| `Max` | `const FVector&` |
| `Instances` | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetItemInstancesByRange(const FVector& Min , const FVector& Max , TArray<UInventoryItemInstance*>& Instances) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得指定范围内的实例

---

### 函数 `GetOnBoxItemInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, BlueprintNativeEvent |
| 返回类型 | TArray<[UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InPoints` | `const TArray<FVector> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure,BlueprintNativeEvent) TArray<UInventoryItemInstance*> GetOnBoxItemInstances(const TArray<FVector> & InPoints) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 获取在框中的道具实例

---

### 函数 `GetItemInstancesByTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTransform` | `const FTransform &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* GetItemInstancesByTransform(const FTransform & InTransform) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取在实例对象

---

### 函数 `SetISMCollisionProfile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetISMCollisionProfile();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置所有组件碰撞

---

### 函数 `PlayItemCountChangeAnim`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void PlayItemCountChangeAnim();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 播放动画

---

### 函数 `PCGGenerate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void PCGGenerate();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> PCG生成植被

---

### 函数 `PCGGenerateComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PCGGenerateComplete();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `ClearPCG`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void ClearPCG();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 清除pcg

---

### 函数 `ClearPCGComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearPCGComplete();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清除pcg完成

---

### 函数 `AddNewItemInstancesByItemID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemID` | `const FName &` |
| `InOffsetTransform` | `const FTransform &` |
| `1` | `int AddItemNumber =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddNewItemInstancesByItemID(const FName & InItemID,const FTransform & InOffsetTransform,int AddItemNumber = 1);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加实例，通过ISM组件显示

---

### 函数 `InitItemInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemID` | `const FName &` |
| `InventoryType` | `EGroundInventoryType` |
| `1` | `int AddItemNumber =` |
| `true` | `bool bUnlockInfo =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitItemInfo(const FName & InItemID,EGroundInventoryType InventoryType , int AddItemNumber = 1,bool bUnlockInfo = true );`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化创建物品 并显示静态模型及 ui显示

---

### 函数 `InitInfoItemInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md) * |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EquipmentInfo` | `const FInstancedStruct &` |
| `1` | `int AddItemNumber =` |
| `true` | `bool bUnlockInfo =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UInventoryItemInstance * InitInfoItemInfo(const FInstancedStruct & EquipmentInfo,int AddItemNumber = 1,bool bUnlockInfo = true);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化创建装备 并显示静态模型及 ui显示

---

### 函数 `ItemSetDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ItemSetDestroy();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 集合销毁

---

### 函数 `InitializationComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitializationComplete();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化完成

---

### 函数 `SetActorWorldLocationAndSyncItemTransforms`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="InventoryItemSet|Inventory" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewWorldLocation` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "InventoryItemSet|Inventory") void SetActorWorldLocationAndSyncItemTransforms(const FVector& NewWorldLocation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置 Actor 世界坐标，并将相同位移同步到集合内所有物品实例的 ItemTransform（用于整体挪动物品堆等）

---

### 函数 `InitItemInfoByInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* |
| `（匿名/仅类型）` | `FTransform NewTransform = FTransform()` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitItemInfoByInstance(UInventoryItemInstance* InventoryItemInstance,FTransform NewTransform = FTransform());`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过物品实例初始化物品信息

---

### 函数 `InitResourcePackageByInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | [UInventoryItemInstance](InventoryItemInstance__UInventoryItemInstance.md)* |
| `（匿名/仅类型）` | `FTransform NewTransform = FTransform()` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitResourcePackageByInstance(UInventoryItemInstance* InventoryItemInstance,FTransform NewTransform = FTransform());`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过物品实例初始化物资包

---

### 函数 `InitItemInfoBySimpleData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AcceptResource` | const TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitItemInfoBySimpleData(const TMap<FName,FItemSimpleData>& AcceptResource);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过简单的物品信息初始化

---

### 函数 `PlantAtLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UFarmlandPlantInstance](FarmlandPlantInstance__UFarmlandPlantInstance.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |
| `CollectItemData` | const [FCollectItem](../Struct/ItemStruct__FCollectItem.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) UFarmlandPlantInstance* PlantAtLocation(const FVector& Location,const FCollectItem& CollectItemData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 在给定位置生成一个种植物实例

---

### 函数 `AddGetWriteCopyBookAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void AddGetWriteCopyBookAction();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 加入获取抄录书籍Action

---

### 函数 `RemoveGetWriteCopyBookAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void RemoveGetWriteCopyBookAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 移除获取抄录书籍Action

---

### 函数 `K2_SetSelectItemSetState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bSelect` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "SetSelectEntityActorState") void K2_SetSelectItemSetState(bool bSelect);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_SetHoveringItemSetState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bHovering` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "SetHoveringEntityActorState") void K2_SetHoveringItemSetState(bool bHovering);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---
