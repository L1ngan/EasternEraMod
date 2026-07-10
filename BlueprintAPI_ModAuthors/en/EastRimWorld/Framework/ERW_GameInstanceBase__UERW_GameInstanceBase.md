# `class` `UERW_GameInstanceBase`

**Source header:** `EastRimWorld/Framework/ERW_GameInstanceBase.h`

---

## Functional description (from header comments)

> Base GameInstance class handling save/load, level loading, returning to main menu, game speed, new-game and platform configuration

## Blueprint-exposed variables

### Property `GamePlaySpeedAkAudioEvent`

| Field | Details |
|------|------|
| C++ type | `TMap<int,UAkAudioEvent*>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,UAkAudioEvent*> GamePlaySpeedAkAudioEvent;` |

**Notes:**

> Map of Wwise audio events per game play speed (speed index to AkAudioEvent)

---

### Property `RecoverAkAudioEvent`

| Field | Details |
|------|------|
| C++ type | `UAkAudioEvent *` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UAkAudioEvent * RecoverAkAudioEvent = nullptr;` |

**Notes:**

> 恢复

---

### Property `RunGameMode`

| Field | Details |
|------|------|
| C++ type | [ERunGameMode](ERW_GameInstanceBase__ERunGameMode.md) |
| Reflection specifiers | BlueprintReadWrite, Category="DebugGameMode" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DebugGameMode") ERunGameMode RunGameMode = ERunGameMode::Debug;` |

**Notes:**

> 运行模式

---

### Property `RunGamePlatform`

| Field | Details |
|------|------|
| C++ type | [ERunGamePlatform](ERW_GameInstanceBase__ERunGamePlatform.md) |
| Reflection specifiers | BlueprintReadWrite, Category="RunGamePlatform" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="RunGamePlatform") ERunGamePlatform RunGamePlatform = ERunGamePlatform::None;` |

**Notes:**

> 运行的平台

---

### Property `DLCInformationAsset`

| Field | Details |
|------|------|
| C++ type | TArray<[UDLCInformationAsset](../DLC/DLCSubsystem__UDLCInformationAsset.md)*> |
| Reflection specifiers | BlueprintReadWrite, Category="DLC" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DLC") TArray<UDLCInformationAsset*> DLCInformationAsset;` |

**Notes:**

> DlC信息资产 测试时使用

---

### Property `NewGameTeamMemberNumLimit`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 NewGameTeamMemberNumLimit;` |

**Notes:**

> -------------------新游戏 Start------------------------

---

### Property `NewGameCharacterIdMap`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName,bool> NewGameCharacterIdMap;` |

**Notes:**

> 新游戏同伴数据id,是否固定携带

---

### Property `NewGameProtagonist`

| Field | Details |
|------|------|
| C++ type | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FEastRimWorldHumanData NewGameProtagonist;` |

**Notes:**

> 新游戏主角数据

---

### Property `NewGameProtagonistBuffIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FName> NewGameProtagonistBuffIds;` |

**Notes:**

> 新游戏主角初始buff

---

### Property `NewGameTeamBuffs`

| Field | Details |
|------|------|
| C++ type | TArray<[FTeamBuffData](../Struct/CharacterStruct__FTeamBuffData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FTeamBuffData> NewGameTeamBuffs;` |

**Notes:**

> 新游戏时，选择剧本带来的团队的全局buff

---

### Property `StoryProtagonistSkillPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 StoryProtagonistSkillPoint;` |

**Notes:**

> 新游戏时，选择剧本带来的主角技能点数

---

### Property `StoryProtagonistFirePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 StoryProtagonistFirePoint;` |

**Notes:**

> 新游戏时，选择剧本带来的主角兴趣点数

---

### Property `NewGameForceId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName NewGameForceId;` |

**Notes:**

> 新游戏势力类型

---

### Property `NewGameResources`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FItemSimpleData> NewGameResources;` |

**Notes:**

> 新游戏初始物资

---

### Property `NewGameAnimals`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName,int32> NewGameAnimals;` |

**Notes:**

> 新游戏动物id,数量

---

### Property `StoryBackgroundAnswerIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FName> StoryBackgroundAnswerIds;` |

**Notes:**

> 选择的故事背景选项id(StoryBackgroundAnswer)

---

### Property `StandpointType`

| Field | Details |
|------|------|
| C++ type | [EStandpointType](../Struct/CharacterStruct__EStandpointType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) EStandpointType StandpointType;` |

**Notes:**

> 玩家立场观点

---

### Property `NewGameUnlockFormula`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockFormula;` |

**Notes:**

> 新游戏解锁的配方ID

---

### Property `NewGameUnlockBuilding`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockBuilding;` |

**Notes:**

> 新游戏解锁的建筑ID（建造列表中可见）

---

### Property `NewGameUnlockPlant`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockPlant;` |

**Notes:**

> 新游戏解锁的种植物ID

---

### Property `CurGameSpeedName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName CurGameSpeedName = FName("Running");` |

**Notes:**

> 当前游戏速度名称

---

### Property `SpeedIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadOnly) int32 SpeedIndex { 1 };` |

**Notes:**

> 当前游戏倍速

---

### Property `NewGameSelectedStationPlace`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName NewGameSelectedStationPlace;` |

**Notes:**

> 新游戏选择的玩家驻地

---

### Property `GameDataAsset`

| Field | Details |
|------|------|
| C++ type | TMap<[EGameDataAssetType](../Components/ERW_GameConfigComponent__EGameDataAssetType.md),UDataAsset*> |
| Reflection specifiers | BlueprintReadWrite, Category="Asset" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Asset") TMap<EGameDataAssetType,UDataAsset*> GameDataAsset;` |

**Notes:**

> Map of game data assets indexed by type (EGameDataAssetType to DataAsset)

---

### Property `NewGameUnlockFunction`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockFunction;` |

**Notes:**

> 新游戏功能ID

---

### Property `EnableBeginnerGuide`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool EnableBeginnerGuide { true };` |

**Notes:**

> 是否开启新手引导

---

### Property `AttributeChangeSpeedRow`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName AttributeChangeSpeedRow;` |

**Notes:**

> 角色属性变化速度行名（GE DataTable 行）

---

### Property `MartialArtsExperienceBonusRow`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName MartialArtsExperienceBonusRow;` |

**Notes:**

> 武学经验加成行名（GE DataTable 行）

---

### Property `EnemyStrengthRow`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName EnemyStrengthRow;` |

**Notes:**

> 敌人强度行名（GE DataTable 行）

---

### Property `DifficultyData`

| Field | Details |
|------|------|
| C++ type | [FLevelConfigData](../ERW_ConfigTypes__FLevelConfigData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FLevelConfigData DifficultyData;` |

**Notes:**

> 难度选择数据

---

### Property `DifficultyId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName DifficultyId;` |

**Notes:**

> 选择的难度对应的配置表ID

---

### Property `ResetResourceSelection`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool ResetResourceSelection { false };` |

**Notes:**

> 是否重置资源选项

---

### Property `ResetStorySelection`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool ResetStorySelection { false };` |

**Notes:**

> 是否重置剧本选项

---

### Property `ResetFeatureSelection`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool ResetFeatureSelection { false };` |

**Notes:**

> 是否重置特性选项

---

### Property `NewGameDifficultyOption`

| Field | Details |
|------|------|
| C++ type | [EDifficultyOption](../Struct/CommonEnum__EDifficultyOption.md) |
| Reflection specifiers | BlueprintReadWrite, Category="DifficultyOption" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") EDifficultyOption NewGameDifficultyOption = EDifficultyOption::Normal;` |

**Notes:**

> 新游戏难度类型

---

### Property `NewGameDifficultyCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="DifficultyOption" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") float NewGameDifficultyCoefficient = 1.0f;` |

**Notes:**

> 新游戏难度系数

---

### Property `NewGameEnemyRaidFrequencyCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="DifficultyOption" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") float NewGameEnemyRaidFrequencyCoefficient = 1.f;` |

**Notes:**

> 新游戏敌人进攻频率系数

---

### Property `NewRaidRulesetId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="DifficultyOption" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") FName NewRaidRulesetId;` |

**Notes:**

> 新游戏袭击生成规则

---

### Property `OnLoadGameWorldSucceed`

| Field | Details |
|------|------|
| C++ type | `FOnLoadGameWorldSucceed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnLoadGameWorldSucceed OnLoadGameWorldSucceed;` |

**Notes:**

> -------------------新游戏 End------------------------

---

### Property `OnLoadSubLevelSucceed`

| Field | Details |
|------|------|
| C++ type | `FOnLoadSubLevelSucceed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnLoadSubLevelSucceed OnLoadSubLevelSucceed;` |

**Notes:**

> Delegate broadcast when a sub-level is loaded successfully (carries the level name)

---

### Property `OnCloseSubLevelSucceed`

| Field | Details |
|------|------|
| C++ type | `FOnCloseSubLevelSucceed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCloseSubLevelSucceed OnCloseSubLevelSucceed;` |

**Notes:**

> Delegate broadcast when a sub-level is closed successfully (carries the level name)

---

### Property `OnSaveGameFinish`

| Field | Details |
|------|------|
| C++ type | `FOnSaveGameFinish` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnSaveGameFinish OnSaveGameFinish;` |

**Notes:**

> Delegate broadcast when saving finishes (success flag and slot ID)

---

### Property `OnSettingChangeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnSettingChangeDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FOnSettingChangeDelegate OnSettingChangeDelegate;` |

**Notes:**

> Delegate broadcast when a game setting changes

---

### Property `OnReturnMainMenu`

| Field | Details |
|------|------|
| C++ type | `FOnReturnMainMenu` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnReturnMainMenu OnReturnMainMenu;` |

**Notes:**

> Delegate broadcast when returning to the main menu

---

### Property `DefaultSaviorSlot`

| Field | Details |
|------|------|
| C++ type | `USavior *` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) USavior * DefaultSaviorSlot;` |

**Notes:**

> 默认的存档实例

---

### Property `DefaultCurrencySaveData`

| Field | Details |
|------|------|
| C++ type | [USaveGlobalGameData](../SaveGame/SaveGlobalGameData__USaveGlobalGameData.md) * |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) USaveGlobalGameData * DefaultCurrencySaveData;` |

**Notes:**

> 积分存档

---

### Property `CurrencySaveSlotName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FString CurrencySaveSlotName = "CurrencySaveSlot";` |

**Notes:**

> 积分存档名称

---

### Property `OnOpenWorldMapDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnOpenWorldMapDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnOpenWorldMapDelegate OnOpenWorldMapDelegate;` |

**Notes:**

> 开启地图广播

---

### Property `BuildingLightRadiusLevelValues`

| Field | Details |
|------|------|
| C++ type | `TArray<float>` |
| Reflection specifiers | BlueprintReadOnly, Category="BuildingLight" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BuildingLight") TArray<float> BuildingLightRadiusLevelValues { 4000.f, 8000.f, 12000.f };` |

**Notes:**

> -------------------建筑夜景灯光设置 Start------------------------
> 建筑夜景灯光启用半径三档值（0=小 1=中 2=大），初始值可在 BP_GameInstance 类默认值中调整

---

### Property `BuildingLightCountLevelValues`

| Field | Details |
|------|------|
| C++ type | `TArray<int32>` |
| Reflection specifiers | BlueprintReadOnly, Category="BuildingLight" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BuildingLight") TArray<int32> BuildingLightCountLevelValues { 10, 20, 30 };` |

**Notes:**

> 建筑夜景灯光同时点亮数量三档值（0=小 1=中 2=大）

---

### Property `BuildingLightRadiusLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="BuildingLight" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "BuildingLight") int32 BuildingLightRadiusLevel = 1;` |

**Notes:**

> 当前启用半径等级（进程内缓存，持久化由 BP_Save_GameSetting 负责）

---

### Property `BuildingLightCountLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="BuildingLight" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "BuildingLight") int32 BuildingLightCountLevel = 1;` |

**Notes:**

> 当前点亮数量等级（进程内缓存，持久化由 BP_Save_GameSetting 负责）

---

## Blueprint-exposed functions

### Function `GetDLCActive`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent, Category="DLC" |
| Return type | `TArray<int>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,Category="DLC") TArray<int> GetDLCActive();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 获取激活的dlc

---

### Function `BroadcastOnSaveGameFinish`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bSuccess` | `bool` |
| `SlotID` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastOnSaveGameFinish(bool bSuccess,int32 SlotID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Broadcasts the save-game-finished event with success flag and slot ID

---

### Function `SetDefaultSaviorSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewSaviorSlot` | `USavior *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetDefaultSaviorSlot(USavior * NewSaviorSlot);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置新的存档实例

---

### Function `GetDefaultSaviorSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, BlueprintImplementableEvent |
| Return type | `USavior *` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent,BlueprintPure) USavior * GetDefaultSaviorSlot();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Returns the default Savior save slot instance (implemented in Blueprint)

---

### Function `IsSaveSlotVersionLowerThanGameVersion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="SaveGame" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SaveGame") bool IsSaveSlotVersionLowerThanGameVersion();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前 DefaultSaviorSlot 的存档版本是否低于 GameVersion（无有效槽或版本格式无效时为 false）

---

### Function `LoadGameWorldSucceeded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LoadGameWorldSucceeded();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加载成功

---

### Function `LoadSubLevelSucceeded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LoadSubLevelSucceeded(FName LevelName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加载子关卡成功

---

### Function `CloseSubLevelSucceeded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CloseSubLevelSucceeded(FName LevelName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 关闭子关卡成功

---

### Function `OpenNewGame`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void OpenNewGame();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 新游戏

---

### Function `LoadGameWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `USavior *Slot` |
| `bReadSlotFile` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void LoadGameWorld(USavior *Slot,bool bReadSlotFile);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加载永久关卡数据 不包含子关卡

---

### Function `K2_LoadGameWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `USavior *Slot` |
| `bReadSlotFile` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="LoadGameWorld") void K2_LoadGameWorld(USavior *Slot,bool bReadSlotFile);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint-implemented event for loading persistent level data (excluding sub-levels)

---

### Function `SaveGameWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `USavior *Slot` |
| `bSaveCurSubLevel` | `bool` |
| `bWriteSlotFile` | `bool` |
| `bReadSlotFile` | `bool` |
| `SlotName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SaveGameWorld(USavior *Slot,bool bSaveCurSubLevel,bool bWriteSlotFile,bool bReadSlotFile,const FString& SlotName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 保存游戏

---

### Function `K2_SaveGameWorld`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `USavior *Slot` |
| `bSaveCurSubLevel` | `bool` |
| `bWriteSlotFile` | `bool` |
| `bReadSlotFile` | `bool` |
| `SlotName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="SaveGameWorld") void K2_SaveGameWorld(USavior *Slot,bool bSaveCurSubLevel,bool bWriteSlotFile,bool bReadSlotFile,const FString& SlotName);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint-implemented event for saving the game world

---

### Function `RemoveSubLevelDataRecordByGUID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `const FGuid &ActorID` |
| `SubLevelName` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemoveSubLevelDataRecordByGUID(const FGuid &ActorID,const FName SubLevelName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除子关卡中的actor数据

---

### Function `RemoveAllSubLevelDataRecord`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWorldPlace` | [AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool RemoveAllSubLevelDataRecord(AWorldPlace* InWorldPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除子关卡所有的数据

---

### Function `ReturnMainMenu`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReturnMainMenu();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 返回主菜单

---

### Function `K2_ReturnMainMenu`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent,DisplayName="ReturnMainMenu") void K2_ReturnMainMenu();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Blueprint-implemented event for returning to the main menu

---

### Function `GetSaveCurrencyObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [USaveGlobalGameData](../SaveGame/SaveGlobalGameData__USaveGlobalGameData.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) USaveGlobalGameData * GetSaveCurrencyObject();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取积分存档

---

### Function `SaveCurrencyObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SaveCurrencyObject();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 保存积分存档

---

### Function `IsEnableBeginnerGuide`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, BlueprintImplementableEvent |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) bool IsEnableBeginnerGuide();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters. Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 是否开启新手引导

---

### Function `UnLockAchievement`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |
| `0` | `int32 Num =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void UnLockAchievement(FName ID,int32 Num = 0);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 解锁成就

---

### Function `AchievementConut`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |
| `0` | `int32 Num =` |
| `false` | `bool iscover =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void AchievementConut(FName ID, int32 Num = 0,bool iscover = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 成就计数 结果只作为ui展示

---

### Function `TestTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TestTag();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Debug function for testing tag functionality

---

### Function `SetBuildingLightRadiusLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="BuildingLight" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InLevel` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "BuildingLight") void SetBuildingLightRadiusLevel(int32 InLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置启用半径等级并即时应用到 AWorldBuildingLightManager（若已生成）

---

### Function `SetBuildingLightCountLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="BuildingLight" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InLevel` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "BuildingLight") void SetBuildingLightCountLevel(int32 InLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置点亮数量等级并即时应用到 AWorldBuildingLightManager（若已生成）

---

### Function `GetBuildingLightRadiusLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="BuildingLight" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "BuildingLight") int32 GetBuildingLightRadiusLevel() const { return BuildingLightRadiusLevel; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the current building night-light activation radius level (0=low, 1=medium, 2=high)

---

### Function `GetBuildingLightCountLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="BuildingLight" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "BuildingLight") int32 GetBuildingLightCountLevel() const { return BuildingLightCountLevel; }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the current building night-light concurrent count level (0=low, 1=medium, 2=high)

---

### Function `GetBuildingLightActivateRadius`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="BuildingLight" |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "BuildingLight") float GetBuildingLightActivateRadius() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前半径等级对应的启用半径值（供 AWorldBuildingLightManager 读取）

---

### Function `GetBuildingLightMaxPooledLights`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="BuildingLight" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "BuildingLight") int32 GetBuildingLightMaxPooledLights() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 当前数量等级对应的灯光池上限值（供 AWorldBuildingLightManager 读取）

---
