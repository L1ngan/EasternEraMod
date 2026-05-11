# `class` `UFabricateActorComponent`

**源码头文件：** `EastRimWorld/Components/FabricateActorComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `FabricateTaskQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FFabricateTaskData>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FFabricateTaskData> FabricateTaskQueue;` |

**源码注释：**

> 当前任务的制造队列

---

### 属性 `CurFabricateTaskGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGuid CurFabricateTaskGuid;` |

**源码注释：**

> 当前制造任务信息

---

### 属性 `CorrelationID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CorrelationID;` |

**源码注释：**

> 此组件相关联的数据ID 例如建筑物ID

---

### 属性 `OnAddFabricateTaskQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFabricateTaskQueueChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnFabricateTaskQueueChange OnAddFabricateTaskQueue;` |

**源码注释：**

> 添加制造队列委托

---

### 属性 `OnRemoveFabricateTaskQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFabricateTaskQueueChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnFabricateTaskQueueChange OnRemoveFabricateTaskQueue;` |

**源码注释：**

> 移除制造队列委托

---

### 属性 `OnUpdateFabricateTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnFabricateTaskQueueChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnFabricateTaskQueueChange OnUpdateFabricateTask;` |

**源码注释：**

> 制造任务更新

---

### 属性 `OnUpdateAllFabricateTask`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateAllFabricateTask` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateAllFabricateTask OnUpdateAllFabricateTask;` |

**源码注释：**

> 刷新整个任务

---

### 属性 `Owner`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ABuildingActorBase *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) ABuildingActorBase * Owner { nullptr };` |

**源码注释：**

> Owner

---

### 属性 `GOAPManagerComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UGOAP_ManagerComponent*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UGOAP_ManagerComponent* GOAPManagerComponent { nullptr };` |

**源码注释：**

> GOAP管理组件

---

### 属性 `ResourceActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FGOAP_Action>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Action> ResourceActions;` |

**源码注释：**

> 制造资源对应的GOAPAction
> TMap<资源ID , GOAPAction>

---

### 属性 `SelectableResourceAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag , FGOAP_Action>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FGameplayTag , FGOAP_Action> SelectableResourceAction;` |

**源码注释：**

> 可选资源对应的GOAPAction
> TMap<Tag , GOAPAction>

---

### 属性 `FabricateAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGOAP_Action` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGOAP_Action FabricateAction;` |

**源码注释：**

> 制造GOAPAction

---

### 属性 `WaitingGenerateItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool WaitingGenerateItem { false };` |

**源码注释：**

> 是否在等待生成制造物品

---

### 属性 `bAutoFabricate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bAutoFabricate = false;` |

**源码注释：**

> 是否是自动制造

---

## 蓝图暴露函数

### 函数 `InitFabricateActorComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCorrelationID` | `FName` |
| `OwnerBuilding` | `ABuildingActorBase *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitFabricateActorComponent(FName InCorrelationID,ABuildingActorBase * OwnerBuilding);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化制造组件

---

### 函数 `AddFabricateToQueue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFormulaData` | `const FFormulaData&` |
| `InSelectableConsumingResourceTag` | `const TArray<FGameplayTag> &` |
| `InFabricateRule` | `EFabricateRule` |
| `InTargetNumber` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool AddFabricateToQueue(const FFormulaData& InFormulaData, const TArray<FGameplayTag> & InSelectableConsumingResourceTag,EFabricateRule InFabricateRule, int InTargetNumber);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加制造任务

---

### 函数 `RemoveFabricateToQueue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InRemoveGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool RemoveFabricateToQueue(const FGuid& InRemoveGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除一个制造任务

---

### 函数 `RemoveAllFabricateToQueue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveAllFabricateToQueue();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除所有的订单

---

### 函数 `SetFabricateQueue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFabricateGuid` | `const FGuid&` |
| `NewQueueIndex` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetFabricateQueue(const FGuid& InFabricateGuid, int NewQueueIndex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置制造任务的优先级

---

### 函数 `GetCurFabricateTaskData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FFabricateTaskData&` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FFabricateTaskData& GetCurFabricateTaskData();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前执行的任务

---

### 函数 `AddWorkload`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWorkload` | `float` |
| `InQualityValue` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool AddWorkload(float InWorkload, float InQualityValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 增加任务的工作量

---

### 函数 `CheckCurFabricateTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FabricateTaskData` | `UPARAM(ref)FFabricateTaskData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckCurFabricateTask(UPARAM(ref)FFabricateTaskData& FabricateTaskData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查当前制造任务是否完成

---

### 函数 `TryGenerateItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TryGenerateItem(const FGuid& InCharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 尝试生成制造物品

---

### 函数 `SetCurFabricateTaskState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewFabricateState` | `EFabricateState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetCurFabricateTaskState(EFabricateState NewFabricateState);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置当前任务的状态

---

### 函数 `GetAllFabricates`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FFormulaData>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ButtonType` | `ECommonButtonType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FFormulaData> GetAllFabricates(ECommonButtonType ButtonType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有相关联已经解锁的配方

---

### 函数 `GenerateFabricateItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFabricateTaskData` | `const FFabricateTaskData&` |
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GenerateFabricateItem(const FFabricateTaskData& InFabricateTaskData,const FGuid& InCharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 生成配方物品

---

### 函数 `CharactersEnterStartFabricate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CharactersEnterStartFabricate();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 人物进入开始制造

---

### 函数 `CharactersBreakOffFabricate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CharactersBreakOffFabricate();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 人物中断制造

---

### 函数 `CharactersManufacturingCompleted`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CharactersManufacturingCompleted();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 人物制造完成

---

### 函数 `AddResourceToFabricateTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<FName, int>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAddResource` | `const TMap<FName, int>&` |
| `Tag` | `const FGameplayTag&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TMap<FName, int> AddResourceToFabricateTask(const TMap<FName, int>& InAddResource , const FGameplayTag& Tag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 添加资源

---

### 函数 `SetFabricateTaskNewInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFabricateTaskData` | `const FFabricateTaskData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetFabricateTaskNewInfo(const FFabricateTaskData& InFabricateTaskData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置任务新的信息

---

### 函数 `FortifyFabricateTaskSequence`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFabricateTaskData` | `const FFabricateTaskData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void FortifyFabricateTaskSequence(const FFabricateTaskData& InFabricateTaskData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 提高制造任务的顺序

---

### 函数 `ReduceFabricateTaskSequence`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFabricateTaskData` | `const FFabricateTaskData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ReduceFabricateTaskSequence(const FFabricateTaskData& InFabricateTaskData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 降低制造任务的顺序

---

### 函数 `FindFabricateTaskData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FFabricateTaskData` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InFabricateGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FFabricateTaskData FindFabricateTaskData(const FGuid& InFabricateGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查找制造队列中的任务

---

### 函数 `UpdateFabricateTaskState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InventoryItemInstance` | `UInventoryItemInstance *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateFabricateTaskState(UInventoryItemInstance * InventoryItemInstance);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `AddFabricateGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FabricateTaskData` | `const FFabricateTaskData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddFabricateGOAPAction(const FFabricateTaskData& FabricateTaskData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入制造GOAP Action

---

### 函数 `RemoveFabricateGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<AEastRimWorldAIController*>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldAIController*> RemoveFabricateGOAPAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除制造GOAP Action

---

### 函数 `StopFabricateTaskRemoveAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TaskData` | `const FFabricateTaskData&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StopFabricateTaskRemoveAction(const FFabricateTaskData& TaskData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 停止制造并移除action

---

### 函数 `GetAlreadyAddResource`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<FName, int>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TMap<FName, int> GetAlreadyAddResource();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取已经添加进来的物资

---

### 函数 `AddAutoFabricateGOAPAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FabricateTaskData` | `const FFabricateTaskData&` |
| `bStartAutoFabricate` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddAutoFabricateGOAPAction(const FFabricateTaskData& FabricateTaskData , bool bStartAutoFabricate);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入自动制造GOAP Action

---

### 函数 `AutoFabricateOpenComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AutoFabricateOpenComplete();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 自动制造开启完成

---

### 函数 `AutoFabricateWorkComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AutoFabricateWorkComplete();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 自动制造工作完成

---
