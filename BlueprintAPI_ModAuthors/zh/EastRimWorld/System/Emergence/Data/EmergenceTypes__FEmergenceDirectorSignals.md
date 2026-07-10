# `struct` `FEmergenceDirectorSignals`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────────────────────
> Director 维护并传入压力库的"世界外部信号"。
> 缺失的底层信号(沉滞天数 / 火并冷却 / 上季快照)不假装世界已有, 由 Director 闭环维护后传入。
> ─────────────────────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `NowDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Emergence|Signals" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") float NowDay = 0.f;` |

**说明:**

> 当前游戏天(冷却天数差 / 沉寂天数差用)

---

### 属性 `StagnantDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Emergence|Signals" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") float StagnantDays = 0.f;` |

**说明:**

> 距上次宗门境界推进的累计天数(境界压力沉滞衰减用)

---

### 属性 `LastEmergentEventDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Emergence|Signals" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") float LastEmergentEventDay = -100000.f;` |

**说明:**

> 上次涌现事件冒出的游戏天(沉闷压力用; 默认极久远 → 开局满沉闷)

---

### 属性 `LastClashDayByPair`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString, float>` |
| 反射说明符 | BlueprintReadWrite, Category="Emergence|Signals" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") TMap<FString, float> LastClashDayByPair;` |

**说明:**

> 各势力对上次火并/暗杀的游戏天(结仇冷却用)。Key = UEmergencePressureLibrary::MakeForcePairKey 规范化键

---

### 属性 `LastSeasonForce`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FEmergenceForceSeasonSnapshot](EmergenceTypes__FEmergenceForceSeasonSnapshot.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Emergence|Signals" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "Emergence|Signals") TMap<FGuid, FEmergenceForceSeasonSnapshot> LastSeasonForce;` |

**说明:**

> 上季各势力快照(兴衰·暴起环比基线)。Key = 势力 SGUID

---
