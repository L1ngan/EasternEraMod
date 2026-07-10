# `struct` `FModWorldPlaceInfo`

**Source header:** `CreateModPlugin/Public/WorldDataStruct.h`

---

## Functional description (from header comments)

> World place config info: name, description, prosperity, place type, icons and post station transform, etc.

## Blueprint-exposed variables

### Property `BattlePlaceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Base" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName BattlePlaceID;` |

**Notes:**

> ID of the battle place associated with this world place

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
| C++ type | [EModWorldPlaceType](WorldDataStruct__EModWorldPlaceType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") EModWorldPlaceType WorldPlaceType = EModWorldPlaceType::Station;` |

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
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") bool bInitialUnlock = false;` |

**Notes:**

> 该地区是否初始解锁迷雾

---

### Property `FogRadius`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") int32 FogRadius = 0;` |

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
| C++ type | `TSoftObjectPtr<class ULevelSequence>` |
| Reflection specifiers | BlueprintReadOnly, Category="LevelSequence" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence") TSoftObjectPtr<class ULevelSequence> LevelSequence;` |

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
| C++ type | `TSoftObjectPtr<UBinkMediaPlayer>` |
| Reflection specifiers | BlueprintReadOnly, Category="BinkMedia" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<UBinkMediaPlayer> BinkMediaPlayer;` |

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
| C++ type | `TSoftClassPtr<UCommonActivatableWidget>` |
| Reflection specifiers | BlueprintReadWrite, Category="EnterPlace" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<UCommonActivatableWidget> MainWidgetUI;` |

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
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "PostStation") FTransform PostStationTransform = FTransform::Identity;` |

**Notes:**

> 驿站位置

---
