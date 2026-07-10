# `class` `UERW_ConstructionComponent`

**源码头文件:** `EastRimWorld/Components/ERW_ConstructionComponent.h`

---

## 功能说明（来自头文件注释）

> 建造组件

## 蓝图暴露变量

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGuid SGUID = FGuid();` |

**说明:**

> ~ Save

---

### 属性 `Batch`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 Batch { INDEX_NONE };` |

**说明:**

> Action所在批次

---

### 属性 `IsPullDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool IsPullDown { false };` |

**说明:**

> 是否是拆除建筑

---

### 属性 `IsPriori`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool IsPriori { false };` |

**说明:**

> 是否加入优先执行

---

### 属性 `TransBuildingType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETransBuildingType](../ERW_Enumerations__ETransBuildingType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) ETransBuildingType TransBuildingType { ETransBuildingType::None };` |

**说明:**

> 移动建筑类型

---

### 属性 `WorkType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EConstructionWorkType](ERW_ConstructionComponent__EConstructionWorkType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EConstructionWorkType WorkType { EConstructionWorkType::Construction };` |

**说明:**

> 当前建造工作的类型（建造或维修建筑）

---

### 属性 `RebuiltID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName RebuiltID;` |

**说明:**

> 重建后的建筑ID

---

### 属性 `NeedResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , int32> NeedResources;` |

**说明:**

> 建造所需资源
> TMap<资源ID , 数量>

---

### 属性 `CurrentResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , int32> CurrentResources;` |

**说明:**

> 当前拥有资源
> TMap<资源ID , 数量>

---

### 属性 `MaxWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 MaxWorkload { 0 };` |

**说明:**

> 完成建造需要工作量

---

### 属性 `CurrentWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 CurrentWorkload { 0 };` |

**说明:**

> 当前接收工作量

---

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Action> Actions;` |

**说明:**

> 建造资源对应的GOAPAction
> TMap<资源ID , GOAPAction>

---

### 属性 `ConstructAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGOAP_Action ConstructAction;` |

**说明:**

> 建造Action

---

### 属性 `GetBuildingAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGOAP_Action GetBuildingAction;` |

**说明:**

> 获得建筑Action

---

### 属性 `TransferAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGOAP_Action TransferAction;` |

**说明:**

> 迁移Action

---

### 属性 `OwnerData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FUObjectData OwnerData;` |

**说明:**

> Owner的数据

---

### 属性 `OnAddResourceChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnAddResourceChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnAddResourceChange OnAddResourceChange;` |

**说明:**

> 通知建造资源变化（id+最新的数量）

---

### 属性 `OnWorkloadChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkloadChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorkloadChange OnWorkloadChange;` |

**说明:**

> 通知工作量发生改变

---

## 蓝图暴露函数

### 函数 `InitResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Resources` | `const TMap<FName , int32>&` |
| `Workload` | `int32` |
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `LayerNum` | `int32` |
| `ExtraConsume` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitResources(const TMap<FName , int32>& Resources , int32 Workload , AGOAP_ActorBase* BuildObject , int32 LayerNum , float ExtraConsume);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化所需资源

---

### 函数 `CreateConstructionGOAP`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBatch` | `int32` |
| `false` | `bool FromLoading =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateConstructionGOAP(int32 InBatch , bool FromLoading = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建建造GOAP

---

### 函数 `CreateGetBuildingAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `false` | `bool FromLoading =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateGetBuildingAction(bool FromLoading = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建获得建筑Action

---

### 函数 `RemoveGetBuildingAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveGetBuildingAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除获得建筑Action

---

### 函数 `CreateTransferAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `false` | `bool FromLoading =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateTransferAction(bool FromLoading = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建移动建筑Action

---

### 函数 `RemoveTransferAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveTransferAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除移动建筑Action

---

### 函数 `GetCarryItemNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) int32 GetCarryItemNum(const FName& ItemID) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获得搬运物品数量

---

### 函数 `OnAddResources`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Resources` | `const TMap<FName , int32>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnAddResources(const TMap<FName , int32>& Resources);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 有人提交建造资源时

---

### 函数 `HasEnoughPlayerResourcesForRemaining`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Construction" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Construction") bool HasEnoughPlayerResourcesForRemaining() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 玩家背包是否满足剩余建材缺口

---

### 函数 `OnReceiveWorkload`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | [AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)* |
| `Workload` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool OnReceiveWorkload(AEastRimWorldAIController* Agent , int32 Workload);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 接收工作量

---

### 函数 `ResetWorkload`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Workload` | `const int32&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ResetWorkload(const int32& Workload);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 重置工作量

---

### 函数 `OnReceivePullDowWorkload`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Workload` | `const int32&` |
| `OutPercent` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool OnReceivePullDowWorkload(const int32& Workload,float& OutPercent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 拆除工作

---

### 函数 `RemoveConstructionGOAP`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveConstructionGOAP();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除建造GOAP

---

### 函数 `AddToPrioriBatchActions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddToPrioriBatchActions();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将所有建造相关的Action加入优先Action中

---

### 函数 `RemoveFromPrioriBatchActions`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveFromPrioriBatchActions();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将所有建造相关的Action从优先Action中移除

---
