# `struct` `FEmergencePressureSnapshot`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> 江湖压力快照 — 一拍心跳评估出的完整世界压力。存档持久化(供 UI / 读档即时显示)。
> 这是"导演大脑"的核心读数。第一步"冒不冒"合成 TotalPressure 掷骰;
> 第二步"冒哪个"按各维度强度给题材加权; 事件落地/结算经 GetRankedObjects/GetRandomObject 直接从快照取参与对象(槽位机制已删)。

## 蓝图暴露变量

### 属性 `GameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Snapshot" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Snapshot") float GameDay = 0.f;` |

**说明:**

> 评估时刻的游戏天

---

### 属性 `Pressures`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEmergencePressureDim](EmergenceTypes__EEmergencePressureDim.md), [FEmergencePressure](EmergenceTypes__FEmergencePressure.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Snapshot" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Snapshot") TMap<EEmergencePressureDim, FEmergencePressure> Pressures;` |

**说明:**

> 10 维压力明细。Key = 维度, Value = 该维度评估结果。
> 注: TMap 用枚举做 key, 存档/蓝图均可用。

---

### 属性 `TotalPressure`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Snapshot" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Snapshot") float TotalPressure = 0.f;` |

**说明:**

> 合成总压力 [0,1] — "江湖整体有多想出事"。
> 合成时突出主要矛盾(最高的一两维主导), 非简单均值。家园高压时强制抬升下限。

---

### 属性 `ReverseGate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEmergenceReverseGate](EmergenceTypes__FEmergenceReverseGate.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Snapshot" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Snapshot") FEmergenceReverseGate ReverseGate;` |

**说明:**

> 反向闸门读数

---
