# `class` `UApprenticeshipConfigAsset`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipConfigAsset.h`

---

## 功能说明（来自头文件注释）

> 弟子历练配置资产 — 仿 UGamePlayConfigurationAsset。
> 获取:AERW_GameModeBase::GetApprenticeshipConfigAsset()
>      (GameConfigComponent 按 EGameDataAssetType::ApprenticeshipConfiguration 索引;
>       需在 GameConfigComponent.GameDataAsset 里配 DA_ApprenticeshipConfig 软引用)。
> 集中历练系统所有可调数值,替代 AApprenticeshipManager 里的硬编码。
> 未配置时管理器回退到本类 CDO(即下面这些默认初值),不会崩。

## 蓝图暴露变量

### 属性 `MaxConcurrentDispatched`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="历练|派遣" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|派遣") int32 MaxConcurrentDispatched = 50;` |

**说明:**

> 大地图同时在外历练弟子上限(玩家+NPC 共用;玩家派遣不受此挡,仅卡 NPC 新派)

---

### 属性 `NPCInitialBudget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="历练|派遣" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|派遣") int32 NPCInitialBudget = 200;` |

**说明:**

> NPC 门派派遣弟子的初始盘缠

---

### 属性 `RecallMoneyCost`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="历练|派遣" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|派遣") int32 RecallMoneyCost = 0;` |

**说明:**

> 中途召回弟子消耗的门派钱(ForceMoney;0=免费)

---

### 属性 `DefaultMaxDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|派遣" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|派遣") float DefaultMaxDays = 30.f;` |

**说明:**

> 单城逗留上限默认天数(玩家派遣未指定时兜底 + NPC 派遣统一用)

---

### 属性 `BaseEventTriggerChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|事件" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|事件") float BaseEventTriggerChance = 0.30f;` |

**说明:**

> 每游戏日触发历练事件的基础概率

---

### 属性 `CommonEventIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="历练|事件" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|事件") TArray<FName> CommonEventIDs;` |

**说明:**

> 通用事件库:所有城都可能触发的历练事件 ID(与地点自身 ApprenticeshipEventIDs 取并集)

---

### 属性 `MaxCitiesPerTrip`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="历练|转城" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|转城") int32 MaxCitiesPerTrip = 6;` |

**说明:**

> 单次历练最多途经城市数

---

### 属性 `TransferBudgetThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="历练|转城" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|转城") int32 TransferBudgetThreshold = 30;` |

**说明:**

> 转城门槛:剩余盘缠 ≥ 此值才转下一城继续(否则回程);盘缠只在事件触发后扣对应 BudgetCost

---

### 属性 `MoveSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|转城" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|转城") float MoveSpeed = 100.f;` |

**说明:**

> 2D 行程速度(路程 ÷ 此值 = 所需游戏时间秒)

---

### 属性 `NPCReturnChanceBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|NPC" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|NPC") float NPCReturnChanceBase = 0.05f;` |

**说明:**

> ── NPC 归来(只剩自主归来概率;奖励改走奖励池 NPCScore 累积,无公式)──
> 基础返回概率

---

### 属性 `NPCReturnChancePerDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|NPC" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|NPC") float NPCReturnChancePerDay = 0.005f;` |

**说明:**

> 每天增加的返回概率

---

### 属性 `NPCReturnChanceMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|NPC" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|NPC") float NPCReturnChanceMax = 0.20f;` |

**说明:**

> 最大返回概率

---

### 属性 `FallbackExpRumor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|其它" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|其它") float FallbackExpRumor = 30.f;` |

**说明:**

> 未映射事件按 Importance 给的兜底内功经验

---

### 属性 `FallbackExpNotable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|其它" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|其它") float FallbackExpNotable = 100.f;` |

**说明:**

> Fallback Exp Notable 字段。

---

### 属性 `FallbackExpCritical`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="历练|其它" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "历练|其它") float FallbackExpCritical = 200.f;` |

**说明:**

> Fallback Exp Critical 字段。

---
