# `struct` `FPlaceLevelInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 地点等级信息

## Blueprint-exposed variables

### Property `PlaceLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 PlaceLevel = 1;` |

**Notes:**

> 地点等级

---

### Property `NeedProsperity`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int NeedProsperity = 100;` |

**Notes:**

> 升到本级所需繁荣度

---

### Property `WorldPlaceType`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EWorldPlaceType WorldPlaceType = EWorldPlaceType::None;` |

**Notes:**

> 地点的类型

---

### Property `NeedResource`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName, int32> NeedResource;` |

**Notes:**

> 升到本级所需物品

---

### Property `ProsperityGrowthEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ProsperityGrowthEfficiency = 0.5f;` |

**Notes:**

> 繁荣度此等级增加的效率(逐级累加)

---

### Property `PopulationGrowthEfficiency`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float PopulationGrowthEfficiency = 0.5f;` |

**Notes:**

> 人口此等级增加的效率(逐级累加)

---

### Property `AddCoinIncrease`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 AddCoinIncrease = 0;` |

**Notes:**

> 提供的钱币增长值

---

### Property `LevelUpAddReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float LevelUpAddReputation = 0.f;` |

**Notes:**

> 升级增加声望

---

### Property `OccupyAddReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float OccupyAddReputation = 0.f;` |

**Notes:**

> 占领增加声望

---

### Property `LoseDecreaseReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float LoseDecreaseReputation = 0.f;` |

**Notes:**

> 丢失减少声望(配负值)

---

### Property `NeedGrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float NeedGrowScore =0.f;` |

**Notes:**

> 升到本级NPC所需成长积分

---

### Property `NeedCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 NeedCoin = 0;` |

**Notes:**

> 升到本级所需铜币

---

### Property `LevelCanBuildNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 LevelCanBuildNum = 0;` |

**Notes:**

> 建筑设施可建造数量

---

### Property `CopperCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 CopperCoin = 0;` |

**Notes:**

> 铜币

---

### Property `TrainingPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 TrainingPoint = 0;` |

**Notes:**

> 历练点

---
