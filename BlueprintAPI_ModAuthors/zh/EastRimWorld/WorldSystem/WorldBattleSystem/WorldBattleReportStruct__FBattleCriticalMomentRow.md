# `struct` `FBattleCriticalMomentRow`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct.h`

---

## 功能说明（来自头文件注释）

> DT_BattleCriticalMoments 的每行数据。
> 文档 § 12 的五条事件对应关系（RowName → 字段）：
>   KM_LeaderDuel     : FixedDelta  = +30.0   （掌门对决，攻方赢+30）
>   KM_TraitorReveal  : FixedDelta  = +20.0   （叛徒倒戈，攻方+20）
>   KM_HeritageScroll : InvertRatio = 0.5     （传承显灵，弱势翻转50%）
>   KM_HeavyRain      : GainMultiplier = 0.3  （暴雨，Gain×0.3，本PR返回0，后续扩展）
>   KM_Ambush         : FixedDelta  = ±40.0   （伏兵，随机一方+40，AdvantageSign 随机）

## 蓝图暴露变量

### 属性 `EventName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="CriticalMoment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") FText EventName;` |

**说明:**

> 事件显示名称（策划/UI 用），如"掌门对决"。

---

### 属性 `EffectType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBattleCriticalEffectType](WorldBattleReportStruct__EBattleCriticalEffectType.md) |
| 反射说明符 | BlueprintReadWrite, Category="CriticalMoment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") EBattleCriticalEffectType EffectType = EBattleCriticalEffectType::FixedDelta;` |

**说明:**

> 效果类型：固定增量/翻转比例/Gain乘子

---

### 属性 `AdvantageFixedDelta`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CriticalMoment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") float AdvantageFixedDelta = 0.f;` |

**说明:**

> EffectType == FixedDelta 时的增量绝对值。
>   正数 = 利攻方；负数 = 利守方。
>   KM_Ambush 填 40.0，C++ 会随机决定正负（bRandomSide=true）。

---

### 属性 `InvertRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CriticalMoment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") float InvertRatio = 0.5f;` |

**说明:**

> EffectType == InvertRatio 时的翻转比例（0-1）。
>   返回增量 = -(CurrentAdvantage * InvertRatio)，使 Advantage 向 0 回拉。

---

### 属性 `GainMultiplierOverride`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CriticalMoment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") float GainMultiplierOverride = 1.f;` |

**说明:**

> EffectType == GainMultiplier 时的乘子（本 PR 返回 0，后续扩展）。
>   占位字段，策划填 0.3。

---

### 属性 `bRandomSide`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="CriticalMoment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") bool bRandomSide = false;` |

**说明:**

> 伏兵类事件：随机决定增量正负（true = 随机一方）。
>   true 时 C++ 会 50% 取正、50% 取负。

---
