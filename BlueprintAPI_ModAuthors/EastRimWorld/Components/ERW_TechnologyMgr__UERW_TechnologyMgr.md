# `class` `UERW_TechnologyMgr`

**源码头文件：** `EastRimWorld/Components/ERW_TechnologyMgr.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `MyAllTechnologysArray`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTechnologyItemStruct](../Struct/TechnologyStruct__FTechnologyItemStruct.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FTechnologyItemStruct> MyAllTechnologysArray;` |

---

### 属性 `OnTechDevItemStateFinish`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTechDevItemChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTechDevItemChange OnTechDevItemStateFinish;` |

**源码注释：**

> [自定义事件]项科技状态：->完成（删除研究中）

---

### 属性 `OnTechDevItemStateDeveloping`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTechDevItemChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTechDevItemChange OnTechDevItemStateDeveloping;` |

**源码注释：**

> [自定义事件]项科技状态：>研究中（新增研究中）

---

### 属性 `OnTechDevItemStateDevelopingToUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTechDevItemChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTechDevItemChange OnTechDevItemStateDevelopingToUI;` |

---

### 属性 `OnTechDevItemStateUnlock`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTechDevItemChange` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTechDevItemChange OnTechDevItemStateUnlock;` |

**源码注释：**

> [自定义事件]项科技状态：>可研究（解锁状态）

---

### 属性 `OnUnlockItemEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUnlockId` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUnlockId OnUnlockItemEvent;` |

**源码注释：**

> [自定义事件]解锁物品

---

### 属性 `OnStopProduceTpointEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnStopProduceTpoint` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnStopProduceTpoint OnStopProduceTpointEvent;` |

**源码注释：**

> [自定义事件]停止产出某种科技点（已废弃）//todo:需要解绑蓝图

---

### 属性 `OnTechListClickEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnTechCellClick` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnTechCellClick OnTechListClickEvent;` |

**源码注释：**

> [自定义事件]科技列表某个科技被点击了

---

## 蓝图暴露函数

### 函数 `AddWorkloadFromBuilding`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TpType` | `ETechPointType` |
| `Value` | `int32` |
| `BuildingTransform` | `FTransform` |
| `0` | `float BuildingRadius =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddWorkloadFromBuilding(ETechPointType TpType, int32 Value, FTransform BuildingTransform, float BuildingRadius = 0){};`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `AddWorkload`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TpType` | `ETechPointType` |
| `Value` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddWorkload(ETechPointType TpType,int32 Value){};`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 增加工作量（已废弃）//todo:需要解绑蓝图

---

### 函数 `GetCurTechPointSchedule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Type` | `ETechPointType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetCurTechPointSchedule(ETechPointType Type){return 0.f;};`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 获取当前科技点数进度（已废弃）//todo:需要解绑蓝图

---

### 函数 `GetFirstCanDevelopTech`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FName` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FName GetFirstCanDevelopTech(){return FName();};`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 获取第一个可以研究的科技

---

### 函数 `CheckSeachTech`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechId` | `FName` |
| `SearchType` | `FName` |
| `SearchWord` | `FText` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckSeachTech(FName TechId,FName SearchType,FText SearchWord);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 查询是否满足搜索条件

---

### 函数 `HaveSeachWordTechConfig`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechId` | `FName` |
| `SearchWord` | `FText` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool HaveSeachWordTechConfig(FName TechId, FText SearchWord);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 查询是否包含搜索词

---

### 函数 `HaveNextTech`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool HaveNextTech(FName TechId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 该科技是否有下一个科技

---

### 函数 `GetAllTechnologyItemStructs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FTechnologyItemStruct](../Struct/TechnologyStruct__FTechnologyItemStruct.md)> |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FTechnologyItemStruct> GetAllTechnologyItemStructs(){return MyAllTechnologysArray;};`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 返回所有科技的研究状态

---

### 函数 `ClickLeftTechItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClickLeftTechItem(FName TechId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 左边列表点击了某哦个科技

---

### 函数 `CheckTechIsFinished`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckTechIsFinished(FName TechId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查科技是否解锁

---

### 函数 `IsShowTechBuyButton`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsShowTechBuyButton(FName TechId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 是否显示科技购买按钮

---

### 函数 `CheckCanBuyTech`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckCanBuyTech(FName TechId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查是否可以购买科技

---

### 函数 `BuyTech`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TechId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool BuyTech(FName TechId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 购买科技

---

### 函数 `checkTechIsAllUnlock`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool checkTechIsAllUnlock();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 判断科技是否全部解锁

---
