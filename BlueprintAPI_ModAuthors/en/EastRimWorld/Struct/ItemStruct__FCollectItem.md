# `struct` `FCollectItem`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 资源参数(采集物，矿物)

## Blueprint-exposed variables

### Property `CollectItemType`

| Field | Details |
|------|------|
| C++ type | [ECollectItemType](ItemStruct__ECollectItemType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") ECollectItemType CollectItemType = ECollectItemType::None;` |

**Notes:**

> 采集物类型

---

### Property `bCanGrow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bCanGrow = true;` |

**Notes:**

> 是否可以生长

---

### Property `GrowStage`

| Field | Details |
|------|------|
| C++ type | TArray<[FGrowStage](ItemStruct__FGrowStage.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TArray<FGrowStage> GrowStage;` |

**Notes:**

> 分为多少个阶段 每个阶段持续多长时间 必须存在一个阶段 不可生长为 None 阶段

---

### Property `GrowingTimeConsuming`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float GrowingTimeConsuming = 0.f;` |

**Notes:**

> 生长耗时 秒（界面信息显示）

---

### Property `GrownRipeningTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float GrownRipeningTime = 0.f;` |

**Notes:**

> 成熟耗时 秒（界面信息显示）

---

### Property `GrownInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float GrownInterval = 0.f;` |

**Notes:**

> 成熟间隔 秒（界面信息显示） 0 为没有

---

### Property `GrowEfficiencyBySoil`

| Field | Details |
|------|------|
| C++ type | TMap<[EGroundSoilType](../ERW_Enumerations__EGroundSoilType.md),float> |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EGroundSoilType,float> GrowEfficiencyBySoil;` |

**Notes:**

> 土质对应的生长效率 加值 todo....废弃

---

### Property `MinGroundRichPercent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float MinGroundRichPercent;` |

**Notes:**

> 最低土壤肥沃度

---

### Property `bOutPutFruit`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bOutPutFruit = true;` |

**Notes:**

> 是否会结出果实

---

### Property `bCutOrDig`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bCutOrDig = true;` |

**Notes:**

> 是否可以砍伐或者挖掘

---

### Property `OutputByStage`

| Field | Details |
|------|------|
| C++ type | TMap<[EGrowStageType](ItemStruct__EGrowStageType.md),[FCollectedGroup](ItemStruct__FCollectedGroup.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EGrowStageType,FCollectedGroup> OutputByStage;` |

**Notes:**

> 每个阶段对应的产出数据

---

### Property `CutOrDigOutPutPick`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool CutOrDigOutPutPick = true;` |

**Notes:**

> 砍伐或者挖掘时是否会产出采摘的果实

---

### Property `InteractDefinition`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<USmartObjectDefinition>` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TSoftObjectPtr<USmartObjectDefinition> InteractDefinition;` |

**Notes:**

> 采集交互定义

---

### Property `bCanBeDestroy`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bCanBeDestroy{false};` |

**Notes:**

> 收割生长物品是/否破坏 (疑似没有在用)

---

### Property `Health`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int Health {-1};` |

**Notes:**

> 健康值  填写“-1”的时候，为无限健康值，该采集物不会受到伤害。

---

### Property `DamageLoss`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float DamageLoss = 0.5;` |

**Notes:**

> 被破坏后产出的资源百分比

---

### Property `GirdSize`

| Field | Details |
|------|------|
| C++ type | `FVector2D` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FVector2D GirdSize{0,0};` |

**Notes:**

> 种植采集物地格 rxc

---

### Property `PlantType`

| Field | Details |
|------|------|
| C++ type | [ECollectPlantType](ItemStruct__ECollectPlantType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") ECollectPlantType PlantType = ECollectPlantType::None;` |

**Notes:**

> 种植分类

---

### Property `PlantNeedAttribute`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<FGameplayAttribute,float> PlantNeedAttribute;` |

**Notes:**

> 种植该植物对角色属性的需求

---

### Property `PlantDefinition`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<USmartObjectDefinition>` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TSoftObjectPtr<USmartObjectDefinition> PlantDefinition;` |

**Notes:**

> 种植交互定义

---

### Property `PlantDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int PlantDurability{-1};` |

**Notes:**

> 种植耐久度

---

### Property `FellDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int FellDurability{-1};` |

**Notes:**

> 砍伐耐久度

---

### Property `HarvestDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int HarvestDurability{-1};` |

**Notes:**

> 收割耐久度

---

### Property `MiningDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int MiningDurability{-1};` |

**Notes:**

> 开采耐久度

---

### Property `LowestGrowTemperature`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float LowestGrowTemperature = 0.f;` |

**Notes:**

> 最低生长温度

---

### Property `Attributes`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<FGameplayAttribute,float> Attributes;` |

**Notes:**

> 需要的属性值 例如务农属性等级 才能采集或者砍伐

---

### Property `bCuttingAnimation`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bCuttingAnimation = false;` |

**Notes:**

> 是否播放砍伐动画

---

### Property `DestroyedActionID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TArray<FName> DestroyedActionID;` |

**Notes:**

> 销毁采集物的行为id

---

### Property `RemovedActionID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TArray<FName> RemovedActionID;` |

**Notes:**

> 移除采集物的行为id

---

### Property `PlantActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FName PlantActionID;` |

**Notes:**

> 种植采集物的行为id

---

### Property `AutoHarvestStage`

| Field | Details |
|------|------|
| C++ type | [EGrowStageType](ItemStruct__EGrowStageType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") EGrowStageType AutoHarvestStage;` |

**Notes:**

> 种植采集物自动收获的阶段

---

### Property `AutoHarvestButtonType`

| Field | Details |
|------|------|
| C++ type | [ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") ECommonButtonType AutoHarvestButtonType;` |

**Notes:**

> 种植采集物自动收获的按钮操作（关联ButtonActions）

---

### Property `ToleranceTemperatureRange`

| Field | Details |
|------|------|
| C++ type | [FTemperatureRange](ItemStruct__FTemperatureRange.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FTemperatureRange ToleranceTemperatureRange;` |

**Notes:**

> 温度耐受范围（界面信息显示）

---

### Property `WeatherEfficiency`

| Field | Details |
|------|------|
| C++ type | TMap<[EERWWeather](../WorldSystem/WorldStruct__EERWWeather.md),float> |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EERWWeather,float> WeatherEfficiency;` |

**Notes:**

> 天气对生长效率的影响(天气,百分比)

---

### Property `LightEfficiency`

| Field | Details |
|------|------|
| C++ type | TMap<[EERWSeason](../WorldSystem/WorldStruct__EERWSeason.md),TObjectPtr<UCurveFloat>> |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EERWSeason,TObjectPtr<UCurveFloat>> LightEfficiency;` |

**Notes:**

> 光照对生长效率的影响(天气,百分比)

---

### Property `FarmingGradeProbabilityDescribe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FText FarmingGradeProbabilityDescribe;` |

**Notes:**

> 务农等级最低概率 富文本（界面信息显示）

---

### Property `NotFailFarmingGradeProbabilityDescribe`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FText NotFailFarmingGradeProbabilityDescribe;` |

**Notes:**

> 无失败务农等级 富文本（界面信息显示）

---

### Property `AllPutInfo`

| Field | Details |
|------|------|
| C++ type | TArray<[FOutputInformation](ItemStruct__FOutputInformation.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TArray<FOutputInformation> AllPutInfo;` |

**Notes:**

> 总产出（界面信息显示）

---

### Property `StagePutInfo`

| Field | Details |
|------|------|
| C++ type | TMap<[EGrowStageType](ItemStruct__EGrowStageType.md),[FOutputInformations](ItemStruct__FOutputInformations.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EGrowStageType,FOutputInformations> StagePutInfo;` |

**Notes:**

> 阶段产出（界面信息显示）

---

### Property `ExplorationTimes`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int32 ExplorationTimes = -1;` |

**Notes:**

> 可被探索的次数,-1为无限次

---

### Property `ExplorationInfo`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FExplorationRewards](ItemStruct__FExplorationRewards.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<int32,FExplorationRewards> ExplorationInfo;` |

**Notes:**

> 对应探索次数的奖池及需要达到的境界

---

### Property `CollectStaticMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Collect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TSoftObjectPtr<UStaticMesh> CollectStaticMesh;` |

**Notes:**

> 采集操作是替换的模型

---

### Property `ObserveDurability`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") int ObserveDurability{-1};` |

**Notes:**

> 观察耐久度

---

### Property `ObserveUnlock`

| Field | Details |
|------|------|
| C++ type | TMap<[ETechUnlockItemType](TechnologyStruct__ETechUnlockItemType.md),[FIDs](../ERW_CommonTypes__FIDs.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") TMap<ETechUnlockItemType,FIDs> ObserveUnlock;` |

**Notes:**

> 观察解锁

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observe") FText Desc;` |

**Notes:**

> 描述(观察完成后tip显示)

---

### Property `ObserveUnlockInfo`

| Field | Details |
|------|------|
| C++ type | TArray<[FObserveUnlockInfo](ObserveStruct__FObserveUnlockInfo.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") TArray<FObserveUnlockInfo> ObserveUnlockInfo;` |

**Notes:**

> 观察解锁文本(界面信息显示)

---

### Property `BeforeObserveName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText BeforeObserveName;` |

**Notes:**

> 观察前名称

---

### Property `BeforeObserveDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText BeforeObserveDescription;` |

**Notes:**

> 观察前详情描述

---

### Property `ObserveRecordDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText ObserveRecordDescription;` |

**Notes:**

> 观察记录描述(富文本)

---

### Property `NewDiscoverTexture2D`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") TSoftObjectPtr<UTexture2D> NewDiscoverTexture2D;` |

**Notes:**

> 新发现图片

---

### Property `CollectSound`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sound") TMap<FName,FName> CollectSound;` |

**Notes:**

> 物品相关的音效 key ActionID value 音效的id  读取GameSoundInfo

---
