# `class` `UGamePlayConfigurationAsset`

**源码头文件：** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 游戏配置资产

## 蓝图暴露变量

### 属性 `DefaultWorkPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int DefaultWorkPriority = 3;` |

**源码注释：**

> 默认工作优先级

---

### 属性 `WorkCostPriorityRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FWorkPriorityData](ERW_GameConfigComponent__FWorkPriorityData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<int32 , FWorkPriorityData> WorkCostPriorityRate;` |

**源码注释：**

> 优先级对应的成本增幅 key 为优先级

---

### 属性 `DefaultWorkSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FIntPoint , FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TMap<FIntPoint , FName> DefaultWorkSchedule;` |

**源码注释：**

> 默认工作日程
> TMap<时间段 , 工作日程配置行名>

---

### 属性 `DistanceCostRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float DistanceCostRate { 0.f };` |

**源码注释：**

> 每一米距离增加消耗系数

---

### 属性 `LowSkillLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float LowSkillLevel { 0.f };` |

**源码注释：**

> 低技能判定等级下限(低于该值会被判定为低技能等级)

---

### 属性 `AgentIdleRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float AgentIdleRange { 0.f };` |

**源码注释：**

> 角色闲逛范围

---

### 属性 `BuildGridExtendSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FIntPoint BuildGridExtendSize;` |

**源码注释：**

> 建造网格XY轴扩展尺寸

---

### 属性 `GlobalMaxInventory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int GlobalMaxInventory = 9999;` |

**源码注释：**

> 全局最大库存

---

### 属性 `CharacterMaxInventory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int CharacterMaxInventory = 999;` |

**源码注释：**

> 单个角色最大库存

---

### 属性 `AbilityProjectileEmitter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSubclassOf<[AAbilityProjectileEmitterBase](../AbilitySystem/Projectile/AbilityProjectileEmitterBase__AAbilityProjectileEmitterBase.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSubclassOf<AAbilityProjectileEmitterBase> AbilityProjectileEmitter;` |

**源码注释：**

> 投射物发射器

---

### 属性 `PropCostTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UCurveTable*` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) UCurveTable* PropCostTable;` |

**源码注释：**

> 属性对应消耗曲线表

---

### 属性 `AbilityProjectileBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSubclassOf<[AEastRimWorldProjectileBase](../AbilitySystem/Projectile/EastRimWorldProjectileBase__AEastRimWorldProjectileBase.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSubclassOf<AEastRimWorldProjectileBase> AbilityProjectileBase;` |

**源码注释：**

> 投射物

---

### 属性 `SceneTextActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSubclassOf<[ASceneTextActor](../AbilitySystem/SceneText/SceneTextActor__ASceneTextActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSubclassOf<ASceneTextActor> SceneTextActor;` |

**源码注释：**

> 世界场景中生成的数字Actor

---

### 属性 `PlayerTeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGenericTeamId PlayerTeamId = 1;` |

**源码注释：**

> 玩家的队伍ID

---

### 属性 `YearToSeasonValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int YearToSeasonValue = 4;` |

**源码注释：**

> 游戏时间一年等于几个季节

---

### 属性 `SeasonToDaysValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int SeasonToDaysValue = 10;` |

**源码注释：**

> 游戏时间一个季节等于多少天

---

### 属性 `DayToHoursValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int DayToHoursValue = 24;` |

**源码注释：**

> 游戏时间一天等于多少小时

---

### 属性 `HourToSecondsValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int HourToSecondsValue = 40;` |

**源码注释：**

> 游戏时间一小时等于现实多少秒

---

### 属性 `NewGameStartTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float NewGameStartTime = 240;` |

**源码注释：**

> 新游戏初始时间s

---

### 属性 `DawnTimeForSeason`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<float> DawnTimeForSeason = { 600.0,600.0,600.0,600.0 };` |

**源码注释：**

> 游戏中每个季节的黎明时间(单位百分之一小时，600就是6：00)

---

### 属性 `DuskTimeForSeason`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<float> DuskTimeForSeason = { 1800.0,1800.0,1800.0,1800.0 };` |

**源码注释：**

> 游戏中每个季节的黄昏时间(单位百分之一小时，1800就是18：00)

---

### 属性 `DistCostCurve`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UCurveFloat*` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) UCurveFloat* DistCostCurve;` |

**源码注释：**

> 距离对应消耗曲线表

---

### 属性 `WorkloadTimeInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float WorkloadTimeInterval { 0.f };` |

**源码注释：**

> 输出工作量时间间隔(秒)

---

### 属性 `RoofLayerHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RoofLayerHeight;` |

**源码注释：**

> 屋顶单层高度

---

### 属性 `RoofRidgeCornerHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RoofRidgeCornerHeight;` |

**源码注释：**

> 屋顶脊角高度

---

### 属性 `RoofPyramidalRoofHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RoofPyramidalRoofHeight;` |

**源码注释：**

> 屋顶攒尖高度

---

### 属性 `RoofWallHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RoofWallHeight;` |

**源码注释：**

> 屋顶墙高度

---

### 属性 `BuildHeightDifference`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float BuildHeightDifference;` |

**源码注释：**

> 建筑放置允许的最大高低差

---

### 属性 `BatchActionDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float BatchActionDistance { 0.f };` |

**源码注释：**

> 批量处理的Action的判断范围(单位厘米)

---

### 属性 `CommonGOAPGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> CommonGOAPGoals;` |

**源码注释：**

> 角色初始通用GOAP目标

---

### 属性 `WorkAbilityGOAPGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> WorkAbilityGOAPGoals;` |

**源码注释：**

> 需要根据能力初始化优先级的GOAP目标

---

### 属性 `AnimalCommonGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> AnimalCommonGoals;` |

**源码注释：**

> 动物初始通用GOAP目标

---

### 属性 `SummonCommonGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> SummonCommonGoals;` |

**源码注释：**

> 召唤物初始通用GOAP目标

---

### 属性 `RobotActionGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EGoapGoalType , [FRobotTypeAction](../ERW_CommonTypes__FRobotTypeAction.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TMap<EGoapGoalType , FRobotTypeAction> RobotActionGoal;` |

**源码注释：**

> 根据机关人类型和行为获取对应的goal

---

### 属性 `ActionReduceCostValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") float ActionReduceCostValue;` |

**源码注释：**

> 提升优先级对应减少Action的cost的值(正数)

---

### 属性 `CanImprovePriorityActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TArray<FName> CanImprovePriorityActions;` |

**源码注释：**

> 可以提升优先级的行为(GoalID)

---

### 属性 `SleepFloorGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UGameplayEffect>` |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TSoftClassPtr<UGameplayEffect> SleepFloorGameplayEffect;` |

**源码注释：**

> 人在地上睡觉GE

---

### 属性 `SleepNoRespondingGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UGameplayEffect>` |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TSoftClassPtr<UGameplayEffect> SleepNoRespondingGameplayEffect;` |

**源码注释：**

> 人晕倒睡觉GE

---

### 属性 `StopNoRespondingValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") float StopNoRespondingValue { 0.f };` |

**源码注释：**

> 晕倒结束疲劳百分比

---

### 属性 `SelectRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float SelectRadius = 1500;` |

**源码注释：**

> 快捷选择的范围

---

### 属性 `FabricateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EFabricateType , [FNameArr](ERW_GameConfigComponent__FNameArr.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TMap<EFabricateType , FNameArr> FabricateType;` |

**源码注释：**

> 设备种类

---

### 属性 `ProhibitAroundSelect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSubclassOf<UObject>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TArray<TSubclassOf<UObject>> ProhibitAroundSelect;` |

**源码注释：**

> 禁止快捷选择的类型

---

### 属性 `VisionRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float VisionRange = 5000;` |

**源码注释：**

> 物品数量显示的距离

---

### 属性 `ItemVisionRelativeLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FVector ItemVisionRelativeLocation;` |

**源码注释：**

> 物品数量显示UI的相对位置

---

### 属性 `ItemWidgetActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AInventoryItemWidgetActor](../Inventory/InventoryItemWidgetActor__AInventoryItemWidgetActor.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AInventoryItemWidgetActor> ItemWidgetActor;` |

**源码注释：**

> 物品显示的数量actor

---

### 属性 `CharacterStateVisionRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float CharacterStateVisionRange = 9000;` |

**源码注释：**

> 角色状态和伤害数字显示的距离

---

### 属性 `MoodCheckTimeInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float MoodCheckTimeInterval { 0.f };` |

**源码注释：**

> 角色心情检测时间间隔(秒)

---

### 属性 `MoodRiseValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float MoodRiseValue { 0.f };` |

**源码注释：**

> 角色心情上升百分比

---

### 属性 `MoodDescendValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float MoodDescendValue { 0.f };` |

**源码注释：**

> 角色心情下降百分比

---

### 属性 `ItemActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AInventoryItemSet](../Inventory/InventoryItemSet__AInventoryItemSet.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AInventoryItemSet> ItemActorClass;` |

**源码注释：**

> 通用物品Actor

---

### 属性 `SaveAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayAttribute>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGameplayAttribute> SaveAttributes;` |

**源码注释：**

> 保存的属性

---

### 属性 `DanTianExperienceMaxValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DanTianExperienceMaxValue;` |

**源码注释：**

> 丹田经验值上限

---

### 属性 `ItemQualityName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EItemQuality,FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EItemQuality,FText> ItemQualityName;` |

**源码注释：**

> 物品品质名称

---

### 属性 `ItemQualityBGTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EItemQuality,TSoftObjectPtr<UTexture2D>>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EItemQuality,TSoftObjectPtr<UTexture2D>> ItemQualityBGTexture;` |

**源码注释：**

> 物品tip品质背景图片

---

### 属性 `ItemQualityFrameTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EItemQuality,TSoftObjectPtr<UTexture2D>>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EItemQuality,TSoftObjectPtr<UTexture2D>> ItemQualityFrameTexture;` |

**源码注释：**

> 物品icon品质框图片

---

### 属性 `CanManageItemTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ECanManageTagType , [FGameplayTagArr](ERW_GameConfigComponent__FGameplayTagArr.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<ECanManageTagType , FGameplayTagArr> CanManageItemTags;` |

**源码注释：**

> 可以管理的物品Tag

---

### 属性 `CanManageActionGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FManageGoalName](ERW_GameConfigComponent__FManageGoalName.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FManageGoalName> CanManageActionGoals;` |

**源码注释：**

> 可以管理的行为goal

---

### 属性 `CanManageStallIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<int32> CanManageStallIndex;` |

**源码注释：**

> 可以管理的货柜ID

---

### 属性 `ChaAttributeCateDict`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECharacterAttributeCategoryType,FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<ECharacterAttributeCategoryType,FText> ChaAttributeCateDict;` |

**源码注释：**

> 角色属性分类名称设置

---

### 属性 `MartialArtsAttributeCateDict`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EMartialArtsAttributeClassification,FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EMartialArtsAttributeClassification,FText> MartialArtsAttributeCateDict;` |

**源码注释：**

> 武学属性分类名称设置

---

### 属性 `CharacterClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftClassPtr<AEastRimWorldCharacter> CharacterClass;` |

**源码注释：**

> 角色类型

---

### 属性 `CharacterUnderRoofTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGameplayTagContainer CharacterUnderRoofTag;` |

**源码注释：**

> 角色在屋檐下或者室内添加的tag

---

### 属性 `CharacterWorldSpaceDurationBuffs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EStorageSpace,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EStorageSpace,FNameIDArray> CharacterWorldSpaceDurationBuffs;` |

**源码注释：**

> 角色所处空间环境变更时添加的持续性buff

---

### 属性 `UnderRoofEnvironTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EEnvironType>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<EEnvironType> UnderRoofEnvironTypes;` |

**源码注释：**

> 是屋檐下或者室内的环境类型

---

### 属性 `CharacterUpdateInfoInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float CharacterUpdateInfoInterval;` |

**源码注释：**

> 角色信息更新间隔

---

### 属性 `CharacterExchangeOwndCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") int32 CharacterExchangeOwndCoin;` |

**源码注释：**

> 弟子兑换行为时需要有的货币

---

### 属性 `CharacterExchangeInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float CharacterExchangeInterval;` |

**源码注释：**

> 弟子兑换行为检测间隔（秒）

---

### 属性 `CharacterExchangeProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float CharacterExchangeProbability;` |

**源码注释：**

> 弟子兑换行为的概率

---

### 属性 `CharacterExchangeGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") FName CharacterExchangeGoal;` |

**源码注释：**

> 弟子兑换行为的Goal

---

### 属性 `ProductTypeInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FProductTypeInfo](ERW_GameConfigComponent__FProductTypeInfo.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") TMap<int32 , FProductTypeInfo> ProductTypeInfo;` |

**源码注释：**

> 珍宝阁商品分类信息

---

### 属性 `ProductSubType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , FText>` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") TMap<int32 , FText> ProductSubType;` |

**源码注释：**

> 珍宝阁商品子分类名称

---

### 属性 `PayrollInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float PayrollInterval;` |

**源码注释：**

> 弟子例银发放时间间隔

---

### 属性 `AutomaticReplenishmentTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float AutomaticReplenishmentTime;` |

**源码注释：**

> 自动补货时间

---

### 属性 `ForceReputationTransformation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float ForceReputationTransformation;` |

**源码注释：**

> 例银与声望转化比

---

### 属性 `ForceReputationTransformationFormulaA`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float ForceReputationTransformationFormulaA;` |

**源码注释：**

> 珍宝阁获得声望计算公式参数A

---

### 属性 `ForceReputationTransformationFormulaB`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float ForceReputationTransformationFormulaB;` |

**源码注释：**

> 珍宝阁获得声望计算公式参数B

---

### 属性 `ForceReputationTransformationFormulaC`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") float ForceReputationTransformationFormulaC;` |

**源码注释：**

> 珍宝阁获得声望计算公式参数C

---

### 属性 `CharacterBackpacksInitSlots`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") int32 CharacterBackpacksInitSlots;` |

**源码注释：**

> 角色初始背包格子数

---

### 属性 `TreasureAddMoodRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FTreasureAddMoodRule](../ERW_CommonTypes__FTreasureAddMoodRule.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") TMap<int32 , FTreasureAddMoodRule> TreasureAddMoodRule;` |

**源码注释：**

> 弟子兑换行为触发的心情增减规则

---

### 属性 `InitStalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , FText>` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") TMap<int32 , FText> InitStalls;` |

**源码注释：**

> 初始化货架

---

### 属性 `StallTotalSlot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") int32 StallTotalSlot;` |

**源码注释：**

> 每个货架总栏位

---

### 属性 `StallInitSlot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Treasure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere , Category = "Treasure") int32 StallInitSlot;` |

**源码注释：**

> 每个货架初始解锁栏位

---

### 属性 `MouseTraceIgnoreDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MouseTraceIgnoreDistance{0.f};` |

**源码注释：**

> 鼠标射线检测的忽略距离

---

### 属性 `MateTotalSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MateTotalSchedule;` |

**源码注释：**

> 繁育总进度

---

### 属性 `MateAddSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float MateAddSchedule;` |

**源码注释：**

> 每次动画增加的繁育进度

---

### 属性 `AnimalOutputTotalSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float AnimalOutputTotalSchedule;` |

**源码注释：**

> 动物产出总进度

---

### 属性 `AnimalOutputAddSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float AnimalOutputAddSchedule;` |

**源码注释：**

> 每次动画增加的动物产出进度

---

### 属性 `PregnantTotalSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float PregnantTotalSchedule;` |

**源码注释：**

> 生产总进度

---

### 属性 `PregnantAddSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float PregnantAddSchedule;` |

**源码注释：**

> 每次动画增加的生产进度

---

### 属性 `MaxRobotNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 MaxRobotNum;` |

**源码注释：**

> 最大机关人数量

---

### 属性 `MartialArtsAttributeTypeDict`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EMartialArtsMajorCategories,[FFMartialArtsCateInfo](../Struct/MartialArts__FFMartialArtsCateInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EMartialArtsMajorCategories,FFMartialArtsCateInfo> MartialArtsAttributeTypeDict;` |

**源码注释：**

> 武学属性类型属性

---

### 属性 `WeaponTypeNameDict`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EWeaponType,FText>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EWeaponType,FText> WeaponTypeNameDict;` |

**源码注释：**

> 武器名称配置表

---

### 属性 `WeaponTypeTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EWeaponType,TSoftObjectPtr<UTexture2D>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EWeaponType,TSoftObjectPtr<UTexture2D>> WeaponTypeTexture;` |

**源码注释：**

> 武器类型图标

---

### 属性 `ArmorTypeNameDict`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EArmorType,FText>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<EArmorType,FText> ArmorTypeNameDict;` |

**源码注释：**

> 防具名称配置表

---

### 属性 `OneTreatTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float OneTreatTime = 300.f;` |

**源码注释：**

> 单次治愈伤势持续时间(伤势治疗间隔)

---

### 属性 `SummonsBattleTypeNameDict`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ESummonsBattleType,FText>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<ESummonsBattleType,FText> SummonsBattleTypeNameDict;` |

**源码注释：**

> 傀儡战斗类型名称

---

### 属性 `HungerInjuryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FName HungerInjuryId = "Hunger";` |

**源码注释：**

> 饥饿伤势ID

---

### 属性 `AnimalEatSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float AnimalEatSchedule;` |

**源码注释：**

> 动物进食所需总进度（仅用于食槽进食）

---

### 属性 `AnimalEatEverTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float AnimalEatEverTime;` |

**源码注释：**

> 动物进食每执行一遍动画所加的进度（仅用于食槽进食）

---

### 属性 `AnimalRandomDie`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float AnimalRandomDie;` |

**源码注释：**

> 动物成长值达到最大后，后续每次增长随机死亡的概率(0-1)

---

### 属性 `BaseAddition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float BaseAddition = 4.f;` |

**源码注释：**

> 治疗质量的基础效果

---

### 属性 `QtAdd1Percent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float QtAdd1Percent = 0.08f;` |

**源码注释：**

> 每1%质量加成增加的治疗效果

---

### 属性 `TreatDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float TreatDurability = 200.f;` |

**源码注释：**

> 治疗耐久度

---

### 属性 `RecuperateTriggerValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RecuperateTriggerValue = 0.5f;` |

**源码注释：**

> 疗养触发百分比(生命值百分比低于这个触发疗养)

---

### 属性 `RecuperateEndValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float RecuperateEndValue = 0.55f;` |

**源码注释：**

> 疗养终止百分比(生命值百分比高于这个终止疗养)

---

### 属性 `NutritionTriggerValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float NutritionTriggerValue = 0.1f;` |

**源码注释：**

> 饥饿触发吃饭百分比

---

### 属性 `LightHurtLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float LightHurtLevel = 0.18f;` |

**源码注释：**

> 伤害程度公式：轻度(界定值)

---

### 属性 `MediumHurtLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float MediumHurtLevel = 0.36f;` |

**源码注释：**

> 伤害程度公式：中度(界定值)

---

### 属性 `EntranceArrowLightColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FLinearColor EntranceArrowLightColor;` |

**源码注释：**

> 建筑入口箭头高亮显示颜色

---

### 属性 `EntranceArrowNormalColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FLinearColor EntranceArrowNormalColor;` |

**源码注释：**

> 建筑入口箭头普通颜色

---

### 属性 `EntranceArrowDisableColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) FLinearColor EntranceArrowDisableColor;` |

**源码注释：**

> 建筑入口箭头不可用颜色

---

### 属性 `GoapGoalIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EGoapGoalType,FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TMap<EGoapGoalType,FName> GoapGoalIds;` |

**源码注释：**

> Goap Goal的id映射

---

### 属性 `GoapGoalCantAbortOtherGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FIDs](../ERW_CommonTypes__FIDs.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Goap" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere, Category="Goap") TMap<FName,FIDs> GoapGoalCantAbortOtherGoal;` |

**源码注释：**

> 角色执行GOAP需要打断其他角色当前行为时，他的goal不能打断其他角色的哪些goal

---

### 属性 `HurtTopValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float HurtTopValue { 1.f };` |

**源码注释：**

> 受伤健康值提示设置

---

### 属性 `HurtBottomValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float HurtBottomValue { 0.5f };` |

---

### 属性 `DyingTopValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float DyingTopValue { 0.5f };` |

---

### 属性 `DyingBottomValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float DyingBottomValue { 0.f };` |

---

### 属性 `LanguageMapping`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,FText>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TMap<FString,FText> LanguageMapping;` |

**源码注释：**

> 国际化语言映射

---

### 属性 `InitOrderGameplayAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayAttribute>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) TArray<FGameplayAttribute> InitOrderGameplayAttribute;` |

**源码注释：**

> 角色属性初始化顺序

---

### 属性 `BuildEffectRangeLineSetting`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FPathTracerSetting](../ERW_CommonTypes__FPathTracerSetting.md) |
| 反射说明符 | BlueprintReadOnly, Category="PathTracer" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere ,Category="PathTracer") FPathTracerSetting BuildEffectRangeLineSetting;` |

**源码注释：**

> 组合建筑核心影响范围样条线设置

---

### 属性 `ReadBookCostDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float ReadBookCostDurability = 10.f;` |

**源码注释：**

> 阅读需要消耗的耐久度

---

### 属性 `WriteCopyCostDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , EditAnywhere) float WriteCopyCostDurability = 25.f;` |

**源码注释：**

> 抄录需要扣除的耐久度

---

### 属性 `PowerfulHumanCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TMap<FGameplayAttribute,float> PowerfulHumanCondition;` |

**源码注释：**

> 强力角色的属性要求

---

### 属性 `AttributeFightingScoreRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TMap<FGameplayAttribute,float> AttributeFightingScoreRate;` |

**源码注释：**

> 属性战力评估系数

---

### 属性 `ManAkSwitchValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAkSwitchValue *` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) class UAkSwitchValue * ManAkSwitchValue;` |

**源码注释：**

> 男音效切换

---

### 属性 `WomanAkSwitchValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAkSwitchValue *` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) class UAkSwitchValue * WomanAkSwitchValue;` |

**源码注释：**

> 女音效切换

---

### 属性 `ForceJobTypeName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EForceJobType,FText>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) TMap<EForceJobType,FText> ForceJobTypeName;` |

**源码注释：**

> 门派职位名称

---

### 属性 `ForceApparels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EArmorType,[FNameIDArray](../Struct/CommonStruct__FNameIDArray.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EArmorType,FNameIDArray> ForceApparels;` |

**源码注释：**

> 可选门派服饰

---

### 属性 `DialogueWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UCommonActivatableWidget>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UCommonActivatableWidget> DialogueWidget;` |

**源码注释：**

> 对话UI

---

### 属性 `ResourceTypeTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FResourceTypeTextForTag](../Struct/ItemStruct__FResourceTypeTextForTag.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceTypeTextForTag> ResourceTypeTag;` |

---

### 属性 `ResourceWorthTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FResourceTypeTextForTag](../Struct/ItemStruct__FResourceTypeTextForTag.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FResourceTypeTextForTag> ResourceWorthTag;` |

**源码注释：**

> 玩家财富点数统计的资源类型标签

---

### 属性 `EnvironTypes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EEnvironType>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EEnvironType> EnvironTypes;` |

**源码注释：**

> 财富点数统计的建筑类型

---

### 属性 `TransportToTaskPlaceUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Task" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Task") TSoftClassPtr<UEastRimWorldActivatableWidget> TransportToTaskPlaceUI;` |

**源码注释：**

> 传送弟子到任务地点界面

---

### 属性 `ChangeCostStoragePriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int ChangeCostStoragePriority = -10;` |

**源码注释：**

> 储存优先级的变化

---
