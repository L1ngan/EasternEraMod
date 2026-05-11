# `struct` `FBattleTeamState`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 战斗阵营状态

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid Guid;` |

**Source comments:**

> 势力GUID

---

### Property `Score`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Score = 0;` |

**Source comments:**

> 获得的积分

---

### Property `KillCount`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 KillCount = 0;` |

**Source comments:**

> 击杀数

---

### Property `CharacterBattleInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FCharacterBattleInfo](WorldBattleStruct__FCharacterBattleInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid, FCharacterBattleInfo> CharacterBattleInfos;` |

**Source comments:**

> 角色战斗信息

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**Source comments:**

> 阵营ID

---

### Property `TeamBaseInformation`

| Field | Details |
|------|------|
| C++ type | [FTeamBaseInformation](WorldBattleStruct__FTeamBaseInformation.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTeamBaseInformation TeamBaseInformation;` |

**Source comments:**

> 当前分配到的营地

---

### Property `BattleTeamInfo`

| Field | Details |
|------|------|
| C++ type | [FBattleTeamInfo](WorldBattleStruct__FBattleTeamInfo.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FBattleTeamInfo BattleTeamInfo;` |

**Source comments:**

> 战斗阵营信息

---

### Property `HandStratagemAbility`

| Field | Details |
|------|------|
| C++ type | TArray<[FStratagemAbility](WorldBattleStruct__FStratagemAbility.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FStratagemAbility> HandStratagemAbility;` |

**Source comments:**

> 手中的战略卡牌信息

---

### Property `PoolStratagemAbility`

| Field | Details |
|------|------|
| C++ type | TArray<[FStratagemAbility](WorldBattleStruct__FStratagemAbility.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FStratagemAbility> PoolStratagemAbility;` |

**Source comments:**

> 池子中的战略卡牌信息

---

### Property `HandCharacterCard`

| Field | Details |
|------|------|
| C++ type | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> HandCharacterCard;` |

**Source comments:**

> 手中的角色卡牌信息

---

### Property `PoolCharacterCard`

| Field | Details |
|------|------|
| C++ type | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> PoolCharacterCard;` |

**Source comments:**

> 池子中的的角色卡牌信息

---

### Property `ApplyStratagemAbility`

| Field | Details |
|------|------|
| C++ type | TArray<[FStratagemAbility](WorldBattleStruct__FStratagemAbility.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FStratagemAbility> ApplyStratagemAbility;` |

**Source comments:**

> 应用中的战略技能 只有全局且拥有持续时间的战略技能

---

### Property `AliveCharacterCard`

| Field | Details |
|------|------|
| C++ type | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> AliveCharacterCard;` |

**Source comments:**

> 存在场上的角色 包含重伤

---

### Property `StrategyPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 StrategyPoint = 0;` |

**Source comments:**

> 战略值

---

### Property `ResourcePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ResourcePoint = 0;` |

**Source comments:**

> 资源点

---

### Property `ExtractionStratagemTimerRemaining`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ExtractionStratagemTimerRemaining = 0.f;` |

**Source comments:**

> 抽取战略剩余时间

---

### Property `ExtractionCharacterTimerRemaining`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ExtractionCharacterTimerRemaining = 0.f;` |

**Source comments:**

> 抽取角色剩余时间

---

### Property `NextUseStratagemAbility`

| Field | Details |
|------|------|
| C++ type | [FStratagemAbility](WorldBattleStruct__FStratagemAbility.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FStratagemAbility NextUseStratagemAbility;` |

**Source comments:**

> 要使用的战略技能

---

### Property `StrategyDetectionIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StrategyDetectionIntervalTime = 0.f;` |

**Source comments:**

> 持有牌时无法使用检测间隔时间

---

### Property `StrategyWaitTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StrategyWaitTime = 0.f;` |

**Source comments:**

> 释放条件不满足时同一张牌等待时间

---

### Property `StrategyUseIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StrategyUseIntervalTime = 0.f;` |

**Source comments:**

> 使用技能的最小间隔时间

---

### Property `bAutoReleaseStrategy`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bAutoReleaseStrategy = true;` |

**Source comments:**

> 是否自动释放战略技能

---

### Property `bAutoUseCharacter`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bAutoUseCharacter = true;` |

**Source comments:**

> 是否自动使用角色

---

### Property `AutoUseCharacterRule`

| Field | Details |
|------|------|
| C++ type | [FAutoUseCharacterRule](WorldBattleStruct__FAutoUseCharacterRule.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FAutoUseCharacterRule AutoUseCharacterRule;` |

**Source comments:**

> 自动使用角色的规则

---

### Property `NextCharacterSaveData`

| Field | Details |
|------|------|
| C++ type | [FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FCharacterSaveData NextCharacterSaveData;` |

**Source comments:**

> 下次使用的弟子信息

---

### Property `CharacterUseIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CharacterUseIntervalTime = 10.f;` |

**Source comments:**

> 使用的间隔时间

---

### Property `CharacterDetectionIntervalTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CharacterDetectionIntervalTime = 3.f;` |

**Source comments:**

> 检测间隔时间

---

### Property `bHaveResourceUseCharacter`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bHaveResourceUseCharacter = false;` |

**Source comments:**

> 是否资源满足持续使用角色

---

### Property `BattleBuffGroup`

| Field | Details |
|------|------|
| C++ type | TArray<[FBattleBuffGroup](../WorldStruct__FBattleBuffGroup.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FBattleBuffGroup> BattleBuffGroup;` |

**Source comments:**

> 战斗buff组

---

### Property `CharacterCureInfo`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FCharacterCureInfo](WorldBattleStruct__FCharacterCureInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FGuid,FCharacterCureInfo> CharacterCureInfo;` |

**Source comments:**

> 受伤人员的

---

### Property `OccupiedCureIndex`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> OccupiedCureIndex;` |

**Source comments:**

> 治疗点占用的索引

---

### Property `OccupiedAwaitIndex`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> OccupiedAwaitIndex;` |

**Source comments:**

> 医师等待占用的索引

---
