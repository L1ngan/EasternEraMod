# `class` `UERW_ConstructionComponent`

**源码头文件：** `EastRimWorld/Components/ERW_ConstructionComponent.h`

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

**源码注释：**

> ~ Save

---

### 属性 `Batch`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 Batch { INDEX_NONE };` |

**源码注释：**

> Action所在批次

---

### 属性 `IsPullDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool IsPullDown { false };` |

**源码注释：**

> 是否是拆除建筑

---

### 属性 `NeedResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , int32> NeedResources;` |

**源码注释：**

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

**源码注释：**

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

**源码注释：**

> 完成建造需要工作量

---

### 属性 `CurrentWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 CurrentWorkload { 0 };` |

**源码注释：**

> 当前接收工作量

---

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , FGOAP_Action>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , FGOAP_Action> Actions;` |

**源码注释：**

> 建造资源对应的GOAPAction
> TMap<资源ID , GOAPAction>

---

### 属性 `ConstructAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGOAP_Action` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGOAP_Action ConstructAction;` |

**源码注释：**

> 建造Action

---

### 属性 `OwnerData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUObjectData` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FUObjectData OwnerData;` |

**源码注释：**

> Owner的数据

---

### 属性 `OnAddResourceChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnAddResourceChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnAddResourceChange OnAddResourceChange;` |

**源码注释：**

> 通知建造资源变化（id+最新的数量）

---

### 属性 `OnWorkloadChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkloadChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnWorkloadChange OnWorkloadChange;` |

**源码注释：**

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
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitResources(const TMap<FName , int32>& Resources , int32 Workload , AGOAP_ActorBase* BuildObject);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateConstructionGOAP(int32 InBatch , bool FromLoading = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建建造GOAP

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) int32 GetCarryItemNum(const FName& ItemID) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnAddResources(const TMap<FName , int32>& Resources);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 有人提交建造资源时

---

### 函数 `OnReceiveWorkload`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Agent` | `AEastRimWorldAIController*` |
| `Workload` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool OnReceiveWorkload(AEastRimWorldAIController* Agent , int32 Workload);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ResetWorkload(const int32& Workload);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool OnReceivePullDowWorkload(const int32& Workload,float& OutPercent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 拆除工作

---

### 函数 `RemoveConstructionGOAP`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveConstructionGOAP();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除建造GOAP

---
