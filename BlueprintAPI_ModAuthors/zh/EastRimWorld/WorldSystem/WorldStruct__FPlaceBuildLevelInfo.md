# `struct` `FPlaceBuildLevelInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> Place Build Level Info 数据结构。

## 蓝图暴露变量

### 属性 `ConsumeCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int ConsumeCoin = 0;` |

**说明:**

> 建造消耗 钱

---

### 属性 `ConsumeProsperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float ConsumeProsperity = 0.f;` |

**说明:**

> 建造消耗 繁荣度

---

### 属性 `ConsumePopulation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 ConsumePopulation = 0;` |

**说明:**

> 建造消耗 人口

---

### 属性 `ConsumeResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,int32> ConsumeResources;` |

**说明:**

> 建造消耗 物资

---

### 属性 `ConsumeGrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float ConsumeGrowScore = 0.f;` |

**说明:**

> 建造消耗 成长积分

---

### 属性 `MaintenanceCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 MaintenanceCoin = 0;` |

**说明:**

> 维持费用

---

### 属性 `MaintenanceProsperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Maintenance" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Maintenance") float MaintenanceProsperity = 0.f;` |

**说明:**

> [新增-策划文档"建筑/维持消耗"]建筑维持消耗繁荣度(不逐级累加)

---

### 属性 `MaintenancePopulation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Maintenance" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Maintenance") int32 MaintenancePopulation = 0;` |

**说明:**

> [新增-策划文档"建筑/维持人口"]建筑维持需要的工作人口(不逐级累加)

---

### 属性 `ConsumeTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Maintenance" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Maintenance") int32 ConsumeTime = 0;` |

**说明:**

> [新增-策划文档"二、人口/作用 2"]建造耗时(秒,向下取整),0 表示瞬间完成(保留兼容老配置)

---

### 属性 `ProsperityIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float ProsperityIncrease = 0.f;` |

**说明:**

> 提供繁荣度增长(不逐级累加)

---

### 属性 `PopulationIncrease`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float PopulationIncrease = 0.f;` |

**说明:**

> 提供人口增长(不逐级累加)

---

### 属性 `AddOrder`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Output" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Output") float AddOrder = 0.f;` |

**说明:**

> [新增-策划文档"建筑/产出 治安"]建筑提供的治安增量(不逐级累加;Add Order > 0 视为治安建筑)

---

### 属性 `AddDropItemID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Output" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Output") FName AddDropItemID;` |

**说明:**

> [新增-策划文档"建筑/产出 掉落集"]建筑产出关联的掉落集 ID(对应 DropItem 表)

---

### 属性 `AddResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FItemSimpleData> AddResources;` |

**说明:**

> 提供的物资(不逐级累加)

---

### 属性 `AddMartialArtsExp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EMartialArtsAttributeClassification](../Struct/CommonEnum__EMartialArtsAttributeClassification.md),float> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EMartialArtsAttributeClassification,float> AddMartialArtsExp;` |

**说明:**

> 提供武学经验(不逐级累加)

---

### 属性 `AddCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 AddCoin = 0;` |

**说明:**

> 提供钱币(不逐级累加)

---

### 属性 `AddMaxStationedCharacterNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 AddMaxStationedCharacterNum = 0;` |

**说明:**

> 提供的可驻扎角色数量(不逐级累加)

---

### 属性 `AddOutputProportion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float AddOutputProportion = 0.f;` |

**说明:**

> 影响产出比例(不逐级累加)

---

### 属性 `AddPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 AddPriority = 0;` |

**说明:**

> 加减建筑的基础建造优先级(不逐级累加)

---

### 属性 `AddTowerMartialArtsEntries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> AddTowerMartialArtsEntries;` |

**说明:**

> 通过武学词条给箭塔加属性、更换投射物、添加新的能力(不逐级累加)

---

### 属性 `CharacterWarBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> CharacterWarBuff;` |

**说明:**

> 宗门战给弟子提供Buff(不逐级累加)

---

### 属性 `EffectCharacterIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UTexture2D> EffectCharacterIcon;` |

**说明:**

> 城镇管理界面里弟子标题栏显示

---

### 属性 `EffectCharacterDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText EffectCharacterDesc;` |

**说明:**

> 对弟子的影响效果描述

---
