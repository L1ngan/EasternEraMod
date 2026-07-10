# `struct` `FDifficultyRuntimeSaveData`

**Source header:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## Functional description (from header comments)

> 难度运行时系数存档数据（由 Savior 自动反序列化，新游戏时由 InitSaveGameDataActor 写入）

## Blueprint-exposed variables

### Property `ResourceOutputRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float ResourceOutputRate = 1.f;` |

**Notes:**

> 采集物产出比例

---

### Property `WorkEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float WorkEfficiency = 1.f;` |

**Notes:**

> 工作效率系数

---

### Property `ExperienceRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float ExperienceRate = 1.f;` |

**Notes:**

> 经验获取比例（对应 FLevelConfigData::WorkExperienceBonus）

---

### Property `BuildingDurabilityRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float BuildingDurabilityRate = 1.f;` |

**Notes:**

> 建筑耐久比率

---

### Property `ItemExpirationRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float ItemExpirationRate = 1.f;` |

**Notes:**

> 物品保质期比率

---

### Property `RecyclingPriceRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float RecyclingPriceRate = 1.f;` |

**Notes:**

> 商人回收价格比率

---

### Property `SellingPriceRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float SellingPriceRate = 1.f;` |

**Notes:**

> 商人出售价格比率

---

### Property `OtherFactionStrength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float OtherFactionStrength = 1.f;` |

**Notes:**

> 其他门派强度系数

---

### Property `AttackFrequency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float AttackFrequency = 1.f;` |

**Notes:**

> 袭击频率系数

---

### Property `RefineAndLockPointsRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) float RefineAndLockPointsRate = 1.f;` |

**Notes:**

> 洗练点和锁定点比率

---

### Property `AttributeChangeSpeedRow`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FName AttributeChangeSpeedRow;` |

**Notes:**

> 角色属性变化速度行名（GE DataTable 行）

---

### Property `MartialArtsExperienceBonusRow`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FName MartialArtsExperienceBonusRow;` |

**Notes:**

> 武学经验加成行名（GE DataTable 行）

---

### Property `EnemyStrengthRow`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) FName EnemyStrengthRow;` |

**Notes:**

> 敌人强度行名（GE DataTable 行）

---
