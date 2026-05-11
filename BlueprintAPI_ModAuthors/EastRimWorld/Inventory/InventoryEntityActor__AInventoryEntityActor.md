# `class` `AInventoryEntityActor`

**源码头文件：** `EastRimWorld/Inventory/InventoryEntityActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `IsHarvest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) bool IsHarvest { false };` |

**源码注释：**

> 是否是收割

---

### 属性 `BoxComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UBoxComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|InventoryEntity" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|InventoryEntity", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UBoxComponent> BoxComponent;` |

---

### 属性 `StaticMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|InventoryEntity" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|InventoryEntity", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

---

### 属性 `InventoryItemInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UInventoryItemInstance>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|InventoryEntity" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|InventoryEntity", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UInventoryItemInstance> InventoryItemInstance;` |

---

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
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bHoveringState = false;` |

**源码注释：**

> 是否是悬浮状态

---

### 属性 `PlayerControllerBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AERW_PlayerControllerBase>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<AERW_PlayerControllerBase> PlayerControllerBase;` |

---

### 属性 `bAllowCPUAccess`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) bool bAllowCPUAccess = false;` |

---

### 属性 `CustomDepthStencilValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 CustomDepthStencilValue { 0 };` |

---

## 蓝图暴露函数

### 函数 `OnSaveData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void OnSaveData();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 当存档时

---

### 函数 `OnLoadData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void OnLoadData();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 当读档时

---

### 函数 `EntityActorDestroy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EntityActorDestroy();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `InitData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `false` | `bool LoadData =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitData(bool LoadData = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化数据

---

### 函数 `K2_InitEntityActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "InitEntityActor") void K2_InitEntityActor();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 初始化actor

---

### 函数 `K2_PlayEntityAnimation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CollectActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "PlayEntityAnimation") void K2_PlayEntityAnimation(AActor * CollectActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 播放操作动画

---

### 函数 `K2_PlayDeathEntityAnimation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CollectActor` | `AActor *` |
| `NextGorGrowStage` | `EGrowStageType` |
| `bDestroyCollect` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "PlayDeathEntityAnimation") void K2_PlayDeathEntityAnimation(AActor * CollectActor,EGrowStageType NextGorGrowStage,bool bDestroyCollect);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 播放销毁的动画

---

### 函数 `K2_UpdateEntityActorScale`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InNewScale` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "UpdateEntityActorScale") void K2_UpdateEntityActorScale(float InNewScale);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_UpdateEntityStage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGrowStage` | `EGrowStageType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "UpdateEntityStage") void K2_UpdateEntityStage(EGrowStageType InGrowStage);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_SetSelectEntityActorState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bSelect` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "SetSelectEntityActorState") void K2_SetSelectEntityActorState(bool bSelect);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `K2_SetHoveringEntityActorState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bHovering` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,DisplayName= "SetHoveringEntityActorState") void K2_SetHoveringEntityActorState(bool bHovering);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

---

### 函数 `InitSmartObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitSmartObject();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化智能对象

---

### 函数 `OnCollectOnce`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Workload` | `int32` |
| `nullptr` | `AActor * CollectActor =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool OnCollectOnce(int32 Workload,AActor * CollectActor = nullptr);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 采集动作完成一次

---

### 函数 `CollectionDone`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActionID` | `const FName&` |
| `Outputs` | `TMap<FName , int32>&` |
| `nullptr` | `AActor * CollectActor =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CollectionDone(const FName& ActionID,TMap<FName , int32>& Outputs,AActor * CollectActor = nullptr);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 采集完成

---

### 函数 `GetGOAPActionID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CommonButtonType` | `ECommonButtonType` |
| `ActionID` | `FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetGOAPActionID(ECommonButtonType CommonButtonType,FName& ActionID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取GOAP Action ID

---

### 函数 `AddGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Action` | `const FGOAP_Action&` |
| `GOAPManagerComponent` | `UGOAP_ManagerComponent*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddGOAPAction(const FGOAP_Action& Action , UGOAP_ManagerComponent* GOAPManagerComponent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入GOAP Action

---

### 函数 `RemoveGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |
| `GOAPManagerComponent` | `UGOAP_ManagerComponent*` |
| `true` | `bool AbortAgent =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveGOAPAction(const FName& GoalID , UGOAP_ManagerComponent* GOAPManagerComponent , bool AbortAgent = true);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除GOAP Action

---

### 函数 `SetOperationState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bOperation` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetOperationState(bool bOperation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置操作状态

---

### 函数 `RemoveGOAPActionByActionID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InActionID` | `const FName&` |
| `GOAPManagerComponent` | `UGOAP_ManagerComponent*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveGOAPActionByActionID(const FName& InActionID, UGOAP_ManagerComponent* GOAPManagerComponent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ActionID移除GOAP Action

---
