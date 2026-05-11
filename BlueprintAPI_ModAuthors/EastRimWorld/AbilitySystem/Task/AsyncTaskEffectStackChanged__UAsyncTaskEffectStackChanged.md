# `class` `UAsyncTaskEffectStackChanged`

**源码头文件：** `EastRimWorld/AbilitySystem/Task/AsyncTaskEffectStackChanged.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnGameplayEffectStackChange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGameplayEffectStackChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGameplayEffectStackChanged OnGameplayEffectStackChange;` |

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskEffectStackChanged* ListenForGameplayEffectStackChange(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag EffectGameplayTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskEffectStackChanged* ListenForGameplayEffectStackTArrayChange(UAbilitySystemComponent* AbilitySystemComponent, TArray<FGameplayTag> EffectGameplayTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `EndTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EndTask();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
