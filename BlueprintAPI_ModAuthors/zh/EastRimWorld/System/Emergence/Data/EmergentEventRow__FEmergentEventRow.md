# `struct` `FEmergentEventRow`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## 功能说明（来自头文件注释）

> 涌现事件库数据行 — 对应 DT_EmergentEvents。继承项目数据表统一基类 FDataBase(提供 ID + Comment)。
> 主键 = ID(来自 FDataBase)。新增事件直接在表里加行即可, 无需改 C++ (可扩展性核心)。

## 蓝图暴露变量

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Identity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Identity") FText DisplayName;` |

**说明:**

> 事件中文显示名

---

### 属性 `Category`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmergentEventCategory](EmergenceTypes__EEmergentEventCategory.md) |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Identity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Identity") EEmergentEventCategory Category = EEmergentEventCategory::Anecdote;` |

**说明:**

> 题材分类 (13 类之一), 用于题材权重表归类

---

### 属性 `bEnabled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Identity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Identity") bool bEnabled = true;` |

**说明:**

> 是否启用 (策划临时下线某事件时置 false, 不必删行)

---

### 属性 `PrimaryPressure`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmergencePressureDim](EmergenceTypes__EEmergencePressureDim.md) |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Pressure") EEmergencePressureDim PrimaryPressure = EEmergencePressureDim::Dullness;` |

**说明:**

> 主驱动压力维度 — 决定: ① 题材轮盘基础权重(该压力越高越易抽中本事件)
>                       ② 事件从快照取参与对象的默认维度(桥/结算按语义自取)
> None = 本事件不走压力驱动: 不判压力(只由 启用/境界/冷却/并发 等其他门槛过滤), 轮盘按 1.0 底权参与, 下方压力字段隐藏。

---

### 属性 `PressureWeights`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEmergencePressureDim](EmergenceTypes__EEmergencePressureDim.md), float> |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Pressure", meta = (EditCondition = "PrimaryPressure != EEmergencePressureDim::None", EditConditionHides)) TMap<EEmergencePressureDim, float> PressureWeights;` |

**说明:**

> 可选的多压力权重 (空 = 只用 PrimaryPressure)。
> key = EEmergencePressureDim, value = 权重系数; 编辑器里直接配 Map, 无需写 JSON。
> 用于"灾害高 + 治安高才更易冒瘟疫"这类多压力叠加调权。

---

### 属性 `BaseWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Pressure", meta = (ClampMin = "0.0", EditCondition = "PrimaryPressure != EEmergencePressureDim::None", EditConditionHides)) float BaseWeight = 1.0f;` |

**说明:**

> 题材基础权重 (轮盘抽题材时的底权, 越高越容易被抽到; 与压力相乘)

---

### 属性 `MinPrimaryPressure`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Trigger" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Trigger", meta = (ClampMin = "0.0", ClampMax = "1.0", EditCondition = "PrimaryPressure != EEmergencePressureDim::None", EditConditionHides)) float MinPrimaryPressure = 0.f;` |

**说明:**

> 主驱动压力的最低门槛 [0,1] (压力低于此值不参与轮盘)。默认 0 = 任何压力都参与

---

### 属性 `MinPlayerRealm`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Trigger" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Trigger") int32 MinPlayerRealm = -1;` |

**说明:**

> 玩家宗门最低境界要求 (-1 = 不限)。用于探宝品级 / 高境界解锁的奇遇等

---

### 属性 `MaxPlayerRealm`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Trigger" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Trigger") int32 MaxPlayerRealm = -1;` |

**说明:**

> 玩家宗门最高境界限制 (-1 = 不限)。避免高境界还冒山贼骚扰这类断层

---

### 属性 `MaxConcurrentInstances`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Throttle" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Throttle") int32 MaxConcurrentInstances = 1;` |

**说明:**

> 同时允许运行的最大并发实例数 (0 = 不限)

---

### 属性 `CooldownDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Throttle" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Throttle") int32 CooldownDays = 30;` |

**说明:**

> 同一事件触发后的冷却天数 (避免连环触发, 尤其结仇/家园类)

---

### 属性 `Priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Throttle" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Throttle") int32 Priority = 50;` |

**说明:**

> 优先级 (越高越先被实例化; 也用于反向闸门按优先级过滤)

---

### 属性 `bBlackSwan`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Special" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Special") bool bBlackSwan = false;` |

**说明:**

> 是否黑天鹅事件 (极罕见大事, 走独立低概率滚骰, 不进常规轮盘)

---

### 属性 `BlackSwanProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Special" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Special", meta = (ClampMin = "0.0", ClampMax = "1.0"),meta = (EditCondition = "bBlackSwan", EditConditionHides)) float BlackSwanProbability = 0.f;` |

**说明:**

> 黑天鹅每拍触发概率 [0,1] (bBlackSwan=true 时生效, e.g. 0.005 = 0.5%)

---

### 属性 `SpecialHandling`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmergentSpecialHandling](EmergenceTypes__EEmergentSpecialHandling.md) |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|Special" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Special") EEmergentSpecialHandling SpecialHandling = EEmergentSpecialHandling::None;` |

**说明:**

> 特殊落地处理(SpawnRow 据此做额外硬逻辑; None=无)。取代按 EventID 硬编码判断

---

### 属性 `PlaceQuest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergencePlaceQuestDef](EmergentEventRow__FEmergencePlaceQuestDef.md) |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|PlaceQuest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|PlaceQuest", meta = (EditCondition = "SpecialHandling == EEmergentSpecialHandling::PlaceQuest", EditConditionHides)) FEmergencePlaceQuestDef PlaceQuest;` |

**说明:**

> 限时地点事件配置(SpecialHandling=PlaceQuest 时生效/显示, 见 FEmergencePlaceQuestDef)

---

### 属性 `IronVein`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FIronVeinDef](EmergentEventRow__FIronVeinDef.md) |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|IronVein" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|IronVein", meta = (EditCondition = "SpecialHandling == EEmergentSpecialHandling::IronVein", EditConditionHides)) FIronVeinDef IronVein;` |

**说明:**

> 玄铁矿脉配置(SpecialHandling=IronVein 时生效/显示, 见 FIronVeinDef)

---

### 属性 `RivalRaid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FRivalRaidDef](EmergentEventRow__FRivalRaidDef.md) |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|RivalRaid" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|RivalRaid", meta = (EditCondition = "SpecialHandling == EEmergentSpecialHandling::RivalRaid", EditConditionHides)) FRivalRaidDef RivalRaid;` |

**说明:**

> 强袭宿敌配置(SpecialHandling=RivalRaid 时生效/显示, 见 FRivalRaidDef)

---

### 属性 `SwordMeet`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FSwordMeetDef](EmergentEventRow__FSwordMeetDef.md) |
| 反射说明符 | BlueprintReadWrite, Category="Emergent|SwordMeet" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|SwordMeet", meta = (EditCondition = "SpecialHandling == EEmergentSpecialHandling::SwordMeet", EditConditionHides)) FSwordMeetDef SwordMeet;` |

**说明:**

> 论剑大会配置(SpecialHandling=SwordMeet 时生效/显示, 见 FSwordMeetDef)

---
