# `class` `UWorldSectBattleRecordSubsystem`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleRecordSubsystem.h`

---

## 功能说明（来自头文件注释）

> 门派战记录系统（与 AWorldSectBattleManager 解耦）。
> 职责单一：收集战斗过程事件 → 从 UI_StringTable 取文案并按命名参数格式化 → 存储 + 广播给 UI。
> 管理器只在事件点（击杀 / 复活 / 占旗 / 开箱）调用本系统薄接口并喂入名字等参数，不持有任何记录/查表逻辑。
> UI 通过 Get() 拿到本系统，绑定 OnRecordAdded 实时追加、或 GetRecords() 初始化拉取一次。

## 蓝图暴露变量

### 属性 `OnRecordAdded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectBattleEventAdded` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Record" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Record") FOnSectBattleEventAdded OnRecordAdded;` |

**说明:**

> 新记录入库后广播。UI 绑定它实时追加一行。

---

### 属性 `OnKillStreakTextReady`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectBattleKillStreakText` |
| 反射说明符 | BlueprintAssignable, Category="WorldSectBattle|Record" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "WorldSectBattle|Record") FOnSectBattleKillStreakText OnKillStreakTextReady;` |

**说明:**

> 连杀里程碑弹窗文本广播。AWorldSectBattleManager 监听它，再转发给消息系统弹窗队列。

---

## 蓝图暴露函数

### 函数 `Get`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldSectBattle|Record" |
| 返回类型 | [UWorldSectBattleRecordSubsystem](WorldSectBattleRecordSubsystem__UWorldSectBattleRecordSubsystem.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Record", meta = (WorldContext = "WorldContextObject")) static UWorldSectBattleRecordSubsystem* Get(const UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 取当前世界的门派战记录系统实例。

---

### 函数 `BeginBattleSession`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Record" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Record") void BeginBattleSession();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开启新一场战斗记录会话：清空历史记录并重置计时基准。

---

### 函数 `EndBattleSession`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Record" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Record") void EndBattleSession();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束当前会话（保留记录供结算 UI 读取，仅停止计时基准刷新）。

---

### 函数 `GetRecords`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldSectBattle|Record" |
| 返回类型 | const TArray<[FSectBattleEventEntry](WorldSectBattleRecordSubsystem__FSectBattleEventEntry.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Record") const TArray<FSectBattleEventEntry>& GetRecords() const { return Records; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取本场全部记录（UI 初始化时主动拉取一次）。

---

### 函数 `GetRecordItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Record" |
| 返回类型 | TArray<[USectBattleRecordItemData](WorldSectBattleRecordSubsystem__USectBattleRecordItemData.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | [ESBRecordFilter](WorldSectBattleRecordSubsystem__ESBRecordFilter.md) Filter = [ESBRecordFilter](WorldSectBattleRecordSubsystem__ESBRecordFilter.md)::All |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Record") TArray<USectBattleRecordItemData*> GetRecordItems(ESBRecordFilter Filter = ESBRecordFilter::All);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按过滤条件取记录并包装成列表项数组，供 CommonListView->SetListItems 直接喂入（UI 初始化/切页签时拉一次）。
> Filter 默认 All；传 BattleEvent / HiddenEvent 只返回对应分类。

---

### 函数 `MakeRecordItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Record" |
| 返回类型 | [USectBattleRecordItemData](WorldSectBattleRecordSubsystem__USectBattleRecordItemData.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Record` | const [FSectBattleEventEntry](WorldSectBattleRecordSubsystem__FSectBattleEventEntry.md)& |
| `（匿名/仅类型）` | [ESBRecordFilter](WorldSectBattleRecordSubsystem__ESBRecordFilter.md) Filter = [ESBRecordFilter](WorldSectBattleRecordSubsystem__ESBRecordFilter.md)::All |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Record") USectBattleRecordItemData* MakeRecordItem(const FSectBattleEventEntry& Record, ESBRecordFilter Filter = ESBRecordFilter::All);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把单条记录包装成列表项，供 OnRecordAdded 回调里 CommonListView->AddItem 动态追加一行。
> Filter 默认 All；传 BattleEvent / HiddenEvent 时，记录不属于该分类则返回 nullptr
> （UI 处于过滤页签时用它判定新记录是否该追加，调用方需判空）。

---

### 函数 `FormatRecordTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldSectBattle|Record" |
| 返回类型 | `FText` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TimeSeconds` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "WorldSectBattle|Record") static FText FormatRecordTime(float TimeSeconds);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> TimeSeconds → "MM:SS"（分:秒），用于记录行时间戳显示，如 52.78s → "00:52"。

---
