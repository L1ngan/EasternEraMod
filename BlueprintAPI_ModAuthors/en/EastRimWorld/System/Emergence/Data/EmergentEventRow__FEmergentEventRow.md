# `struct` `FEmergentEventRow`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergentEventRow.h`

---

## Functional description (from header comments)

> 涌现事件库数据行 — 对应 DT_EmergentEvents。继承项目数据表统一基类 FDataBase(提供 ID + Comment)。
> 主键 = ID(来自 FDataBase)。新增事件直接在表里加行即可, 无需改 C++ (可扩展性核心)。

## Blueprint-exposed variables

### Property `DisplayName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Identity" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Identity") FText DisplayName;` |

**Notes:**

> 事件中文显示名

---

### Property `Category`

| Field | Details |
|------|------|
| C++ type | [EEmergentEventCategory](EmergenceTypes__EEmergentEventCategory.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Identity" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Identity") EEmergentEventCategory Category = EEmergentEventCategory::Anecdote;` |

**Notes:**

> 题材分类 (13 类之一), 用于题材权重表归类

---

### Property `bEnabled`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Identity" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Identity") bool bEnabled = true;` |

**Notes:**

> 是否启用 (策划临时下线某事件时置 false, 不必删行)

---

### Property `PrimaryPressure`

| Field | Details |
|------|------|
| C++ type | [EEmergencePressureDim](EmergenceTypes__EEmergencePressureDim.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Pressure") EEmergencePressureDim PrimaryPressure = EEmergencePressureDim::Dullness;` |

**Notes:**

> 主驱动压力维度 — 决定: ① 题材轮盘基础权重(该压力越高越易抽中本事件)
>                       ② 事件从快照取参与对象的默认维度(桥/结算按语义自取)
> None = 本事件不走压力驱动: 不判压力(只由 启用/境界/冷却/并发 等其他门槛过滤), 轮盘按 1.0 底权参与, 下方压力字段隐藏。

---

### Property `PressureWeights`

| Field | Details |
|------|------|
| C++ type | TMap<[EEmergencePressureDim](EmergenceTypes__EEmergencePressureDim.md), float> |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Pressure", meta = (EditCondition = "PrimaryPressure != EEmergencePressureDim::None", EditConditionHides)) TMap<EEmergencePressureDim, float> PressureWeights;` |

**Notes:**

> 可选的多压力权重 (空 = 只用 PrimaryPressure)。
> key = EEmergencePressureDim, value = 权重系数; 编辑器里直接配 Map, 无需写 JSON。
> 用于"灾害高 + 治安高才更易冒瘟疫"这类多压力叠加调权。

---

### Property `BaseWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Pressure", meta = (ClampMin = "0.0", EditCondition = "PrimaryPressure != EEmergencePressureDim::None", EditConditionHides)) float BaseWeight = 1.0f;` |

**Notes:**

> 题材基础权重 (轮盘抽题材时的底权, 越高越容易被抽到; 与压力相乘)

---

### Property `MinPrimaryPressure`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Trigger" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Trigger", meta = (ClampMin = "0.0", ClampMax = "1.0", EditCondition = "PrimaryPressure != EEmergencePressureDim::None", EditConditionHides)) float MinPrimaryPressure = 0.f;` |

**Notes:**

> 主驱动压力的最低门槛 [0,1] (压力低于此值不参与轮盘)。默认 0 = 任何压力都参与

---

### Property `MinPlayerRealm`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Trigger" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Trigger") int32 MinPlayerRealm = -1;` |

**Notes:**

> 玩家宗门最低境界要求 (-1 = 不限)。用于探宝品级 / 高境界解锁的奇遇等

---

### Property `MaxPlayerRealm`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Trigger" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Trigger") int32 MaxPlayerRealm = -1;` |

**Notes:**

> 玩家宗门最高境界限制 (-1 = 不限)。避免高境界还冒山贼骚扰这类断层

---

### Property `MaxConcurrentInstances`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Throttle" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Throttle") int32 MaxConcurrentInstances = 1;` |

**Notes:**

> 同时允许运行的最大并发实例数 (0 = 不限)

---

### Property `CooldownDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Throttle" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Throttle") int32 CooldownDays = 30;` |

**Notes:**

> 同一事件触发后的冷却天数 (避免连环触发, 尤其结仇/家园类)

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Throttle" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Throttle") int32 Priority = 50;` |

**Notes:**

> 优先级 (越高越先被实例化; 也用于反向闸门按优先级过滤)

---

### Property `bBlackSwan`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Special" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Special") bool bBlackSwan = false;` |

**Notes:**

> 是否黑天鹅事件 (极罕见大事, 走独立低概率滚骰, 不进常规轮盘)

---

### Property `BlackSwanProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Special" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Special", meta = (ClampMin = "0.0", ClampMax = "1.0"),meta = (EditCondition = "bBlackSwan", EditConditionHides)) float BlackSwanProbability = 0.f;` |

**Notes:**

> 黑天鹅每拍触发概率 [0,1] (bBlackSwan=true 时生效, e.g. 0.005 = 0.5%)

---

### Property `SpecialHandling`

| Field | Details |
|------|------|
| C++ type | [EEmergentSpecialHandling](EmergenceTypes__EEmergentSpecialHandling.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|Special" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|Special") EEmergentSpecialHandling SpecialHandling = EEmergentSpecialHandling::None;` |

**Notes:**

> 特殊落地处理(SpawnRow 据此做额外硬逻辑; None=无)。取代按 EventID 硬编码判断

---

### Property `PlaceQuest`

| Field | Details |
|------|------|
| C++ type | [FEmergencePlaceQuestDef](EmergentEventRow__FEmergencePlaceQuestDef.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|PlaceQuest" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|PlaceQuest", meta = (EditCondition = "SpecialHandling == EEmergentSpecialHandling::PlaceQuest", EditConditionHides)) FEmergencePlaceQuestDef PlaceQuest;` |

**Notes:**

> 限时地点事件配置(SpecialHandling=PlaceQuest 时生效/显示, 见 FEmergencePlaceQuestDef)

---

### Property `IronVein`

| Field | Details |
|------|------|
| C++ type | [FIronVeinDef](EmergentEventRow__FIronVeinDef.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|IronVein" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|IronVein", meta = (EditCondition = "SpecialHandling == EEmergentSpecialHandling::IronVein", EditConditionHides)) FIronVeinDef IronVein;` |

**Notes:**

> 玄铁矿脉配置(SpecialHandling=IronVein 时生效/显示, 见 FIronVeinDef)

---

### Property `RivalRaid`

| Field | Details |
|------|------|
| C++ type | [FRivalRaidDef](EmergentEventRow__FRivalRaidDef.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|RivalRaid" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|RivalRaid", meta = (EditCondition = "SpecialHandling == EEmergentSpecialHandling::RivalRaid", EditConditionHides)) FRivalRaidDef RivalRaid;` |

**Notes:**

> 强袭宿敌配置(SpecialHandling=RivalRaid 时生效/显示, 见 FRivalRaidDef)

---

### Property `SwordMeet`

| Field | Details |
|------|------|
| C++ type | [FSwordMeetDef](EmergentEventRow__FSwordMeetDef.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Emergent|SwordMeet" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emergent|SwordMeet", meta = (EditCondition = "SpecialHandling == EEmergentSpecialHandling::SwordMeet", EditConditionHides)) FSwordMeetDef SwordMeet;` |

**Notes:**

> 论剑大会配置(SpecialHandling=SwordMeet 时生效/显示, 见 FSwordMeetDef)

---
