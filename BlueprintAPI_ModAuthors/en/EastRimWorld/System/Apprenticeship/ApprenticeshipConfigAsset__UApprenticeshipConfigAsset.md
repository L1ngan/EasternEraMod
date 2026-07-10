# `class` `UApprenticeshipConfigAsset`

**Source header:** `EastRimWorld/System/Apprenticeship/ApprenticeshipConfigAsset.h`

---

## Functional description (from header comments)

> 弟子历练配置资产 — 仿 UGamePlayConfigurationAsset。
> 获取:AERW_GameModeBase::GetApprenticeshipConfigAsset()
>      (GameConfigComponent 按 EGameDataAssetType::ApprenticeshipConfiguration 索引;
>       需在 GameConfigComponent.GameDataAsset 里配 DA_ApprenticeshipConfig 软引用)。
> 集中历练系统所有可调数值,替代 AApprenticeshipManager 里的硬编码。
> 未配置时管理器回退到本类 CDO(即下面这些默认初值),不会崩。

## Blueprint-exposed variables

### Property `MaxConcurrentDispatched`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|派遣" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|派遣") int32 MaxConcurrentDispatched = 50;` |

**Notes:**

> 大地图同时在外历练弟子上限(玩家+NPC 共用;玩家派遣不受此挡,仅卡 NPC 新派)

---

### Property `NPCInitialBudget`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|派遣" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|派遣") int32 NPCInitialBudget = 200;` |

**Notes:**

> NPC 门派派遣弟子的初始盘缠

---

### Property `RecallMoneyCost`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|派遣" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|派遣") int32 RecallMoneyCost = 0;` |

**Notes:**

> 中途召回弟子消耗的门派钱(ForceMoney;0=免费)

---

### Property `DefaultMaxDays`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|派遣" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|派遣") float DefaultMaxDays = 30.f;` |

**Notes:**

> 单城逗留上限默认天数(玩家派遣未指定时兜底 + NPC 派遣统一用)

---

### Property `BaseEventTriggerChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|事件" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|事件") float BaseEventTriggerChance = 0.30f;` |

**Notes:**

> 每游戏日触发历练事件的基础概率

---

### Property `CommonEventIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|事件" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|事件") TArray<FName> CommonEventIDs;` |

**Notes:**

> 通用事件库:所有城都可能触发的历练事件 ID(与地点自身 ApprenticeshipEventIDs 取并集)

---

### Property `MaxCitiesPerTrip`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|转城" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|转城") int32 MaxCitiesPerTrip = 6;` |

**Notes:**

> 单次历练最多途经城市数

---

### Property `TransferBudgetThreshold`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|转城" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|转城") int32 TransferBudgetThreshold = 30;` |

**Notes:**

> 转城门槛:剩余盘缠 ≥ 此值才转下一城继续(否则回程);盘缠只在事件触发后扣对应 BudgetCost

---

### Property `MoveSpeed`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|转城" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|转城") float MoveSpeed = 100.f;` |

**Notes:**

> 2D 行程速度(路程 ÷ 此值 = 所需游戏时间秒)

---

### Property `NPCReturnChanceBase`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|NPC" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|NPC") float NPCReturnChanceBase = 0.05f;` |

**Notes:**

> ── NPC 归来(只剩自主归来概率;奖励改走奖励池 NPCScore 累积,无公式)──
> 基础返回概率

---

### Property `NPCReturnChancePerDay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|NPC" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|NPC") float NPCReturnChancePerDay = 0.005f;` |

**Notes:**

> 每天增加的返回概率

---

### Property `NPCReturnChanceMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|NPC" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|NPC") float NPCReturnChanceMax = 0.20f;` |

**Notes:**

> 最大返回概率

---

### Property `FallbackExpRumor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|其它" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|其它") float FallbackExpRumor = 30.f;` |

**Notes:**

> 未映射事件按 Importance 给的兜底内功经验

---

### Property `FallbackExpNotable`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|其它" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|其它") float FallbackExpNotable = 100.f;` |

**Notes:**

> Fallback Exp Notable field.

---

### Property `FallbackExpCritical`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="历练|其它" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|其它") float FallbackExpCritical = 200.f;` |

**Notes:**

> Fallback Exp Critical field.

---
