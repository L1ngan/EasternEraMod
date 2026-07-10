# `struct` `FApprenticeshipDetailInfo`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 单条历练详情快照(玩家点开某在途弟子)

## 蓝图暴露变量

### 属性 `RecordGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FGuid RecordGuid;` |

**说明:**

> Record Guid 字段。

---

### 属性 `DiscipleGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FGuid DiscipleGuid;` |

**说明:**

> Disciple Guid 字段。

---

### 属性 `DiscipleDisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText DiscipleDisplayName;` |

**说明:**

> Disciple Display Name 字段。

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 RealmLevel = 0;` |

**说明:**

> Realm Level 字段。

---

### 属性 `State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EApprenticeshipState](ApprenticeshipTypes__EApprenticeshipState.md) |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") EApprenticeshipState State = EApprenticeshipState::None;` |

**说明:**

> State 字段。

---

### 属性 `CurrentPlaceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText CurrentPlaceName;` |

**说明:**

> 当前所在地点

---

### 属性 `CurrentPlaceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FName CurrentPlaceID;` |

**说明:**

> Current Place ID 字段。

---

### 属性 `CurrentPlaceLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 CurrentPlaceLevel = 0;` |

**说明:**

> Current Place Level 字段。

---

### 属性 `StartGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 StartGameDay = 0;` |

**说明:**

> 时间

---

### 属性 `StartGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") float StartGameTime = 0.f;` |

**说明:**

> 执行 Start Game Time 操作。

---

### 属性 `CurrentStayDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 CurrentStayDays = 0;` |

**说明:**

> Current Stay Days 字段。

---

### 属性 `CurrentStayMaxDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 CurrentStayMaxDays = 0;` |

**说明:**

> Current Stay Max Days 字段。

---

### 属性 `TotalDaysElapsed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 TotalDaysElapsed = 0;` |

**说明:**

> Total Days Elapsed 字段。

---

### 属性 `BudgetRemaining`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 BudgetRemaining = 0;` |

**说明:**

> Budget Remaining 字段。

---

### 属性 `Harvest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FApprenticeshipHarvestView](ApprenticeshipTypes__FApprenticeshipHarvestView.md) |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FApprenticeshipHarvestView Harvest;` |

**说明:**

> 总收获(分项) + 经历事件(带时间)

---

### 属性 `EventHistory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipEventHistoryItem](ApprenticeshipTypes__FApprenticeshipEventHistoryItem.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") TArray<FApprenticeshipEventHistoryItem> EventHistory;` |

**说明:**

> Event History 字段。

---
