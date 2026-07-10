# `struct` `FApprenticeshipEventRow`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow.h`

---

## 功能说明（来自头文件注释）

> 历练事件 DataTable 行结构
> 配套资产: DT_ApprenticeshipEvents (路径由策划在编辑器里建)

## 蓝图暴露变量

### 属性 `EventName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") FText EventName;` |

**说明:**

> 事件名称

---

### 属性 `TriggerWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") float TriggerWeight = 1.0f;` |

**说明:**

> 随机权重 (越大越常出)

---

### 属性 `EventType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EApprenticeshipEventType](ApprenticeshipDataRow__EApprenticeshipEventType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") EApprenticeshipEventType EventType = EApprenticeshipEventType::Encounter;` |

**说明:**

> 事件类型

---

### 属性 `Importance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EApprenticeshipEventImportance](ApprenticeshipDataRow__EApprenticeshipEventImportance.md) |
| 反射说明符 | BlueprintReadWrite, Category="Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") EApprenticeshipEventImportance Importance = EApprenticeshipEventImportance::Notable;` |

**说明:**

> 事件重要度

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") FText Description;` |

**说明:**

> 事件描述 (武侠话术, 可含 {slot} 槽位)

---

### 属性 `CityWeightOverride`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, float>` |
| 反射说明符 | BlueprintReadWrite, Category="Event" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") TMap<FName, float> CityWeightOverride;` |

**说明:**

> 可选: 某事件在指定城市的权重覆盖 (key = 城市 RowName). 空 = 用 TriggerWeight.
> 给"开封的高人事件权重+50%"这类微调用; 抽样从地点事件列表取出后按此覆盖权重.

---

### 属性 `BudgetCost`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Event|Budget" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event|Budget") int32 BudgetCost = 0;` |

**说明:**

> 触发本事件固定消耗的弟子盘缠 (铜币; 不够则扣到 0; 默认 0 = 不消耗)

---

### 属性 `RewardPoolID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Event|Reward" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event|Reward") FName RewardPoolID;` |

**说明:**

> 关联的奖励池 ID(= DT_RewardPool 的 RowName); 空则本事件只走 Importance 兜底经验

---

### 属性 `ConditionIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Event|Condition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event|Condition") TArray<FName> ConditionIDs;` |

**说明:**

> 触发条件 ID 列表(引用 DT_ApprenticeshipCondition 行;全部满足才抽中)

---
