# `class` `UDominionConfigAsset`

**Source header:** `EastRimWorld/System/Dominion/DominionConfigAsset.h`

---

## Functional description (from header comments)

> 世界势力割据配置资产 — 仿 UApprenticeshipConfigAsset。
> 获取:AERW_GameModeBase::GetDominionConfigAsset()
>      (GameConfigComponent 按 EGameDataAssetType::DominionConfiguration 索引;
>       需在 GameConfigComponent.GameDataAsset 里配 DA_DominionConfig 软引用)。
> 集中割据系统所有可调数值;未配置时管理器回退到本类 CDO(下面默认初值),不会崩。

## Blueprint-exposed variables

### Property `CityLevelSectCapacity`

| Field | Details |
|------|------|
| C++ type | `TMap<int32, int32>` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|容量" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|容量") TMap<int32, int32> CityLevelSectCapacity;` |

**Notes:**

> 城市等级→城内门派容量上限(只有 CenterCity 可承载附属门派)

---

### Property `DefaultSectCapacity`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|容量" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|容量") int32 DefaultSectCapacity = 2;` |

**Notes:**

> 等级未在表中时的兜底容量

---

### Property `DefaultTributeRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|纳税" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|纳税") float DefaultTributeRatio = 0.2f;` |

**Notes:**

> 门派迁入时的初始缴税比例

---

### Property `TributeRatioMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|纳税" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|纳税") float TributeRatioMax = 0.8f;` |

**Notes:**

> 缴税比例上限(加税不能超过)

---

### Property `NPCTributeScoreBase`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|纳税" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|纳税") float NPCTributeScoreBase = 100.f;` |

**Notes:**

> 附属门派(必为 NPC)单次纳税的积分基数(实际=基数×缴税比例;NPC 城主得等额积分,玩家城主 1:1 转化为铜币)

---

### Property `TributeUnpaidLoyaltyPenalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|纳税" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|纳税") float TributeUnpaidLoyaltyPenalty = 8.f;` |

**Notes:**

> 纳税无力承担时的忠诚惩罚(会推动其迁出)

---

### Property `ScorePerCityLevelBonus`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|积分加成" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|积分加成") float ScorePerCityLevelBonus = 0.1f;` |

**Notes:**

> 所在城市每级城市等级提升的积分百分比(0.1=每级+10%)

---

### Property `ScoreProsperityBonusMax`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|积分加成" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|积分加成") float ScoreProsperityBonusMax = 0.5f;` |

**Notes:**

> 所在城市繁荣度满值时的积分加成百分比(按 当前繁荣/最大繁荣 线性)

---

### Property `GovernanceIntervalDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") int32 GovernanceIntervalDays = 15;` |

**Notes:**

> NPC 城主治理决策周期(游戏天)

---

### Property `RadicalTendency`

| Field | Details |
|------|------|
| C++ type | [FGovernanceTendency](DominionTypes__FGovernanceTendency.md) |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") FGovernanceTendency RadicalTendency;` |

**Notes:**

> 激进城主的治理倾向

---

### Property `NeutralTendency`

| Field | Details |
|------|------|
| C++ type | [FGovernanceTendency](DominionTypes__FGovernanceTendency.md) |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") FGovernanceTendency NeutralTendency;` |

**Notes:**

> 中立城主的治理倾向

---

### Property `ConservativeTendency`

| Field | Details |
|------|------|
| C++ type | [FGovernanceTendency](DominionTypes__FGovernanceTendency.md) |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") FGovernanceTendency ConservativeTendency;` |

**Notes:**

> 保守城主的治理倾向

---

### Property `ExpelLoyaltyPenaltyOthers`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float ExpelLoyaltyPenaltyOthers = 12.f;` |

**Notes:**

> 驱逐后同城其他门派对城主的忠诚下降值

---

### Property `RaiseTaxStep`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float RaiseTaxStep = 0.1f;` |

**Notes:**

> 单次加税幅度

---

### Property `RaiseTaxLoyaltyPenalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float RaiseTaxLoyaltyPenalty = 10.f;` |

**Notes:**

> 加税对目标门派的忠诚惩罚

---

### Property `MoveInInitialLoyalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float MoveInInitialLoyalty = 40.f;` |

**Notes:**

> 新迁入门派的初始忠诚

---

### Property `MoveInInitialBelonging`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float MoveInInitialBelonging = 20.f;` |

**Notes:**

> 新迁入门派的初始归属感(较低,存在隐患)

---

### Property `BelongingGrowthPerDay`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float BelongingGrowthPerDay = 0.5f;` |

**Notes:**

> 归属感每日自然增长

---

### Property `NewLordInitialLoyalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|治理" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float NewLordInitialLoyalty = 35.f;` |

**Notes:**

> 城市易主后,城内门派对新城主的初始忠诚

---

### Property `LoyaltyLeaveThreshold`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|迁移" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float LoyaltyLeaveThreshold = 20.f;` |

**Notes:**

> 忠诚低于此值视为离心(可能反水或主动迁出)

---

### Property `TributeLeaveThreshold`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|迁移" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float TributeLeaveThreshold = 0.5f;` |

**Notes:**

> 缴税比例达到此值时门派无法承受,倾向主动迁出

---

### Property `RebelChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|迁移" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float RebelChance = 0.3f;` |

**Notes:**

> 离心门派的反水基础概率(实际按 1-归属感/100 缩放)

---

### Property `RebelFavorabilityPenalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|迁移" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float RebelFavorabilityPenalty = -300.f;` |

**Notes:**

> 反水后与原城主的好感变化(大幅恶化)

---

### Property `MigrationCheckIntervalDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|迁移" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") int32 MigrationCheckIntervalDays = 20;` |

**Notes:**

> NPC 附属门派迁移检测周期(游戏天)

---

### Property `MigrationBaseChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|迁移" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float MigrationBaseChance = 0.15f;` |

**Notes:**

> 无离心条件时,主动寻求更繁荣城市的申请概率

---

### Property `MigrationProsperityAdvantage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|迁移" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float MigrationProsperityAdvantage = 1.2f;` |

**Notes:**

> 目标城繁荣度需 ≥ 当前城×此系数 才值得主动迁移

---

### Property `ResidentAttackCheckIntervalDays`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|攻打") int32 ResidentAttackCheckIntervalDays = 30;` |

**Notes:**

> 附属门派攻打检测周期(游戏天)

---

### Property `ResidentAttackChance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|攻打") float ResidentAttackChance = 0.1f;` |

**Notes:**

> 每次检测发起攻打的概率

---

### Property `ResidentAttackCombatAdvantage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|攻打") float ResidentAttackCombatAdvantage = 1.5f;` |

**Notes:**

> 发起攻打要求:自身战力 ≥ 守方战力×此系数

---

### Property `AcquiesceFavorType`

| Field | Details |
|------|------|
| C++ type | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") EForceFavorabilityType AcquiesceFavorType = EForceFavorabilityType::Friendly;` |

**Notes:**

> 城主与玩家关系达到此档及以上 → 默许攻打

---

### Property `ReluctantFavorType`

| Field | Details |
|------|------|
| C++ type | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") EForceFavorabilityType ReluctantFavorType = EForceFavorabilityType::Bland;` |

**Notes:**

> 城主与玩家关系达到此档及以上(低于默许档) → 勉强同意,但降低对玩家态度

---

### Property `ReluctantAttackFavorabilityPenalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float ReluctantAttackFavorabilityPenalty = -50.f;` |

**Notes:**

> 勉强同意时城主对玩家的好感变化

---

### Property `ForcedAttackFavorabilityPenalty`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float ForcedAttackFavorabilityPenalty = -400.f;` |

**Notes:**

> 城主拒绝后强行攻打时与城主的好感变化(大幅恶化乃至敌对)

---

### Property `AnnexLootScoreRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float AnnexLootScoreRatio = 0.5f;` |

**Notes:**

> 攻打获胜夺取目标门派积分的比例(NPC 目标;玩家城主按转化入账)

---

### Property `AnnexLootItems`

| Field | Details |
|------|------|
| C++ type | TMap<FName, [FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") TMap<FName, FItemSimpleData> AnnexLootItems;` |

**Notes:**

> 攻打获胜额外给玩家的配置资源

---

### Property `bAnnexDestroysSect`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") bool bAnnexDestroysSect = false;` |

**Notes:**

> 攻打获胜后是否彻底吞并(true=直接灭门;false=逐出本城记驱逐,可流落他城)

---

### Property `AttackFailMoraleGain`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float AttackFailMoraleGain = 15.f;` |

**Notes:**

> 攻打失败时目标门派士气提升

---

### Property `AttackFailLoyaltyGain`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|玩家攻打" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float AttackFailLoyaltyGain = 10.f;` |

**Notes:**

> 攻打失败时目标门派对城主忠诚提升

---

### Property `WanderingSectCombatRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|流浪" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|流浪") float WanderingSectCombatRatio = 0.4f;` |

**Notes:**

> 流浪门派战力削弱系数(实力大幅削弱)

---

### Property `ResidentDefenseRatio`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|守备" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|守备") float ResidentDefenseRatio = 0.5f;` |

**Notes:**

> 附属门派守备贡献系数(贡献=门派战力×归属感%×此系数;归属感低守备贡献低)

---

### Property `GiftMoneyCost`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|交流" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") float GiftMoneyCost = 200.f;` |

**Notes:**

> 送礼消耗的玩家门派资金

---

### Property `GiftFavorabilityGain`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|交流" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") float GiftFavorabilityGain = 60.f;` |

**Notes:**

> 送礼提升的玩家与该门派好感

---

### Property `IntelMinFavorType`

| Field | Details |
|------|------|
| C++ type | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="割据|交流" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") EForceFavorabilityType IntelMinFavorType = EForceFavorabilityType::Friendly;` |

**Notes:**

> 索取情报要求:玩家与该门派关系达到此档及以上

---

### Property `AssistMinFavorType`

| Field | Details |
|------|------|
| C++ type | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="割据|交流" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") EForceFavorabilityType AssistMinFavorType = EForceFavorabilityType::Intimate;` |

**Notes:**

> 请求攻城协助要求:玩家与该门派关系达到此档及以上

---

### Property `AppeaseMoneyCost`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|交流" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") float AppeaseMoneyCost = 300.f;` |

**Notes:**

> 安抚消耗的资金(玩家城主安抚城内门派)

---

### Property `AppeaseLoyaltyGain`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="割据|交流" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") float AppeaseLoyaltyGain = 15.f;` |

**Notes:**

> 安抚提升的忠诚度

---
