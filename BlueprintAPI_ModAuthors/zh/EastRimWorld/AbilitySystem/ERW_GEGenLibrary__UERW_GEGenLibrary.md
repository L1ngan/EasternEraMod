# `class` `UERW_GEGenLibrary`

**源码头文件:** `EastRimWorld/AbilitySystem/ERW_GEGenLibrary.h`

---

## 功能说明（来自头文件注释）

> 词条系统 GE 批量配置辅助（仅编辑器工具用途）。

## 蓝图暴露函数

### 函数 `ConfigureGE`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|GEGen" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GEClass` | `UClass*` |
| `AttributeName` | `const FString&` |
| `ModOp` | `int32` |
| `Magnitude` | `float` |
| `DurationPolicy` | `int32` |
| `DurationSec` | `float` |
| `Period` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|GEGen") static bool ConfigureGE(UClass* GEClass, const FString& AttributeName, int32 ModOp, float Magnitude, int32 DurationPolicy, float DurationSec, float Period);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 配置一个 GameplayEffect 蓝图（改其 CDO 的单 Modifier + 时长策略）。
> @param GEClass          目标 GE 蓝图的 GeneratedClass。
> @param AttributeName    属性名（如 "MaxAttack"/"Defense"/"Dodge"）；留空 = 保留现有 Modifier[0] 的属性。
> @param ModOp            EGameplayModOp：0=Additive 1=Multiplicitive 2=Division 3=Override；<0 = 保留现有。
> @param Magnitude        ScalableFloat 数值。
> @param DurationPolicy   EGameplayEffectDurationType：0=Instant 1=Infinite 2=HasDuration。
> @param DurationSec      HasDuration 时的时长秒；其它策略忽略。
> @param Period           周期秒（>0 生效，用于 DoT/光环）；<=0 = 无周期。
> @return 是否成功（属性解析失败/GE 无效返回 false）。

---

### 函数 `AttributeExists`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|GEGen" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeName` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|GEGen") static bool AttributeExists(const FString& AttributeName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 在所有 AttributeSet 子类里按名查属性是否存在（建 GE 前校验属性名）。

---

### 函数 `ConfigureExecOverrideAndCue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|GEGen" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GEClass` | `UClass*` |
| `ScopedModIndex` | `int32` |
| `OverrideValue` | `float` |
| `CueTag` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|GEGen") static bool ConfigureExecOverrideAndCue(UClass* GEClass, int32 ScopedModIndex, float OverrideValue, const FString& CueTag);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 配置克隆自 DoT 模板的 GE：改执行器 scoped modifier 的伤害类型 override + GameplayCue。
> 用于把中毒 DoT 克隆成流血 DoT（伤害类型 4=毒→7=真实，cue ZhongDu→LiuXue）。
> @param GEClass         目标 GE 的 GeneratedClass。
> @param ScopedModIndex  Executions[0].CalculationModifiers 里要改的下标（伤害类型 override 通常是 0）；<0 = 不改。
> @param OverrideValue   该 scoped modifier 的 ScalableFloat 覆盖值（伤害类型枚举数值，如 7=真实伤害）。
> @param CueTag          新的 GameplayCue tag（如 "GameplayCue.DeBuffVfx.LiuXue"）；留空 = 不改 cue。
> @return 是否有任一改动生效。

---
