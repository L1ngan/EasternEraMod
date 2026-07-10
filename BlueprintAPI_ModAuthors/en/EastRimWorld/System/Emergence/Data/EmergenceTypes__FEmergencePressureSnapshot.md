# `struct` `FEmergencePressureSnapshot`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 江湖压力快照 — 一拍心跳评估出的完整世界压力。存档持久化(供 UI / 读档即时显示)。
> 这是"导演大脑"的核心读数。第一步"冒不冒"合成 TotalPressure 掷骰;
> 第二步"冒哪个"按各维度强度给题材加权; 事件落地/结算经 GetRankedObjects/GetRandomObject 直接从快照取参与对象(槽位机制已删)。

## Blueprint-exposed variables

### Property `GameDay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Snapshot" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Snapshot") float GameDay = 0.f;` |

**Notes:**

> 评估时刻的游戏天

---

### Property `Pressures`

| Field | Details |
|------|------|
| C++ type | TMap<[EEmergencePressureDim](EmergenceTypes__EEmergencePressureDim.md), [FEmergencePressure](EmergenceTypes__FEmergencePressure.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Snapshot" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Snapshot") TMap<EEmergencePressureDim, FEmergencePressure> Pressures;` |

**Notes:**

> 10 维压力明细。Key = 维度, Value = 该维度评估结果。
> 注: TMap 用枚举做 key, 存档/蓝图均可用。

---

### Property `TotalPressure`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Snapshot" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Snapshot") float TotalPressure = 0.f;` |

**Notes:**

> 合成总压力 [0,1] — "江湖整体有多想出事"。
> 合成时突出主要矛盾(最高的一两维主导), 非简单均值。家园高压时强制抬升下限。

---

### Property `ReverseGate`

| Field | Details |
|------|------|
| C++ type | [FEmergenceReverseGate](EmergenceTypes__FEmergenceReverseGate.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Snapshot" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Snapshot") FEmergenceReverseGate ReverseGate;` |

**Notes:**

> 反向闸门读数

---
