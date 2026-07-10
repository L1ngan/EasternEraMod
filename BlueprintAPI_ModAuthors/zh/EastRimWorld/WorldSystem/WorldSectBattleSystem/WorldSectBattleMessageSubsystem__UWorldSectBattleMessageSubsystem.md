# `class` `UWorldSectBattleMessageSubsystem`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem.h`

---

## 功能说明（来自头文件注释）

> 门派战通用弹窗消息系统（从 UWorldSectBattleRecordSubsystem::EnqueueSectBattleEventText 抽出，去掉对
> “战斗记录”的依赖，做成通用消息队列）。
> 每种 MessageType 各自拥有独立的队列 + 定时器（见 Channels），互不影响、互不占用对方的发放节奏，
> 各自按 MessageDisplaySecondsByType 里配置的时长依次发放，避免同类型多条消息同时广播打断/叠加 UI 弹窗动画。
> DispatchNextMessage 按传入的 MessageType 定位其 channel 处理，新增消息类型无需新增派发函数。

## 蓝图暴露变量

### 属性 `OnSectBattleMessage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectBattleMessage` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Message" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Message") FOnSectBattleMessage OnSectBattleMessage;` |

**说明:**

> 消息发放广播。UI 绑定它弹窗，按 Message.MessageType 分支取 Description 或 ItemName/ItemIcon。所有类型都会广播这个。

---

### 属性 `OnSectBattleTextMessage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectBattleTextMessage` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Message" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Message") FOnSectBattleTextMessage OnSectBattleTextMessage;` |

**说明:**

> 文本消息发放广播。仅 MessageType==Text 时与 OnSectBattleMessage 一起广播，供只关心文本弹窗的 UI 直接绑定。

---

### 属性 `OnSectBattleItemMessage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectBattleItemMessage` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Message" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Message") FOnSectBattleItemMessage OnSectBattleItemMessage;` |

**说明:**

> 物品消息发放广播。仅 MessageType==Item 时与 OnSectBattleMessage 一起广播，供只关心物品弹窗的 UI 直接绑定。

---

## 蓝图暴露函数

### 函数 `Get`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldSectBattle|Message" |
| 返回类型 | [UWorldSectBattleMessageSubsystem](WorldSectBattleMessageSubsystem__UWorldSectBattleMessageSubsystem.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Message", meta = (WorldContext = "WorldContextObject")) static UWorldSectBattleMessageSubsystem* Get(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 取当前世界的门派战消息系统实例。

---

### 函数 `EnqueueTextMessage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Message" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Description` | `const FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void EnqueueTextMessage(const FText& Description);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 入队一条文本消息。该类型 channel 空闲则立即发放，否则排队等该类型上一条按其展示时长播完。
> 文案表统一写 _14_ 字号标签，弹窗 UI 需要更大的 _17_，入队前统一替换（对已是 _17_ 的文本是无操作，幂等）。

---

### 函数 `EnqueueItemMessage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Message" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemName` | `const FText&` |
| `ItemIcon` | `const TSoftObjectPtr<UTexture2D>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void EnqueueItemMessage(const FText& ItemName, const TSoftObjectPtr<UTexture2D>& ItemIcon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 入队一条物品消息（ItemName/ItemIcon 均由调用方给好，本系统不查表）。该类型 channel 空闲则立即发放，否则排队。

---

### 函数 `ClearQueue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Message" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void ClearQueue();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 清空所有类型的队列 + 停止所有定时器。

---

### 函数 `BeginBattleSession`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Message" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void BeginBattleSession();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开启新一场会话：清空上一场残留的弹窗消息队列。供管理器在开局时与 UWorldSectBattleRecordSubsystem::BeginBattleSession 并列调用。

---

### 函数 `EndBattleSession`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Message" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void EndBattleSession();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束当前会话：清空队列 + 停定时器，避免战后还在弹。供管理器在结束时与 UWorldSectBattleRecordSubsystem::EndBattleSession 并列调用。

---
