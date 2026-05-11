# `class` `ASaveGameDataActor`

**Source header:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `TechnologyMgr`

| Field | Details |
|------|------|
| C++ type | [UERW_TechnologyMgr](../Components/ERW_TechnologyMgr__UERW_TechnologyMgr.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UERW_TechnologyMgr* TechnologyMgr { nullptr };` |

**Source comments:**

> 科技管理组件

---

### Property `CommonTaskComponent`

| Field | Details |
|------|------|
| C++ type | [UCommonTaskComponent](../System/Task/CommonTaskComponent__UCommonTaskComponent.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) UCommonTaskComponent* CommonTaskComponent { nullptr };` |

**Source comments:**

> 新手引导任务组件

---

### Property `LogComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UCommonLogComponent](../Components/CommonLogComponent__UCommonLogComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere,SaveGame) TObjectPtr<UCommonLogComponent> LogComponent;` |

**Source comments:**

> 日志组件

---

### Property `OnObserveScheduleChange`

| Field | Details |
|------|------|
| C++ type | `FOnObserveScheduleChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnObserveScheduleChange OnObserveScheduleChange;` |

**Source comments:**

> 当观察进度改变时

---

### Property `OnObserveComplete`

| Field | Details |
|------|------|
| C++ type | `FOnObserveScheduleChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnObserveScheduleChange OnObserveComplete;` |

**Source comments:**

> 当观察完成时

---

### Property `OnGameFunctionChange`

| Field | Details |
|------|------|
| C++ type | `FOnFunctionChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnFunctionChange OnGameFunctionChange;` |

---

### Property `OnNewBuildChange`

| Field | Details |
|------|------|
| C++ type | `FOnBuildUnlockChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBuildUnlockChange OnNewBuildChange;` |

**Source comments:**

> 新出现的建筑

---

### Property `OnUnlockItemTag`

| Field | Details |
|------|------|
| C++ type | `FUnlockItemTag` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FUnlockItemTag OnUnlockItemTag;` |

**Source comments:**

> 当物品解锁时

---

### Property `OnPlayerTeamBuffChange`

| Field | Details |
|------|------|
| C++ type | `FOnPlayerTeamBuffChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPlayerTeamBuffChange OnPlayerTeamBuffChange;` |

**Source comments:**

> 当玩家方buff状态改变时

---

### Property `OnBuildingConstructionNumChange`

| Field | Details |
|------|------|
| C++ type | `FOnBuildingConstructionNumChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBuildingConstructionNumChange OnBuildingConstructionNumChange;` |

---

### Property `UnlockFormula`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockFormula;` |

**Source comments:**

> 解锁的配方ID

---

### Property `UnlockBuilding`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockBuilding;` |

**Source comments:**

> 解锁的建筑ID（建造列表中可见）

---

### Property `UnlockPlant`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockPlant;` |

**Source comments:**

> 解锁的种植物id

---

### Property `UnlockGameFunction`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> UnlockGameFunction;` |

**Source comments:**

> 解锁的功能ID

---

### Property `EnteredSubLevels`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly,SaveGame) TArray<FName> EnteredSubLevels;` |

**Source comments:**

> 进入过的关卡

---

### Property `IsCustomWorkPriority`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) bool IsCustomWorkPriority { false };` |

**Source comments:**

> 工作优先级UI是否是自定义优先级

---

### Property `UnlockItem`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> UnlockItem;` |

**Source comments:**

> 已经解锁的物品列表

---

### Property `UnlockCollect`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FName> UnlockCollect;` |

**Source comments:**

> 已经解锁的采集物

---

### Property `UnlockItemTagContainer`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FGameplayTagContainer UnlockItemTagContainer;` |

---

### Property `ObservedObjectRecordMap`

| Field | Details |
|------|------|
| C++ type | TMap<EObserveObjectType,[FObserveObjectsRecordMap](../Struct/ObserveStruct__FObserveObjectsRecordMap.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EObserveObjectType,FObserveObjectsRecordMap> ObservedObjectRecordMap;` |

**Source comments:**

> 已经观察完成的对象记录

---

### Property `ObservingObjectProgress`

| Field | Details |
|------|------|
| C++ type | TMap<EObserveObjectType,[FObserveProgressesMap](../Struct/ObserveStruct__FObserveProgressesMap.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<EObserveObjectType,FObserveProgressesMap> ObservingObjectProgress;` |

**Source comments:**

> 观察进度

---

### Property `TeamInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FGenericTeamId,[FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGenericTeamId,FGameplayTeamInfo> TeamInfos;` |

**Source comments:**

> 所有的阵营记录的阵营信息

---

### Property `TeamChangeInformationInfos`

| Field | Details |
|------|------|
| C++ type | TArray<[FTeamChangeInformationInfo](../Struct/CharacterStruct__FTeamChangeInformationInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FTeamChangeInformationInfo> TeamChangeInformationInfos;` |

**Source comments:**

> 存储两个阵营关系变动

---

### Property `GlobalBuffs`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FCommonBuff> GlobalBuffs;` |

**Source comments:**

> 存档的全局buff信息 不区分阵营 不区分地点

---

### Property `BuildingConstructionNum`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FName,int32> BuildingConstructionNum;` |

**Source comments:**

> 修建过的建筑物数量

---

### Property `UnlockItemTipArr`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FName> UnlockItemTipArr;` |

**Source comments:**

> 刚解锁物品的红点提示提

---

### Property `UnlockResourTab`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame) TArray<FString> UnlockResourTab;` |

**Source comments:**

> 资源栏已经解锁的标签栏位 用图片资源路径作为标记

---

### Property `CharacterLetterMap`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid, [FCharacterLetterData](../System/Letterpaper/BirdLetterSystem__FCharacterLetterData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame) TMap<FGuid, FCharacterLetterData> CharacterLetterMap;` |

**Source comments:**

> 信笺数据

---

### Property `CurRobotNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame ) int32 CurRobotNum;` |

**Source comments:**

> 当前已激活的机关人数量

---

### Property `Stalls`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FStallInfo](../Components/TreasureComponent__FStallInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame ) TMap<int32 , FStallInfo> Stalls;` |

**Source comments:**

> 当前保存的珍宝阁货架信息

---

### Property `UnlockStallSlots`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame ) int32 UnlockStallSlots;` |

**Source comments:**

> 当前已解锁的货架槽位

---

### Property `DeathNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 DeathNum;` |

**Source comments:**

> 玩家角色死亡计数 用于解锁成就

---

### Property `PurpleMakeNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 PurpleMakeNum;` |

**Source comments:**

> 玩家紫色装备制造计数 用于解锁成就

---

### Property `GoldGeteNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 GoldGeteNum;` |

**Source comments:**

> 玩家金色装备获取计数 用于解锁成就

---

### Property `GoldWriteCopyNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 GoldWriteCopyNum;` |

**Source comments:**

> 玩家金色书籍抄录计数 用于解锁成就

---

### Property `AnimalTame`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) TMap<FName,int32> AnimalTame;` |

**Source comments:**

> 玩家驯服动物类型数组 用于解锁成就

---

### Property `MartialArtsWinNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 MartialArtsWinNum = 0;` |

**Source comments:**

> 玩家累计切磋胜利计数 用于解锁成就

---

### Property `MartialArtsFaileNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 MartialArtsFaileNum = 0;` |

**Source comments:**

> 玩家累计切磋失败计数 用于解锁成就

---

### Property `continuityWin`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FGuid> continuityWin;` |

**Source comments:**

> 玩家连续切磋失败数组 用于解锁成就

---

### Property `continuityFaile`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FGuid> continuityFaile;` |

**Source comments:**

> 玩家连续切磋成功数组 用于解锁成就

---

### Property `TradeGetGoodNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeGetGoodNum = 0;` |

**Source comments:**

> 玩家交易累计获得商品数量 用于解锁成就

---

### Property `TradeSaleGoodNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeSaleGoodNum = 0;` |

**Source comments:**

> 玩家交易累计出售商品数量 用于解锁成就

---

### Property `TradeGetmoney`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TradeGetmoney = 0;` |

**Source comments:**

> 玩家交易累计获得铜币数量 用于解锁成就

---

### Property `TameAnimal`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) int32 TameAnimal = 0;` |

**Source comments:**

> 玩家交易累计驯服动物数量 用于解锁成就

---

### Property `Version`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FString Version = TEXT("0.1");` |

**Source comments:**

> 版本号

---

### Property `ManageResource`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) TMap<FName , int32> ManageResource;` |

**Source comments:**

> 资源管理界面资源及其数量

---

### Property `BuildingNumData`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FBuildingNumData](../System/Letterpaper/BirdLetterSystem__FBuildingNumData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) TMap<FName , FBuildingNumData> BuildingNumData;` |

**Source comments:**

> 资源管理界面资源及其数量

---

### Property `CurGameDifficultyOption`

| Field | Details |
|------|------|
| C++ type | `EDifficultyOption` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) EDifficultyOption CurGameDifficultyOption = EDifficultyOption::Normal;` |

**Source comments:**

> 当前难度类型

---

### Property `CurGameDifficultyCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) float CurGameDifficultyCoefficient = 1.f;` |

**Source comments:**

> 当前难度系数

---

### Property `CurEnemyRaidFrequencyCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) float CurEnemyRaidFrequencyCoefficient = 1.f;` |

**Source comments:**

> 敌人进攻频率系数

---

### Property `CurRaidRulesetId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly,SaveGame) FName CurRaidRulesetId;` |

**Source comments:**

> 袭击规则配置

---

### Property `ProtagonistData`

| Field | Details |
|------|------|
| C++ type | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FEastRimWorldHumanData ProtagonistData;` |

**Source comments:**

> 主角的角色信息

---

### Property `PlayerInitialPlace`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FSoftObjectPath PlayerInitialPlace;` |

**Source comments:**

> 玩家的初始地点

---

## Blueprint-exposed functions

### Function `GetSaveGameDataActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [ASaveGameDataActor](SaveGameDataActor__ASaveGameDataActor.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) static ASaveGameDataActor * GetSaveGameDataActor();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `InitSaveGameDataActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitSaveGameDataActor();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `UnlockNewFormula`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewFormulaID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockNewFormula(FName InNewFormulaID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解锁新配方

---

### Function `IsCanUseFormula`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewFormulaID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsCanUseFormula(FName InNewFormulaID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否是可以使用的配方

---

### Function `UnlockNewBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewBuildingID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockNewBuilding(FName InNewBuildingID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解锁新的建筑（在建造列表中可见，但不一定能建造）

---

### Function `AddStall`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StallName` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddStall(FText StallName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 科技添加添加货架

---

### Function `AddStallSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddSlots` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddStallSlot(int32 AddSlots);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 科技增加货架槽位

---

### Function `IsCanBuildBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewBuildingID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsCanBuildBuilding(FName InNewBuildingID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 判断是否是可以建造的建筑（满足初次解锁的条件）

---

### Function `IsCanBuildBuildingTab`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewBuildingTabID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsCanBuildBuildingTab(FName InNewBuildingTabID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 判断是否是可以建造的建筑分类

---

### Function `GetAllBuildingTip`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `IsUnlockBuilding` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) TArray<FName> GetAllBuildingTip(bool IsUnlockBuilding);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 返回解锁的建筑或植物提示的ID数组

---

### Function `UnlockNewPlant`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewPlantID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockNewPlant(FName InNewPlantID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解锁新的种植物

---

### Function `UnlockNewFunction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FunctionId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockNewFunction(FName FunctionId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解锁新的功能

---

### Function `HaveEnteredSubLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HaveEnteredSubLevel(FName LevelName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否进入过

---

### Function `EnterSubLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EnterSubLevel(FName LevelName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加进入过的子关卡

---

### Function `RemoveEnteredSubLevelRecord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveEnteredSubLevelRecord(FName LevelName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除进入记录

---

### Function `UnlockNewItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewItemID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockNewItem(FName InNewItemID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解锁新物品

---

### Function `UnlockNewCollect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNewCollectID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockNewCollect(FName InNewCollectID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解锁新的采集物

---

### Function `HaveUnlockedItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItem(FName InItemID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否解锁对应的物品

---

### Function `HaveUnlockedCollect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCollectID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HaveUnlockedCollect(FName InCollectID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否解锁对应的采集物

---

### Function `UnlockItemTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UnlockItemTag(const FGameplayTag & GameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解锁物品类型tag

---

### Function `HaveUnlockedItemTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItemTag(const FGameplayTag & GameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否已经解锁了对应的Tag

---

### Function `HaveUnlockedItemTagContainer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayTags` | `const FGameplayTagContainer &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HaveUnlockedItemTagContainer(const FGameplayTagContainer & GameplayTags);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 是否已经解锁了对应的Tag

---

### Function `AddObserveSchedule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ObserveType` | `const EObserveObjectType&` |
| `ObjectId` | `const FName&` |
| `ObserveDurability` | `const int32&` |
| `InWorkload` | `const float&` |
| `CharacterId` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float AddObserveSchedule(const EObserveObjectType& ObserveType,const FName& ObjectId,const int32& ObserveDurability,const float& InWorkload,const FGuid& CharacterId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 添加观察进度(需要注意采集物输入的id应该是其GamePlayTag的Name)

---

### Function `CheckIsObserved`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ObserveType` | `const EObserveObjectType&` |
| `ObjectId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckIsObserved(const EObserveObjectType& ObserveType,const FName& ObjectId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 检查是否已经完成观察(需要注意采集物输入的id应该是其GamePlayTag的Name)

---

### Function `GetCurObserveSchedule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ObserveType` | `const EObserveObjectType&` |
| `ObjectId` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurObserveSchedule(const EObserveObjectType& ObserveType,const FName& ObjectId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取当前观察进度量(如果已经完成了观察返回-1)

---

### Function `GetGameplayTeamInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `FGenericTeamId` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FGameplayTeamInfo GetGameplayTeamInfo(FGenericTeamId TeamId) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查找对应的阵营信息

---

### Function `GetGameplayTeamBuffs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `FGenericTeamId` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetGameplayTeamBuffs(FGenericTeamId TeamId) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取对应的存档TeamBuff

---

### Function `ChangeTeamRelationship`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SourceTeamId` | `FGenericTeamId` |
| `TargetTeamId` | `FGenericTeamId` |
| `TeamRelationship` | `ETeamAttitude::Type` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ChangeTeamRelationship(FGenericTeamId SourceTeamId,FGenericTeamId TargetTeamId,ETeamAttitude::Type TeamRelationship);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 改变阵营关系

---

### Function `GetProtagonistData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FEastRimWorldHumanData GetProtagonistData() const {return ProtagonistData;}`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取主角信息

---

### Function `AddBuildingConstructionNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuildingID` | `const FName&` |
| `InAddNum` | `const int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddBuildingConstructionNum(const FName& InBuildingID,const int32& InAddNum);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 增加已建造建筑数量

---

### Function `GetAllForceLogByGuid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InForceGuid` | `const FGuid&` |
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllForceLogByGuid(const FGuid& InForceGuid,TArray<FCommonLogData>& OutLogs) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 通过势力guid获取对应的所有日志

---

### Function `GetAllForceLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllForceLog(TArray<FCommonLogData>& OutLogs) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取对所有势力日志

---

### Function `GetAllNotPlayerForceLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllNotPlayerForceLog(TArray<FCommonLogData>& OutLogs) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取所有非玩家势力日志

---

### Function `GetAllForceNewLogNum`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetAllForceNewLogNum() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取所有势力新日志的数量

---

### Function `GetAllBigMapLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllBigMapLog(TArray<FCommonLogData>& OutLogs) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取所有大地图日志

---

### Function `GetAllPlayerLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutLogs` | TArray<[FCommonLogData](../Struct/CommonLogStruct__FCommonLogData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetAllPlayerLog(TArray<FCommonLogData>& OutLogs) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取所有玩家日志

---

### Function `IsAnyForceHaveNewLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsAnyForceHaveNewLog() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 任意势力是否有新日志

---

### Function `IsForceHaveNewLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InForceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsForceHaveNewLog(const FGuid& InForceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 指定势力是否有新日志

---

### Function `IsNotPlayerForceHaveNewLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsNotPlayerForceHaveNewLog() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 非玩家势力是否有新日志

---

### Function `SaveInitProtagonistAppearance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable) void SaveInitProtagonistAppearance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 存储主角的初始外观

---

### Function `GenerateForceAttackLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForceName` | `const FString&` |
| `EnemyForceName` | `const FString&` |
| `PlaceName` | `const FString&` |
| `ForceGuid` | `const FGuid&` |
| `TeamId` | `const int&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GenerateForceAttackLog(const FString& ForceName,const FString& EnemyForceName,const FString& PlaceName,const FGuid& ForceGuid,const int& TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 势力进攻日志

---
