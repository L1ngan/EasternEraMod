# `class` `UEmergenceConfigAsset`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceConfigAsset.h`

---

## Functional description (from header comments)

> Emergence Config Asset UObject type.

## Blueprint-exposed variables

### Property `HeartbeatIntervalDays`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="涌现|节奏" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|节奏", meta = (ClampMin = "1.0")) float HeartbeatIntervalDays = 7.f;` |

**Notes:**

> 心跳间隔(游戏天)。策划案: 约一周一拍

---

### Property `MaxSpawnsPerBeat`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="涌现|节奏" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|节奏", meta = (ClampMin = "1")) int32 MaxSpawnsPerBeat = 1;` |

**Notes:**

> 单拍最多冒几条

---

### Property `PressureTuning`

| Field | Details |
|------|------|
| C++ type | [FEmergencePressureTuning](EmergenceTypes__FEmergencePressureTuning.md) |
| Reflection specifiers | BlueprintReadOnly, Category="涌现|压力" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|压力") FEmergencePressureTuning PressureTuning;` |

**Notes:**

> 10 维压力阈值/系数 + 合成权重

---

### Property `CategoryWeightMultipliers`

| Field | Details |
|------|------|
| C++ type | TMap<[EEmergentEventCategory](EmergenceTypes__EEmergentEventCategory.md), float> |
| Reflection specifiers | BlueprintReadOnly, Category="涌现|题材" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|题材") TMap<EEmergentEventCategory, float> CategoryWeightMultipliers;` |

**Notes:**

> 题材全局权重乘数 — 第二步"冒哪个"轮盘里按题材整体调权(策划案 §3)。
> 未配的题材默认 ×1。例: 想多冒灾变就把 Disaster 调到 2.0。

---

### Property `LogActionExpiredText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="涌现|日志" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|日志") FText LogActionExpiredText = NSLOCTEXT("Emergence", "LogActionExpired", "时过境迁，此事已了。");` |

**Notes:**

> 日志动作已过期的通用提示(玩家点击超链接执行操作, 但日志已滚出/事件已结束/阶段已推进时返回给 UI 弹提示)

---
