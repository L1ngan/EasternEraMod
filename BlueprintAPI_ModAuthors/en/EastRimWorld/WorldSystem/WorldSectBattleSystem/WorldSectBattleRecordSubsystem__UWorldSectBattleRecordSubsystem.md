# `class` `UWorldSectBattleRecordSubsystem`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## Functional description (from header comments)

> 门派战记录系统（与 AWorldSectBattleManager 解耦）。
> 职责单一：收集战斗过程事件 → 从 UI_StringTable 取文案并按命名参数格式化 → 存储 + 广播给 UI。
> 管理器只在事件点（击杀 / 复活 / 占旗 / 开箱）调用本系统薄接口并喂入名字等参数，不持有任何记录/查表逻辑。
> UI 通过 Get() 拿到本系统，绑定 OnRecordAdded 实时追加、或 GetRecords() 初始化拉取一次。

## Blueprint-exposed variables

### Property `OnRecordAdded`

| Field | Details |
|------|------|
| C++ type | `FOnSectBattleEventAdded` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Record" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Record") FOnSectBattleEventAdded OnRecordAdded;` |

**Notes:**

> 新记录入库后广播。UI 绑定它实时追加一行。

---

### Property `OnKillStreakTextReady`

| Field | Details |
|------|------|
| C++ type | `FOnSectBattleKillStreakText` |
| Reflection specifiers | BlueprintAssignable, Category="WorldSectBattle|Record" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Record") FOnSectBattleKillStreakText OnKillStreakTextReady;` |

**Notes:**

> 连杀里程碑弹窗文本广播。AWorldSectBattleManager 监听它，再转发给消息系统弹窗队列。

---

## Blueprint-exposed functions

### Function `Get`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldSectBattle|Record" |
| Return type | [UWorldSectBattleRecordSubsystem](WorldSectBattleRecordSubsystem__UWorldSectBattleRecordSubsystem.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Record", meta = (WorldContext = "WorldContextObject")) static UWorldSectBattleRecordSubsystem* Get(const UObject* WorldContextObject);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 取当前世界的门派战记录系统实例。

---

### Function `BeginBattleSession`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Record" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Record") void BeginBattleSession();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开启新一场战斗记录会话：清空历史记录并重置计时基准。

---

### Function `EndBattleSession`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Record" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Record") void EndBattleSession();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 结束当前会话（保留记录供结算 UI 读取，仅停止计时基准刷新）。

---

### Function `GetRecords`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldSectBattle|Record" |
| Return type | const TArray<[FSectBattleEventEntry](WorldSectBattleRecordSubsystem__FSectBattleEventEntry.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Record") const TArray<FSectBattleEventEntry>& GetRecords() const { return Records; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取本场全部记录（UI 初始化时主动拉取一次）。

---

### Function `GetRecordItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Record" |
| Return type | TArray<[USectBattleRecordItemData](WorldSectBattleRecordSubsystem__USectBattleRecordItemData.md)*> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | [ESBRecordFilter](WorldSectBattleRecordSubsystem__ESBRecordFilter.md) Filter = [ESBRecordFilter](WorldSectBattleRecordSubsystem__ESBRecordFilter.md)::All |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Record") TArray<USectBattleRecordItemData*> GetRecordItems(ESBRecordFilter Filter = ESBRecordFilter::All);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按过滤条件取记录并包装成列表项数组，供 CommonListView->SetListItems 直接喂入（UI 初始化/切页签时拉一次）。
> Filter 默认 All；传 BattleEvent / HiddenEvent 只返回对应分类。

---

### Function `MakeRecordItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|Record" |
| Return type | [USectBattleRecordItemData](WorldSectBattleRecordSubsystem__USectBattleRecordItemData.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Record` | const [FSectBattleEventEntry](WorldSectBattleRecordSubsystem__FSectBattleEventEntry.md)& |
| `(unnamed / type only)` | [ESBRecordFilter](WorldSectBattleRecordSubsystem__ESBRecordFilter.md) Filter = [ESBRecordFilter](WorldSectBattleRecordSubsystem__ESBRecordFilter.md)::All |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Record") USectBattleRecordItemData* MakeRecordItem(const FSectBattleEventEntry& Record, ESBRecordFilter Filter = ESBRecordFilter::All);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 把单条记录包装成列表项，供 OnRecordAdded 回调里 CommonListView->AddItem 动态追加一行。
> Filter 默认 All；传 BattleEvent / HiddenEvent 时，记录不属于该分类则返回 nullptr
> （UI 处于过滤页签时用它判定新记录是否该追加，调用方需判空）。

---

### Function `FormatRecordTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="WorldSectBattle|Record" |
| Return type | `FText` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TimeSeconds` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Record") static FText FormatRecordTime(float TimeSeconds);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> TimeSeconds → "MM:SS"（分:秒），用于记录行时间戳显示，如 52.78s → "00:52"。

---
