# `struct` `FWorldPlaceInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> World Place Info data structure.

## Blueprint-exposed variables

### Property `PlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FGuid PlaceGuid;` |

**Notes:**

> 地点guid

---

### Property `BattlePlaceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName BattlePlaceID;` |

**Notes:**

> Battle Place ID field.

---

### Property `BattlePlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleInstanceOnly,Category= "Base") FGuid BattlePlaceGuid;` |

**Notes:**

> 战场地点

---

### Property `PlaceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FText PlaceName;` |

**Notes:**

> 地点名字

---

### Property `PlaceDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FText PlaceDesc;` |

**Notes:**

> 地点描述

---

### Property `PlaceLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PlaceLevel = 1;` |

**Notes:**

> 地点等级

---

### Property `PlaceMesh`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,TSoftObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") TMap<int32,TSoftObjectPtr<UStaticMesh>> PlaceMesh;` |

**Notes:**

> 地点等级对应的模型

---

### Property `bShowInMap`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") bool bShowInMap = true;` |

**Notes:**

> 是否显示在地图上 (例如：战斗地图可能不会显示在地图上)

---

### Property `Prosperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Prosperity" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float Prosperity = 1;` |

**Notes:**

> 地点繁荣度

---

### Property `MaxProsperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Prosperity" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float MaxProsperity = 1;` |

**Notes:**

> 地点最大繁荣度

---

### Property `ProsperityIncreaseBase`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Prosperity" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float ProsperityIncreaseBase = 1;` |

**Notes:**

> 地点每日繁荣度增长基础

---

### Property `WorldPlaceType`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**Notes:**

> 地点类型

---

### Property `PlaceIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") TSoftObjectPtr<UTexture2D> PlaceIcon;` |

**Notes:**

> 地点图标

---

### Property `PlaceChoseIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere, Category = "Base") TSoftObjectPtr<UTexture2D> PlaceChoseIcon;` |

**Notes:**

> 地点图标

---

### Property `PlaceThumbnail`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedClasses = "/Script/Engine.Texture2D")) TSoftObjectPtr<UTexture2D> PlaceThumbnail;` |

**Notes:**

> 地点缩略图

---

### Property `ExplorationDegree`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Exploration" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration") float ExplorationDegree = 0.f;` |

**Notes:**

> 需要的地区探索度

---

### Property `BaseTemperature`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Temperature" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Temperature") int BaseTemperature = 16;` |

**Notes:**

> 基础温度

---

### Property `WorldMapPosition`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FTransform WorldMapPosition = FTransform::Identity;` |

**Notes:**

> 处于世界地图的位置

---

### Property `bInitialUnlock`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") bool bInitialUnlock;` |

**Notes:**

> 该地区是否初始解锁迷雾

---

### Property `FogRadius`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") int32 FogRadius;` |

**Notes:**

> 该地区解锁迷雾的半径

---

### Property `bHideInFog`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Fog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Fog",meta=(EditConditionHides, EditCondition = "bShowInMap")) bool bHideInFog = true;` |

**Notes:**

> 是否会隐藏于迷雾中

---

### Property `WorldPlaceState`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceStateType](WorldStruct__EWorldPlaceStateType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") EWorldPlaceStateType WorldPlaceState = EWorldPlaceStateType::Unowned;` |

**Notes:**

> 地点当前状态

---

### Property `BeforeExploreUI`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName BeforeExploreUI;` |

**Notes:**

> 探索前的UI  ID

---

### Property `ExploreCompleteUI`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName ExploreCompleteUI;` |

**Notes:**

> 探索完的UI  ID

---

### Property `AfterOccupationUI`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName AfterOccupationUI;` |

**Notes:**

> 占领后的UI  ID

---

### Property `WorldPlaceClass`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<class [AWorldPlace](WorldPlace__AWorldPlace.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") TSoftClassPtr<class AWorldPlace> WorldPlaceClass;` |

**Notes:**

> 拥有当前地点蓝图

---

### Property `bNeedExplore`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Exploration" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration") bool bNeedExplore = true;` |

**Notes:**

> 是否需要探索

---

### Property `AddAreaExplore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Exploration" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration",meta=(EditCondition = "bNeedExplore",EditConditionHides)) float AddAreaExplore = 10.f;` |

**Notes:**

> 增加区域探索

---

### Property `PlaySoundSystemSetUp`

| Field | Details |
|------|------|
| C++ type | TSoftObjectPtr<class [UPlaySoundSystemSetUp](../System/Sound/PlaySoundSystem__UPlaySoundSystemSetUp.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="Sound" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,Category= "Sound") TSoftObjectPtr<class UPlaySoundSystemSetUp> PlaySoundSystemSetUp;` |

**Notes:**

> 此地点的音乐配置

---

### Property `bPlayLevelSequence`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="LevelSequence" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "LevelSequence") bool bPlayLevelSequence = false;` |

**Notes:**

> 是否播放关卡序列

---

### Property `bEnterEveryTimePlayLevelSequence`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="LevelSequence" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence") bool bEnterEveryTimePlayLevelSequence = false;` |

**Notes:**

> 是否每次进入时都会播放

---

### Property `LevelSequence`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<ULevelSequence>` |
| Reflection specifiers | BlueprintReadOnly, Category="LevelSequence" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence") TSoftObjectPtr<ULevelSequence> LevelSequence;` |

**Notes:**

> 此地点进入时播放的关卡序列

---

### Property `bPlayLevelVideos`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="BinkMedia" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "BinkMedia") bool bPlayLevelVideos = false;` |

**Notes:**

> 是否播放视频 视频总是会在关卡序列之前

---

### Property `bEnterEveryTimePlayVideos`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="BinkMedia" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") bool bEnterEveryTimePlayVideos = false;` |

**Notes:**

> 是否每次进入时都会播放

---

### Property `BinkMediaPlayer`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<class UBinkMediaPlayer>` |
| Reflection specifiers | BlueprintReadOnly, Category="BinkMedia" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<class UBinkMediaPlayer> BinkMediaPlayer;` |

**Notes:**

> 视频设置

---

### Property `BinkMediaPlayerUrl`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="BinkMedia" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") FString BinkMediaPlayerUrl;` |

**Notes:**

> 视频资源路径

---

### Property `BinkMediaTexture`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<class UBinkMediaTexture>` |
| Reflection specifiers | BlueprintReadOnly, Category="BinkMedia" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<class UBinkMediaTexture> BinkMediaTexture;` |

**Notes:**

> 视频资源路径

---

### Property `BinkMediaSubtitlesDataTable`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadOnly, Category="BinkMedia" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<UDataTable> BinkMediaSubtitlesDataTable;` |

**Notes:**

> 视频字幕配置

---

### Property `bCanEnterPlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="EnterPlace" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "EnterPlace") bool bCanEnterPlace = true;` |

**Notes:**

> 是否可以进入到此区域

---

### Property `PlaceMap`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UWorld>` |
| Reflection specifiers | BlueprintReadWrite, Category="EnterPlace" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftObjectPtr<UWorld> PlaceMap;` |

**Notes:**

> 地点地图

---

### Property `bSavePlace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="EnterPlace" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") bool bSavePlace = true;` |

**Notes:**

> 此地点是否需要保存

---

### Property `PossessPlayerPawn`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<APawn>` |
| Reflection specifiers | BlueprintReadWrite, Category="EnterPlace" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<APawn> PossessPlayerPawn;` |

**Notes:**

> 拥有当前地点时的pawn

---

### Property `OtherPlayerPawn`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<APawn>` |
| Reflection specifiers | BlueprintReadWrite, Category="EnterPlace" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<APawn> OtherPlayerPawn;` |

**Notes:**

> 其他情况时使用的Pawn

---

### Property `MainWidgetUI`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<class UCommonActivatableWidget>` |
| Reflection specifiers | BlueprintReadWrite, Category="EnterPlace" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<class UCommonActivatableWidget> MainWidgetUI;` |

**Notes:**

> 当前地点的界面UI

---

### Property `SpawnTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite, Category="EnterPlace" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") FTransform SpawnTransform = FTransform::Identity;` |

**Notes:**

> 进入此地点时的生成位置

---

### Property `MonsterGeneration`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Monster" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Monster") TArray<FName> MonsterGeneration;` |

**Notes:**

> 此地点包含的所有生成怪物设置 读取MonsterGenerationConfig 配置表

---

### Property `MonsterNest`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="Monster" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Monster") TArray<FName> MonsterNest;` |

**Notes:**

> 此地点包含的所有巢穴信息 读取 MonsterNestInfoConfig 配置表

---

### Property `ApprenticeshipEventIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Apprenticeship" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Apprenticeship") TArray<FName> ApprenticeshipEventIDs;` |

**Notes:**

> 此地点包含的历练事件 ID 列表(读 DT_ApprenticeshipEvents;弟子在此城历练时从中加权抽样)

---

### Property `Population`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 Population = 0;` |

**Notes:**

> 初始人口

---

### Property `MaxPopulation`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 MaxPopulation = 999999.f;` |

**Notes:**

> 最大人口

---

### Property `InitCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 InitCoin = 0;` |

**Notes:**

> 初始钱币

---

### Property `CoinIncreaseBase`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 CoinIncreaseBase = 0;` |

**Notes:**

> 钱币增长基础值

---

### Property `FirstVictoryAddReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float FirstVictoryAddReputation = 0.f;` |

**Notes:**

> 第一次胜利增加的声望

---

### Property `PopulationIncreaseBase`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PopulationIncreaseBase = 0;` |

**Notes:**

> 每日人口增长基础值

---

### Property `InitOrder`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Order" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Order") float InitOrder = 70.f;` |

**Notes:**

> [新增-策划文档"五、治安/初始"]据点初始治安(0-100)

---

### Property `StationedCharacterNumBase`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 StationedCharacterNumBase = 999;` |

**Notes:**

> 城镇可驻扎角色数量基础值

---

### Property `PlaceLevelDistinguishInfo`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FPlaceLevelDistinguishInfo](WorldStruct__FPlaceLevelDistinguishInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int32,FPlaceLevelDistinguishInfo> PlaceLevelDistinguishInfo;` |

**Notes:**

> 城镇不同等级的产出、新增可建造建筑设施等

---

### Property `WorldPlaceEffects`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WorldPlaceEffects;` |

**Notes:**

> 城主效果(对应DT_WorldPlaceEffectConfig)

---

### Property `GlobalSpecialEffectIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="SpecialEffect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SpecialEffect") TArray<FName> GlobalSpecialEffectIds;` |

**Notes:**

> 地点全局特殊效果 ID 列表（对应 FWorldPlaceSpecialEffectConfig 数据表）

---

### Property `PlaceOutPutInterval`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PlaceOutPutInterval =3;` |

**Notes:**

> 产出间隔(天)

---

### Property `MeshLocationOffset`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FVector MeshLocationOffset = FVector::Zero();` |

**Notes:**

> 地点的模型便宜

---

### Property `PostStationTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly, Category="PostStation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "PostStation") FTransform PostStationTransform;` |

**Notes:**

> 驿站位置

---

### Property `PostStationMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadOnly, Category="PostStation" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "PostStation") TSoftObjectPtr<UStaticMesh> PostStationMesh;` |

**Notes:**

> 驿站模型

---

### Property `NPCAttackConditions`

| Field | Details |
|------|------|
| C++ type | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="NPCAttack" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "NPCAttack") TArray<FCommonTaskCondition> NPCAttackConditions;` |

**Notes:**

> NPC进攻此地点的条件

---
