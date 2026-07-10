# `class` `UAsyncTaskEffectStackChanged`

**源码头文件:** `EastRimWorld/AbilitySystem/Task/AsyncTaskEffectStackChanged.h`

---

## 功能说明（来自头文件注释）

> 蓝图异步任务：监听带指定标签的GameplayEffect堆叠层数变化

## 蓝图暴露变量

### 属性 `OnGameplayEffectStackChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGameplayEffectStackChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGameplayEffectStackChanged OnGameplayEffectStackChange;` |

**说明:**

> GameplayEffect堆叠层数变化时广播的委托（效果标签、效果句柄、新层数、旧层数）

---

## 蓝图暴露函数

### 函数 `ListenForGameplayEffectStackChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UAsyncTaskEffectStackChanged](AsyncTaskEffectStackChanged__UAsyncTaskEffectStackChanged.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `EffectGameplayTag` | `FGameplayTag` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag EffectGameplayTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建异步任务，监听带指定标签的GameplayEffect堆叠层数变化

---

### 函数 `ListenForGameplayEffectStackTArrayChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UAsyncTaskEffectStackChanged](AsyncTaskEffectStackChanged__UAsyncTaskEffectStackChanged.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `EffectGameplayTag` | `TArray<FGameplayTag>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskEffectStackChanged* ListenForGameplayEffectStackTArrayChange(UAbilitySystemComponent* AbilitySystemComponent, TArray<FGameplayTag> EffectGameplayTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 创建异步任务，监听一组标签对应的GameplayEffect堆叠层数变化

---

### 函数 `EndTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EndTask();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束本异步任务并移除监听，需手动调用（UI中可在Destruct事件里调用）

---
