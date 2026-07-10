# `struct` `FCollectItem`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 资源参数(采集物，矿物)

## 蓝图暴露变量

### 属性 `CollectItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECollectItemType](ItemStruct__ECollectItemType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") ECollectItemType CollectItemType = ECollectItemType::None;` |

**说明:**

> 采集物类型

---

### 属性 `bCanGrow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bCanGrow = true;` |

**说明:**

> 是否可以生长

---

### 属性 `GrowStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGrowStage](ItemStruct__FGrowStage.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TArray<FGrowStage> GrowStage;` |

**说明:**

> 分为多少个阶段 每个阶段持续多长时间 必须存在一个阶段 不可生长为 None 阶段

---

### 属性 `GrowingTimeConsuming`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float GrowingTimeConsuming = 0.f;` |

**说明:**

> 生长耗时 秒（界面信息显示）

---

### 属性 `GrownRipeningTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float GrownRipeningTime = 0.f;` |

**说明:**

> 成熟耗时 秒（界面信息显示）

---

### 属性 `GrownInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float GrownInterval = 0.f;` |

**说明:**

> 成熟间隔 秒（界面信息显示） 0 为没有

---

### 属性 `GrowEfficiencyBySoil`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EGroundSoilType](../ERW_Enumerations__EGroundSoilType.md),float> |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EGroundSoilType,float> GrowEfficiencyBySoil;` |

**说明:**

> 土质对应的生长效率 加值 todo....废弃

---

### 属性 `MinGroundRichPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float MinGroundRichPercent;` |

**说明:**

> 最低土壤肥沃度

---

### 属性 `bOutPutFruit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bOutPutFruit = true;` |

**说明:**

> 是否会结出果实

---

### 属性 `bCutOrDig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bCutOrDig = true;` |

**说明:**

> 是否可以砍伐或者挖掘

---

### 属性 `OutputByStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EGrowStageType](ItemStruct__EGrowStageType.md),[FCollectedGroup](ItemStruct__FCollectedGroup.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EGrowStageType,FCollectedGroup> OutputByStage;` |

**说明:**

> 每个阶段对应的产出数据

---

### 属性 `CutOrDigOutPutPick`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool CutOrDigOutPutPick = true;` |

**说明:**

> 砍伐或者挖掘时是否会产出采摘的果实

---

### 属性 `InteractDefinition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<USmartObjectDefinition>` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TSoftObjectPtr<USmartObjectDefinition> InteractDefinition;` |

**说明:**

> 采集交互定义

---

### 属性 `bCanBeDestroy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bCanBeDestroy{false};` |

**说明:**

> 收割生长物品是/否破坏 (疑似没有在用)

---

### 属性 `Health`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int Health {-1};` |

**说明:**

> 健康值  填写“-1”的时候，为无限健康值，该采集物不会受到伤害。

---

### 属性 `DamageLoss`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float DamageLoss = 0.5;` |

**说明:**

> 被破坏后产出的资源百分比

---

### 属性 `GirdSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FVector2D GirdSize{0,0};` |

**说明:**

> 种植采集物地格 rxc

---

### 属性 `PlantType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECollectPlantType](ItemStruct__ECollectPlantType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") ECollectPlantType PlantType = ECollectPlantType::None;` |

**说明:**

> 种植分类

---

### 属性 `PlantNeedAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<FGameplayAttribute,float> PlantNeedAttribute;` |

**说明:**

> 种植该植物对角色属性的需求

---

### 属性 `PlantDefinition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<USmartObjectDefinition>` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TSoftObjectPtr<USmartObjectDefinition> PlantDefinition;` |

**说明:**

> 种植交互定义

---

### 属性 `PlantDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int PlantDurability{-1};` |

**说明:**

> 种植耐久度

---

### 属性 `FellDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int FellDurability{-1};` |

**说明:**

> 砍伐耐久度

---

### 属性 `HarvestDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int HarvestDurability{-1};` |

**说明:**

> 收割耐久度

---

### 属性 `MiningDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int MiningDurability{-1};` |

**说明:**

> 开采耐久度

---

### 属性 `LowestGrowTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") float LowestGrowTemperature = 0.f;` |

**说明:**

> 最低生长温度

---

### 属性 `Attributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<FGameplayAttribute,float> Attributes;` |

**说明:**

> 需要的属性值 例如务农属性等级 才能采集或者砍伐

---

### 属性 `bCuttingAnimation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") bool bCuttingAnimation = false;` |

**说明:**

> 是否播放砍伐动画

---

### 属性 `DestroyedActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TArray<FName> DestroyedActionID;` |

**说明:**

> 销毁采集物的行为id

---

### 属性 `RemovedActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TArray<FName> RemovedActionID;` |

**说明:**

> 移除采集物的行为id

---

### 属性 `PlantActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FName PlantActionID;` |

**说明:**

> 种植采集物的行为id

---

### 属性 `AutoHarvestStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGrowStageType](ItemStruct__EGrowStageType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") EGrowStageType AutoHarvestStage;` |

**说明:**

> 种植采集物自动收获的阶段

---

### 属性 `AutoHarvestButtonType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") ECommonButtonType AutoHarvestButtonType;` |

**说明:**

> 种植采集物自动收获的按钮操作（关联ButtonActions）

---

### 属性 `ToleranceTemperatureRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FTemperatureRange](ItemStruct__FTemperatureRange.md) |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FTemperatureRange ToleranceTemperatureRange;` |

**说明:**

> 温度耐受范围（界面信息显示）

---

### 属性 `WeatherEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EERWWeather](../WorldSystem/WorldStruct__EERWWeather.md),float> |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EERWWeather,float> WeatherEfficiency;` |

**说明:**

> 天气对生长效率的影响(天气,百分比)

---

### 属性 `LightEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EERWSeason](../WorldSystem/WorldStruct__EERWSeason.md),TObjectPtr<UCurveFloat>> |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EERWSeason,TObjectPtr<UCurveFloat>> LightEfficiency;` |

**说明:**

> 光照对生长效率的影响(天气,百分比)

---

### 属性 `FarmingGradeProbabilityDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FText FarmingGradeProbabilityDescribe;` |

**说明:**

> 务农等级最低概率 富文本（界面信息显示）

---

### 属性 `NotFailFarmingGradeProbabilityDescribe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") FText NotFailFarmingGradeProbabilityDescribe;` |

**说明:**

> 无失败务农等级 富文本（界面信息显示）

---

### 属性 `AllPutInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FOutputInformation](ItemStruct__FOutputInformation.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TArray<FOutputInformation> AllPutInfo;` |

**说明:**

> 总产出（界面信息显示）

---

### 属性 `StagePutInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EGrowStageType](ItemStruct__EGrowStageType.md),[FOutputInformations](ItemStruct__FOutputInformations.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<EGrowStageType,FOutputInformations> StagePutInfo;` |

**说明:**

> 阶段产出（界面信息显示）

---

### 属性 `ExplorationTimes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") int32 ExplorationTimes = -1;` |

**说明:**

> 可被探索的次数,-1为无限次

---

### 属性 `ExplorationInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FExplorationRewards](ItemStruct__FExplorationRewards.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TMap<int32,FExplorationRewards> ExplorationInfo;` |

**说明:**

> 对应探索次数的奖池及需要达到的境界

---

### 属性 `CollectStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Collect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collect") TSoftObjectPtr<UStaticMesh> CollectStaticMesh;` |

**说明:**

> 采集操作是替换的模型

---

### 属性 `ObserveDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") int ObserveDurability{-1};` |

**说明:**

> 观察耐久度

---

### 属性 `ObserveUnlock`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ETechUnlockItemType](TechnologyStruct__ETechUnlockItemType.md),[FIDs](../ERW_CommonTypes__FIDs.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") TMap<ETechUnlockItemType,FIDs> ObserveUnlock;` |

**说明:**

> 观察解锁

---

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observe") FText Desc;` |

**说明:**

> 描述(观察完成后tip显示)

---

### 属性 `ObserveUnlockInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FObserveUnlockInfo](ObserveStruct__FObserveUnlockInfo.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") TArray<FObserveUnlockInfo> ObserveUnlockInfo;` |

**说明:**

> 观察解锁文本(界面信息显示)

---

### 属性 `BeforeObserveName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText BeforeObserveName;` |

**说明:**

> 观察前名称

---

### 属性 `BeforeObserveDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText BeforeObserveDescription;` |

**说明:**

> 观察前详情描述

---

### 属性 `ObserveRecordDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FText ObserveRecordDescription;` |

**说明:**

> 观察记录描述(富文本)

---

### 属性 `NewDiscoverTexture2D`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") TSoftObjectPtr<UTexture2D> NewDiscoverTexture2D;` |

**说明:**

> 新发现图片

---

### 属性 `CollectSound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sound") TMap<FName,FName> CollectSound;` |

**说明:**

> 物品相关的音效 key ActionID value 音效的id  读取GameSoundInfo

---
