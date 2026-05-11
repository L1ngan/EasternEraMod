# Mod 作者蓝图可调用接口参考

**逐类详细说明（每个函数参数表、变量含义、结构体字段、源码注释）：** 已按类型拆分为多篇文档，目录 [`BlueprintAPI_ModAuthors/`](BlueprintAPI_ModAuthors/INDEX.md)（入口索引 [`INDEX.md`](BlueprintAPI_ModAuthors/INDEX.md)；根目录 [`BlueprintAPI_Reference_ModAuthors.md`](BlueprintAPI_Reference_ModAuthors.md) 为简短导引）。

本文档汇总 **EastRimWorld** 模块中与模组 / 内容创作相关、且在 C++ 中通过 `UFUNCTION(BlueprintCallable|BlueprintPure|BlueprintImplementableEvent|BlueprintNativeEvent)` 或 `UPROPERTY(BlueprintReadOnly|BlueprintReadWrite|BlueprintAssignable)` 等标记暴露给 **虚幻引擎蓝图** 的类型与成员。

**说明：**

- 仅包含在反射系统中标记为蓝图可用的符号；未加对应标记的 C++ 成员**不会**出现在蓝图节点中。
- 工程内还有大量 gameplay 类（如 `UERW_MapDataMgr`、`UERW_HISMManager`、`AWorldBattleManager` 等）带有繁多蓝图 API，本文对模组链路作完整梳理，对其余系统作索引级指引；


---

## 1. 模组核心

### 1.1 `UModSubsystem`（`GameInstance` 子系统）

**获取实例：** `Get Mod Subsystem`（`UModSubsystem::GetModSubsystem(WorldContextObject)`）。

| 类型 | 名称 | 说明 |
|------|------|------|
| 函数 | `DiscoverMods` | 扫描可用 Mod |
| 函数 | `LoadMod(ModId, bNewGameLoad)` | 加载指定 Mod |
| 函数 | `UnloadMod(ModId)` | 卸载指定 Mod |
| 函数 | `SetModEnabled(ModId, bEnabled)` | 启用/禁用 |
| 函数 | `GetModInfo(ModId)` → `UModRuntimeInfo*` | 查询单个 Mod 信息 |
| 函数 | `GetAllLoadedMods` / `GetAllDiscoveredMods` | 已加载 / 已发现列表 |
| 函数 | `IsModLoaded(ModId)` | 是否已加载 |
| 函数 | `CheckModGameVersion` / `CheckModToolVersion` | 版本兼容性检查 |
| 函数 | `GetCurrentModToolVersion`（静态） | 当前游戏 Mod 工具版本号 |
| 函数 | `CheckModDependencies(ModId, OutMissing)` | 依赖检查 |
| 函数 | `LoadAllEnabledMods(bNewGameLoad)` | 按依赖顺序加载全部启用 Mod |
| 函数 | `UnloadAllMods` | 卸载全部 |
| 函数 | `LoadAndApplyModInformationAssetByPath(AssetPath, bNewGameLoad)` | 按路径加载并应用 `UModInformationAsset` |
| 委托 | `OnModLoaded(ModId, ModInfo)` | 加载成功 |
| 委托 | `OnModUnloaded(ModId, ModInfo)` | 卸载 |
| 委托 | `OnModLoadFailed(ModId, ErrorMessage, ModInfo)` | 加载失败 |
| 属性 | `ModsIconPath`（`TMap<FName, FString>`，`BlueprintReadWrite`） | Mod 图标路径映射 |

头文件：`Mod/ModSubsystem.h`。

### 1.2 `UModLuaLibrary`（蓝图函数库）

| 函数 | 说明 |
|------|------|
| `GetModSubsystem(WorldContextObject)` | 取 `UModSubsystem` |
| `IsModLoaded(WorldContextObject, ModId)` | 是否已加载 |
| `GetModInfo(WorldContextObject, ModId)` | 运行时信息 |
| `ModLog(ModId, Message, ModLogLevel)` | Mod 日志（支持编辑器 `CallInEditor`） |
| `RegisterModCommand(ModId, CommandName, Description)` | 注册控制台命令 |
| `LoadAndApplyModInformationAssetByPath(AssetPath, bNewGameLoad)` | 与子系统同名封装 |

头文件：`Mod/ModLuaLibrary.h`。  
另：`LuaReplaceDataTableRow` 为 **Lua/UnLua C 导出**，非蓝图节点。

### 1.3 `UModRuntimeInfo` 与 `FModMetadata`

**`UModRuntimeInfo`（`BlueprintReadOnly` 字段）：** `Metadata`、`LoadState`、`ModRootPath`、`LuaEnvironmentName`、`LoadTime`、`ErrorMessage`、`MountedPakFiles`、`MountedPaks`。

**`FModMetadata` / `FModDependency`：** 均为 `USTRUCT(BlueprintType)`，字段均为 `BlueprintReadWrite`（编辑器与蓝图可读写），包括 `ModId`、`ModName`、`Version`、`Author`、`Description`、`Icon`、`Dependencies`、`MinGameVersion`、`MainLuaFile`、`ModInformationAssetPath`、`bNewGameLoad`、`ModToolVersion`、`bIncludeGameplayTags`、`PublishedFileId` 等。

**枚举（`BlueprintType`）：** `EModLoadState`、`EModType`。

头文件：`Mod/ModInfo.h`。

---

## 2. PAK 与资源挂载

### `UPakLibrary`

| 函数 | 说明 |
|------|------|
| `MountAndRegisterPak` | 挂载并注册 |
| `MountPakFile` / `UnmountPakFile` | 挂载 / 卸载 |
| `RegisterMountPoint` / `UnRegisterMountPoint` | 挂载点 |
| `GetPakMountPoint` | 查询挂载点 |
| `GetPakContent` | 列举 Pak 内容 |
| `GetPakMountContentPath` | 内容路径 |
| `LoadPakObjClassReference` / `LoadPakFileClass` | 从 Pak 加载类引用 |
| `Conv_PakContentPathToReferenceString` | 路径转引用字符串 |

头文件：`Mod/PakLibrary.h`。

---

## 3. Steam Workshop

### 3.1 `USteamWorkshopLibrary`

涵盖：**创建/更新项目**（`CreateWorkshopItem`、`SetWorkshopItemTitle`、…、`SubmitWorkshopItemUpdate`、`UploadModToWorkshop` 等）、**下载与订阅**（`DownloadWorkshopItem`、`SubscribeWorkshopItem`、`GetSubscribedWorkshopItems` 等）、**查询与信息**（`QueryWorkshopItems`、`QueryWorkshopItemDetails`、`GetWorkshopItemInstallInfo` 等）、**管理**（`DeleteWorkshopItem`、`OpenWorkshopItemPage`、`SetUserItemVote`、`GetUserItemVote`）、**游戏时间追踪**、工具函数（`IsSteamUGCAvailable`、`GetSteamAppId`、`OpenPreviewImageFileDialog`、`CheckCanChoseThisDir`）等。

结构体 **`FWorkshopItemDetails`**、`ESteamQueryType`、`EWorkshopItemState` 为 `BlueprintType`。

头文件：`Mod/SteamWorkshopLibrary.h`。

### 3.2 `USteamWorkshopSubsystem`（`GameInstance` 子系统）

**蓝图可绑定委托（`BlueprintAssignable`）：**  
`OnWorkshopItemCreated`、`OnWorkshopItemUpdateSubmitted`、`OnWorkshopItemInstalled`、`OnWorkshopQueryCompleted`、`OnWorkshopItemSubscribed`、`OnWorkshopItemUnsubscribed`、`OnWorkshopItemDeleted`、`OnWorkshopPlaytimeTrackingStarted`、`OnWorkshopPlaytimeTrackingStopped`、`OnWorkshopItemUpdateProgress`、`OnWorkshopItemDownloadProgress`、`OnWorkshopItemDetailsQueryCompleted`、`OnUserStatsStored`、`OnUserAchievementStored`、`OnUserStatsReceived`、`OnSetUserItemVote`、`OnGetUserItemVote`。

**蓝图可调用：** `StartMonitoringDownloadProgress`、`StopMonitoringDownloadProgress`、`StopMonitoringAllDownloadProgress`、`GetMonitoredDownloadItemsLen`、`GetHaveUploadhandle`。

头文件：`Mod/SteamWorkshopSubsystem.h`。  
子系统实例使用引擎惯例：`GetGameInstance` → `GetSubsystem`（类 `USteamWorkshopSubsystem`）。

---

## 4. Steam 成就与统计

### `USteamAchievementLibrary`

初始化：`RequestCurrentStats`、`AreStatsAvailable`。  
成就：`UnlockAchievement`、`ClearAchievement`、`IsAchievementUnlocked`、`GetAchievementInfo`、`GetAchievementUnlockTime`、`GetAllAchievements`。  
统计：`SetIntStat`、`GetIntStat`、`SetFloatStat`、`GetFloatStat`、`IncrementIntStat`、`UpdateAvgRateStat`。  
存储：`StoreStats`、`ResetAllStats`。  
工具：`IsSteamUserStatsAvailable`、`GetAchievementDisplayAttribute`。

结构体 **`FSteamAchievementInfo`**：`BlueprintType`。

头文件：`Mod/SteamAchievementLibrary.h`。

---

## 5. 公共蓝图函数库 `UERW_FunctionLibrary`

类路径：`ERW_FunctionLibrary.h`。下列条目均在头文件中带有 **BlueprintCallable / BlueprintPure**（部分函数无 `UFUNCTION`，仅 C++ 内部使用，**不会**出现在蓝图里）。

**世界与网格：** `SetGameMode`、`SetWorldPlace`、`SetCanAffectNavigation`、`GetAreaRange`、`GetGridPosition`、`GetGridWorldPosition`、`GetGridSideWorldPosition`、`GetGridPositionType`、`GetLandscapeHeightAtLocation`、`GetGroundHeightAtLocation`、`GetGroundHeightAtLocation_WC`、`CreateDecalComponentAtLocation`、`CalcStartAndEnd`、`LimitDesignSize`。

**样条与几何：** `SetSplineSampleInterval`、`GetSplineInfos`、`IsPointsInsidePolygon`、`HasPointInsidePolygon`、`CheckPointOnPolygon`、`GetScreenBoxToWorldPoint`、`CalculateNormal`、`IsPointInQuadrilateral`。

**导航 / AI：** `GetPathLocationsToTarget`、`HasPathToTarget`、`IsPathAcrossDoor`、`FindReachablePointAroundTarget`。

**GOAP / 条件：** `CompareGOAPCondition`、`CompareCommonCondition`。

**随机与权重：** `CalculateWeights`（`TMap<int32,int32>`）、`RandomWeight`、`RandomWeightPercent`、`RandDropItem`、`RandomIntegerInRange`、`CalculationProbability`。

**物品与建筑：** `SortBuildingByBuildingScore`、`CalcCarryItemNum`、`SortInventoryQuality`、`AddBuildNames`、`ConvertFNameToEItemType`、`AppendItemSimpleDataArray`。

**角色属性文案：** `GetAptitudeAttributeString`、`GetComprehensionAttributeString`、`GetMoveSpeedAttributeString`、`GetPreferenceTemperatureAttributeString`、`GetAttachAttributeString`、`GetResistanceAttributeString`、`GetCriticalAttributeString`、`GetSubjoinAttackAttributeString` 及对应 `FromSaveData` 重载。

**SmartObject：** `UpdateSmartObjectTransform`、`GetSmartObjectSlotTransform`、`RequestGameplayTag`、`AppendTwoAttributeMap`、`RegisterSmartObject`、`UnregisterSmartObject`、`FindSmartObjectByTag`、`GetFacilityDefinitionData`、`StopGameplayBehavior`、`GetNearestSlotTransformAndSlotHandle`、`GetSlotTransformAndSlotHandleByIndex`、`GetNavigableNearestSlotLocation`、`GetFirstSlotHandleByTag`。

**游戏内时间（依赖 `AERW_GameModeBase`）：** `GetGameTimeByInputSecond`、`GameTimeToYearDayHour`、`GetGameSeasonByInputSecond`、`ConvertToDays`、`GetTimeofUltraDynamicSky`、`CalUDSDayLength`、`CalUDSNightLength`、`GetDawnTime`、`GetDuskTime`、`ConvertDayToText`、`ConvertSecondToText`、`ConvertSecondToTimeText`、`FormatTimeText`、`SecondToCountdownText`、`ReplacesArgsByArray` / `StrArray` / 索引变体等。

**GameplayAbility / Tag：** `IsActiveGameplayEffectHandleValid`、`AddLooseGameplayTagToASC`、`RemoveLooseGameplayTagToASC`、`GetGEAttributeValue`。

**其它：** `SetDecalSize`、`AddAssembleCollision`、`SwapSize`、`SortByCharacterAbility`、`Sort`（`UObject*` 数组）、`SortMapByValueDescending`、`GetLeafTags`、`GetAllChildTags`、`GetParentTag`、`IsHaveChildTags`、`GetTeamMaxAttributes`、`GetAllObjectByClass`、`GetLevelName`、`GetActorLevelName`、`GetUIText`、`GetFormatText`、`GetTextLen`、`GetTextLimit`、`LegalValue`、`CheckMouseOnViewport`、`SetConsoleVariable`、`GetPointOnCircle`、`RotateDirectionVector`、`CalcGoalPriority`、`CalDrugResistance`、`CalDrugResistanceBySaveData`、`FormatSecondsToMMSS`、`GetCharacterStringName`、`CastResourceToGrowScore`、`GetMartialArtsExperienceBonusByMaType`、`GetTexture2DDynamicSize`、`GetAnimalTroughLocation`、`SaveCaptureScene`、`LoadTextureFromFile`、`SetHighResScreenshotMaskEnabled`、`ClipCharacterHoleBodyPhot`、`CaptureCharacter`。

---

## 6. 世界管理 `UWorldManagerSystem`

**类型：** `UWorldSubsystem`。静态 C++ 访问：`GetWorldManagerSystem()`（未必导出为蓝图节点；蓝图中通常通过已缓存引用或世界初始化流程获取）。

**蓝图可读属性：** `bInitializationGameComplete`。

**蓝图可调用（节选）：** `InitWorldManagerSystem`、`StartNewGame`、`StartLoadGame`、`InitObjectComplete`、`OnLoadGameWorldComplete`、`OnLoadSubLevelComplete`、`OnCloseSubLevelComplete`、`SubLevelInitializationComplete`、`CheckInitializationComplete`、`CheckAllObjectInit`、`LoadCurSubLevel`。

**常用对象引用（多为 `UPROPERTY`，是否在蓝图可见取决于是否额外标记 Blueprint；此处多为逻辑内部使用）：** `GameModeBase`、`PlayerController`、`WorldDirector`、`WorldBattleManager`、`SaveGameDataActor` 等。

头文件：`WorldSystem/WorldManagerSystem.h`。

---

## 7. 玩家 Pawn 与门派战交互

### 7.1 `AERW_PlayerPawn`

**蓝图可读写 / 只读属性：** `GWOPlayerComponent`、`PlayerPawnType`、`CameraConfigAsset`、`CurWorldPlace`（`BlueprintReadOnly`）、`HitLocation`、`CurSummon`。

**委托：** `OnCameraPositionChange`（`BlueprintAssignable`）。

**蓝图可调用 / 可实现事件：** `BroadcastOnCameraPositionChange`、`SetMouseMode`、`SetPreviewFarmlandActor`、`SetCameraPosition`、`SpawnBuildingByPresetInfo`、`GetPlayerPawnCamera`（`BlueprintNativeEvent`）、`ClearDataBeforeSave`、`ResetInitPosition`、`TrackingCharacter`、`StopTrackingCharacter`、`GetPawnSaveInfo`、`SetPawnSaveInfo`、`SetPawnData`（`BlueprintImplementableEvent`）。

**枚举：** `EMouseMode`（`BlueprintType`）。

头文件：`Framework/ERW_PlayerPawn.h`。

### 7.2 `AERW_FightPawn`

继承 `AERW_PlayerPawn`，实现 `IAbilitySystemInterface`。

**蓝图只读组件：** `AbilitySystemComponent`、`CameraSpringArm`、`FightCamera`。

**蓝图可读写相机参数：** `CameraArmLength`、`CameraSocketOffset`、`CameraZoomMax`、`CameraPitchFar`、`CameraZoomMin`、`CameraPitchNear`、`CameraLagSpeed`。

**交互：** `RegisterInteractable`、`UnregisterInteractable`、`GetCurrentInteractable`（Pure）、`FinishInteraction`；属性 `CurrentInteractableTarget`、`bIsInteracting`（`BlueprintReadOnly`）。

头文件：`Framework/ERW_FightPawn.h`。

### 7.3 `IERW_FightInteractableInterface` / `AERW_FightInteractableActor`

接口事件（`BlueprintNativeEvent` + `BlueprintCallable`）：`GetInteractionPrompt`、`CanInteract`、`OnInteract`、`SetInteractionPromptVisible`、`ShouldEndInteractionImmediately`、`GetPawnInteractMontage`。

**`AERW_FightInteractableActor`（`BlueprintType`，抽象基类）：**  
属性包括 `InteractionSphere`、`InteractionRadius`、`InteractionPromptWidget`、`PromptWidgetClass`、`PromptText`、`PawnInteractMontage`、`bEndInteractionImmediately` 等（详见 `Actor/ERW_FightInteractableActor.h`）。

头文件：`Interface/ERW_FightInteractableInterface.h`、`Actor/ERW_FightInteractableActor.h`。

---

## 8. 建筑基类 `ABuildingActorBase`

该类蓝图暴露成员极多（能源网络、管道、耐久、交通工具、监狱、`BlueprintImplementableEvent` 等）。**建议在蓝图中对父类 `Building Actor Base` 检索节点**，或直接在 `Building/BuildingActorBase.h` 中搜索 `UFUNCTION(Blueprint`。

**典型 `BlueprintAssignable` 委托：** `OnChangeEnergyGrid`、`OnBuildDataChanged`、`OnBuildStorgeEnergyChanged`、`OnUpdateTips`、`OnChangeEnable`、`OnChangePipelineGroup`、`OnChangeWhenClosedOrOnPipelineGroup`、`OnBuildDurabilityChanged`、`OnBuildingFuelChanged` 等。

**典型 `BlueprintReadOnly` / `ReadWrite` 属性：** `BuildingRunState`、`BuildingEnableState`、`CurDurability`、`BuildData`、`BuildingNum`、`ConnectBuildingActors`、`EnergyRange`、`BuildingEffectRangeComponent`、`BuildHeight` 等。

函数分类包含：`Category = "Building"`、`"PuppetModification"`、`"RecycledResource"`、`"Transportation"`、`"Prison"` 等。

---

## 9. 其它大型蓝图 API 类（索引）

以下类型在各自头文件中含大量 `BlueprintCallable` / `BlueprintPure` / 蓝图属性，模组若扩展玩法通常会与之交互：

| 类型 | 头文件（相对 `Source/EastRimWorld/`） |
|------|----------------------------------------|
| `UERW_MapDataMgr` | `Components/ERW_MapDataMgr.h` |
| `UERW_HISMManager` | `Components/ERW_HISMManager.h` |
| `AWorldBattleManager` | `WorldSystem/WorldBattleSystem/WorldBattleManager.h` |
| `AEastRimWorldAIController`（及 Human 变体） | `Player/EastRimWorldAIController.h` 等 |
| `AEastRimWorldCharacter` 系列 | `Character/` |
| `BuildingActorBase` 派生建筑 | `Building/` |

---

## 10. 维护建议

- C++ 变更 `UFUNCTION` / `UPROPERTY` 蓝图标记后，应重新生成工程并同步本文档或改为由工具从头文件抽取。
- Lua Mod 除蓝图外，还可通过 UnLua 调用未标记蓝图但导出到 Lua 的绑定；此类接口**不在**本文档范围内。

---

*文档生成依据仓库内 EastRimWorld 模块头文件扫描；如有出入以编译后的 Blueprint API 为准。*
