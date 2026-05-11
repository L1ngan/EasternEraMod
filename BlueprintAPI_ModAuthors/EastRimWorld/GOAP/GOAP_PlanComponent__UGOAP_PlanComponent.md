# `class` `UGOAP_PlanComponent`

**源码头文件：** `EastRimWorld/GOAP/GOAP_PlanComponent.h`

---

## 功能说明（来自头文件注释）

> 用于AI通过GOAP寻找计划的组件

## 蓝图暴露变量

### 属性 `GameMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `AERW_GameModeBase*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) AERW_GameModeBase* GameMode { nullptr };` |

---

### 属性 `WorldPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AWorldPlace>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<AWorldPlace> WorldPlace;` |

---

### 属性 `ItemUseStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag , FItemUseState>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FGameplayTag , FItemUseState> ItemUseStates;` |

**源码注释：**

> 物品使用状态
> TMap<总标签 , 状态>

---

### 属性 `Goals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FGOAPScoreData>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName , FGOAPScoreData> Goals;` |

**源码注释：**

> Agent当前拥有的GOAP目标
> TMap<GOAP目标配置表ID , 分值数据>

---

### 属性 `DisabledGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName , bool> DisabledGoals;` |

**源码注释：**

> 当前禁用的GOAP目标
> TMap<GOAP目标配置表ID , 占位符>

---

### 属性 `GoalPriorities`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FName , int32> GoalPriorities;` |

**源码注释：**

> GOAP目标对应的工作优先级
> TMap<GOAP目标 , 优先级>

---

### 属性 `CurrentGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FName CurrentGoal;` |

**源码注释：**

> 当前执行的GOAP目标

---

### 属性 `CurrentPlans`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGOAP_Action>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) TArray<FGOAP_Action> CurrentPlans;` |

**源码注释：**

> 当前计划

---

### 属性 `OnCurrentWorkScheduleChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCurrentWorkScheduleChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCurrentWorkScheduleChanged OnCurrentWorkScheduleChanged;` |

**源码注释：**

> 当前工作日程改变时

---

## 蓝图暴露函数

### 函数 `RecoverCurrentPlansData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `false` | `bool ForceFindObject =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RecoverCurrentPlansData(bool ForceFindObject = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 在蓝图中FindPlans调用时，可能还未加载，手动调用

---

### 函数 `InitItemUseStates`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tags` | `const TArray<FGameplayTag>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitItemUseStates(const TArray<FGameplayTag>& Tags);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化物品使用状态

---

### 函数 `SetItemUseState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `const FGameplayTag&` |
| `State` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetItemUseState(const FGameplayTag& Tag , bool State);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置物品使用状态

---

### 函数 `GetItemUseState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `const FGameplayTag&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool GetItemUseState(const FGameplayTag& Tag) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取物品使用状态

---

### 函数 `GetActiveTagNum`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Tag` | `const FGameplayTag&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) int32 GetActiveTagNum(const FGameplayTag& Tag) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得可用Tag数量

---

### 函数 `UpdateGoal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |
| `ScoreData` | `const FGOAPScoreData&` |
| `Remove` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateGoal(const FName& GoalID , const FGOAPScoreData& ScoreData , bool Remove);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新GOAP目标

---

### 函数 `RemoveAllGoal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveAllGoal();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新GOAP目标

---

### 函数 `SetGoalEnabled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |
| `Enable` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetGoalEnabled(const FName& GoalID , bool Enable);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置GOAP目标是否启用

---

### 函数 `InitWorkScheduleTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitWorkScheduleTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化工作日程检查计时器

---

### 函数 `InitGoalPriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |
| `Priority` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitGoalPriority(const FName& GoalID , int32 Priority);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化GOAP目标优先级

---

### 函数 `UpdateGoalPriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |
| `Priority` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateGoalPriority(const FName& GoalID , int32 Priority);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新GOAP目标优先级

---

### 函数 `CopyWorkPriorities`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FromAgent` | `const AEastRimWorldAIController*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CopyWorkPriorities(const AEastRimWorldAIController* FromAgent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 从其他角色复制非自定义工作优先级

---

### 函数 `CopyCustomWorkPriorities`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FromAgent` | `const AEastRimWorldAIController*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CopyCustomWorkPriorities(const AEastRimWorldAIController* FromAgent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 从其他角色复制自定义工作优先级

---

### 函数 `FindPlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ManagerComponent` | `UGOAP_ManagerComponent*` |
| `Agent` | `AEastRimWorldAIController*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void FindPlans(UGOAP_ManagerComponent* ManagerComponent , AEastRimWorldAIController* Agent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过当前拥有的GOAP目标寻找可执行的计划

---

### 函数 `OnFindPlanFailed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void OnFindPlanFailed(const FName& GoalID);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 当寻找计划失败时

---

### 函数 `IsBatchAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ManagerComponent` | `UGOAP_ManagerComponent*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool IsBatchAction(UGOAP_ManagerComponent* ManagerComponent) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 当前执行的计划是不是批量处理的Action

---

### 函数 `GetCurrentWorkScheduleID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ScheduleID` | `FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetCurrentWorkScheduleID(FName& ScheduleID) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得当前工作进程ID

---

### 函数 `GetCurrentFirstPlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGOAP_Action` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGOAP_Action GetCurrentFirstPlans();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前第一个计划

---

### 函数 `GetCurrentNextPlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FGOAP_Action` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FGOAP_Action GetCurrentNextPlans();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前下一个计划

---

### 函数 `RemoveFirstPlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveFirstPlans();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除第一个计划

---

### 函数 `ClearAllPlans`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearAllPlans();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清理所有计划

---

### 函数 `GetCurGoalScore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetCurGoalScore(const FName& GoalID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取当前Goal的分值（通过工作加成后的分值）

---

### 函数 `HasGoal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool HasGoal(const FName& GoalID) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查是否拥有目标

---

### 函数 `ClearGoals`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearGoals();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CreatePrisonerRecruitedAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ManagerComponent` | `UGOAP_ManagerComponent*` |
| `Agent` | `AEastRimWorldAIController*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreatePrisonerRecruitedAction(UGOAP_ManagerComponent* ManagerComponent,AEastRimWorldAIController* Agent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
