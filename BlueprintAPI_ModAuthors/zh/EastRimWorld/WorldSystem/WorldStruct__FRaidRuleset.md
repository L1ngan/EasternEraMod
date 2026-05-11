# `struct` `FRaidRuleset`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 袭击规则（触发模式）

## 蓝图暴露变量

### 属性 `RaidRuleName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText RaidRuleName;` |

**源码注释:**

> 规则名称

---

### 属性 `FirstInitTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float FirstInitTime = 10.f;` |

**源码注释:**

> 首次初始化时间(天)（不是首次袭击，是计算下次计算的日期）

---

### 属性 `bFixedTimeRaid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bFixedTimeRaid = false;` |

**源码注释:**

> 固定间隔计算袭击（true 固定时间间隔计算，false 随机时间计算间隔）

---

### 属性 `IntervalDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "bFixedTimeRaid")) int32 IntervalDays = 10;` |

**源码注释:**

> 间隔天数（bFixedTimeRaid 为 true 时有效）

---

### 属性 `BaseProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "bFixedTimeRaid")) float BaseProbability = 0.5f;` |

**源码注释:**

> 基础抽中概率（bFixedTimeRaid 为 true 时有效）

---

### 属性 `ProbabilityIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "bFixedTimeRaid")) float ProbabilityIncrease = 0.2f;` |

**源码注释:**

> 概率增加值（本次未中时下次增加的抽中概率，大于等于1，就必然触发）（bFixedTimeRaid 为 true 时有效）

---

### 属性 `FixedTimeIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "bFixedTimeRaid")) float FixedTimeIntervalTime = 20.f;` |

**源码注释:**

> 固定袭击间隔（秒）（bFixedTimeRaid 为 true 时有效）

---

### 属性 `RandomDaysMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) int32 RandomDaysMin = 2;` |

**源码注释:**

> 随机天数最小值（bFixedTimeRaid 为 false 时有效）

---

### 属性 `RandomDaysMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) int32 RandomDaysMax = 50;` |

**源码注释:**

> 随机天数最大值（bFixedTimeRaid 为 false 时有效）

---

### 属性 `IntervalCoefficient1`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) float IntervalCoefficient1 = 0.00005f;` |

**源码注释:**

> 间隔系数1，用于计算袭击间隔（bFixedTimeRaid 为 false 时有效）

---

### 属性 `IntervalCoefficient2`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) float IntervalCoefficient2 = 0.025f;` |

**源码注释:**

> 间隔系数2，用于计算袭击间隔（bFixedTimeRaid 为 false 时有效）

---

### 属性 `IntervalCoefficient3`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditCondition = "!bFixedTimeRaid")) float IntervalCoefficient3 = 43.f;` |

**源码注释:**

> 间隔系数3，用于计算袭击间隔（bFixedTimeRaid 为 false 时有效）

---
