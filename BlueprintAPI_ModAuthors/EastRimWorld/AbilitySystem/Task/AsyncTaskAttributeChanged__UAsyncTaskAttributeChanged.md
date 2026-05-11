# `class` `UAsyncTaskAttributeChanged`

**源码头文件：** `EastRimWorld/AbilitySystem/Task/AsyncTaskAttributeChanged.h`

---

## 功能说明（来自头文件注释）

> Blueprint node to automatically register a listener for all attribute changes in an AbilitySystemComponent.
> Useful to use in UI.

## 蓝图暴露变量

### 属性 `OnAttributeChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnAttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnAttributeChanged OnAttributeChanged;` |

---

## 蓝图暴露函数

### 函数 `ListenForAttributeChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UAsyncTaskAttributeChanged](AsyncTaskAttributeChanged__UAsyncTaskAttributeChanged.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `Attribute` | `FGameplayAttribute` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskAttributeChanged* ListenForAttributeChange(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Listens for an attribute changing.

---

### 函数 `ListenForAttributesChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UAsyncTaskAttributeChanged](AsyncTaskAttributeChanged__UAsyncTaskAttributeChanged.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `Attributes` | `TArray<FGameplayAttribute>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskAttributeChanged* ListenForAttributesChange(UAbilitySystemComponent* AbilitySystemComponent, TArray<FGameplayAttribute> Attributes);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Listens for an attribute changing.
> Version that takes in an array of Attributes. Check the Attribute output for which Attribute changed.

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
