# `struct` `FRaidRuleset`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 袭击规则（触发模式）

## Blueprint-exposed variables

### Property `RaidRuleName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText RaidRuleName;` |

**Notes:**

> 规则名称

---

### Property `FirstInitTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float FirstInitTime = 10.f;` |

**Notes:**

> 首次初始化时间(天)（不是首次袭击，是计算下次计算的日期）

---

### Property `bFixedTimeRaid`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bFixedTimeRaid = false;` |

**Notes:**

> 固定间隔计算袭击（true 固定时间间隔计算，false 随机时间计算间隔）

---

### Property `IntervalDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "bFixedTimeRaid")) int32 IntervalDays = 10;` |

**Notes:**

> 间隔天数（bFixedTimeRaid 为 true 时有效）

---

### Property `BaseProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "bFixedTimeRaid")) float BaseProbability = 0.5f;` |

**Notes:**

> 基础抽中概率（bFixedTimeRaid 为 true 时有效）

---

### Property `ProbabilityIncrease`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "bFixedTimeRaid")) float ProbabilityIncrease = 0.2f;` |

**Notes:**

> 概率增加值（本次未中时下次增加的抽中概率，大于等于1，就必然触发）（bFixedTimeRaid 为 true 时有效）

---

### Property `FixedTimeIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "bFixedTimeRaid")) float FixedTimeIntervalTime = 20.f;` |

**Notes:**

> 固定袭击间隔（秒）（bFixedTimeRaid 为 true 时有效）

---

### Property `RandomDaysMin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) int32 RandomDaysMin = 2;` |

**Notes:**

> 随机天数最小值（bFixedTimeRaid 为 false 时有效）

---

### Property `RandomDaysMax`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) int32 RandomDaysMax = 50;` |

**Notes:**

> 随机天数最大值（bFixedTimeRaid 为 false 时有效）

---

### Property `IntervalCoefficient1`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) float IntervalCoefficient1 = 0.00005f;` |

**Notes:**

> 间隔系数1，用于计算袭击间隔（bFixedTimeRaid 为 false 时有效）

---

### Property `IntervalCoefficient2`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) float IntervalCoefficient2 = 0.025f;` |

**Notes:**

> 间隔系数2，用于计算袭击间隔（bFixedTimeRaid 为 false 时有效）

---

### Property `IntervalCoefficient3`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) float IntervalCoefficient3 = 43.f;` |

**Notes:**

> 间隔系数3，用于计算袭击间隔（bFixedTimeRaid 为 false 时有效）

---
