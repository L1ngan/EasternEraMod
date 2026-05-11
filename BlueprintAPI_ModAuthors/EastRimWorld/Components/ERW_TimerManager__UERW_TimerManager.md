# `class` `UERW_TimerManager`

**源码头文件：** `EastRimWorld/Components/ERW_TimerManager.h`

---

## 功能说明（来自头文件注释）

> 计时器管理组件

## 蓝图暴露变量

### 属性 `IsGamePaused`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) bool IsGamePaused { false };` |

**源码注释：**

> 游戏是否暂停

---

## 蓝图暴露函数

### 函数 `RegisterAndCreateTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OwnerData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |
| `Time` | `float` |
| `FuncName` | `const FString&` |
| `IsLoop` | `bool` |
| `TimerID` | `int32&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool RegisterAndCreateTimer(const FUObjectData& OwnerData , float Time , const FString& FuncName , bool IsLoop , int32& TimerID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注册并创建Timer

---

### 函数 `RegisterAndCreateTimerWithParameters`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OwnerData` | const [FUObjectData](../ERW_CommonTypes__FUObjectData.md)& |
| `Time` | `float` |
| `FuncName` | `const FString&` |
| `Parameters` | `const TArray<FString>&` |
| `IsLoop` | `bool` |
| `TimerID` | `int32&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool RegisterAndCreateTimerWithParameters(const FUObjectData& OwnerData , float Time , const FString& FuncName , const TArray<FString>& Parameters , bool IsLoop , int32& TimerID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注册并创建带有参数的Timer

---

### 函数 `UnregisterAndClearTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimerID` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnregisterAndClearTimer(int32 TimerID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注销并清除Timer

---

### 函数 `IsTimerValid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimerID` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsTimerValid(int32 TimerID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查Timer是否有效

---

### 函数 `PauseAllTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PauseAllTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 暂停所有的Timer

---

### 函数 `ResumeAllTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ResumeAllTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 恢复所有的Timer

---

### 函数 `PauseTimerByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimerID` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PauseTimerByID(int32 TimerID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 暂停Timer

---

### 函数 `ResumeTimerByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimerID` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ResumeTimerByID(int32 TimerID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 恢复Timer

---

### 函数 `GetTimerRemaining`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimerID` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetTimerRemaining(int32 TimerID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得Timer剩余时间

---

### 函数 `GetTimerInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimerID` | `int32` |
| `TimerInfo` | [FTimerInfo](ERW_TimerManager__FTimerInfo.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetTimerInfo(int32 TimerID , FTimerInfo& TimerInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得Timer信息

---

### 函数 `UnregisterAndClearAllTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UnregisterAndClearAllTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 注销并清除所有Timer

---
