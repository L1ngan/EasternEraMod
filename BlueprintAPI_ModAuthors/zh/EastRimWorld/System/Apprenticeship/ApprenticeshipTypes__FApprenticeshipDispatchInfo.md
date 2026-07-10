# `struct` `FApprenticeshipDispatchInfo`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 在途弟子快照(历练面板列表)

## 蓝图暴露变量

### 属性 `DestinationCityName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FString DestinationCityName;` |

**说明:**

> 目标城 RowName 字符串(=TargetCityID.ToString())

---

### 属性 `DaysOnRoad`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 DaysOnRoad = 0;` |

**说明:**

> 在外天数(跨城累计已历练天数 DaysElapsed 取整)

---

### 属性 `TravelProgress`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") float TravelProgress = 0.f;` |

**说明:**

> 当前路段移动进度 0~1(去程/回程途中有效,逗留时为该段终值)

---

### 属性 `State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EApprenticeshipState](ApprenticeshipTypes__EApprenticeshipState.md) |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") EApprenticeshipState State = EApprenticeshipState::None;` |

**说明:**

> 历练状态(启程中/历练中/归途中/被召回等)

---

### 属性 `DiscipleDisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FText DiscipleDisplayName;` |

**说明:**

> 弟子显示名(取角色名;取不到回退 DiscipleName)

---

### 属性 `DestinationCityDisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FText DestinationCityDisplayName;` |

**说明:**

> 目标城显示名(取地点 PlaceName;取不到回退 RowName)

---

### 属性 `DestinationCityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FName DestinationCityID;` |

**说明:**

> 目标城 RowName(=Record.TargetCityID)

---

### 属性 `BudgetRemaining`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 BudgetRemaining = 0;` |

**说明:**

> 剩余盘缠(铜币,Budget 取整)

---

### 属性 `TriggeredEventCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 TriggeredEventCount = 0;` |

**说明:**

> 本次历练已触发事件数(TriggeredEventIDs 计数)

---

### 属性 `LatestRumorID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FName LatestRumorID;` |

**说明:**

> 最近一条江湖见闻 ID(无则 None)

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 RealmLevel = 0;` |

**说明:**

> 弟子境界等级

---

### 属性 `RecordGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FGuid RecordGuid;` |

**说明:**

> 记录主键(给卡片召回按钮回传 RecallDisciple)

---

### 属性 `DiscipleGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FGuid DiscipleGuid;` |

**说明:**

> 弟子角色 Guid(=FApprenticeshipRecord.DiscipleCharacterGuid)

---

### 属性 `OwningForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") FGuid OwningForceGuid;` |

**说明:**

> 派出该弟子的门派 Guid(=FApprenticeshipRecord.OwningForceGuid)

---

### 属性 `StartGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 StartGameDay = 0;` |

**说明:**

> 当前历练开始的游戏日(FloorToInt(DispatchGameTime / GameDaySeconds))

---

### 属性 `StartGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") float StartGameTime = 0.f;` |

**说明:**

> 当前历练开始时间戳秒(DispatchGameTime)

---

### 属性 `CurrentStayDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 CurrentStayDays = 0;` |

**说明:**

> 当前城已停留天数(StayDaysAccrued)

---

### 属性 `TotalDaysElapsed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|DispatchInfo" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|DispatchInfo") int32 TotalDaysElapsed = 0;` |

**说明:**

> 历练总耗时天数(DaysElapsed;= 此次历练累计已消耗)

---
