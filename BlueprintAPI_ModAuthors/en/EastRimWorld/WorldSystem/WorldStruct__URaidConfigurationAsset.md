# `class` `URaidConfigurationAsset`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 袭击配置资产

## Blueprint-exposed variables

### Property `WealthPointsMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float WealthPointsMax = 4200.f;` |

**Source comments:**

> 财富点数最大值

---

### Property `OneFarmlandPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float OneFarmlandPoints = 13.f;` |

**Source comments:**

> 单位田地对应的财富价值

---

### Property `UnitsPointsMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float UnitsPointsMax = 4000.f;` |

**Source comments:**

> 单位点数最大值

---

### Property `DifficultyCoefficientMap`

| Field | Details |
|------|------|
| C++ type | `TMap<EDifficultyOption,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<EDifficultyOption,float> DifficultyCoefficientMap;` |

**Source comments:**

> 难度系数配置

---

### Property `AdaptiveCoefficientMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float AdaptiveCoefficientMax = 1.5f;` |

**Source comments:**

> 适应性系数最大值（标记作废！！！稍后删除）

---

### Property `AdaptiveCoefficientMini`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float AdaptiveCoefficientMini = 0.3f;` |

**Source comments:**

> 适应性系数最小值（标记作废！！！稍后删除）

---

### Property `MaxDrawCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxDrawCount = 2;` |

**Source comments:**

> 最大抽取次数，默认2

---

### Property `UnitCoefficientMap`

| Field | Details |
|------|------|
| C++ type | `TMap<ETeamUnitType,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="CombatScore" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CombatScore") TMap<ETeamUnitType,float> UnitCoefficientMap;` |

**Source comments:**

> 单位点数折算系数

---

### Property `RealmLevelUnitsPointMap`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="CombatScore" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CombatScore") TMap<int32,float> RealmLevelUnitsPointMap;` |

**Source comments:**

> 弟子境界等级对应的单位点数

---

### Property `BuildingCombatScoreMap`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="CombatScore" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="CombatScore") TMap<FName,float> BuildingCombatScoreMap;` |

**Source comments:**

> 需要统计战力的机关弩等战斗建筑的战力值

---

### Property `LifeCoefficientBase`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LifeCoefficient" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float LifeCoefficientBase = 1.f;` |

**Source comments:**

> 生存系数基数

---

### Property `LifeCoefficientPerDay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LifeCoefficient" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float LifeCoefficientPerDay = 0.1f;` |

**Source comments:**

> 生存天数影响系数

---

### Property `ChaDeathCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LifeCoefficient" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float ChaDeathCoefficient = -0.3f;` |

**Source comments:**

> 每个弟子死亡影响系数

---

### Property `LifeCoefficientMini`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LifeCoefficient" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float LifeCoefficientMini = 1.f;` |

**Source comments:**

> 生存系数最小值

---

### Property `LifeCoefficientMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="LifeCoefficient" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LifeCoefficient") float LifeCoefficientMax = 3.f;` |

**Source comments:**

> 生存系数最大值

---
