# `class` `UEmergenceConfigAsset`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceConfigAsset.h`

---

## 功能说明（来自头文件注释）

> Emergence Config Asset UObject 类型。

## 蓝图暴露变量

### 属性 `HeartbeatIntervalDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="涌现|节奏" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|节奏", meta = (ClampMin = "1.0")) float HeartbeatIntervalDays = 7.f;` |

**说明:**

> 心跳间隔(游戏天)。策划案: 约一周一拍

---

### 属性 `MaxSpawnsPerBeat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="涌现|节奏" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|节奏", meta = (ClampMin = "1")) int32 MaxSpawnsPerBeat = 1;` |

**说明:**

> 单拍最多冒几条

---

### 属性 `PressureTuning`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergencePressureTuning](EmergenceTypes__FEmergencePressureTuning.md) |
| 反射说明符 | BlueprintReadOnly, Category="涌现|压力" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|压力") FEmergencePressureTuning PressureTuning;` |

**说明:**

> 10 维压力阈值/系数 + 合成权重

---

### 属性 `CategoryWeightMultipliers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEmergentEventCategory](EmergenceTypes__EEmergentEventCategory.md), float> |
| 反射说明符 | BlueprintReadOnly, Category="涌现|题材" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|题材") TMap<EEmergentEventCategory, float> CategoryWeightMultipliers;` |

**说明:**

> 题材全局权重乘数 — 第二步"冒哪个"轮盘里按题材整体调权(策划案 §3)。
> 未配的题材默认 ×1。例: 想多冒灾变就把 Disaster 调到 2.0。

---

### 属性 `LogActionExpiredText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="涌现|日志" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "涌现|日志") FText LogActionExpiredText = NSLOCTEXT("Emergence", "LogActionExpired", "时过境迁，此事已了。");` |

**说明:**

> 日志动作已过期的通用提示(玩家点击超链接执行操作, 但日志已滚出/事件已结束/阶段已推进时返回给 UI 弹提示)

---
