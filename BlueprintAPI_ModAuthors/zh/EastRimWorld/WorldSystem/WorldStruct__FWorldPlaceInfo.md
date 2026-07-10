# `struct` `FWorldPlaceInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> World Place Info 数据结构。

## 蓝图暴露变量

### 属性 `PlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FGuid PlaceGuid;` |

**说明:**

> 地点guid

---

### 属性 `BattlePlaceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName BattlePlaceID;` |

**说明:**

> Battle Place ID 字段。

---

### 属性 `BattlePlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleInstanceOnly,Category= "Base") FGuid BattlePlaceGuid;` |

**说明:**

> 战场地点

---

### 属性 `PlaceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FText PlaceName;` |

**说明:**

> 地点名字

---

### 属性 `PlaceDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FText PlaceDesc;` |

**说明:**

> 地点描述

---

### 属性 `PlaceLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PlaceLevel = 1;` |

**说明:**

> 地点等级

---

### 属性 `PlaceMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,TSoftObjectPtr<UStaticMesh>>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") TMap<int32,TSoftObjectPtr<UStaticMesh>> PlaceMesh;` |

**说明:**

> 地点等级对应的模型

---

### 属性 `bShowInMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") bool bShowInMap = true;` |

**说明:**

> 是否显示在地图上 (例如：战斗地图可能不会显示在地图上)

---

### 属性 `Prosperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Prosperity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float Prosperity = 1;` |

**说明:**

> 地点繁荣度

---

### 属性 `MaxProsperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Prosperity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float MaxProsperity = 1;` |

**说明:**

> 地点最大繁荣度

---

### 属性 `ProsperityIncreaseBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Prosperity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float ProsperityIncreaseBase = 1;` |

**说明:**

> 地点每日繁荣度增长基础

---

### 属性 `WorldPlaceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**说明:**

> 地点类型

---

### 属性 `PlaceIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") TSoftObjectPtr<UTexture2D> PlaceIcon;` |

**说明:**

> 地点图标

---

### 属性 `PlaceChoseIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadWrite, EditAnywhere, Category = "Base") TSoftObjectPtr<UTexture2D> PlaceChoseIcon;` |

**说明:**

> 地点图标

---

### 属性 `PlaceThumbnail`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedClasses = "/Script/Engine.Texture2D")) TSoftObjectPtr<UTexture2D> PlaceThumbnail;` |

**说明:**

> 地点缩略图

---

### 属性 `ExplorationDegree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Exploration" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration") float ExplorationDegree = 0.f;` |

**说明:**

> 需要的地区探索度

---

### 属性 `BaseTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Temperature" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Temperature") int BaseTemperature = 16;` |

**说明:**

> 基础温度

---

### 属性 `WorldMapPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FTransform WorldMapPosition = FTransform::Identity;` |

**说明:**

> 处于世界地图的位置

---

### 属性 `bInitialUnlock`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") bool bInitialUnlock;` |

**说明:**

> 该地区是否初始解锁迷雾

---

### 属性 `FogRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") int32 FogRadius;` |

**说明:**

> 该地区解锁迷雾的半径

---

### 属性 `bHideInFog`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Fog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Fog",meta=(EditConditionHides, EditCondition = "bShowInMap")) bool bHideInFog = true;` |

**说明:**

> 是否会隐藏于迷雾中

---

### 属性 `WorldPlaceState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldPlaceStateType](WorldStruct__EWorldPlaceStateType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") EWorldPlaceStateType WorldPlaceState = EWorldPlaceStateType::Unowned;` |

**说明:**

> 地点当前状态

---

### 属性 `BeforeExploreUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName BeforeExploreUI;` |

**说明:**

> 探索前的UI  ID

---

### 属性 `ExploreCompleteUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName ExploreCompleteUI;` |

**说明:**

> 探索完的UI  ID

---

### 属性 `AfterOccupationUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName AfterOccupationUI;` |

**说明:**

> 占领后的UI  ID

---

### 属性 `WorldPlaceClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<class [AWorldPlace](WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") TSoftClassPtr<class AWorldPlace> WorldPlaceClass;` |

**说明:**

> 拥有当前地点蓝图

---

### 属性 `bNeedExplore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Exploration" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration") bool bNeedExplore = true;` |

**说明:**

> 是否需要探索

---

### 属性 `AddAreaExplore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Exploration" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration",meta=(EditCondition = "bNeedExplore",EditConditionHides)) float AddAreaExplore = 10.f;` |

**说明:**

> 增加区域探索

---

### 属性 `PlaySoundSystemSetUp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftObjectPtr<class [UPlaySoundSystemSetUp](../System/Sound/PlaySoundSystem__UPlaySoundSystemSetUp.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Sound" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,Category= "Sound") TSoftObjectPtr<class UPlaySoundSystemSetUp> PlaySoundSystemSetUp;` |

**说明:**

> 此地点的音乐配置

---

### 属性 `bPlayLevelSequence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="LevelSequence" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "LevelSequence") bool bPlayLevelSequence = false;` |

**说明:**

> 是否播放关卡序列

---

### 属性 `bEnterEveryTimePlayLevelSequence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="LevelSequence" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence") bool bEnterEveryTimePlayLevelSequence = false;` |

**说明:**

> 是否每次进入时都会播放

---

### 属性 `LevelSequence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<ULevelSequence>` |
| 反射说明符 | BlueprintReadOnly, Category="LevelSequence" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence") TSoftObjectPtr<ULevelSequence> LevelSequence;` |

**说明:**

> 此地点进入时播放的关卡序列

---

### 属性 `bPlayLevelVideos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "BinkMedia") bool bPlayLevelVideos = false;` |

**说明:**

> 是否播放视频 视频总是会在关卡序列之前

---

### 属性 `bEnterEveryTimePlayVideos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") bool bEnterEveryTimePlayVideos = false;` |

**说明:**

> 是否每次进入时都会播放

---

### 属性 `BinkMediaPlayer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<class UBinkMediaPlayer>` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<class UBinkMediaPlayer> BinkMediaPlayer;` |

**说明:**

> 视频设置

---

### 属性 `BinkMediaPlayerUrl`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") FString BinkMediaPlayerUrl;` |

**说明:**

> 视频资源路径

---

### 属性 `BinkMediaTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<class UBinkMediaTexture>` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<class UBinkMediaTexture> BinkMediaTexture;` |

**说明:**

> 视频资源路径

---

### 属性 `BinkMediaSubtitlesDataTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<UDataTable> BinkMediaSubtitlesDataTable;` |

**说明:**

> 视频字幕配置

---

### 属性 `bCanEnterPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "EnterPlace") bool bCanEnterPlace = true;` |

**说明:**

> 是否可以进入到此区域

---

### 属性 `PlaceMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UWorld>` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftObjectPtr<UWorld> PlaceMap;` |

**说明:**

> 地点地图

---

### 属性 `bSavePlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") bool bSavePlace = true;` |

**说明:**

> 此地点是否需要保存

---

### 属性 `PossessPlayerPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<APawn>` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<APawn> PossessPlayerPawn;` |

**说明:**

> 拥有当前地点时的pawn

---

### 属性 `OtherPlayerPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<APawn>` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<APawn> OtherPlayerPawn;` |

**说明:**

> 其他情况时使用的Pawn

---

### 属性 `MainWidgetUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<class UCommonActivatableWidget>` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<class UCommonActivatableWidget> MainWidgetUI;` |

**说明:**

> 当前地点的界面UI

---

### 属性 `SpawnTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") FTransform SpawnTransform = FTransform::Identity;` |

**说明:**

> 进入此地点时的生成位置

---

### 属性 `MonsterGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Monster" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Monster") TArray<FName> MonsterGeneration;` |

**说明:**

> 此地点包含的所有生成怪物设置 读取MonsterGenerationConfig 配置表

---

### 属性 `MonsterNest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Monster" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Monster") TArray<FName> MonsterNest;` |

**说明:**

> 此地点包含的所有巢穴信息 读取 MonsterNestInfoConfig 配置表

---

### 属性 `ApprenticeshipEventIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Apprenticeship" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Apprenticeship") TArray<FName> ApprenticeshipEventIDs;` |

**说明:**

> 此地点包含的历练事件 ID 列表(读 DT_ApprenticeshipEvents;弟子在此城历练时从中加权抽样)

---

### 属性 `Population`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 Population = 0;` |

**说明:**

> 初始人口

---

### 属性 `MaxPopulation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 MaxPopulation = 999999.f;` |

**说明:**

> 最大人口

---

### 属性 `InitCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 InitCoin = 0;` |

**说明:**

> 初始钱币

---

### 属性 `CoinIncreaseBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 CoinIncreaseBase = 0;` |

**说明:**

> 钱币增长基础值

---

### 属性 `FirstVictoryAddReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float FirstVictoryAddReputation = 0.f;` |

**说明:**

> 第一次胜利增加的声望

---

### 属性 `PopulationIncreaseBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PopulationIncreaseBase = 0;` |

**说明:**

> 每日人口增长基础值

---

### 属性 `InitOrder`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Order" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Order") float InitOrder = 70.f;` |

**说明:**

> [新增-策划文档"五、治安/初始"]据点初始治安(0-100)

---

### 属性 `StationedCharacterNumBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 StationedCharacterNumBase = 999;` |

**说明:**

> 城镇可驻扎角色数量基础值

---

### 属性 `PlaceLevelDistinguishInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FPlaceLevelDistinguishInfo](WorldStruct__FPlaceLevelDistinguishInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int32,FPlaceLevelDistinguishInfo> PlaceLevelDistinguishInfo;` |

**说明:**

> 城镇不同等级的产出、新增可建造建筑设施等

---

### 属性 `WorldPlaceEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WorldPlaceEffects;` |

**说明:**

> 城主效果(对应DT_WorldPlaceEffectConfig)

---

### 属性 `GlobalSpecialEffectIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="SpecialEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SpecialEffect") TArray<FName> GlobalSpecialEffectIds;` |

**说明:**

> 地点全局特殊效果 ID 列表（对应 FWorldPlaceSpecialEffectConfig 数据表）

---

### 属性 `PlaceOutPutInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PlaceOutPutInterval =3;` |

**说明:**

> 产出间隔(天)

---

### 属性 `MeshLocationOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FVector MeshLocationOffset = FVector::Zero();` |

**说明:**

> 地点的模型便宜

---

### 属性 `PostStationTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly, Category="PostStation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "PostStation") FTransform PostStationTransform;` |

**说明:**

> 驿站位置

---

### 属性 `PostStationMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadOnly, Category="PostStation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "PostStation") TSoftObjectPtr<UStaticMesh> PostStationMesh;` |

**说明:**

> 驿站模型

---

### 属性 `NPCAttackConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite, Category="NPCAttack" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "NPCAttack") TArray<FCommonTaskCondition> NPCAttackConditions;` |

**说明:**

> NPC进攻此地点的条件

---
