# `class` `UGamePlayConfigurationAsset`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> 游戏配置资产

## Blueprint-exposed variables

### Property `DefaultWorkPriority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int DefaultWorkPriority = 3;` |

**Source comments:**

> 默认工作优先级

---

### Property `WorkCostPriorityRate`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FWorkPriorityData](ERW_GameConfigComponent__FWorkPriorityData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<int32 , FWorkPriorityData> WorkCostPriorityRate;` |

**Source comments:**

> 优先级对应的成本增幅 key 为优先级

---

### Property `DefaultWorkSchedule`

| Field | Details |
|------|------|
| C++ type | `TMap<FIntPoint , FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TMap<FIntPoint , FName> DefaultWorkSchedule;` |

**Source comments:**

> 默认工作日程
> TMap<时间段 , 工作日程配置行名>

---

### Property `DistanceCostRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float DistanceCostRate { 0.f };` |

**Source comments:**

> 每一米距离增加消耗系数

---

### Property `LowSkillLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float LowSkillLevel { 0.f };` |

**Source comments:**

> 低技能判定等级下限(低于该值会被判定为低技能等级)

---

### Property `AgentIdleRange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float AgentIdleRange { 0.f };` |

**Source comments:**

> 角色闲逛范围

---

### Property `BuildGridExtendSize`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FIntPoint BuildGridExtendSize;` |

**Source comments:**

> 建造网格XY轴扩展尺寸

---

### Property `GlobalMaxInventory`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int GlobalMaxInventory = 9999;` |

**Source comments:**

> 全局最大库存

---

### Property `CharacterMaxInventory`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int CharacterMaxInventory = 999;` |

**Source comments:**

> 单个角色最大库存

---

### Property `AbilityProjectileEmitter`

| Field | Details |
|------|------|
| C++ type | TSubclassOf<[AAbilityProjectileEmitterBase](../AbilitySystem/Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSubclassOf<AAbilityProjectileEmitterBase> AbilityProjectileEmitter;` |

**Source comments:**

> 投射物发射器

---

### Property `PropCostTable`

| Field | Details |
|------|------|
| C++ type | `UCurveTable*` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) UCurveTable* PropCostTable;` |

**Source comments:**

> 属性对应消耗曲线表

---

### Property `AbilityProjectileBase`

| Field | Details |
|------|------|
| C++ type | TSubclassOf<[AEastRimWorldProjectileBase](../AbilitySystem/Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSubclassOf<AEastRimWorldProjectileBase> AbilityProjectileBase;` |

**Source comments:**

> 投射物

---

### Property `SceneTextActor`

| Field | Details |
|------|------|
| C++ type | TSubclassOf<[ASceneTextActor](../AbilitySystem/SceneText/SceneTextActor__ASceneTextActor.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSubclassOf<ASceneTextActor> SceneTextActor;` |

**Source comments:**

> 世界场景中生成的数字Actor

---

### Property `PlayerTeamId`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGenericTeamId PlayerTeamId = 1;` |

**Source comments:**

> 玩家的队伍ID

---

### Property `YearToSeasonValue`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int YearToSeasonValue = 4;` |

**Source comments:**

> 游戏时间一年等于几个季节

---

### Property `SeasonToDaysValue`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int SeasonToDaysValue = 10;` |

**Source comments:**

> 游戏时间一个季节等于多少天

---

### Property `DayToHoursValue`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int DayToHoursValue = 24;` |

**Source comments:**

> 游戏时间一天等于多少小时

---

### Property `HourToSecondsValue`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int HourToSecondsValue = 40;` |

**Source comments:**

> 游戏时间一小时等于现实多少秒

---

### Property `NewGameStartTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float NewGameStartTime = 240;` |

**Source comments:**

> 新游戏初始时间s

---

### Property `DawnTimeForSeason`

| Field | Details |
|------|------|
| C++ type | `TArray<float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<float> DawnTimeForSeason = { 600.0,600.0,600.0,600.0 };` |

**Source comments:**

> 游戏中每个季节的黎明时间(单位百分之一小时，600就是6：00)

---

### Property `DuskTimeForSeason`

| Field | Details |
|------|------|
| C++ type | `TArray<float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<float> DuskTimeForSeason = { 1800.0,1800.0,1800.0,1800.0 };` |

**Source comments:**

> 游戏中每个季节的黄昏时间(单位百分之一小时，1800就是18：00)

---

### Property `DistCostCurve`

| Field | Details |
|------|------|
| C++ type | `UCurveFloat*` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) UCurveFloat* DistCostCurve;` |

**Source comments:**

> 距离对应消耗曲线表

---

### Property `WorkloadTimeInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float WorkloadTimeInterval { 0.f };` |

**Source comments:**

> 输出工作量时间间隔(秒)

---

### Property `RoofLayerHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RoofLayerHeight;` |

**Source comments:**

> 屋顶单层高度

---

### Property `RoofRidgeCornerHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RoofRidgeCornerHeight;` |

**Source comments:**

> 屋顶脊角高度

---

### Property `RoofPyramidalRoofHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RoofPyramidalRoofHeight;` |

**Source comments:**

> 屋顶攒尖高度

---

### Property `RoofWallHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RoofWallHeight;` |

**Source comments:**

> 屋顶墙高度

---

### Property `BuildHeightDifference`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float BuildHeightDifference;` |

**Source comments:**

> 建筑放置允许的最大高低差

---

### Property `BatchActionDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float BatchActionDistance { 0.f };` |

**Source comments:**

> 批量处理的Action的判断范围(单位厘米)

---

### Property `CommonGOAPGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> CommonGOAPGoals;` |

**Source comments:**

> 角色初始通用GOAP目标

---

### Property `WorkAbilityGOAPGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> WorkAbilityGOAPGoals;` |

**Source comments:**

> 需要根据能力初始化优先级的GOAP目标

---

### Property `AnimalCommonGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> AnimalCommonGoals;` |

**Source comments:**

> 动物初始通用GOAP目标

---

### Property `SummonCommonGoals`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> SummonCommonGoals;` |

**Source comments:**

> 召唤物初始通用GOAP目标

---

### Property `RobotActionGoal`

| Field | Details |
|------|------|
| C++ type | TMap<EGoapGoalType , [FRobotTypeAction](../ERW_CommonTypes__FRobotTypeAction.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TMap<EGoapGoalType , FRobotTypeAction> RobotActionGoal;` |

**Source comments:**

> 根据机关人类型和行为获取对应的goal

---

### Property `ActionReduceCostValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") float ActionReduceCostValue;` |

**Source comments:**

> 提升优先级对应减少Action的cost的值(正数)

---

### Property `CanImprovePriorityActions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> CanImprovePriorityActions;` |

**Source comments:**

> 可以提升优先级的行为(GoalID)

---

### Property `SleepFloorGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TSoftClassPtr<UGameplayEffect> SleepFloorGameplayEffect;` |

**Source comments:**

> 人在地上睡觉GE

---

### Property `SleepNoRespondingGameplayEffect`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TSoftClassPtr<UGameplayEffect> SleepNoRespondingGameplayEffect;` |

**Source comments:**

> 人晕倒睡觉GE

---

### Property `StopNoRespondingValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Abilities" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") float StopNoRespondingValue { 0.f };` |

**Source comments:**

> 晕倒结束疲劳百分比

---

### Property `SelectRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float SelectRadius = 1500;` |

**Source comments:**

> 快捷选择的范围

---

### Property `FabricateType`

| Field | Details |
|------|------|
| C++ type | TMap<EFabricateType , [FNameArr](ERW_GameConfigComponent__FNameArr.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TMap<EFabricateType , FNameArr> FabricateType;` |

**Source comments:**

> 设备种类

---

### Property `ProhibitAroundSelect`

| Field | Details |
|------|------|
| C++ type | `TArray<TSubclassOf<UObject>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TArray<TSubclassOf<UObject>> ProhibitAroundSelect;` |

**Source comments:**

> 禁止快捷选择的类型

---

### Property `VisionRange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float VisionRange = 5000;` |

**Source comments:**

> 物品数量显示的距离

---

### Property `ItemVisionRelativeLocation`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FVector ItemVisionRelativeLocation;` |

**Source comments:**

> 物品数量显示UI的相对位置

---

### Property `ItemWidgetActor`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AInventoryItemWidgetActor](../Inventory/InventoryItemWidgetActor__AInventoryItemWidgetActor.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AInventoryItemWidgetActor> ItemWidgetActor;` |

**Source comments:**

> 物品显示的数量actor

---

### Property `CharacterStateVisionRange`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float CharacterStateVisionRange = 9000;` |

**Source comments:**

> 角色状态和伤害数字显示的距离

---

### Property `MoodCheckTimeInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float MoodCheckTimeInterval { 0.f };` |

**Source comments:**

> 角色心情检测时间间隔(秒)

---

### Property `MoodRiseValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float MoodRiseValue { 0.f };` |

**Source comments:**

> 角色心情上升百分比

---

### Property `MoodDescendValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float MoodDescendValue { 0.f };` |

**Source comments:**

> 角色心情下降百分比

---

### Property `ItemActorClass`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AInventoryItemSet> ItemActorClass;` |

**Source comments:**

> 通用物品Actor

---

### Property `SaveAttributes`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayAttribute>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGameplayAttribute> SaveAttributes;` |

**Source comments:**

> 保存的属性

---

### Property `DanTianExperienceMaxValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DanTianExperienceMaxValue;` |

**Source comments:**

> 丹田经验值上限

---

### Property `ItemQualityName`

| Field | Details |
|------|------|
| C++ type | `TMap<EItemQuality,FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EItemQuality,FText> ItemQualityName;` |

**Source comments:**

> 物品品质名称

---

### Property `ItemQualityBGTexture`

| Field | Details |
|------|------|
| C++ type | `TMap<EItemQuality,TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EItemQuality,TSoftObjectPtr<UTexture2D>> ItemQualityBGTexture;` |

**Source comments:**

> 物品tip品质背景图片

---

### Property `ItemQualityFrameTexture`

| Field | Details |
|------|------|
| C++ type | `TMap<EItemQuality,TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EItemQuality,TSoftObjectPtr<UTexture2D>> ItemQualityFrameTexture;` |

**Source comments:**

> 物品icon品质框图片

---

### Property `CanManageItemTags`

| Field | Details |
|------|------|
| C++ type | TMap<ECanManageTagType , [FGameplayTagArr](ERW_GameConfigComponent__FGameplayTagArr.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<ECanManageTagType , FGameplayTagArr> CanManageItemTags;` |

**Source comments:**

> 可以管理的物品Tag

---

### Property `CanManageActionGoals`

| Field | Details |
|------|------|
| C++ type | TArray<[FManageGoalName](ERW_GameConfigComponent__FManageGoalName.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FManageGoalName> CanManageActionGoals;` |

**Source comments:**

> 可以管理的行为goal

---

### Property `CanManageStallIndex`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> CanManageStallIndex;` |

**Source comments:**

> 可以管理的货柜ID

---

### Property `ChaAttributeCateDict`

| Field | Details |
|------|------|
| C++ type | `TMap<ECharacterAttributeCategoryType,FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<ECharacterAttributeCategoryType,FText> ChaAttributeCateDict;` |

**Source comments:**

> 角色属性分类名称设置

---

### Property `MartialArtsAttributeCateDict`

| Field | Details |
|------|------|
| C++ type | `TMap<EMartialArtsAttributeClassification,FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EMartialArtsAttributeClassification,FText> MartialArtsAttributeCateDict;` |

**Source comments:**

> 武学属性分类名称设置

---

### Property `CharacterClass`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AEastRimWorldCharacter> CharacterClass;` |

**Source comments:**

> 角色类型

---

### Property `CharacterUnderRoofTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGameplayTagContainer CharacterUnderRoofTag;` |

**Source comments:**

> 角色在屋檐下或者室内添加的tag

---

### Property `CharacterWorldSpaceDurationBuffs`

| Field | Details |
|------|------|
| C++ type | TMap<EStorageSpace,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EStorageSpace,FNameIDArray> CharacterWorldSpaceDurationBuffs;` |

**Source comments:**

> 角色所处空间环境变更时添加的持续性buff

---

### Property `UnderRoofEnvironTypes`

| Field | Details |
|------|------|
| C++ type | `TArray<EEnvironType>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<EEnvironType> UnderRoofEnvironTypes;` |

**Source comments:**

> 是屋檐下或者室内的环境类型

---

### Property `CharacterUpdateInfoInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float CharacterUpdateInfoInterval;` |

**Source comments:**

> 角色信息更新间隔

---

### Property `CharacterExchangeOwndCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") int32 CharacterExchangeOwndCoin;` |

**Source comments:**

> 弟子兑换行为时需要有的货币

---

### Property `CharacterExchangeInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float CharacterExchangeInterval;` |

**Source comments:**

> 弟子兑换行为检测间隔（秒）

---

### Property `CharacterExchangeProbability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float CharacterExchangeProbability;` |

**Source comments:**

> 弟子兑换行为的概率

---

### Property `CharacterExchangeGoal`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") FName CharacterExchangeGoal;` |

**Source comments:**

> 弟子兑换行为的Goal

---

### Property `ProductTypeInfo`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FProductTypeInfo](ERW_GameConfigComponent__FProductTypeInfo.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") TMap<int32 , FProductTypeInfo> ProductTypeInfo;` |

**Source comments:**

> 珍宝阁商品分类信息

---

### Property `ProductSubType`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , FText>` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") TMap<int32 , FText> ProductSubType;` |

**Source comments:**

> 珍宝阁商品子分类名称

---

### Property `PayrollInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float PayrollInterval;` |

**Source comments:**

> 弟子例银发放时间间隔

---

### Property `AutomaticReplenishmentTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float AutomaticReplenishmentTime;` |

**Source comments:**

> 自动补货时间

---

### Property `ForceReputationTransformation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float ForceReputationTransformation;` |

**Source comments:**

> 例银与声望转化比

---

### Property `ForceReputationTransformationFormulaA`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float ForceReputationTransformationFormulaA;` |

**Source comments:**

> 珍宝阁获得声望计算公式参数A

---

### Property `ForceReputationTransformationFormulaB`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float ForceReputationTransformationFormulaB;` |

**Source comments:**

> 珍宝阁获得声望计算公式参数B

---

### Property `ForceReputationTransformationFormulaC`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float ForceReputationTransformationFormulaC;` |

**Source comments:**

> 珍宝阁获得声望计算公式参数C

---

### Property `CharacterBackpacksInitSlots`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") int32 CharacterBackpacksInitSlots;` |

**Source comments:**

> 角色初始背包格子数

---

### Property `TreasureAddMoodRule`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FTreasureAddMoodRule](../ERW_CommonTypes__FTreasureAddMoodRule.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") TMap<int32 , FTreasureAddMoodRule> TreasureAddMoodRule;` |

**Source comments:**

> 弟子兑换行为触发的心情增减规则

---

### Property `InitStalls`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , FText>` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") TMap<int32 , FText> InitStalls;` |

**Source comments:**

> 初始化货架

---

### Property `StallTotalSlot`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") int32 StallTotalSlot;` |

**Source comments:**

> 每个货架总栏位

---

### Property `StallInitSlot`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Treasure" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") int32 StallInitSlot;` |

**Source comments:**

> 每个货架初始解锁栏位

---

### Property `MouseTraceIgnoreDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MouseTraceIgnoreDistance{0.f};` |

**Source comments:**

> 鼠标射线检测的忽略距离

---

### Property `MateTotalSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MateTotalSchedule;` |

**Source comments:**

> 繁育总进度

---

### Property `MateAddSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MateAddSchedule;` |

**Source comments:**

> 每次动画增加的繁育进度

---

### Property `AnimalOutputTotalSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float AnimalOutputTotalSchedule;` |

**Source comments:**

> 动物产出总进度

---

### Property `AnimalOutputAddSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float AnimalOutputAddSchedule;` |

**Source comments:**

> 每次动画增加的动物产出进度

---

### Property `PregnantTotalSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float PregnantTotalSchedule;` |

**Source comments:**

> 生产总进度

---

### Property `PregnantAddSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float PregnantAddSchedule;` |

**Source comments:**

> 每次动画增加的生产进度

---

### Property `MaxRobotNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 MaxRobotNum;` |

**Source comments:**

> 最大机关人数量

---

### Property `MartialArtsAttributeTypeDict`

| Field | Details |
|------|------|
| C++ type | TMap<EMartialArtsMajorCategories,[FFMartialArtsCateInfo](../Struct/MartialArts__FFMartialArtsCateInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EMartialArtsMajorCategories,FFMartialArtsCateInfo> MartialArtsAttributeTypeDict;` |

**Source comments:**

> 武学属性类型属性

---

### Property `WeaponTypeNameDict`

| Field | Details |
|------|------|
| C++ type | `TMap<EWeaponType,FText>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EWeaponType,FText> WeaponTypeNameDict;` |

**Source comments:**

> 武器名称配置表

---

### Property `WeaponTypeTexture`

| Field | Details |
|------|------|
| C++ type | `TMap<EWeaponType,TSoftObjectPtr<UTexture2D>>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EWeaponType,TSoftObjectPtr<UTexture2D>> WeaponTypeTexture;` |

**Source comments:**

> 武器类型图标

---

### Property `ArmorTypeNameDict`

| Field | Details |
|------|------|
| C++ type | `TMap<EArmorType,FText>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EArmorType,FText> ArmorTypeNameDict;` |

**Source comments:**

> 防具名称配置表

---

### Property `OneTreatTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float OneTreatTime = 300.f;` |

**Source comments:**

> 单次治愈伤势持续时间(伤势治疗间隔)

---

### Property `SummonsBattleTypeNameDict`

| Field | Details |
|------|------|
| C++ type | `TMap<ESummonsBattleType,FText>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<ESummonsBattleType,FText> SummonsBattleTypeNameDict;` |

**Source comments:**

> 傀儡战斗类型名称

---

### Property `HungerInjuryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FName HungerInjuryId = "Hunger";` |

**Source comments:**

> 饥饿伤势ID

---

### Property `AnimalEatSchedule`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float AnimalEatSchedule;` |

**Source comments:**

> 动物进食所需总进度（仅用于食槽进食）

---

### Property `AnimalEatEverTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float AnimalEatEverTime;` |

**Source comments:**

> 动物进食每执行一遍动画所加的进度（仅用于食槽进食）

---

### Property `AnimalRandomDie`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float AnimalRandomDie;` |

**Source comments:**

> 动物成长值达到最大后，后续每次增长随机死亡的概率(0-1)

---

### Property `BaseAddition`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float BaseAddition = 4.f;` |

**Source comments:**

> 治疗质量的基础效果

---

### Property `QtAdd1Percent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float QtAdd1Percent = 0.08f;` |

**Source comments:**

> 每1%质量加成增加的治疗效果

---

### Property `TreatDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float TreatDurability = 200.f;` |

**Source comments:**

> 治疗耐久度

---

### Property `RecuperateTriggerValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RecuperateTriggerValue = 0.5f;` |

**Source comments:**

> 疗养触发百分比(生命值百分比低于这个触发疗养)

---

### Property `RecuperateEndValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RecuperateEndValue = 0.55f;` |

**Source comments:**

> 疗养终止百分比(生命值百分比高于这个终止疗养)

---

### Property `NutritionTriggerValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float NutritionTriggerValue = 0.1f;` |

**Source comments:**

> 饥饿触发吃饭百分比

---

### Property `LightHurtLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float LightHurtLevel = 0.18f;` |

**Source comments:**

> 伤害程度公式：轻度(界定值)

---

### Property `MediumHurtLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float MediumHurtLevel = 0.36f;` |

**Source comments:**

> 伤害程度公式：中度(界定值)

---

### Property `EntranceArrowLightColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FLinearColor EntranceArrowLightColor;` |

**Source comments:**

> 建筑入口箭头高亮显示颜色

---

### Property `EntranceArrowNormalColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FLinearColor EntranceArrowNormalColor;` |

**Source comments:**

> 建筑入口箭头普通颜色

---

### Property `EntranceArrowDisableColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FLinearColor EntranceArrowDisableColor;` |

**Source comments:**

> 建筑入口箭头不可用颜色

---

### Property `GoapGoalIds`

| Field | Details |
|------|------|
| C++ type | `TMap<EGoapGoalType,FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TMap<EGoapGoalType,FName> GoapGoalIds;` |

**Source comments:**

> Goap Goal的id映射

---

### Property `GoapGoalCantAbortOtherGoal`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FIDs](../ERW_CommonTypes__FIDs.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Goap" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TMap<FName,FIDs> GoapGoalCantAbortOtherGoal;` |

**Source comments:**

> 角色执行GOAP需要打断其他角色当前行为时，他的goal不能打断其他角色的哪些goal

---

### Property `HurtTopValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float HurtTopValue { 1.f };` |

**Source comments:**

> 受伤健康值提示设置

---

### Property `HurtBottomValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float HurtBottomValue { 0.5f };` |

---

### Property `DyingTopValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float DyingTopValue { 0.5f };` |

---

### Property `DyingBottomValue`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float DyingBottomValue { 0.f };` |

---

### Property `LanguageMapping`

| Field | Details |
|------|------|
| C++ type | `TMap<FString,FText>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TMap<FString,FText> LanguageMapping;` |

**Source comments:**

> 国际化语言映射

---

### Property `InitOrderGameplayAttribute`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayAttribute>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TArray<FGameplayAttribute> InitOrderGameplayAttribute;` |

**Source comments:**

> 角色属性初始化顺序

---

### Property `BuildEffectRangeLineSetting`

| Field | Details |
|------|------|
| C++ type | [FPathTracerSetting](../ERW_CommonTypes__FPathTracerSetting.md) |
| Reflection specifiers | BlueprintReadOnly, Category="PathTracer" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere ,Category="PathTracer") FPathTracerSetting BuildEffectRangeLineSetting;` |

**Source comments:**

> 组合建筑核心影响范围样条线设置

---

### Property `ReadBookCostDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float ReadBookCostDurability = 10.f;` |

**Source comments:**

> 阅读需要消耗的耐久度

---

### Property `WriteCopyCostDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float WriteCopyCostDurability = 25.f;` |

**Source comments:**

> 抄录需要扣除的耐久度

---

### Property `PowerfulHumanCondition`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TMap<FGameplayAttribute,float> PowerfulHumanCondition;` |

**Source comments:**

> 强力角色的属性要求

---

### Property `AttributeFightingScoreRate`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayAttribute,float>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TMap<FGameplayAttribute,float> AttributeFightingScoreRate;` |

**Source comments:**

> 属性战力评估系数

---

### Property `ManAkSwitchValue`

| Field | Details |
|------|------|
| C++ type | `class UAkSwitchValue *` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) class UAkSwitchValue * ManAkSwitchValue;` |

**Source comments:**

> 男音效切换

---

### Property `WomanAkSwitchValue`

| Field | Details |
|------|------|
| C++ type | `class UAkSwitchValue *` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) class UAkSwitchValue * WomanAkSwitchValue;` |

**Source comments:**

> 女音效切换

---

### Property `ForceJobTypeName`

| Field | Details |
|------|------|
| C++ type | `TMap<EForceJobType,FText>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TMap<EForceJobType,FText> ForceJobTypeName;` |

**Source comments:**

> 门派职位名称

---

### Property `ForceApparels`

| Field | Details |
|------|------|
| C++ type | TMap<EArmorType,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EArmorType,FNameIDArray> ForceApparels;` |

**Source comments:**

> 可选门派服饰

---

### Property `DialogueWidget`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonActivatableWidget>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UCommonActivatableWidget> DialogueWidget;` |

**Source comments:**

> 对话UI

---

### Property `ResourceTypeTag`

| Field | Details |
|------|------|
| C++ type | TArray<[FResourceTypeTextForTag](../Struct/ItemStruct__FResourceTypeTextForTag.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceTypeTextForTag> ResourceTypeTag;` |

---

### Property `ResourceWorthTag`

| Field | Details |
|------|------|
| C++ type | TArray<[FResourceTypeTextForTag](../Struct/ItemStruct__FResourceTypeTextForTag.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceTypeTextForTag> ResourceWorthTag;` |

**Source comments:**

> 玩家财富点数统计的资源类型标签

---

### Property `EnvironTypes`

| Field | Details |
|------|------|
| C++ type | `TArray<EEnvironType>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EEnvironType> EnvironTypes;` |

**Source comments:**

> 财富点数统计的建筑类型

---

### Property `TransportToTaskPlaceUI`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Task" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Task") TSoftClassPtr<UEastRimWorldActivatableWidget> TransportToTaskPlaceUI;` |

**Source comments:**

> 传送弟子到任务地点界面

---

### Property `ChangeCostStoragePriority`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int ChangeCostStoragePriority = -10;` |

**Source comments:**

> 储存优先级的变化

---
