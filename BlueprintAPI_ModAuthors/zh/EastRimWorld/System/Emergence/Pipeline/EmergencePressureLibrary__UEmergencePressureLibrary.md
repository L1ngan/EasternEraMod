# `class` `UEmergencePressureLibrary`

**源码头文件:** `EastRimWorld/System/Emergence/Pipeline/EmergencePressureLibrary.h`

---

## 功能说明（来自头文件注释）

> 压力评估静态库。Director 每拍心跳调用 EvaluateAll 拿到完整快照。
> 单维方法也独立暴露, 便于调试 / 单测 / 蓝图查看。

## 蓝图暴露函数

### 函数 `EvaluateAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence|Pressure" |
| 返回类型 | [FEmergencePressureSnapshot](../Data/EmergenceTypes__FEmergencePressureSnapshot.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContext` | `const UObject*` |
| `LastEventDayByPlace` | `const TMap<FGuid, float>&` |
| `Tuning` | const [FEmergencePressureTuning](../Data/EmergenceTypes__FEmergencePressureTuning.md)& |
| `Signals` | const [FEmergenceDirectorSignals](../Data/EmergenceTypes__FEmergenceDirectorSignals.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence|Pressure") static FEmergencePressureSnapshot EvaluateAll( const UObject* WorldContext, const TMap<FGuid, float>& LastEventDayByPlace, const FEmergencePressureTuning& Tuning, const FEmergenceDirectorSignals& Signals);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 评估全部 10 维压力 + 反向闸门, 合成总压力, 打包成快照。
> @param WorldContext         世界上下文(取 Director)
> @param LastEventDayByPlace  各地点上次出事的游戏天(Director 维护的沉寂闭环数据源)
> @param Tuning               压力调参(来自 UEmergenceConfigAsset, 缺省退默认)
> @param Signals              Director 维护的外部信号(沉滞天数 / 火并冷却 / 上季快照)
> @return 完整压力快照

---

### 函数 `GetSectMaxRealm`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence|Pressure" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Director` | [AWorldDirector](../../../WorldSystem/WorldDirector__AWorldDirector.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|Pressure") static int32 GetSectMaxRealm(AWorldDirector* Director);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 玩家宗门当前最高境界(SectMaxRealm) — 境界压力与境界事件门槛共用, 避免由压力值反推

---

### 函数 `SynthesizeTotal`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence|Pressure" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Snapshot` | const [FEmergencePressureSnapshot](../Data/EmergenceTypes__FEmergencePressureSnapshot.md)& |
| `Tuning` | const [FEmergencePressureTuning](../Data/EmergenceTypes__FEmergencePressureTuning.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence|Pressure") static float SynthesizeTotal(const FEmergencePressureSnapshot& Snapshot, const FEmergencePressureTuning& Tuning);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 合成总压力 — 突出主要矛盾(最高维主导) + 家园高压抬下限(策划案 §3 第一步)。
> @return [0,1]

---
