# `class` `UERW_GameInstanceBase`

**源码头文件:** `EastRimWorld/Framework/ERW_GameInstanceBase.h`

---

## 功能说明（来自头文件注释）

> GameInstance 基类，负责存读档、关卡加载、返回主菜单、游戏速度、新游戏与平台配置等

## 蓝图暴露变量

### 属性 `GamePlaySpeedAkAudioEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,UAkAudioEvent*>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,UAkAudioEvent*> GamePlaySpeedAkAudioEvent;` |

**说明:**

> 各游戏倍速对应的 Wwise 音频事件表（倍速索引 → AkAudioEvent）

---

### 属性 `RecoverAkAudioEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UAkAudioEvent *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UAkAudioEvent * RecoverAkAudioEvent = nullptr;` |

**说明:**

> 恢复

---

### 属性 `RunGameMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERunGameMode](ERW_GameInstanceBase__ERunGameMode.md) |
| 反射说明符 | BlueprintReadWrite, Category="DebugGameMode" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DebugGameMode") ERunGameMode RunGameMode = ERunGameMode::Debug;` |

**说明:**

> 运行模式

---

### 属性 `RunGamePlatform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERunGamePlatform](ERW_GameInstanceBase__ERunGamePlatform.md) |
| 反射说明符 | BlueprintReadWrite, Category="RunGamePlatform" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="RunGamePlatform") ERunGamePlatform RunGamePlatform = ERunGamePlatform::None;` |

**说明:**

> 运行的平台

---

### 属性 `DLCInformationAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[UDLCInformationAsset](../DLC/DLCSubsystem__UDLCInformationAsset.md)*> |
| 反射说明符 | BlueprintReadWrite, Category="DLC" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DLC") TArray<UDLCInformationAsset*> DLCInformationAsset;` |

**说明:**

> DlC信息资产 测试时使用

---

### 属性 `NewGameTeamMemberNumLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 NewGameTeamMemberNumLimit;` |

**说明:**

> -------------------新游戏 Start------------------------

---

### 属性 `NewGameCharacterIdMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName,bool> NewGameCharacterIdMap;` |

**说明:**

> 新游戏同伴数据id,是否固定携带

---

### 属性 `NewGameProtagonist`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FEastRimWorldHumanData NewGameProtagonist;` |

**说明:**

> 新游戏主角数据

---

### 属性 `NewGameProtagonistBuffIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FName> NewGameProtagonistBuffIds;` |

**说明:**

> 新游戏主角初始buff

---

### 属性 `NewGameTeamBuffs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTeamBuffData](../Struct/CharacterStruct__FTeamBuffData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FTeamBuffData> NewGameTeamBuffs;` |

**说明:**

> 新游戏时，选择剧本带来的团队的全局buff

---

### 属性 `StoryProtagonistSkillPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 StoryProtagonistSkillPoint;` |

**说明:**

> 新游戏时，选择剧本带来的主角技能点数

---

### 属性 `StoryProtagonistFirePoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 StoryProtagonistFirePoint;` |

**说明:**

> 新游戏时，选择剧本带来的主角兴趣点数

---

### 属性 `NewGameForceId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName NewGameForceId;` |

**说明:**

> 新游戏势力类型

---

### 属性 `NewGameResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FItemSimpleData> NewGameResources;` |

**说明:**

> 新游戏初始物资

---

### 属性 `NewGameAnimals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName,int32> NewGameAnimals;` |

**说明:**

> 新游戏动物id,数量

---

### 属性 `StoryBackgroundAnswerIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FName> StoryBackgroundAnswerIds;` |

**说明:**

> 选择的故事背景选项id(StoryBackgroundAnswer)

---

### 属性 `StandpointType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EStandpointType](../Struct/CharacterStruct__EStandpointType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) EStandpointType StandpointType;` |

**说明:**

> 玩家立场观点

---

### 属性 `NewGameUnlockFormula`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockFormula;` |

**说明:**

> 新游戏解锁的配方ID

---

### 属性 `NewGameUnlockBuilding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockBuilding;` |

**说明:**

> 新游戏解锁的建筑ID（建造列表中可见）

---

### 属性 `NewGameUnlockPlant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockPlant;` |

**说明:**

> 新游戏解锁的种植物ID

---

### 属性 `CurGameSpeedName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName CurGameSpeedName = FName("Running");` |

**说明:**

> 当前游戏速度名称

---

### 属性 `SpeedIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadOnly) int32 SpeedIndex { 1 };` |

**说明:**

> 当前游戏倍速

---

### 属性 `NewGameSelectedStationPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName NewGameSelectedStationPlace;` |

**说明:**

> 新游戏选择的玩家驻地

---

### 属性 `GameDataAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EGameDataAssetType](../Components/ERW_GameConfigComponent__EGameDataAssetType.md),UDataAsset*> |
| 反射说明符 | BlueprintReadWrite, Category="Asset" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Asset") TMap<EGameDataAssetType,UDataAsset*> GameDataAsset;` |

**说明:**

> 按类型索引的游戏数据资产表（EGameDataAssetType → DataAsset）

---

### 属性 `NewGameUnlockFunction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockFunction;` |

**说明:**

> 新游戏功能ID

---

### 属性 `EnableBeginnerGuide`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool EnableBeginnerGuide { true };` |

**说明:**

> 是否开启新手引导

---

### 属性 `AttributeChangeSpeedRow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName AttributeChangeSpeedRow;` |

**说明:**

> 角色属性变化速度行名（GE DataTable 行）

---

### 属性 `MartialArtsExperienceBonusRow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName MartialArtsExperienceBonusRow;` |

**说明:**

> 武学经验加成行名（GE DataTable 行）

---

### 属性 `EnemyStrengthRow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName EnemyStrengthRow;` |

**说明:**

> 敌人强度行名（GE DataTable 行）

---

### 属性 `DifficultyData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FLevelConfigData](../ERW_ConfigTypes__FLevelConfigData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FLevelConfigData DifficultyData;` |

**说明:**

> 难度选择数据

---

### 属性 `DifficultyId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName DifficultyId;` |

**说明:**

> 选择的难度对应的配置表ID

---

### 属性 `ResetResourceSelection`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool ResetResourceSelection { false };` |

**说明:**

> 是否重置资源选项

---

### 属性 `ResetStorySelection`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool ResetStorySelection { false };` |

**说明:**

> 是否重置剧本选项

---

### 属性 `ResetFeatureSelection`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool ResetFeatureSelection { false };` |

**说明:**

> 是否重置特性选项

---

### 属性 `NewGameDifficultyOption`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EDifficultyOption](../Struct/CommonEnum__EDifficultyOption.md) |
| 反射说明符 | BlueprintReadWrite, Category="DifficultyOption" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") EDifficultyOption NewGameDifficultyOption = EDifficultyOption::Normal;` |

**说明:**

> 新游戏难度类型

---

### 属性 `NewGameDifficultyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="DifficultyOption" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") float NewGameDifficultyCoefficient = 1.0f;` |

**说明:**

> 新游戏难度系数

---

### 属性 `NewGameEnemyRaidFrequencyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="DifficultyOption" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") float NewGameEnemyRaidFrequencyCoefficient = 1.f;` |

**说明:**

> 新游戏敌人进攻频率系数

---

### 属性 `NewRaidRulesetId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="DifficultyOption" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") FName NewRaidRulesetId;` |

**说明:**

> 新游戏袭击生成规则

---

### 属性 `OnLoadGameWorldSucceed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnLoadGameWorldSucceed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnLoadGameWorldSucceed OnLoadGameWorldSucceed;` |

**说明:**

> -------------------新游戏 End------------------------

---

### 属性 `OnLoadSubLevelSucceed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnLoadSubLevelSucceed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnLoadSubLevelSucceed OnLoadSubLevelSucceed;` |

**说明:**

> 加载子关卡成功时广播的委托（携带关卡名）

---

### 属性 `OnCloseSubLevelSucceed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCloseSubLevelSucceed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCloseSubLevelSucceed OnCloseSubLevelSucceed;` |

**说明:**

> 关闭子关卡成功时广播的委托（携带关卡名）

---

### 属性 `OnSaveGameFinish`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSaveGameFinish` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnSaveGameFinish OnSaveGameFinish;` |

**说明:**

> 存档完成时广播的委托（是否成功、槽位 ID）

---

### 属性 `OnSettingChangeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSettingChangeDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FOnSettingChangeDelegate OnSettingChangeDelegate;` |

**说明:**

> 游戏设置变更时广播的委托

---

### 属性 `OnReturnMainMenu`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnReturnMainMenu` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnReturnMainMenu OnReturnMainMenu;` |

**说明:**

> 返回主菜单时广播的委托

---

### 属性 `DefaultSaviorSlot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `USavior *` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) USavior * DefaultSaviorSlot;` |

**说明:**

> 默认的存档实例

---

### 属性 `DefaultCurrencySaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [USaveGlobalGameData](../SaveGame/SaveGlobalGameData__USaveGlobalGameData.md) * |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) USaveGlobalGameData * DefaultCurrencySaveData;` |

**说明:**

> 积分存档

---

### 属性 `CurrencySaveSlotName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FString CurrencySaveSlotName = "CurrencySaveSlot";` |

**说明:**

> 积分存档名称

---

### 属性 `OnOpenWorldMapDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnOpenWorldMapDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnOpenWorldMapDelegate OnOpenWorldMapDelegate;` |

**说明:**

> 开启地图广播

---

### 属性 `BuildingLightRadiusLevelValues`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<float>` |
| 反射说明符 | BlueprintReadOnly, Category="BuildingLight" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BuildingLight") TArray<float> BuildingLightRadiusLevelValues { 4000.f, 8000.f, 12000.f };` |

**说明:**

> -------------------建筑夜景灯光设置 Start------------------------
> 建筑夜景灯光启用半径三档值（0=小 1=中 2=大），初始值可在 BP_GameInstance 类默认值中调整

---

### 属性 `BuildingLightCountLevelValues`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadOnly, Category="BuildingLight" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BuildingLight") TArray<int32> BuildingLightCountLevelValues { 10, 20, 30 };` |

**说明:**

> 建筑夜景灯光同时点亮数量三档值（0=小 1=中 2=大）

---

### 属性 `BuildingLightRadiusLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="BuildingLight" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "BuildingLight") int32 BuildingLightRadiusLevel = 1;` |

**说明:**

> 当前启用半径等级（进程内缓存，持久化由 BP_Save_GameSetting 负责）

---

### 属性 `BuildingLightCountLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="BuildingLight" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "BuildingLight") int32 BuildingLightCountLevel = 1;` |

**说明:**

> 当前点亮数量等级（进程内缓存，持久化由 BP_Save_GameSetting 负责）

---

## 蓝图暴露函数

### 函数 `GetDLCActive`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent, Category="DLC" |
| 返回类型 | `TArray<int>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,Category="DLC") TArray<int> GetDLCActive();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 获取激活的dlc

---

### 函数 `BroadcastOnSaveGameFinish`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bSuccess` | `bool` |
| `SlotID` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void BroadcastOnSaveGameFinish(bool bSuccess,int32 SlotID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 广播存档完成事件（是否成功与槽位 ID）

---

### 函数 `SetDefaultSaviorSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewSaviorSlot` | `USavior *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetDefaultSaviorSlot(USavior * NewSaviorSlot);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置新的存档实例

---

### 函数 `GetDefaultSaviorSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, BlueprintImplementableEvent |
| 返回类型 | `USavior *` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent,BlueprintPure) USavior * GetDefaultSaviorSlot();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 获取默认的 Savior 存档实例（蓝图实现）

---

### 函数 `IsSaveSlotVersionLowerThanGameVersion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="SaveGame" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SaveGame") bool IsSaveSlotVersionLowerThanGameVersion();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 当前 DefaultSaviorSlot 的存档版本是否低于 GameVersion（无有效槽或版本格式无效时为 false）

---

### 函数 `LoadGameWorldSucceeded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LoadGameWorldSucceeded();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载成功

---

### 函数 `LoadSubLevelSucceeded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LevelName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LoadSubLevelSucceeded(FName LevelName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载子关卡成功

---

### 函数 `CloseSubLevelSucceeded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LevelName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CloseSubLevelSucceeded(FName LevelName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 关闭子关卡成功

---

### 函数 `OpenNewGame`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void OpenNewGame();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 新游戏

---

### 函数 `LoadGameWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `USavior *Slot` |
| `bReadSlotFile` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void LoadGameWorld(USavior *Slot,bool bReadSlotFile);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加载永久关卡数据 不包含子关卡

---

### 函数 `K2_LoadGameWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `USavior *Slot` |
| `bReadSlotFile` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="LoadGameWorld") void K2_LoadGameWorld(USavior *Slot,bool bReadSlotFile);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 加载永久关卡数据（不含子关卡）的蓝图实现事件

---

### 函数 `SaveGameWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `USavior *Slot` |
| `bSaveCurSubLevel` | `bool` |
| `bWriteSlotFile` | `bool` |
| `bReadSlotFile` | `bool` |
| `SlotName` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SaveGameWorld(USavior *Slot,bool bSaveCurSubLevel,bool bWriteSlotFile,bool bReadSlotFile,const FString& SlotName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 保存游戏

---

### 函数 `K2_SaveGameWorld`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `USavior *Slot` |
| `bSaveCurSubLevel` | `bool` |
| `bWriteSlotFile` | `bool` |
| `bReadSlotFile` | `bool` |
| `SlotName` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="SaveGameWorld") void K2_SaveGameWorld(USavior *Slot,bool bSaveCurSubLevel,bool bWriteSlotFile,bool bReadSlotFile,const FString& SlotName);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 保存游戏世界的蓝图实现事件

---

### 函数 `RemoveSubLevelDataRecordByGUID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `const FGuid &ActorID` |
| `SubLevelName` | `const FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RemoveSubLevelDataRecordByGUID(const FGuid &ActorID,const FName SubLevelName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除子关卡中的actor数据

---

### 函数 `RemoveAllSubLevelDataRecord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWorldPlace` | [AWorldPlace](../WorldSystem/WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool RemoveAllSubLevelDataRecord(AWorldPlace* InWorldPlace);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除子关卡所有的数据

---

### 函数 `ReturnMainMenu`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ReturnMainMenu();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 返回主菜单

---

### 函数 `K2_ReturnMainMenu`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent,DisplayName="ReturnMainMenu") void K2_ReturnMainMenu();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 返回主菜单的蓝图实现事件

---

### 函数 `GetSaveCurrencyObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [USaveGlobalGameData](../SaveGame/SaveGlobalGameData__USaveGlobalGameData.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) USaveGlobalGameData * GetSaveCurrencyObject();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取积分存档

---

### 函数 `SaveCurrencyObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SaveCurrencyObject();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 保存积分存档

---

### 函数 `IsEnableBeginnerGuide`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, BlueprintImplementableEvent |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintPure) bool IsEnableBeginnerGuide();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 是否开启新手引导

---

### 函数 `UnLockAchievement`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |
| `0` | `int32 Num =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void UnLockAchievement(FName ID,int32 Num = 0);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 解锁成就

---

### 函数 `AchievementConut`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |
| `0` | `int32 Num =` |
| `false` | `bool iscover =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, BlueprintCallable) void AchievementConut(FName ID, int32 Num = 0,bool iscover = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 成就计数 结果只作为ui展示

---

### 函数 `TestTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool TestTag();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 测试 Tag 功能的调试函数

---

### 函数 `SetBuildingLightRadiusLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="BuildingLight" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InLevel` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "BuildingLight") void SetBuildingLightRadiusLevel(int32 InLevel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置启用半径等级并即时应用到 AWorldBuildingLightManager（若已生成）

---

### 函数 `SetBuildingLightCountLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="BuildingLight" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InLevel` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "BuildingLight") void SetBuildingLightCountLevel(int32 InLevel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置点亮数量等级并即时应用到 AWorldBuildingLightManager（若已生成）

---

### 函数 `GetBuildingLightRadiusLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="BuildingLight" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "BuildingLight") int32 GetBuildingLightRadiusLevel() const { return BuildingLightRadiusLevel; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前建筑夜景灯光启用半径等级（0=小 1=中 2=大）

---

### 函数 `GetBuildingLightCountLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="BuildingLight" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "BuildingLight") int32 GetBuildingLightCountLevel() const { return BuildingLightCountLevel; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前建筑夜景灯光同时点亮数量等级（0=小 1=中 2=大）

---

### 函数 `GetBuildingLightActivateRadius`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="BuildingLight" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "BuildingLight") float GetBuildingLightActivateRadius() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 当前半径等级对应的启用半径值（供 AWorldBuildingLightManager 读取）

---

### 函数 `GetBuildingLightMaxPooledLights`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="BuildingLight" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "BuildingLight") int32 GetBuildingLightMaxPooledLights() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 当前数量等级对应的灯光池上限值（供 AWorldBuildingLightManager 读取）

---
