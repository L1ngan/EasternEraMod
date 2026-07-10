# `struct` `FApprenticeshipEventRow`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipDataRow.h`

---

## Functional description (from header comments)

> 历练事件 DataTable 行结构
> 配套资产: DT_ApprenticeshipEvents (路径由策划在编辑器里建)

## Blueprint-exposed variables

### Property `EventName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") FText EventName;` |

**Notes:**

> 事件名称

---

### Property `TriggerWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") float TriggerWeight = 1.0f;` |

**Notes:**

> 随机权重 (越大越常出)

---

### Property `EventType`

| Field | Details |
|------|------|
| C++ type | [EApprenticeshipEventType](ApprenticeshipDataRow__EApprenticeshipEventType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") EApprenticeshipEventType EventType = EApprenticeshipEventType::Encounter;` |

**Notes:**

> 事件类型

---

### Property `Importance`

| Field | Details |
|------|------|
| C++ type | [EApprenticeshipEventImportance](ApprenticeshipDataRow__EApprenticeshipEventImportance.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") EApprenticeshipEventImportance Importance = EApprenticeshipEventImportance::Notable;` |

**Notes:**

> 事件重要度

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") FText Description;` |

**Notes:**

> 事件描述 (武侠话术, 可含 {slot} 槽位)

---

### Property `CityWeightOverride`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Event" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event") TMap<FName, float> CityWeightOverride;` |

**Notes:**

> 可选: 某事件在指定城市的权重覆盖 (key = 城市 RowName). 空 = 用 TriggerWeight.
> 给"开封的高人事件权重+50%"这类微调用; 抽样从地点事件列表取出后按此覆盖权重.

---

### Property `BudgetCost`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Event|Budget" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event|Budget") int32 BudgetCost = 0;` |

**Notes:**

> 触发本事件固定消耗的弟子盘缠 (铜币; 不够则扣到 0; 默认 0 = 不消耗)

---

### Property `RewardPoolID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Event|Reward" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event|Reward") FName RewardPoolID;` |

**Notes:**

> 关联的奖励池 ID(= DT_RewardPool 的 RowName); 空则本事件只走 Importance 兜底经验

---

### Property `ConditionIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Event|Condition" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event|Condition") TArray<FName> ConditionIDs;` |

**Notes:**

> 触发条件 ID 列表(引用 DT_ApprenticeshipCondition 行;全部满足才抽中)

---
