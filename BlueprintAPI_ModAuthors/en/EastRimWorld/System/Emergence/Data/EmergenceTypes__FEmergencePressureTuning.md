# `struct` `FEmergencePressureTuning`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> ─────────────────────────────────────────────────────────────────────────────
> 压力调参 — 各维度归一化阈值/系数 + 合成权重
> 集中所有"凭直觉拍的数值"(策划案 §9.4), 由 UEmergenceConfigAsset 持有, PIE 调手感。
> 默认值与原 UEmergencePressureLibrary constexpr 一致, 不配资产时退 CDO 默认即原行为。
> ─────────────────────────────────────────────────────────────────────────────

## Blueprint-exposed variables

### Property `RealmPressureCapLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1")) int32 RealmPressureCapLevel = 16;` |

**Notes:**

> 境界压力封顶境界(达到此境界压力=1)。附录 A: 17 级 0~16

---

### Property `SilenceFullDays`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.0")) float SilenceFullDays = 120.f;` |

**Notes:**

> 沉寂: 多少天没出事算满沉寂(=1)

---

### Property `FeudFullMagnitude`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.0")) float FeudFullMagnitude = 100.f;` |

**Notes:**

> 结仇: 仇恨(负好感)绝对值多大算满结仇

---

### Property `OrderPressureThreshold`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.0")) float OrderPressureThreshold = 60.f;` |

**Notes:**

> 治安: 治安(Order)低于此值开始算压力, 0 治安=满压力

---

### Property `HegemonFullRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.1")) float HegemonFullRatio = 3.f;` |

**Notes:**

> 独大: 头号势力实力/第二名 达到此倍数算满独大

---

### Property `DullnessFullDays`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.0")) float DullnessFullDays = 60.f;` |

**Notes:**

> 沉闷: 多少天没大事算满沉闷

---

### Property `DullnessBaseline`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Pressure" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "0.0", ClampMax = "1.0")) float DullnessBaseline = 0.15f;` |

**Notes:**

> 沉闷兜底基线: 沉闷维度恒占的最低值

---

### Property `MaxBlendWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Synthesis" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Synthesis", meta = (ClampMin = "0.0", ClampMax = "1.0")) float MaxBlendWeight = 0.6f;` |

**Notes:**

> 合成总压力: 最高维主导权重(突出主要矛盾)

---

### Property `MeanBlendWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Synthesis" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Synthesis", meta = (ClampMin = "0.0", ClampMax = "1.0")) float MeanBlendWeight = 0.4f;` |

**Notes:**

> 合成总压力: 整体氛围(均值)权重

---

### Property `ResourceSafetyDaysFull`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Homeland" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Homeland", meta = (ClampMin = "1.0")) float ResourceSafetyDaysFull = 30.f;` |

**Notes:**

> 资源安全天数: 玩家据点钱币可撑天数低于此值开始算家园压力(0 天=满)

---

### Property `FacilityShutdownFull`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Homeland" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Homeland", meta = (ClampMin = "0.05", ClampMax = "1.0")) float FacilityShutdownFull = 0.5f;` |

**Notes:**

> 设施停摆: 停摆/损毁建筑占比达到此值算"满设施压力"

---

### Property `LowMoodThreshold`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Homeland" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Homeland") float LowMoodThreshold = 30.f;` |

**Notes:**

> 人心: 弟子心情/忠诚低于此值算"低落"

---

### Property `LowMoodRatioFull`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Homeland" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Homeland", meta = (ClampMin = "0.05", ClampMax = "1.0")) float LowMoodRatioFull = 0.5f;` |

**Notes:**

> 人心: 低落弟子占比达到此值算"满人心压力"

---

### Property `RealmPerLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Realm" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Realm", meta = (ClampMin = "0.0")) float RealmPerLevel = 6.f;` |

**Notes:**

> 境界基底: SectMaxRealm 每级贡献分 (RealmTension_base = clamp(SectMaxRealm*此, 0, RealmBaseCap))

---

### Property `RealmBaseCap`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Realm" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Realm", meta = (ClampMin = "0.0")) float RealmBaseCap = 96.f;` |

**Notes:**

> 境界基底封顶 (16 级 × 6 = 96)

---

### Property `RealmStagnantDecayPerDay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Realm" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Realm", meta = (ClampMin = "0.0")) float RealmStagnantDecayPerDay = 0.1f;` |

**Notes:**

> 境界沉滞每日衰减: 每停滞 1 天扣的分 (base - StagnantDays*此)

---

### Property `RealmFloorFactor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Realm" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Realm", meta = (ClampMin = "0.0", ClampMax = "1.0")) float RealmFloorFactor = 0.5f;` |

**Notes:**

> 境界衰减下限系数: 沉滞再久也不低于 base × 此

---

### Property `SilenceGraceDays`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Silence" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Silence", meta = (ClampMin = "0.0")) float SilenceGraceDays = 20.f;` |

**Notes:**

> 沉寂宽限期(天): DaysSilent <= 此则该地无沉寂压力

---

### Property `SilenceCap`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Silence" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Silence", meta = (ClampMin = "0.0", ClampMax = "100.0")) float SilenceCap = 60.f;` |

**Notes:**

> 单地点沉寂封顶分 (Silence_P 上限)

---

### Property `FeudHostileFavor`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Feud" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud") float FeudHostileFavor = -100.f;` |

**Notes:**

> 结仇阈值: 好感 < 此值才算仇

---

### Property `FeudAdjacencyBonus`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Feud" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud", meta = (ClampMin = "1.0")) float FeudAdjacencyBonus = 1.25f;` |

**Notes:**

> 接壤加权乘数(1.0=关闭)

---

### Property `FeudBloodFeudBonus`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Feud" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud", meta = (ClampMin = "1.0")) float FeudBloodFeudBonus = 1.40f;` |

**Notes:**

> 血仇加权乘数(1.0=关闭)

---

### Property `FeudBothBonus`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Feud" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud", meta = (ClampMin = "1.0")) float FeudBothBonus = 1.75f;` |

**Notes:**

> 接壤&血仇双加权乘数(1.0=关闭)

---

### Property `FeudCooldownDays`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Feud" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud", meta = (ClampMin = "0.0")) float FeudCooldownDays = 30.f;` |

**Notes:**

> 同一对火并后冷却天数(冷却内 FeudRaw 被线性压制)

---

### Property `RiseFallBaseSingle`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallBaseSingle = 50.f;` |

**Notes:**

> 流窜子项: 出现 1 个流窜势力的基础分

---

### Property `RiseFallPerExtra`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallPerExtra = 25.f;` |

**Notes:**

> 流窜/濒亡子项: 每多 1 个势力的叠加分

---

### Property `RiseFallWanderCap`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallWanderCap = 100.f;` |

**Notes:**

> 流窜子项封顶

---

### Property `RiseFallPerilScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallPerilScore = 70.f;` |

**Notes:**

> 单个濒亡势力贡献分

---

### Property `PerilMemberThreshold`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0")) int32 PerilMemberThreshold = 3;` |

**Notes:**

> 濒亡弟子人数阈值(弟子 < 此 且 据点=0 算濒亡)

---

### Property `RiseFallSurgeFull`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "1.01")) float RiseFallSurgeFull = 1.5f;` |

**Notes:**

> 暴起满倍数: 本季/上季 达此倍数算满暴起

---

### Property `RiseFallSurgeScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallSurgeScore = 60.f;` |

**Notes:**

> 满暴起势力贡献分

---

### Property `RiseFallWanderW`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0")) float RiseFallWanderW = 1.0f;` |

**Notes:**

> 三子项合成权重: 流窜

---

### Property `RiseFallPerilW`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0")) float RiseFallPerilW = 1.0f;` |

**Notes:**

> 三子项合成权重: 濒亡

---

### Property `RiseFallSurgeW`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0")) float RiseFallSurgeW = 0.6f;` |

**Notes:**

> 三子项合成权重: 暴起

---

### Property `RiseFallMaxFallback`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|RiseFall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "1.0")) float RiseFallMaxFallback = 0.85f;` |

**Notes:**

> 加权 max 兜底系数: RiseFall = max(加权blend, 最大子项 × 此)

---

### Property `HegemonPlaceShareFull`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Hegemon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Hegemon", meta = (ClampMin = "0.01", ClampMax = "1.0")) float HegemonPlaceShareFull = 0.5f;` |

**Notes:**

> 据点占比满独大阈值: 头号势力据点占比达此算据点满独大

---

### Property `HegemonPlaceWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Hegemon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Hegemon", meta = (ClampMin = "0.0", ClampMax = "1.0")) float HegemonPlaceWeight = 0.5f;` |

**Notes:**

> 加权模式据点分量权重

---

### Property `HegemonCombineMode`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Tuning|Hegemon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Hegemon", meta = (ClampMin = "0", ClampMax = "1")) int32 HegemonCombineMode = 0;` |

**Notes:**

> 合成模式: 0=max(战力/据点取大), 1=加权

---
