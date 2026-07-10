# `class` `UWorldSectBattleMessageSubsystem`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleMessageSubsystem.h`

---

## Functional description (from header comments)

> 门派战通用弹窗消息系统（从 UWorldSectBattleRecordSubsystem::EnqueueSectBattleEventText 抽出，去掉对
> “战斗记录”的依赖，做成通用消息队列）。
> 每种 MessageType 各自拥有独立的队列 + 定时器（见 Channels），互不影响、互不占用对方的发放节奏，
> 各自按 MessageDisplaySecondsByType 里配置的时长依次发放，避免同类型多条消息同时广播打断/叠加 UI 弹窗动画。
> DispatchNextMessage 按传入的 MessageType 定位其 channel 处理，新增消息类型无需新增派发函数。

## Blueprint-exposed variables

### Property `OnSectBattleMessage`

| Field | Details |
|------|------|
| C++ type | `FOnSectBattleMessage` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Message" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Message") FOnSectBattleMessage OnSectBattleMessage;` |

**Notes:**

> 消息发放广播。UI 绑定它弹窗，按 Message.MessageType 分支取 Description 或 ItemName/ItemIcon。所有类型都会广播这个。

---

### Property `OnSectBattleTextMessage`

| Field | Details |
|------|------|
| C++ type | `FOnSectBattleTextMessage` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Message" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Message") FOnSectBattleTextMessage OnSectBattleTextMessage;` |

**Notes:**

> 文本消息发放广播。仅 MessageType==Text 时与 OnSectBattleMessage 一起广播，供只关心文本弹窗的 UI 直接绑定。

---

### Property `OnSectBattleItemMessage`

| Field | Details |
|------|------|
| C++ type | `FOnSectBattleItemMessage` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Message" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Message") FOnSectBattleItemMessage OnSectBattleItemMessage;` |

**Notes:**

> 物品消息发放广播。仅 MessageType==Item 时与 OnSectBattleMessage 一起广播，供只关心物品弹窗的 UI 直接绑定。

---

## Blueprint-exposed functions

### Function `Get`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldSectBattle|Message" |
| Return type | [UWorldSectBattleMessageSubsystem](WorldSectBattleMessageSubsystem__UWorldSectBattleMessageSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Message", meta = (WorldContext = "WorldContextObject")) static UWorldSectBattleMessageSubsystem* Get(const UObject* WorldContextObject);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 取当前世界的门派战消息系统实例。

---

### Function `EnqueueTextMessage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Message" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Description` | `const FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void EnqueueTextMessage(const FText& Description);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 入队一条文本消息。该类型 channel 空闲则立即发放，否则排队等该类型上一条按其展示时长播完。
> 文案表统一写 _14_ 字号标签，弹窗 UI 需要更大的 _17_，入队前统一替换（对已是 _17_ 的文本是无操作，幂等）。

---

### Function `EnqueueItemMessage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Message" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemName` | `const FText&` |
| `ItemIcon` | `const TSoftObjectPtr<UTexture2D>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void EnqueueItemMessage(const FText& ItemName, const TSoftObjectPtr<UTexture2D>& ItemIcon);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 入队一条物品消息（ItemName/ItemIcon 均由调用方给好，本系统不查表）。该类型 channel 空闲则立即发放，否则排队。

---

### Function `ClearQueue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Message" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void ClearQueue();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清空所有类型的队列 + 停止所有定时器。

---

### Function `BeginBattleSession`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Message" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void BeginBattleSession();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开启新一场会话：清空上一场残留的弹窗消息队列。供管理器在开局时与 UWorldSectBattleRecordSubsystem::BeginBattleSession 并列调用。

---

### Function `EndBattleSession`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Message" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Message") void EndBattleSession();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 结束当前会话：清空队列 + 停定时器，避免战后还在弹。供管理器在结束时与 UWorldSectBattleRecordSubsystem::EndBattleSession 并列调用。

---
