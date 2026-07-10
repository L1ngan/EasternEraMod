# `struct` `FBattleCriticalMomentRow`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleReportStruct.h`

---

## Functional description (from header comments)

> DT_BattleCriticalMoments 的每行数据。
> 文档 § 12 的五条事件对应关系（RowName → 字段）：
>   KM_LeaderDuel     : FixedDelta  = +30.0   （掌门对决，攻方赢+30）
>   KM_TraitorReveal  : FixedDelta  = +20.0   （叛徒倒戈，攻方+20）
>   KM_HeritageScroll : InvertRatio = 0.5     （传承显灵，弱势翻转50%）
>   KM_HeavyRain      : GainMultiplier = 0.3  （暴雨，Gain×0.3，本PR返回0，后续扩展）
>   KM_Ambush         : FixedDelta  = ±40.0   （伏兵，随机一方+40，AdvantageSign 随机）

## Blueprint-exposed variables

### Property `EventName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="CriticalMoment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") FText EventName;` |

**Notes:**

> 事件显示名称（策划/UI 用），如"掌门对决"。

---

### Property `EffectType`

| Field | Details |
|------|------|
| C++ type | [EBattleCriticalEffectType](WorldBattleReportStruct__EBattleCriticalEffectType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="CriticalMoment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") EBattleCriticalEffectType EffectType = EBattleCriticalEffectType::FixedDelta;` |

**Notes:**

> 效果类型：固定增量/翻转比例/Gain乘子

---

### Property `AdvantageFixedDelta`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CriticalMoment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") float AdvantageFixedDelta = 0.f;` |

**Notes:**

> EffectType == FixedDelta 时的增量绝对值。
>   正数 = 利攻方；负数 = 利守方。
>   KM_Ambush 填 40.0，C++ 会随机决定正负（bRandomSide=true）。

---

### Property `InvertRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CriticalMoment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") float InvertRatio = 0.5f;` |

**Notes:**

> EffectType == InvertRatio 时的翻转比例（0-1）。
>   返回增量 = -(CurrentAdvantage * InvertRatio)，使 Advantage 向 0 回拉。

---

### Property `GainMultiplierOverride`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="CriticalMoment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") float GainMultiplierOverride = 1.f;` |

**Notes:**

> EffectType == GainMultiplier 时的乘子（本 PR 返回 0，后续扩展）。
>   占位字段，策划填 0.3。

---

### Property `bRandomSide`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="CriticalMoment" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CriticalMoment") bool bRandomSide = false;` |

**Notes:**

> 伏兵类事件：随机决定增量正负（true = 随机一方）。
>   true 时 C++ 会 50% 取正、50% 取负。

---
