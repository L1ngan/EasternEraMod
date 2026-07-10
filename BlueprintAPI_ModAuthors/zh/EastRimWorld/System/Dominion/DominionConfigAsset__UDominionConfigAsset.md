# `class` `UDominionConfigAsset`

**源码头文件:** `EastRimWorld/System/Dominion/DominionConfigAsset.h`

---

## 功能说明（来自头文件注释）

> 世界势力割据配置资产 — 仿 UApprenticeshipConfigAsset。
> 获取:AERW_GameModeBase::GetDominionConfigAsset()
>      (GameConfigComponent 按 EGameDataAssetType::DominionConfiguration 索引;
>       需在 GameConfigComponent.GameDataAsset 里配 DA_DominionConfig 软引用)。
> 集中割据系统所有可调数值;未配置时管理器回退到本类 CDO(下面默认初值),不会崩。

## 蓝图暴露变量

### 属性 `CityLevelSectCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, int32>` |
| 反射说明符 | BlueprintReadOnly, Category="割据|容量" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|容量") TMap<int32, int32> CityLevelSectCapacity;` |

**说明:**

> 城市等级→城内门派容量上限(只有 CenterCity 可承载附属门派)

---

### 属性 `DefaultSectCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="割据|容量" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|容量") int32 DefaultSectCapacity = 2;` |

**说明:**

> 等级未在表中时的兜底容量

---

### 属性 `DefaultTributeRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|纳税" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|纳税") float DefaultTributeRatio = 0.2f;` |

**说明:**

> 门派迁入时的初始缴税比例

---

### 属性 `TributeRatioMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|纳税" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|纳税") float TributeRatioMax = 0.8f;` |

**说明:**

> 缴税比例上限(加税不能超过)

---

### 属性 `NPCTributeScoreBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|纳税" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|纳税") float NPCTributeScoreBase = 100.f;` |

**说明:**

> 附属门派(必为 NPC)单次纳税的积分基数(实际=基数×缴税比例;NPC 城主得等额积分,玩家城主 1:1 转化为铜币)

---

### 属性 `TributeUnpaidLoyaltyPenalty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|纳税" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|纳税") float TributeUnpaidLoyaltyPenalty = 8.f;` |

**说明:**

> 纳税无力承担时的忠诚惩罚(会推动其迁出)

---

### 属性 `ScorePerCityLevelBonus`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|积分加成" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|积分加成") float ScorePerCityLevelBonus = 0.1f;` |

**说明:**

> 所在城市每级城市等级提升的积分百分比(0.1=每级+10%)

---

### 属性 `ScoreProsperityBonusMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|积分加成" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|积分加成") float ScoreProsperityBonusMax = 0.5f;` |

**说明:**

> 所在城市繁荣度满值时的积分加成百分比(按 当前繁荣/最大繁荣 线性)

---

### 属性 `GovernanceIntervalDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") int32 GovernanceIntervalDays = 15;` |

**说明:**

> NPC 城主治理决策周期(游戏天)

---

### 属性 `RadicalTendency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGovernanceTendency](DominionTypes__FGovernanceTendency.md) |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") FGovernanceTendency RadicalTendency;` |

**说明:**

> 激进城主的治理倾向

---

### 属性 `NeutralTendency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGovernanceTendency](DominionTypes__FGovernanceTendency.md) |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") FGovernanceTendency NeutralTendency;` |

**说明:**

> 中立城主的治理倾向

---

### 属性 `ConservativeTendency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGovernanceTendency](DominionTypes__FGovernanceTendency.md) |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") FGovernanceTendency ConservativeTendency;` |

**说明:**

> 保守城主的治理倾向

---

### 属性 `ExpelLoyaltyPenaltyOthers`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float ExpelLoyaltyPenaltyOthers = 12.f;` |

**说明:**

> 驱逐后同城其他门派对城主的忠诚下降值

---

### 属性 `RaiseTaxStep`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float RaiseTaxStep = 0.1f;` |

**说明:**

> 单次加税幅度

---

### 属性 `RaiseTaxLoyaltyPenalty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float RaiseTaxLoyaltyPenalty = 10.f;` |

**说明:**

> 加税对目标门派的忠诚惩罚

---

### 属性 `MoveInInitialLoyalty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float MoveInInitialLoyalty = 40.f;` |

**说明:**

> 新迁入门派的初始忠诚

---

### 属性 `MoveInInitialBelonging`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float MoveInInitialBelonging = 20.f;` |

**说明:**

> 新迁入门派的初始归属感(较低,存在隐患)

---

### 属性 `BelongingGrowthPerDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float BelongingGrowthPerDay = 0.5f;` |

**说明:**

> 归属感每日自然增长

---

### 属性 `NewLordInitialLoyalty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|治理" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|治理") float NewLordInitialLoyalty = 35.f;` |

**说明:**

> 城市易主后,城内门派对新城主的初始忠诚

---

### 属性 `LoyaltyLeaveThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|迁移" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float LoyaltyLeaveThreshold = 20.f;` |

**说明:**

> 忠诚低于此值视为离心(可能反水或主动迁出)

---

### 属性 `TributeLeaveThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|迁移" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float TributeLeaveThreshold = 0.5f;` |

**说明:**

> 缴税比例达到此值时门派无法承受,倾向主动迁出

---

### 属性 `RebelChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|迁移" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float RebelChance = 0.3f;` |

**说明:**

> 离心门派的反水基础概率(实际按 1-归属感/100 缩放)

---

### 属性 `RebelFavorabilityPenalty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|迁移" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float RebelFavorabilityPenalty = -300.f;` |

**说明:**

> 反水后与原城主的好感变化(大幅恶化)

---

### 属性 `MigrationCheckIntervalDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="割据|迁移" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") int32 MigrationCheckIntervalDays = 20;` |

**说明:**

> NPC 附属门派迁移检测周期(游戏天)

---

### 属性 `MigrationBaseChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|迁移" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float MigrationBaseChance = 0.15f;` |

**说明:**

> 无离心条件时,主动寻求更繁荣城市的申请概率

---

### 属性 `MigrationProsperityAdvantage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|迁移" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|迁移") float MigrationProsperityAdvantage = 1.2f;` |

**说明:**

> 目标城繁荣度需 ≥ 当前城×此系数 才值得主动迁移

---

### 属性 `ResidentAttackCheckIntervalDays`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="割据|攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|攻打") int32 ResidentAttackCheckIntervalDays = 30;` |

**说明:**

> 附属门派攻打检测周期(游戏天)

---

### 属性 `ResidentAttackChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|攻打") float ResidentAttackChance = 0.1f;` |

**说明:**

> 每次检测发起攻打的概率

---

### 属性 `ResidentAttackCombatAdvantage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|攻打") float ResidentAttackCombatAdvantage = 1.5f;` |

**说明:**

> 发起攻打要求:自身战力 ≥ 守方战力×此系数

---

### 属性 `AcquiesceFavorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") EForceFavorabilityType AcquiesceFavorType = EForceFavorabilityType::Friendly;` |

**说明:**

> 城主与玩家关系达到此档及以上 → 默许攻打

---

### 属性 `ReluctantFavorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") EForceFavorabilityType ReluctantFavorType = EForceFavorabilityType::Bland;` |

**说明:**

> 城主与玩家关系达到此档及以上(低于默许档) → 勉强同意,但降低对玩家态度

---

### 属性 `ReluctantAttackFavorabilityPenalty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float ReluctantAttackFavorabilityPenalty = -50.f;` |

**说明:**

> 勉强同意时城主对玩家的好感变化

---

### 属性 `ForcedAttackFavorabilityPenalty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float ForcedAttackFavorabilityPenalty = -400.f;` |

**说明:**

> 城主拒绝后强行攻打时与城主的好感变化(大幅恶化乃至敌对)

---

### 属性 `AnnexLootScoreRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float AnnexLootScoreRatio = 0.5f;` |

**说明:**

> 攻打获胜夺取目标门派积分的比例(NPC 目标;玩家城主按转化入账)

---

### 属性 `AnnexLootItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") TMap<FName, FItemSimpleData> AnnexLootItems;` |

**说明:**

> 攻打获胜额外给玩家的配置资源

---

### 属性 `bAnnexDestroysSect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") bool bAnnexDestroysSect = false;` |

**说明:**

> 攻打获胜后是否彻底吞并(true=直接灭门;false=逐出本城记驱逐,可流落他城)

---

### 属性 `AttackFailMoraleGain`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float AttackFailMoraleGain = 15.f;` |

**说明:**

> 攻打失败时目标门派士气提升

---

### 属性 `AttackFailLoyaltyGain`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|玩家攻打" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|玩家攻打") float AttackFailLoyaltyGain = 10.f;` |

**说明:**

> 攻打失败时目标门派对城主忠诚提升

---

### 属性 `WanderingSectCombatRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|流浪" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|流浪") float WanderingSectCombatRatio = 0.4f;` |

**说明:**

> 流浪门派战力削弱系数(实力大幅削弱)

---

### 属性 `ResidentDefenseRatio`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|守备" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|守备") float ResidentDefenseRatio = 0.5f;` |

**说明:**

> 附属门派守备贡献系数(贡献=门派战力×归属感%×此系数;归属感低守备贡献低)

---

### 属性 `GiftMoneyCost`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|交流" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") float GiftMoneyCost = 200.f;` |

**说明:**

> 送礼消耗的玩家门派资金

---

### 属性 `GiftFavorabilityGain`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|交流" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") float GiftFavorabilityGain = 60.f;` |

**说明:**

> 送礼提升的玩家与该门派好感

---

### 属性 `IntelMinFavorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| 反射说明符 | BlueprintReadOnly, Category="割据|交流" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") EForceFavorabilityType IntelMinFavorType = EForceFavorabilityType::Friendly;` |

**说明:**

> 索取情报要求:玩家与该门派关系达到此档及以上

---

### 属性 `AssistMinFavorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceFavorabilityType](../../WorldSystem/WorldStruct__EForceFavorabilityType.md) |
| 反射说明符 | BlueprintReadOnly, Category="割据|交流" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") EForceFavorabilityType AssistMinFavorType = EForceFavorabilityType::Intimate;` |

**说明:**

> 请求攻城协助要求:玩家与该门派关系达到此档及以上

---

### 属性 `AppeaseMoneyCost`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|交流" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") float AppeaseMoneyCost = 300.f;` |

**说明:**

> 安抚消耗的资金(玩家城主安抚城内门派)

---

### 属性 `AppeaseLoyaltyGain`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="割据|交流" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "割据|交流") float AppeaseLoyaltyGain = 15.f;` |

**说明:**

> 安抚提升的忠诚度

---
