# `class` `URaidConfigurationAsset`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 袭击配置资产

## 蓝图暴露变量

### 属性 `WealthPointsMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float WealthPointsMax = 4200.f;` |

**源码注释:**

> 财富点数最大值

---

### 属性 `OneFarmlandPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float OneFarmlandPoints = 13.f;` |

**源码注释:**

> 单位田地对应的财富价值

---

### 属性 `UnitsPointsMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UnitsPointsMax = 4000.f;` |

**源码注释:**

> 单位点数最大值

---

### 属性 `DifficultyCoefficientMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EDifficultyOption,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EDifficultyOption,float> DifficultyCoefficientMap;` |

**源码注释:**

> 难度系数配置

---

### 属性 `AdaptiveCoefficientMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float AdaptiveCoefficientMax = 1.5f;` |

**源码注释:**

> 适应性系数最大值（标记作废！！！稍后删除）

---

### 属性 `AdaptiveCoefficientMini`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float AdaptiveCoefficientMini = 0.3f;` |

**源码注释:**

> 适应性系数最小值（标记作废！！！稍后删除）

---

### 属性 `MaxDrawCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxDrawCount = 2;` |

**源码注释:**

> 最大抽取次数，默认2

---

### 属性 `UnitCoefficientMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ETeamUnitType,float>` |
| 反射说明符 | BlueprintReadWrite, Category="CombatScore" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CombatScore") TMap<ETeamUnitType,float> UnitCoefficientMap;` |

**源码注释:**

> 单位点数折算系数

---

### 属性 `RealmLevelUnitsPointMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,float>` |
| 反射说明符 | BlueprintReadWrite, Category="CombatScore" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CombatScore") TMap<int32,float> RealmLevelUnitsPointMap;` |

**源码注释:**

> 弟子境界等级对应的单位点数

---

### 属性 `BuildingCombatScoreMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="CombatScore" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CombatScore") TMap<FName,float> BuildingCombatScoreMap;` |

**源码注释:**

> 需要统计战力的机关弩等战斗建筑的战力值

---

### 属性 `LifeCoefficientBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="LifeCoefficient" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float LifeCoefficientBase = 1.f;` |

**源码注释:**

> 生存系数基数

---

### 属性 `LifeCoefficientPerDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="LifeCoefficient" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float LifeCoefficientPerDay = 0.1f;` |

**源码注释:**

> 生存天数影响系数

---

### 属性 `ChaDeathCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="LifeCoefficient" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float ChaDeathCoefficient = -0.3f;` |

**源码注释:**

> 每个弟子死亡影响系数

---

### 属性 `LifeCoefficientMini`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="LifeCoefficient" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float LifeCoefficientMini = 1.f;` |

**源码注释:**

> 生存系数最小值

---

### 属性 `LifeCoefficientMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="LifeCoefficient" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float LifeCoefficientMax = 3.f;` |

**源码注释:**

> 生存系数最大值

---
