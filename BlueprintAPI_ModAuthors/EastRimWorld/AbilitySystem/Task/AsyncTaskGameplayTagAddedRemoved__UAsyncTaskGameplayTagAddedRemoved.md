# `class` `UAsyncTaskGameplayTagAddedRemoved`

**源码头文件：** `EastRimWorld/AbilitySystem/Task/AsyncTaskGameplayTagAddedRemoved.h`

---

## 功能说明（来自头文件注释）

> Blueprint node to automatically register a listener for FGameplayTags added and removed.
> Useful to use in Blueprint/UMG.

## 蓝图暴露变量

### 属性 `OnTagAdded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGameplayTagAddedRemoved` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGameplayTagAddedRemoved OnTagAdded;` |

---

### 属性 `OnTagRemoved`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGameplayTagAddedRemoved` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGameplayTagAddedRemoved OnTagRemoved;` |

---

## 蓝图暴露函数

### 函数 `ListenForGameplayTagAddedOrRemoved`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UAsyncTaskGameplayTagAddedRemoved](AsyncTaskGameplayTagAddedRemoved__UAsyncTaskGameplayTagAddedRemoved.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `Tags` | `FGameplayTagContainer` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskGameplayTagAddedRemoved* ListenForGameplayTagAddedOrRemoved(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTagContainer Tags);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Listens for FGameplayTags added and removed.

---

### 函数 `EndTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EndTask();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> You must call this function manually when you want the AsyncTask to end.
> For UMG Widgets, you would call it in the Widget's Destruct event.

---
