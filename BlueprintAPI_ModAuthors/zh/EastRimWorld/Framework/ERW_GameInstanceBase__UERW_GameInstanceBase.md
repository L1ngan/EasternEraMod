# `class` `UERW_GameInstanceBase`

**源码头文件:** `EastRimWorld/Framework/ERW_GameInstanceBase.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `GamePlaySpeedAkAudioEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,UAkAudioEvent*>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int,UAkAudioEvent*> GamePlaySpeedAkAudioEvent;` |

---

### 属性 `RecoverAkAudioEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UAkAudioEvent *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UAkAudioEvent * RecoverAkAudioEvent = nullptr;` |

**源码注释:**

> 恢复

---

### 属性 `RunGameMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ERunGameMode` |
| 反射说明符 | BlueprintReadWrite, Category="DebugGameMode" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DebugGameMode") ERunGameMode RunGameMode = ERunGameMode::Debug;` |

**源码注释:**

> 运行模式

---

### 属性 `RunGamePlatform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ERunGamePlatform` |
| 反射说明符 | BlueprintReadWrite, Category="RunGamePlatform" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="RunGamePlatform") ERunGamePlatform RunGamePlatform = ERunGamePlatform::None;` |

**源码注释:**

> 运行的平台

---

### 属性 `DLCInformationAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[UDLCInformationAsset](../DLC/DLCSubsystem__UDLCInformationAsset.md)*> |
| 反射说明符 | BlueprintReadWrite, Category="DLC" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DLC") TArray<UDLCInformationAsset*> DLCInformationAsset;` |

**源码注释:**

> DlC信息资产 测试时使用

---

### 属性 `NewGameTeamMemberNumLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 NewGameTeamMemberNumLimit;` |

**源码注释:**

> -------------------新游戏 Start------------------------

---

### 属性 `NewGameCharacterIdMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName,bool> NewGameCharacterIdMap;` |

**源码注释:**

> 新游戏同伴数据id,是否固定携带

---

### 属性 `NewGameProtagonist`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FEastRimWorldHumanData NewGameProtagonist;` |

**源码注释:**

> 新游戏主角数据

---

### 属性 `NewGameProtagonistBuffIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FName> NewGameProtagonistBuffIds;` |

**源码注释:**

> 新游戏主角初始buff

---

### 属性 `NewGameTeamBuffs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTeamBuffData](../Struct/CharacterStruct__FTeamBuffData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FTeamBuffData> NewGameTeamBuffs;` |

**源码注释:**

> 新游戏时，选择剧本带来的团队的全局buff

---

### 属性 `StoryProtagonistSkillPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 StoryProtagonistSkillPoint;` |

**源码注释:**

> 新游戏时，选择剧本带来的主角技能点数

---

### 属性 `StoryProtagonistFirePoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 StoryProtagonistFirePoint;` |

**源码注释:**

> 新游戏时，选择剧本带来的主角兴趣点数

---

### 属性 `NewGameForceId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FName NewGameForceId;` |

**源码注释:**

> 新游戏势力类型

---

### 属性 `NewGameResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FItemSimpleData> NewGameResources;` |

**源码注释:**

> 新游戏初始物资

---

### 属性 `NewGameAnimals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FName,int32> NewGameAnimals;` |

**源码注释:**

> 新游戏动物id,数量

---

### 属性 `StoryBackgroundAnswerIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FName> StoryBackgroundAnswerIds;` |

**源码注释:**

> 选择的故事背景选项id(StoryBackgroundAnswer)

---

### 属性 `StandpointType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EStandpointType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) EStandpointType StandpointType;` |

**源码注释:**

> 玩家立场观点

---

### 属性 `NewGameUnlockFormula`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockFormula;` |

**源码注释:**

> 新游戏解锁的配方ID

---

### 属性 `NewGameUnlockBuilding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockBuilding;` |

**源码注释:**

> 新游戏解锁的建筑ID（建造列表中可见）

---

### 属性 `NewGameUnlockPlant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockPlant;` |

**源码注释:**

> 新游戏解锁的种植物ID

---

### 属性 `CurGameSpeedName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName CurGameSpeedName = FName("Running");` |

**源码注释:**

> 当前游戏速度名称

---

### 属性 `SpeedIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadOnly) int32 SpeedIndex { 1 };` |

**源码注释:**

> 当前游戏倍速

---

### 属性 `NewGameSelectedStationPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName NewGameSelectedStationPlace;` |

**源码注释:**

> 新游戏选择的玩家驻地

---

### 属性 `GameDataAsset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EGameDataAssetType,UDataAsset*>` |
| 反射说明符 | BlueprintReadWrite, Category="Asset" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Asset") TMap<EGameDataAssetType,UDataAsset*> GameDataAsset;` |

---

### 属性 `NewGameUnlockFunction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) TArray<FName> NewGameUnlockFunction;` |

**源码注释:**

> 新游戏功能ID

---

### 属性 `NewGameDifficultyOption`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EDifficultyOption` |
| 反射说明符 | BlueprintReadWrite, Category="DifficultyOption" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") EDifficultyOption NewGameDifficultyOption = EDifficultyOption::Normal;` |

**源码注释:**

> 新游戏难度类型

---

### 属性 `NewGameDifficultyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="DifficultyOption" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") float NewGameDifficultyCoefficient = 1.0f;` |

**源码注释:**

> 新游戏难度系数

---

### 属性 `NewGameEnemyRaidFrequencyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="DifficultyOption" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") float NewGameEnemyRaidFrequencyCoefficient = 1.f;` |

**源码注释:**

> 新游戏敌人进攻频率系数

---

### 属性 `NewRaidRulesetId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="DifficultyOption" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "DifficultyOption") FName NewRaidRulesetId;` |

**源码注释:**

> 新游戏袭击生成规则

---

### 属性 `OnLoadGameWorldSucceed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnLoadGameWorldSucceed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnLoadGameWorldSucceed OnLoadGameWorldSucceed;` |

**源码注释:**

> -------------------新游戏 End------------------------

---

### 属性 `OnLoadSubLevelSucceed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnLoadSubLevelSucceed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnLoadSubLevelSucceed OnLoadSubLevelSucceed;` |

---

### 属性 `OnCloseSubLevelSucceed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCloseSubLevelSucceed` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCloseSubLevelSucceed OnCloseSubLevelSucceed;` |

---

### 属性 `OnSaveGameFinish`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSaveGameFinish` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnSaveGameFinish OnSaveGameFinish;` |

---

### 属性 `OnSettingChangeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSettingChangeDelegate` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FOnSettingChangeDelegate OnSettingChangeDelegate;` |

---

### 属性 `OnReturnMainMenu`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnReturnMainMenu` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnReturnMainMenu OnReturnMainMenu;` |

---

### 属性 `DefaultSaviorSlot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `USavior *` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) USavior * DefaultSaviorSlot;` |

**源码注释:**

> 默认的存档实例

---

### 属性 `DefaultCurrencySaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [USaveGlobalGameData](../SaveGame/SaveGlobalGameData__USaveGlobalGameData.md) * |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) USaveGlobalGameData * DefaultCurrencySaveData;` |

**源码注释:**

> 积分存档

---

### 属性 `CurrencySaveSlotName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FString CurrencySaveSlotName = "CurrencySaveSlot";` |

**源码注释:**

> 积分存档名称

---

### 属性 `OnOpenWorldMapDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnOpenWorldMapDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnOpenWorldMapDelegate OnOpenWorldMapDelegate;` |

**源码注释:**

> 开启地图广播

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

**源码注释:**

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

**源码注释:**

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

---

### 函数 `IsSaveSlotVersionLowerThanGameVersion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="SaveGame" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SaveGame") bool IsSaveSlotVersionLowerThanGameVersion();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

---

### 函数 `GetSaveCurrencyObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [USaveGlobalGameData](../SaveGame/SaveGlobalGameData__USaveGlobalGameData.md) * |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) USaveGlobalGameData * GetSaveCurrencyObject();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

**源码注释:**

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

---
