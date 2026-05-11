# `class` `UERW_GameInstanceBase`

**Source header:** `EastRimWorld/Framework/ERW_GameInstanceBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `GamePlaySpeedAkAudioEvent`

| Field | Details |
|------|------|
| C++ type | `TMap<int,UAkAudioEvent*>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,UAkAudioEvent*> GamePlaySpeedAkAudioEvent;` |

---

### Property `RecoverAkAudioEvent`

| Field | Details |
|------|------|
| C++ type | `UAkAudioEvent *` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UAkAudioEvent * RecoverAkAudioEvent = nullptr;` |

**Source comments:**

> 恢复

---

### Property `RunGameMode`

| Field | Details |
|------|------|
| C++ type | `ERunGameMode` |
| Reflection specifiers | BlueprintReadWrite, Category="DebugGameMode" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DebugGameMode") ERunGameMode RunGameMode = ERunGameMode::Debug;` |

**Source comments:**

> 运行模式

---

### Property `RunGamePlatform`

| Field | Details |
|------|------|
| C++ type | `ERunGamePlatform` |
| Reflection specifiers | BlueprintReadWrite, Category="RunGamePlatform" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="RunGamePlatform") ERunGamePlatform RunGamePlatform = ERunGamePlatform::None;` |

**Source comments:**

> 运行的平台

---

### Property `DLCInformationAsset`

| Field | Details |
|------|------|
| C++ type | TArray<[UDLCInformationAsset](../DLC/DLCSubsystem__UDLCInformationAsset.md)*> |
| Reflection specifiers | BlueprintReadWrite, Category="DLC" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DLC") TArray<UDLCInformationAsset*> DLCInformationAsset;` |

**Source comments:**

> DlC信息资产 测试时使用

---

### Property `NewGameTeamMemberNumLimit`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 NewGameTeamMemberNumLimit;` |

**Source comments:**

> -------------------新游戏 Start------------------------

---

### Property `NewGameCharacterIdMap`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName,bool> NewGameCharacterIdMap;` |

**Source comments:**

> 新游戏同伴数据id,是否固定携带

---

### Property `NewGameProtagonist`

| Field | Details |
|------|------|
| C++ type | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FEastRimWorldHumanData NewGameProtagonist;` |

**Source comments:**

> 新游戏主角数据

---

### Property `NewGameProtagonistBuffIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FName> NewGameProtagonistBuffIds;` |

**Source comments:**

> 新游戏主角初始buff

---

### Property `NewGameTeamBuffs`

| Field | Details |
|------|------|
| C++ type | TArray<[FTeamBuffData](../Struct/CharacterStruct__FTeamBuffData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FTeamBuffData> NewGameTeamBuffs;` |

**Source comments:**

> 新游戏时，选择剧本带来的团队的全局buff

---

### Property `StoryProtagonistSkillPoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 StoryProtagonistSkillPoint;` |

**Source comments:**

> 新游戏时，选择剧本带来的主角技能点数

---

### Property `StoryProtagonistFirePoint`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) int32 StoryProtagonistFirePoint;` |

**Source comments:**

> 新游戏时，选择剧本带来的主角兴趣点数

---

### Property `NewGameForceId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FName NewGameForceId;` |

**Source comments:**

> 新游戏势力类型

---

### Property `NewGameResources`

| Field | Details |
|------|------|
| C++ type | TArray<[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FItemSimpleData> NewGameResources;` |

**Source comments:**

> 新游戏初始物资

---

### Property `NewGameAnimals`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName,int32> NewGameAnimals;` |

**Source comments:**

> 新游戏动物id,数量

---

### Property `StoryBackgroundAnswerIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FName> StoryBackgroundAnswerIds;` |

**Source comments:**

> 选择的故事背景选项id(StoryBackgroundAnswer)

---

### Property `StandpointType`

| Field | Details |
|------|------|
| C++ type | `EStandpointType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) EStandpointType StandpointType;` |

**Source comments:**

> 玩家立场观点

---

### Property `NewGameUnlockFormula`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockFormula;` |

**Source comments:**

> 新游戏解锁的配方ID

---

### Property `NewGameUnlockBuilding`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockBuilding;` |

**Source comments:**

> 新游戏解锁的建筑ID（建造列表中可见）

---

### Property `NewGameUnlockPlant`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockPlant;` |

**Source comments:**

> 新游戏解锁的种植物ID

---

### Property `CurGameSpeedName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName CurGameSpeedName = FName("Running");` |

**Source comments:**

> 当前游戏速度名称

---

### Property `SpeedIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere , BlueprintReadOnly) int32 SpeedIndex { 1 };` |

**Source comments:**

> 当前游戏倍速

---

### Property `NewGameSelectedStationPlace`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName NewGameSelectedStationPlace;` |

**Source comments:**

> 新游戏选择的玩家驻地

---

### Property `GameDataAsset`

| Field | Details |
|------|------|
| C++ type | `TMap<EGameDataAssetType,UDataAsset*>` |
| Reflection specifiers | BlueprintReadWrite, Category="Asset" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Asset") TMap<EGameDataAssetType,UDataAsset*> GameDataAsset;` |

---

### Property `NewGameUnlockFunction`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockFunction;` |

**Source comments:**

> 新游戏功能ID

---

### Property `NewGameDifficultyOption`

| Field | Details |
|------|------|
| C++ type | `EDifficultyOption` |
| Reflection specifiers | BlueprintReadWrite, Category="DifficultyOption" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") EDifficultyOption NewGameDifficultyOption = EDifficultyOption::Normal;` |

**Source comments:**

> 新游戏难度类型

---

### Property `NewGameDifficultyCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="DifficultyOption" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") float NewGameDifficultyCoefficient = 1.0f;` |

**Source comments:**

> 新游戏难度系数

---

### Property `NewGameEnemyRaidFrequencyCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="DifficultyOption" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") float NewGameEnemyRaidFrequencyCoefficient = 1.f;` |

**Source comments:**

> 新游戏敌人进攻频率系数

---

### Property `NewRaidRulesetId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="DifficultyOption" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") FName NewRaidRulesetId;` |

**Source comments:**

> 新游戏袭击生成规则

---

### Property `OnLoadGameWorldSucceed`

| Field | Details |
|------|------|
| C++ type | `FOnLoadGameWorldSucceed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnLoadGameWorldSucceed OnLoadGameWorldSucceed;` |

**Source comments:**

> -------------------新游戏 End------------------------

---

### Property `OnLoadSubLevelSucceed`

| Field | Details |
|------|------|
| C++ type | `FOnLoadSubLevelSucceed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnLoadSubLevelSucceed OnLoadSubLevelSucceed;` |

---

### Property `OnCloseSubLevelSucceed`

| Field | Details |
|------|------|
| C++ type | `FOnCloseSubLevelSucceed` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCloseSubLevelSucceed OnCloseSubLevelSucceed;` |

---

### Property `OnSaveGameFinish`

| Field | Details |
|------|------|
| C++ type | `FOnSaveGameFinish` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnSaveGameFinish OnSaveGameFinish;` |

---

### Property `OnSettingChangeDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnSettingChangeDelegate` |
| Reflection specifiers | BlueprintCallable, BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FOnSettingChangeDelegate OnSettingChangeDelegate;` |

---

### Property `OnReturnMainMenu`

| Field | Details |
|------|------|
| C++ type | `FOnReturnMainMenu` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnReturnMainMenu OnReturnMainMenu;` |

---

### Property `DefaultSaviorSlot`

| Field | Details |
|------|------|
| C++ type | `USavior *` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) USavior * DefaultSaviorSlot;` |

**Source comments:**

> 默认的存档实例

---

### Property `DefaultCurrencySaveData`

| Field | Details |
|------|------|
| C++ type | [USaveGlobalGameData](../SaveGame/SaveGlobalGameData__USaveGlobalGameData.md) * |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) USaveGlobalGameData * DefaultCurrencySaveData;` |

**Source comments:**

> 积分存档

---

### Property `CurrencySaveSlotName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FString CurrencySaveSlotName = "CurrencySaveSlot";` |

**Source comments:**

> 积分存档名称

---

### Property `OnOpenWorldMapDelegate`

| Field | Details |
|------|------|
| C++ type | `FOnOpenWorldMapDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnOpenWorldMapDelegate OnOpenWorldMapDelegate;` |

**Source comments:**

> 开启地图广播

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

**Source comments:**

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

**Source comments:**

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

---

### Function `IsSaveSlotVersionLowerThanGameVersion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="SaveGame" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SaveGame") bool IsSaveSlotVersionLowerThanGameVersion();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---

### Function `GetSaveCurrencyObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [USaveGlobalGameData](../SaveGame/SaveGlobalGameData__USaveGlobalGameData.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) USaveGlobalGameData * GetSaveCurrencyObject();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---
