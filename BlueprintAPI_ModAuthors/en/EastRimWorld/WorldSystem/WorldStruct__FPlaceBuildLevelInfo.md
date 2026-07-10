# `struct` `FPlaceBuildLevelInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> Place Build Level Info data structure.

## Blueprint-exposed variables

### Property `ConsumeCoin`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int ConsumeCoin = 0;` |

**Notes:**

> 建造消耗 钱

---

### Property `ConsumeProsperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float ConsumeProsperity = 0.f;` |

**Notes:**

> 建造消耗 繁荣度

---

### Property `ConsumePopulation`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 ConsumePopulation = 0;` |

**Notes:**

> 建造消耗 人口

---

### Property `ConsumeResources`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,int32> ConsumeResources;` |

**Notes:**

> 建造消耗 物资

---

### Property `ConsumeGrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float ConsumeGrowScore = 0.f;` |

**Notes:**

> 建造消耗 成长积分

---

### Property `MaintenanceCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 MaintenanceCoin = 0;` |

**Notes:**

> 维持费用

---

### Property `MaintenanceProsperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Maintenance" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Maintenance") float MaintenanceProsperity = 0.f;` |

**Notes:**

> [新增-策划文档"建筑/维持消耗"]建筑维持消耗繁荣度(不逐级累加)

---

### Property `MaintenancePopulation`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Maintenance" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Maintenance") int32 MaintenancePopulation = 0;` |

**Notes:**

> [新增-策划文档"建筑/维持人口"]建筑维持需要的工作人口(不逐级累加)

---

### Property `ConsumeTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Maintenance" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Maintenance") int32 ConsumeTime = 0;` |

**Notes:**

> [新增-策划文档"二、人口/作用 2"]建造耗时(秒,向下取整),0 表示瞬间完成(保留兼容老配置)

---

### Property `ProsperityIncrease`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float ProsperityIncrease = 0.f;` |

**Notes:**

> 提供繁荣度增长(不逐级累加)

---

### Property `PopulationIncrease`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float PopulationIncrease = 0.f;` |

**Notes:**

> 提供人口增长(不逐级累加)

---

### Property `AddOrder`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Output" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Output") float AddOrder = 0.f;` |

**Notes:**

> [新增-策划文档"建筑/产出 治安"]建筑提供的治安增量(不逐级累加;Add Order > 0 视为治安建筑)

---

### Property `AddDropItemID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Output" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Output") FName AddDropItemID;` |

**Notes:**

> [新增-策划文档"建筑/产出 掉落集"]建筑产出关联的掉落集 ID(对应 DropItem 表)

---

### Property `AddResources`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FItemSimpleData> AddResources;` |

**Notes:**

> 提供的物资(不逐级累加)

---

### Property `AddMartialArtsExp`

| Field | Details |
|------|------|
| C++ type | TMap<[EMartialArtsAttributeClassification](../Struct/CommonEnum__EMartialArtsAttributeClassification.md),float> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EMartialArtsAttributeClassification,float> AddMartialArtsExp;` |

**Notes:**

> 提供武学经验(不逐级累加)

---

### Property `AddCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 AddCoin = 0;` |

**Notes:**

> 提供钱币(不逐级累加)

---

### Property `AddMaxStationedCharacterNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 AddMaxStationedCharacterNum = 0;` |

**Notes:**

> 提供的可驻扎角色数量(不逐级累加)

---

### Property `AddOutputProportion`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float AddOutputProportion = 0.f;` |

**Notes:**

> 影响产出比例(不逐级累加)

---

### Property `AddPriority`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 AddPriority = 0;` |

**Notes:**

> 加减建筑的基础建造优先级(不逐级累加)

---

### Property `AddTowerMartialArtsEntries`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> AddTowerMartialArtsEntries;` |

**Notes:**

> 通过武学词条给箭塔加属性、更换投射物、添加新的能力(不逐级累加)

---

### Property `CharacterWarBuff`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> CharacterWarBuff;` |

**Notes:**

> 宗门战给弟子提供Buff(不逐级累加)

---

### Property `EffectCharacterIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UTexture2D> EffectCharacterIcon;` |

**Notes:**

> 城镇管理界面里弟子标题栏显示

---

### Property `EffectCharacterDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText EffectCharacterDesc;` |

**Notes:**

> 对弟子的影响效果描述

---
