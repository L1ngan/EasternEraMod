# `struct` `FApprenticeshipRecord`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> Apprenticeship Record 数据结构。

## 蓝图暴露变量

### 属性 `RecordGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Id" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Id") FGuid RecordGuid;` |

**说明:**

> 主键 = 2D 移动表 key(派遣即生成,贯穿去程/逗留/转城/回程/结算)

---

### 属性 `DiscipleCharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Id" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Id") FGuid DiscipleCharacterGuid;` |

**说明:**

> 弟子角色 Guid(所属势力 WorldCharacterData 的 key)

---

### 属性 `bIsNPC`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Id" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Id") bool bIsNPC = false;` |

**说明:**

> 是否 NPC 门派弟子(true=归来返还成长积分;false=玩家弟子兑现 Harvest)

---

### 属性 `OwningForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Id" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Id") FGuid OwningForceGuid;` |

**说明:**

> 派出该弟子的门派 Guid(收益分流唯一依据)

---

### 属性 `State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EApprenticeshipState](ApprenticeshipTypes__EApprenticeshipState.md) |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|State" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|State") EApprenticeshipState State = EApprenticeshipState::None;` |

**说明:**

> ── 状态 ─────────────────────────────────

---

### 属性 `TargetCityGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Path" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") FGuid TargetCityGuid;` |

**说明:**

> 当前目标城 Guid(转城时改写为下一座城)

---

### 属性 `TargetCityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Path" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") FName TargetCityID;` |

**说明:**

> 当前目标城 RowName(2D 移动表用)

---

### 属性 `StartCityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Path" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") FName StartCityID;` |

**说明:**

> 原始出发城 RowName(=最终回程终点,转城不改)

---

### 属性 `CurrentCityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Path" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") FName CurrentCityID;` |

**说明:**

> 当前逗留城 RowName(Roaming 时有效,转城更新)

---

### 属性 `VisitedCities`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Path" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Path") TArray<FName> VisitedCities;` |

**说明:**

> 本次历练已访问过的城(转城排除 + 上限计数)

---

### 属性 `Budget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Resource" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Resource") float Budget = 0.f;` |

**说明:**

> 实时剩余盘缠(铜币;每日扣减直接写回,转城续航决策核心;事件可增加)

---

### 属性 `MaxDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Time" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Time") float MaxDays = 30.f;` |

**说明:**

> 单城逗留天数上限

---

### 属性 `StayDaysAccrued`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Time" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Time") int32 StayDaysAccrued = 0;` |

**说明:**

> 当前城已逗留天数(唯一权威,2D 表那份在转城时同步置 0)

---

### 属性 `DaysElapsed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Time" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Time") float DaysElapsed = 0.f;` |

**说明:**

> 跨城累计已历练天数(供 UI 展示)

---

### 属性 `DispatchGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Time" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Time") float DispatchGameTime = 0.f;` |

**说明:**

> 出发时的游戏时间戳

---

### 属性 `Harvest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FApprenticeshipHarvest](ApprenticeshipTypes__FApprenticeshipHarvest.md) |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Harvest") FApprenticeshipHarvest Harvest;` |

**说明:**

> 历练成果(归来兑现;NPC 留空)

---

### 属性 `TriggeredEventIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Harvest") TArray<FName> TriggeredEventIDs;` |

**说明:**

> 已触发事件 ID(防重复)

---

### 属性 `EventLog`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FApprenticeshipEventLogEntry](ApprenticeshipTypes__FApprenticeshipEventLogEntry.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Harvest") TArray<FApprenticeshipEventLogEntry> EventLog;` |

**说明:**

> 事件历史(带触发时间;TriggeredEventIDs 仅防重复,此表供 UI 按时间展示经历)

---

### 属性 `bSettled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Settle" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Apprenticeship|Settle") bool bSettled = false;` |

**说明:**

> 已结算(发过积分/经验)置 true,防日切与抵达钩子对同一记录双发

---
