# `class` `UAsyncTaskCooldownChanged`

**源码头文件:** `EastRimWorld/AbilitySystem/Task/AsyncTaskCooldownChanged.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnCooldownBegin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCooldownChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCooldownChanged OnCooldownBegin;` |

**源码注释:**

> 当监听的效果被施加时

---

### 属性 `OnCooldownEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCooldownChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCooldownChanged OnCooldownEnd;` |

**源码注释:**

> 当监听的效果结束时

---

## 蓝图暴露函数

### 函数 `ListenForCooldownChange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UAsyncTaskCooldownChanged](AsyncTaskCooldownChanged__UAsyncTaskCooldownChanged.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AbilitySystemComponent` | `UAbilitySystemComponent*` |
| `InCooldownTags` | `FGameplayTagContainer` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,meta = (BlueprintInternalUseOnly = "true")) static UAsyncTaskCooldownChanged* ListenForCooldownChange(UAbilitySystemComponent* AbilitySystemComponent,FGameplayTagContainer InCooldownTags);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 指定监听（谁、带有什么标签的GE）

---

### 函数 `GetCooldownRemainingForTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCooldownTags` | `FGameplayTagContainer` |
| `TimeRemaining` | `float&` |
| `CooldownDuration` | `float&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GetCooldownRemainingForTag(FGameplayTagContainer InCooldownTags, float& TimeRemaining, float& CooldownDuration);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 得到该GE的总时间 剩余时间信息

---

### 函数 `EndTask`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EndTask();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 结束任务，UI调用的话即可在Destruct事件中结束它，否则不会被回收

---
