# `struct` `FDifficultyRuntimeSaveData`

**源码头文件:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## 功能说明（来自头文件注释）

> 难度运行时系数存档数据（由 Savior 自动反序列化，新游戏时由 InitSaveGameDataActor 写入）

## 蓝图暴露变量

### 属性 `ResourceOutputRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float ResourceOutputRate = 1.f;` |

**说明:**

> 采集物产出比例

---

### 属性 `WorkEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float WorkEfficiency = 1.f;` |

**说明:**

> 工作效率系数

---

### 属性 `ExperienceRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float ExperienceRate = 1.f;` |

**说明:**

> 经验获取比例（对应 FLevelConfigData::WorkExperienceBonus）

---

### 属性 `BuildingDurabilityRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float BuildingDurabilityRate = 1.f;` |

**说明:**

> 建筑耐久比率

---

### 属性 `ItemExpirationRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float ItemExpirationRate = 1.f;` |

**说明:**

> 物品保质期比率

---

### 属性 `RecyclingPriceRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float RecyclingPriceRate = 1.f;` |

**说明:**

> 商人回收价格比率

---

### 属性 `SellingPriceRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float SellingPriceRate = 1.f;` |

**说明:**

> 商人出售价格比率

---

### 属性 `OtherFactionStrength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float OtherFactionStrength = 1.f;` |

**说明:**

> 其他门派强度系数

---

### 属性 `AttackFrequency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float AttackFrequency = 1.f;` |

**说明:**

> 袭击频率系数

---

### 属性 `RefineAndLockPointsRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float RefineAndLockPointsRate = 1.f;` |

**说明:**

> 洗练点和锁定点比率

---

### 属性 `AttributeChangeSpeedRow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FName AttributeChangeSpeedRow;` |

**说明:**

> 角色属性变化速度行名（GE DataTable 行）

---

### 属性 `MartialArtsExperienceBonusRow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FName MartialArtsExperienceBonusRow;` |

**说明:**

> 武学经验加成行名（GE DataTable 行）

---

### 属性 `EnemyStrengthRow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FName EnemyStrengthRow;` |

**说明:**

> 敌人强度行名（GE DataTable 行）

---
