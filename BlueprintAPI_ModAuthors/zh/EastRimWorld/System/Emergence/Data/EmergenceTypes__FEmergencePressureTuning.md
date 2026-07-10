# `struct` `FEmergencePressureTuning`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> ─────────────────────────────────────────────────────────────────────────────
> 压力调参 — 各维度归一化阈值/系数 + 合成权重
> 集中所有"凭直觉拍的数值"(策划案 §9.4), 由 UEmergenceConfigAsset 持有, PIE 调手感。
> 默认值与原 UEmergencePressureLibrary constexpr 一致, 不配资产时退 CDO 默认即原行为。
> ─────────────────────────────────────────────────────────────────────────────

## 蓝图暴露变量

### 属性 `RealmPressureCapLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1")) int32 RealmPressureCapLevel = 16;` |

**说明:**

> 境界压力封顶境界(达到此境界压力=1)。附录 A: 17 级 0~16

---

### 属性 `SilenceFullDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.0")) float SilenceFullDays = 120.f;` |

**说明:**

> 沉寂: 多少天没出事算满沉寂(=1)

---

### 属性 `FeudFullMagnitude`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.0")) float FeudFullMagnitude = 100.f;` |

**说明:**

> 结仇: 仇恨(负好感)绝对值多大算满结仇

---

### 属性 `OrderPressureThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.0")) float OrderPressureThreshold = 60.f;` |

**说明:**

> 治安: 治安(Order)低于此值开始算压力, 0 治安=满压力

---

### 属性 `HegemonFullRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.1")) float HegemonFullRatio = 3.f;` |

**说明:**

> 独大: 头号势力实力/第二名 达到此倍数算满独大

---

### 属性 `DullnessFullDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "1.0")) float DullnessFullDays = 60.f;` |

**说明:**

> 沉闷: 多少天没大事算满沉闷

---

### 属性 `DullnessBaseline`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Pressure" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Pressure", meta = (ClampMin = "0.0", ClampMax = "1.0")) float DullnessBaseline = 0.15f;` |

**说明:**

> 沉闷兜底基线: 沉闷维度恒占的最低值

---

### 属性 `MaxBlendWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Synthesis" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Synthesis", meta = (ClampMin = "0.0", ClampMax = "1.0")) float MaxBlendWeight = 0.6f;` |

**说明:**

> 合成总压力: 最高维主导权重(突出主要矛盾)

---

### 属性 `MeanBlendWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Synthesis" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Synthesis", meta = (ClampMin = "0.0", ClampMax = "1.0")) float MeanBlendWeight = 0.4f;` |

**说明:**

> 合成总压力: 整体氛围(均值)权重

---

### 属性 `ResourceSafetyDaysFull`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Homeland" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Homeland", meta = (ClampMin = "1.0")) float ResourceSafetyDaysFull = 30.f;` |

**说明:**

> 资源安全天数: 玩家据点钱币可撑天数低于此值开始算家园压力(0 天=满)

---

### 属性 `FacilityShutdownFull`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Homeland" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Homeland", meta = (ClampMin = "0.05", ClampMax = "1.0")) float FacilityShutdownFull = 0.5f;` |

**说明:**

> 设施停摆: 停摆/损毁建筑占比达到此值算"满设施压力"

---

### 属性 `LowMoodThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Homeland" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Homeland") float LowMoodThreshold = 30.f;` |

**说明:**

> 人心: 弟子心情/忠诚低于此值算"低落"

---

### 属性 `LowMoodRatioFull`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Homeland" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Homeland", meta = (ClampMin = "0.05", ClampMax = "1.0")) float LowMoodRatioFull = 0.5f;` |

**说明:**

> 人心: 低落弟子占比达到此值算"满人心压力"

---

### 属性 `RealmPerLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Realm" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Realm", meta = (ClampMin = "0.0")) float RealmPerLevel = 6.f;` |

**说明:**

> 境界基底: SectMaxRealm 每级贡献分 (RealmTension_base = clamp(SectMaxRealm*此, 0, RealmBaseCap))

---

### 属性 `RealmBaseCap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Realm" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Realm", meta = (ClampMin = "0.0")) float RealmBaseCap = 96.f;` |

**说明:**

> 境界基底封顶 (16 级 × 6 = 96)

---

### 属性 `RealmStagnantDecayPerDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Realm" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Realm", meta = (ClampMin = "0.0")) float RealmStagnantDecayPerDay = 0.1f;` |

**说明:**

> 境界沉滞每日衰减: 每停滞 1 天扣的分 (base - StagnantDays*此)

---

### 属性 `RealmFloorFactor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Realm" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Realm", meta = (ClampMin = "0.0", ClampMax = "1.0")) float RealmFloorFactor = 0.5f;` |

**说明:**

> 境界衰减下限系数: 沉滞再久也不低于 base × 此

---

### 属性 `SilenceGraceDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Silence" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Silence", meta = (ClampMin = "0.0")) float SilenceGraceDays = 20.f;` |

**说明:**

> 沉寂宽限期(天): DaysSilent <= 此则该地无沉寂压力

---

### 属性 `SilenceCap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Silence" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Silence", meta = (ClampMin = "0.0", ClampMax = "100.0")) float SilenceCap = 60.f;` |

**说明:**

> 单地点沉寂封顶分 (Silence_P 上限)

---

### 属性 `FeudHostileFavor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Feud" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud") float FeudHostileFavor = -100.f;` |

**说明:**

> 结仇阈值: 好感 < 此值才算仇

---

### 属性 `FeudAdjacencyBonus`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Feud" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud", meta = (ClampMin = "1.0")) float FeudAdjacencyBonus = 1.25f;` |

**说明:**

> 接壤加权乘数(1.0=关闭)

---

### 属性 `FeudBloodFeudBonus`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Feud" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud", meta = (ClampMin = "1.0")) float FeudBloodFeudBonus = 1.40f;` |

**说明:**

> 血仇加权乘数(1.0=关闭)

---

### 属性 `FeudBothBonus`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Feud" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud", meta = (ClampMin = "1.0")) float FeudBothBonus = 1.75f;` |

**说明:**

> 接壤&血仇双加权乘数(1.0=关闭)

---

### 属性 `FeudCooldownDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Feud" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Feud", meta = (ClampMin = "0.0")) float FeudCooldownDays = 30.f;` |

**说明:**

> 同一对火并后冷却天数(冷却内 FeudRaw 被线性压制)

---

### 属性 `RiseFallBaseSingle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallBaseSingle = 50.f;` |

**说明:**

> 流窜子项: 出现 1 个流窜势力的基础分

---

### 属性 `RiseFallPerExtra`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallPerExtra = 25.f;` |

**说明:**

> 流窜/濒亡子项: 每多 1 个势力的叠加分

---

### 属性 `RiseFallWanderCap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallWanderCap = 100.f;` |

**说明:**

> 流窜子项封顶

---

### 属性 `RiseFallPerilScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallPerilScore = 70.f;` |

**说明:**

> 单个濒亡势力贡献分

---

### 属性 `PerilMemberThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0")) int32 PerilMemberThreshold = 3;` |

**说明:**

> 濒亡弟子人数阈值(弟子 < 此 且 据点=0 算濒亡)

---

### 属性 `RiseFallSurgeFull`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "1.01")) float RiseFallSurgeFull = 1.5f;` |

**说明:**

> 暴起满倍数: 本季/上季 达此倍数算满暴起

---

### 属性 `RiseFallSurgeScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "100.0")) float RiseFallSurgeScore = 60.f;` |

**说明:**

> 满暴起势力贡献分

---

### 属性 `RiseFallWanderW`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0")) float RiseFallWanderW = 1.0f;` |

**说明:**

> 三子项合成权重: 流窜

---

### 属性 `RiseFallPerilW`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0")) float RiseFallPerilW = 1.0f;` |

**说明:**

> 三子项合成权重: 濒亡

---

### 属性 `RiseFallSurgeW`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0")) float RiseFallSurgeW = 0.6f;` |

**说明:**

> 三子项合成权重: 暴起

---

### 属性 `RiseFallMaxFallback`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|RiseFall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|RiseFall", meta = (ClampMin = "0.0", ClampMax = "1.0")) float RiseFallMaxFallback = 0.85f;` |

**说明:**

> 加权 max 兜底系数: RiseFall = max(加权blend, 最大子项 × 此)

---

### 属性 `HegemonPlaceShareFull`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Hegemon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Hegemon", meta = (ClampMin = "0.01", ClampMax = "1.0")) float HegemonPlaceShareFull = 0.5f;` |

**说明:**

> 据点占比满独大阈值: 头号势力据点占比达此算据点满独大

---

### 属性 `HegemonPlaceWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Hegemon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Hegemon", meta = (ClampMin = "0.0", ClampMax = "1.0")) float HegemonPlaceWeight = 0.5f;` |

**说明:**

> 加权模式据点分量权重

---

### 属性 `HegemonCombineMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Tuning|Hegemon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tuning|Hegemon", meta = (ClampMin = "0", ClampMax = "1")) int32 HegemonCombineMode = 0;` |

**说明:**

> 合成模式: 0=max(战力/据点取大), 1=加权

---
