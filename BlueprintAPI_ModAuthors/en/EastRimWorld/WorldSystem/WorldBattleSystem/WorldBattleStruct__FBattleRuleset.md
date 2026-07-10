# `struct` `FBattleRuleset`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 战斗规则

## Blueprint-exposed variables

### Property `BattleType`

| Field | Details |
|------|------|
| C++ type | [EBattleType](../../Struct/CommonEnum__EBattleType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattleType BattleType = EBattleType::None;` |

**Notes:**

> 战斗类型

---

### Property `TimeLimitSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeLimitSeconds = 600.0f;` |

**Notes:**

> 时间限制

---

### Property `TeamBaseInformation`

| Field | Details |
|------|------|
| C++ type | TArray<[FTeamBaseInformation](WorldBattleStruct__FTeamBaseInformation.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FTeamBaseInformation> TeamBaseInformation;` |

**Notes:**

> 其他阵营基地信息

---

### Property `MonsterGeneration`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> MonsterGeneration;` |

**Notes:**

> 小兵的生成规则模板 读取MonsterGenerationConfig 模板中配置所有可能生成的小兵，开始后会根据玩家选择小兵读取对应的生成配置

---

### Property `GunTurretGeneration`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> GunTurretGeneration;` |

**Notes:**

> 阵营建筑物的生成模板(炮塔)如果是多个则会依次读取基地中炮塔坐标

---

### Property `CrystalGeneration`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName CrystalGeneration;` |

**Notes:**

> 此基地的水晶生成配置

---

### Property `CharacterRealmRelevancyData`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FCharacterRealmRelevancyData](WorldBattleStruct__FCharacterRealmRelevancyData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32,FCharacterRealmRelevancyData> CharacterRealmRelevancyData;` |

**Notes:**

> 角色消耗 key 境界等级 value 消耗

---

### Property `MiniStratagemAbilityNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MiniStratagemAbilityNumber = 5;` |

**Notes:**

> 战略卡牌池的最小数量（出战必须选择的最小战略卡数量）

---

### Property `MaxStratagemAbilityNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxStratagemAbilityNumber = 10;` |

**Notes:**

> 战略卡牌池的最大数量

---

### Property `MaxHandStratagemAbilityNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxHandStratagemAbilityNumber = 5;` |

**Notes:**

> 战略卡牌的最大数量(手牌)

---

### Property `MaxCharacterNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxCharacterNumber = 5;` |

**Notes:**

> 角色卡牌的最大数量(手牌)

---

### Property `ExtractionStratagemTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ExtractionStratagemTime = 10;` |

**Notes:**

> 抽取战略卡牌所需时间

---

### Property `ExtractionCharacterTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ExtractionCharacterTime = 10;` |

**Notes:**

> 抽取角色卡牌所需时间

---

### Property `MaxStrategyPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxStrategyPoint = 1000;` |

**Notes:**

> 战略值最大值

---

### Property `MaxResourcePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxResourcePoint = 1000;` |

**Notes:**

> 资源点最大值

---

### Property `InitStrategyPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 InitStrategyPoint = 100;` |

**Notes:**

> 战略初始点数

---

### Property `InitResourcePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 InitResourcePoint = 100;` |

**Notes:**

> 资源初始点数

---

### Property `AutoReleaseStrategyRule`

| Field | Details |
|------|------|
| C++ type | [FAutoReleaseStrategyRule](WorldBattleStruct__FAutoReleaseStrategyRule.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FAutoReleaseStrategyRule AutoReleaseStrategyRule;` |

**Notes:**

> 自动释放战略技能规则

---

### Property `CaptureCharacterNumber`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32,int32> CaptureCharacterNumber;` |

**Notes:**

> 俘虏人数的权重 key 人数 Value 权重

---

### Property `ListenDogfaceIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ListenDogfaceIDs;` |

**Notes:**

> 监听兵种的刷新时间

---

### Property `DogfaceGenerateTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DogfaceGenerateTime = 10;` |

**Notes:**

> 小兵刷新的最大时间

---

### Property `AttackChangeJusticeValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 AttackChangeJusticeValue = 10;` |

**Notes:**

> 正义值变化 攻击方正邪值变化 填正值 ，增加减少根据防守方正邪判断

---

### Property `JusticeValueAddToRelease`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 JusticeValueAddToRelease = 10;` |

**Notes:**

> 每100正义值(正邪值大于0)增加释放的权重

---

### Property `JusticeValueAddToKill`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 JusticeValueAddToKill = 10;` |

**Notes:**

> 每100邪恶值(正邪值小于0)增加处决的权重

---

### Property `CaptureCharacterDisposal`

| Field | Details |
|------|------|
| C++ type | TArray<[FCaptureDisposal](../WorldStruct__FCaptureDisposal.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCaptureDisposal> CaptureCharacterDisposal = { {FCaptureDisposal(ECaptureCharacterDisposalType::Release,50,10,10)}, {FCaptureDisposal(ECaptureCharacterDisposalType::Recruit,25,0,0)}, {FCaptureDisposal(ECaptureCharacterDisposalType::Kill,25,-10,-10)}, };` |

**Notes:**

> NPC俘虏的角色处置概率

---

### Property `PlaceDisposal`

| Field | Details |
|------|------|
| C++ type | TArray<[FPlaceDisposal](../WorldStruct__FPlaceDisposal.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPlaceDisposal> PlaceDisposal = { {FPlaceDisposal(EPlaceDisposalType::OccupyPlace,1,0)}, {FPlaceDisposal(EPlaceDisposalType::PlunderPlace,1,-0.5)}, {FPlaceDisposal(EPlaceDisposalType::DestroyPlace,1,-1)}, };` |

**Notes:**

> NPC占领 掠夺 摧毁的概率

---

### Property `DestroyBuildingMinNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DestroyBuildingMinNumber = 1;` |

**Notes:**

> 摧毁时建筑物损坏的最小数量

---

### Property `DestroyBuildingMaxNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DestroyBuildingMaxNumber = 1;` |

**Notes:**

> 摧毁时建筑物损坏的最大数量

---

### Property `DestroyBuildingChangeJusticeValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 DestroyBuildingChangeJusticeValue = -10;` |

**Notes:**

> 摧毁城市时正邪值变化

---

### Property `InitRecoverResourcePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 InitRecoverResourcePoint = 10;` |

**Notes:**

> 每3秒恢复的资源量

---

### Property `BattleMaxCharacterNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BattleMaxCharacterNumber = 10;` |

**Notes:**

> 最大可战斗的人数(卡池大小)

---

### Property `BattleMiniCharacterNumber`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BattleMiniCharacterNumber = 1;` |

**Notes:**

> 最小可战斗的人数(卡池大小)（出战必须选择的最小弟子卡数量）

---

### Property `CanJoinBattleCharacterMiniRealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CanJoinBattleCharacterMiniRealmLevel = 0;` |

**Notes:**

> 出战弟子最小境界等级(>=)

---

### Property `CanJoinBattleCharacterMaxRealmLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CanJoinBattleCharacterMaxRealmLevel = 10;` |

**Notes:**

> 出战弟子最大境界等级(<=)

---
