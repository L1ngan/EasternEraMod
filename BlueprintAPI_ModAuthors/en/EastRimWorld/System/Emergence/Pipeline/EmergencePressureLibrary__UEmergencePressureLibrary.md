# `class` `UEmergencePressureLibrary`

**Source header:** `EastRimWorld/System/Emergence/Pipeline/EmergencePressureLibrary.h`

---

## Functional description (from header comments)

> 压力评估静态库。Director 每拍心跳调用 EvaluateAll 拿到完整快照。
> 单维方法也独立暴露, 便于调试 / 单测 / 蓝图查看。

## Blueprint-exposed functions

### Function `EvaluateAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence|Pressure" |
| Return type | [FEmergencePressureSnapshot](../Data/EmergenceTypes__FEmergencePressureSnapshot.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContext` | `const UObject*` |
| `LastEventDayByPlace` | `const TMap<FGuid, float>&` |
| `Tuning` | const [FEmergencePressureTuning](../Data/EmergenceTypes__FEmergencePressureTuning.md)& |
| `Signals` | const [FEmergenceDirectorSignals](../Data/EmergenceTypes__FEmergenceDirectorSignals.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence|Pressure") static FEmergencePressureSnapshot EvaluateAll( const UObject* WorldContext, const TMap<FGuid, float>& LastEventDayByPlace, const FEmergencePressureTuning& Tuning, const FEmergenceDirectorSignals& Signals);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 评估全部 10 维压力 + 反向闸门, 合成总压力, 打包成快照。
> @param WorldContext         世界上下文(取 Director)
> @param LastEventDayByPlace  各地点上次出事的游戏天(Director 维护的沉寂闭环数据源)
> @param Tuning               压力调参(来自 UEmergenceConfigAsset, 缺省退默认)
> @param Signals              Director 维护的外部信号(沉滞天数 / 火并冷却 / 上季快照)
> @return 完整压力快照

---

### Function `GetSectMaxRealm`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Emergence|Pressure" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Director` | [AWorldDirector](../../../WorldSystem/WorldDirector__AWorldDirector.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|Pressure") static int32 GetSectMaxRealm(AWorldDirector* Director);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 玩家宗门当前最高境界(SectMaxRealm) — 境界压力与境界事件门槛共用, 避免由压力值反推

---

### Function `SynthesizeTotal`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Emergence|Pressure" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Snapshot` | const [FEmergencePressureSnapshot](../Data/EmergenceTypes__FEmergencePressureSnapshot.md)& |
| `Tuning` | const [FEmergencePressureTuning](../Data/EmergenceTypes__FEmergencePressureTuning.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Emergence|Pressure") static float SynthesizeTotal(const FEmergencePressureSnapshot& Snapshot, const FEmergencePressureTuning& Tuning);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 合成总压力 — 突出主要矛盾(最高维主导) + 家园高压抬下限(策划案 §3 第一步)。
> @return [0,1]

---
