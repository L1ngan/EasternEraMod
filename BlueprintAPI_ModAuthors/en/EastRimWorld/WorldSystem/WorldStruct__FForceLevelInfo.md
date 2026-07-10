# `struct` `FForceLevelInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力等级信息（势力声望级别配置）

## Blueprint-exposed variables

### Property `ForceLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 ForceLevel = 1;` |

**Notes:**

> 势力等级

---

### Property `ForceLevelName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText ForceLevelName;` |

**Notes:**

> 声望级别名称

---

### Property `LevelUpConditionIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> LevelUpConditionIDs;` |

**Notes:**

> 升级条件ID(关联DT_CommonTaskCondition表)(从低一级升级到本级需要的条件)

---

### Property `UnlockContentIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> UnlockContentIDs;` |

**Notes:**

> 解锁内容(关联DT_TechUnlockItemConig表)

---

### Property `LevelReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float LevelReputation = 100.f;` |

**Notes:**

> 升级所需最低声望值

---

### Property `NumberOfSubclasses`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 NumberOfSubclasses = 2;` |

**Notes:**

> 分堂数量

---

### Property `ForceMaxCharacterNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 ForceMaxCharacterNum = 0;` |

**Notes:**

> 宗门人数上限

---

### Property `NumberOfSubclassesMembers`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> NumberOfSubclassesMembers;` |

**Notes:**

> 分堂成员数量（包含：分堂堂主+弟子）

---

### Property `NumberOfSubclassesFeature`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 NumberOfSubclassesFeature = 2;` |

**Notes:**

> 可配置的分堂特性数量

---

### Property `SubclassesFeatureIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> SubclassesFeatureIDs;` |

**Notes:**

> 可选择的分堂特性

---

### Property `PurposeNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 PurposeNum = 0;` |

**Notes:**

> 可激活的宗旨数量

---

### Property `NumberOfStations`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 NumberOfStations = 1;` |

**Notes:**

> 驻地数量

---

### Property `NumberOfTowns`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 NumberOfTowns = 1;` |

**Notes:**

> 城镇数量

---

### Property `NumberOfResourcePoints`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 NumberOfResourcePoints = 2;` |

**Notes:**

> 资源点数量

---

### Property `TradeMarkup`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TradeMarkup = 0.f;` |

**Notes:**

> 贸易加成

---

### Property `SpeedOfTrade`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SpeedOfTrade = 0.f;` |

**Notes:**

> 贸易速度

---

### Property `FeudalOfficialUnlockBuilding`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName>FeudalOfficialUnlockBuilding;` |

**Notes:**

> Feudal Official Unlock Building field.

---

### Property `ChamberOfCommerceUnlockBuilding`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName>ChamberOfCommerceUnlockBuilding;` |

**Notes:**

> 商会解锁的建筑物

---

### Property `MasterSalary`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 MasterSalary = 0;` |

**Notes:**

> 宗主工资

---

### Property `SubMasterSalary`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 SubMasterSalary = 0;` |

**Notes:**

> 堂主工资

---

### Property `CoreCharacterSalary`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 CoreCharacterSalary = 0;` |

**Notes:**

> 内门工资

---

### Property `MarginalCharacterSalary`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 MarginalCharacterSalary = 0;` |

**Notes:**

> 外门工资

---

### Property `FactionUnlockBuilding`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName>FactionUnlockBuilding;` |

**Notes:**

> 帮派解锁的建筑物

---

### Property `SectUnlockBuilding`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName>SectUnlockBuilding;` |

**Notes:**

> 门派解锁的建筑物

---

### Property `HomotropyFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float HomotropyFavorability = 0.f;` |

**Notes:**

> 同倾向好感度增加

---

### Property `DifferentTendenciesFavorability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DifferentTendenciesFavorability = 0.f;` |

**Notes:**

> 不同倾向好感度增加

---

### Property `CanForceOperation`

| Field | Details |
|------|------|
| C++ type | TArray<[EForceOperationType](WorldStruct__EForceOperationType.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<EForceOperationType> CanForceOperation;` |

**Notes:**

> 允许的势力操作

---

### Property `MaxGrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxGrowScore = 999999.f;` |

**Notes:**

> NPC势力成长积分上限

---

### Property `AddGrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AddGrowScore = 0.f;` |

**Notes:**

> NPC势力成长积分定期加值

---

### Property `NPCConstructionTimes`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> NPCConstructionTimes;` |

**Notes:**

> 每周期自动建造升级设施的次数随机数组

---

### Property `UnlockDogfaceIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> UnlockDogfaceIDs;` |

**Notes:**

> 小兵

---

### Property `UnlockStrategicAbility`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> UnlockStrategicAbility;` |

**Notes:**

> 战略技能

---

### Property `UnlockTowerDefense`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> UnlockTowerDefense;` |

**Notes:**

> 防御塔

---

### Property `BattleBuffGroup`

| Field | Details |
|------|------|
| C++ type | TArray<[FBattleBuffGroup](WorldStruct__FBattleBuffGroup.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FBattleBuffGroup> BattleBuffGroup;` |

**Notes:**

> 战斗中生效的Buff

---

### Property `AddMainPlaceStationedNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 AddMainPlaceStationedNum = 0;` |

**Notes:**

> 增加主城驻扎上限

---

### Property `RecruitRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RecruitRate = 0.f;` |

**Notes:**

> 招募成功率影响

---
