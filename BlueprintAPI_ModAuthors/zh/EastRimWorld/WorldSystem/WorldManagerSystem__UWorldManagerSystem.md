# `class` `UWorldManagerSystem`

**源码头文件:** `EastRimWorld/WorldSystem/WorldManagerSystem.h`

---

## 功能说明（来自头文件注释）

> World Manager System UObject 类型。

## 蓝图暴露变量

### 属性 `bInitializationGameComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bInitializationGameComplete = false;` |

**说明:**

> 初始化完成

---

## 蓝图暴露函数

### 函数 `InitWorldManagerSystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitWorldManagerSystem();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Init World Manager System 操作。

---

### 函数 `StartNewGame`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartNewGame();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> *****************************加载初始化 Start*****************************
> 开始新游戏

---

### 函数 `StartLoadGame`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartLoadGame();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 读档

---

### 函数 `InitObjectComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Object` | `UObject *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitObjectComplete(UObject * Object);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新注册的Object状态

---

### 函数 `OnLoadGameWorldComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnLoadGameWorldComplete();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载游戏世界成功

---

### 函数 `OnLoadSubLevelComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LevelName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnLoadSubLevelComplete(FName LevelName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载子关成功

---

### 函数 `OnCloseSubLevelComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LevelName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnCloseSubLevelComplete(FName LevelName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 关闭子关卡成功

---

### 函数 `SubLevelInitializationComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SubLevelInitializationComplete();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 子关卡初始化完成

---

### 函数 `CheckInitializationComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckInitializationComplete();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否初始化完成

---

### 函数 `CheckAllObjectInit`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckAllObjectInit();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查所有需要初始化的Object是否初始化完毕

---

### 函数 `LoadCurSubLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LoadCurSubLevel();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载当前子关卡

---
