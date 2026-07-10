# `class` `UERW_GEGenLibrary`

**Source header:** `EastRimWorld/AbilitySystem/ERW_GEGenLibrary.h`

---

## Functional description (from header comments)

> 词条系统 GE 批量配置辅助（仅编辑器工具用途）。

## Blueprint-exposed functions

### Function `ConfigureGE`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|GEGen" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GEClass` | `UClass*` |
| `AttributeName` | `const FString&` |
| `ModOp` | `int32` |
| `Magnitude` | `float` |
| `DurationPolicy` | `int32` |
| `DurationSec` | `float` |
| `Period` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|GEGen") static bool ConfigureGE(UClass* GEClass, const FString& AttributeName, int32 ModOp, float Magnitude, int32 DurationPolicy, float DurationSec, float Period);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

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

### Function `AttributeExists`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|GEGen" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|GEGen") static bool AttributeExists(const FString& AttributeName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 在所有 AttributeSet 子类里按名查属性是否存在（建 GE 前校验属性名）。

---

### Function `ConfigureExecOverrideAndCue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="ERW|GEGen" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GEClass` | `UClass*` |
| `ScopedModIndex` | `int32` |
| `OverrideValue` | `float` |
| `CueTag` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "ERW|GEGen") static bool ConfigureExecOverrideAndCue(UClass* GEClass, int32 ScopedModIndex, float OverrideValue, const FString& CueTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 配置克隆自 DoT 模板的 GE：改执行器 scoped modifier 的伤害类型 override + GameplayCue。
> 用于把中毒 DoT 克隆成流血 DoT（伤害类型 4=毒→7=真实，cue ZhongDu→LiuXue）。
> @param GEClass         目标 GE 的 GeneratedClass。
> @param ScopedModIndex  Executions[0].CalculationModifiers 里要改的下标（伤害类型 override 通常是 0）；<0 = 不改。
> @param OverrideValue   该 scoped modifier 的 ScalableFloat 覆盖值（伤害类型枚举数值，如 7=真实伤害）。
> @param CueTag          新的 GameplayCue tag（如 "GameplayCue.DeBuffVfx.LiuXue"）；留空 = 不改 cue。
> @return 是否有任一改动生效。

---
