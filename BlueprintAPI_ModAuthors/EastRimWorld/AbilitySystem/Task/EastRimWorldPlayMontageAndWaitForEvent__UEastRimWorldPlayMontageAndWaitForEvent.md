# `class` `UEastRimWorldPlayMontageAndWaitForEvent`

**源码头文件：** `EastRimWorld/AbilitySystem/Task/EastRimWorldPlayMontageAndWaitForEvent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnCompleted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate OnCompleted;` |

**源码注释：**

> The montage completely finished playing

---

### 属性 `OnBlendOut`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate OnBlendOut;` |

**源码注释：**

> The montage started blending out

---

### 属性 `OnInterrupted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate OnInterrupted;` |

**源码注释：**

> The montage was interrupted

---

### 属性 `OnCancelled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate OnCancelled;` |

**源码注释：**

> The ability task was explicitly cancelled by another ability

---

### 属性 `EventReceived`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldPlayMontageAndWaitForEventDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldPlayMontageAndWaitForEventDelegate EventReceived;` |

**源码注释：**

> One of the triggering gameplay events happened

---

## 蓝图暴露函数

### 函数 `PlayMontageAndWaitForEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Ability|Tasks" |
| 返回类型 | `UEastRimWorldPlayMontageAndWaitForEvent*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OwningAbility` | `UGameplayAbility*` |
| `TaskInstanceName` | `FName` |
| `MontageToPlay` | `UAnimMontage*` |
| `EventTags` | `FGameplayTagContainer` |
| `（匿名/仅类型）` | `float Rate = 1.f` |
| `NAME_None` | `FName StartSection =` |
| `（匿名/仅类型）` | `float StartTimeSeconds = 0.0f` |
| `true` | `bool bStopWhenAbilityEnds =` |
| `（匿名/仅类型）` | `float AnimRootMotionTranslationScale = 1.f` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE")) static UEastRimWorldPlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent( UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, FGameplayTagContainer EventTags, float Rate = 1.f, FName StartSection = NAME_None, float StartTimeSeconds = 0.0f, bool bStopWhenAbilityEnds = true, float AnimRootMotionTranslationScale = 1.f);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty), the EventReceived delegate will fire with a tag and event data.
> If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.
> On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing
> OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled
> @param TaskInstanceName Set to override the name of this task, for later querying
> @param MontageToPlay The montage to play on the character
> @param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback
> @param Rate Change to play the montage faster or slower
> @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled
> @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely

---
