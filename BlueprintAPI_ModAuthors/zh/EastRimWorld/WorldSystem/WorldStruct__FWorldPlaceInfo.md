# `struct` `FWorldPlaceInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `PlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FGuid PlaceGuid;` |

**源码注释:**

> 地点guid

---

### 属性 `BattlePlaceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName BattlePlaceID;` |

---

### 属性 `BattlePlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleInstanceOnly,Category= "Base") FGuid BattlePlaceGuid;` |

**源码注释:**

> 战场地点

---

### 属性 `PlaceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FText PlaceName;` |

**源码注释:**

> 地点名字

---

### 属性 `PlaceDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FText PlaceDesc;` |

**源码注释:**

> 地点描述

---

### 属性 `PlaceLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PlaceLevel = 1;` |

**源码注释:**

> 地点等级

---

### 属性 `PlaceMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,TSoftObjectPtr<UStaticMesh>>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") TMap<int32,TSoftObjectPtr<UStaticMesh>> PlaceMesh;` |

**源码注释:**

> 地点等级对应的模型

---

### 属性 `bShowInMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") bool bShowInMap = true;` |

**源码注释:**

> 是否显示在地图上 (例如：战斗地图可能不会显示在地图上)

---

### 属性 `Prosperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Prosperity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float Prosperity = 1;` |

**源码注释:**

> 地点繁荣度

---

### 属性 `MaxProsperity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Prosperity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float MaxProsperity = 1;` |

**源码注释:**

> 地点最大繁荣度

---

### 属性 `ProsperityIncreaseBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Prosperity" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Prosperity") float ProsperityIncreaseBase = 1;` |

**源码注释:**

> 地点每日繁荣度增长基础

---

### 属性 `WorldPlaceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EWorldPlaceType` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") EWorldPlaceType WorldPlaceType = EWorldPlaceType::Station;` |

**源码注释:**

> 地点类型

---

### 属性 `PlaceIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") TSoftObjectPtr<UTexture2D> PlaceIcon;` |

**源码注释:**

> 地点图标

---

### 属性 `PlaceThumbnail`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedClasses = "/Script/Engine.Texture2D")) TSoftObjectPtr<UTexture2D> PlaceThumbnail;` |

**源码注释:**

> 地点缩略图

---

### 属性 `ExplorationDegree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Exploration" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration") float ExplorationDegree = 0.f;` |

**源码注释:**

> 需要的地区探索度

---

### 属性 `BaseTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Temperature" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Temperature") int BaseTemperature = 16;` |

**源码注释:**

> 基础温度

---

### 属性 `WorldMapPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FTransform WorldMapPosition = FTransform::Identity;` |

**源码注释:**

> 处于世界地图的位置

---

### 属性 `bInitialUnlock`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") bool bInitialUnlock;` |

**源码注释:**

> 该地区是否初始解锁迷雾

---

### 属性 `FogRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") int32 FogRadius;` |

**源码注释:**

> 该地区解锁迷雾的半径

---

### 属性 `bHideInFog`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Fog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Fog",meta=(EditConditionHides, EditCondition = "bShowInMap")) bool bHideInFog = true;` |

**源码注释:**

> 是否会隐藏于迷雾中

---

### 属性 `WorldPlaceState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EWorldPlaceStateType` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") EWorldPlaceStateType WorldPlaceState = EWorldPlaceStateType::Unowned;` |

**源码注释:**

> 地点当前状态

---

### 属性 `BeforeExploreUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName BeforeExploreUI;` |

**源码注释:**

> 探索前的UI  ID

---

### 属性 `ExploreCompleteUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName ExploreCompleteUI;` |

**源码注释:**

> 探索完的UI  ID

---

### 属性 `AfterOccupationUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Base" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Base") FName AfterOccupationUI;` |

**源码注释:**

> 占领后的UI  ID

---

### 属性 `WorldPlaceClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<class [AWorldPlace](WorldPlace__AWorldPlace.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") TSoftClassPtr<class AWorldPlace> WorldPlaceClass;` |

**源码注释:**

> 拥有当前地点蓝图

---

### 属性 `bNeedExplore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Exploration" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration") bool bNeedExplore = true;` |

**源码注释:**

> 是否需要探索

---

### 属性 `AddAreaExplore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Exploration" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Exploration",meta=(EditCondition = "bNeedExplore",EditConditionHides)) float AddAreaExplore = 10.f;` |

**源码注释:**

> 增加区域探索

---

### 属性 `PlaySoundSystemSetUp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftObjectPtr<class [UPlaySoundSystemSetUp](../System/Sound/PlaySoundSystem__UPlaySoundSystemSetUp.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Sound" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,Category= "Sound") TSoftObjectPtr<class UPlaySoundSystemSetUp> PlaySoundSystemSetUp;` |

**源码注释:**

> 此地点的音乐配置

---

### 属性 `bPlayLevelSequence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="LevelSequence" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "LevelSequence") bool bPlayLevelSequence = false;` |

**源码注释:**

> 是否播放关卡序列

---

### 属性 `bEnterEveryTimePlayLevelSequence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="LevelSequence" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence") bool bEnterEveryTimePlayLevelSequence = false;` |

**源码注释:**

> 是否每次进入时都会播放

---

### 属性 `LevelSequence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<ULevelSequence>` |
| 反射说明符 | BlueprintReadOnly, Category="LevelSequence" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelSequence"),Category= "LevelSequence") TSoftObjectPtr<ULevelSequence> LevelSequence;` |

**源码注释:**

> 此地点进入时播放的关卡序列

---

### 属性 `bPlayLevelVideos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "BinkMedia") bool bPlayLevelVideos = false;` |

**源码注释:**

> 是否播放视频 视频总是会在关卡序列之前

---

### 属性 `bEnterEveryTimePlayVideos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") bool bEnterEveryTimePlayVideos = false;` |

**源码注释:**

> 是否每次进入时都会播放

---

### 属性 `BinkMediaPlayer`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<class UBinkMediaPlayer>` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<class UBinkMediaPlayer> BinkMediaPlayer;` |

**源码注释:**

> 视频设置

---

### 属性 `BinkMediaPlayerUrl`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") FString BinkMediaPlayerUrl;` |

**源码注释:**

> 视频资源路径

---

### 属性 `BinkMediaTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<class UBinkMediaTexture>` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<class UBinkMediaTexture> BinkMediaTexture;` |

**源码注释:**

> 视频资源路径

---

### 属性 `BinkMediaSubtitlesDataTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadOnly, Category="BinkMedia" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,meta=(EditConditionHides, EditCondition = "bPlayLevelVideos"),Category= "BinkMedia") TSoftObjectPtr<UDataTable> BinkMediaSubtitlesDataTable;` |

**源码注释:**

> 视频字幕配置

---

### 属性 `bCanEnterPlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "EnterPlace") bool bCanEnterPlace = true;` |

**源码注释:**

> 是否可以进入到此区域

---

### 属性 `PlaceMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UWorld>` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftObjectPtr<UWorld> PlaceMap;` |

**源码注释:**

> 地点地图

---

### 属性 `bSavePlace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") bool bSavePlace = true;` |

**源码注释:**

> 此地点是否需要保存

---

### 属性 `PossessPlayerPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<APawn>` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<APawn> PossessPlayerPawn;` |

**源码注释:**

> 拥有当前地点时的pawn

---

### 属性 `OtherPlayerPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<APawn>` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<APawn> OtherPlayerPawn;` |

**源码注释:**

> 其他情况时使用的Pawn

---

### 属性 `MainWidgetUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<class UCommonActivatableWidget>` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") TSoftClassPtr<class UCommonActivatableWidget> MainWidgetUI;` |

**源码注释:**

> 当前地点的界面UI

---

### 属性 `SpawnTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="EnterPlace" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides, EditCondition = "bCanEnterPlace"),Category= "EnterPlace") FTransform SpawnTransform = FTransform::Identity;` |

**源码注释:**

> 进入此地点时的生成位置

---

### 属性 `MonsterGeneration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Monster" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Monster") TArray<FName> MonsterGeneration;` |

**源码注释:**

> 此地点包含的所有生成怪物设置 读取MonsterGenerationConfig 配置表

---

### 属性 `MonsterNest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Monster" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "Monster") TArray<FName> MonsterNest;` |

**源码注释:**

> 此地点包含的所有巢穴信息 读取 MonsterNestInfoConfig 配置表

---

### 属性 `Population`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 Population = 0;` |

**源码注释:**

> 初始人口

---

### 属性 `MaxPopulation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 MaxPopulation = 999999.f;` |

**源码注释:**

> 最大人口

---

### 属性 `InitCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 InitCoin = 0;` |

**源码注释:**

> 初始钱币

---

### 属性 `CoinIncreaseBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 CoinIncreaseBase = 0;` |

**源码注释:**

> 钱币增长基础值

---

### 属性 `FirstVictoryAddReputation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float FirstVictoryAddReputation = 0.f;` |

**源码注释:**

> 第一次胜利增加的声望

---

### 属性 `PopulationIncreaseBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PopulationIncreaseBase = 0;` |

**源码注释:**

> 每日人口增长基础值

---

### 属性 `StationedCharacterNumBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 StationedCharacterNumBase = 999;` |

**源码注释:**

> 城镇可驻扎角色数量基础值

---

### 属性 `PlaceLevelDistinguishInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FPlaceLevelDistinguishInfo](WorldStruct__FPlaceLevelDistinguishInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<int32,FPlaceLevelDistinguishInfo> PlaceLevelDistinguishInfo;` |

**源码注释:**

> 城镇不同等级的产出、新增可建造建筑设施等

---

### 属性 `WorldPlaceEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> WorldPlaceEffects;` |

**源码注释:**

> 城主效果(对应DT_WorldPlaceEffectConfig)

---

### 属性 `GlobalSpecialEffectIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="SpecialEffect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SpecialEffect") TArray<FName> GlobalSpecialEffectIds;` |

**源码注释:**

> 地点全局特殊效果 ID 列表（对应 FWorldPlaceSpecialEffectConfig 数据表）

---

### 属性 `PlaceOutPutInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadWrite,EditAnywhere,Category= "Base") int32 PlaceOutPutInterval =3;` |

**源码注释:**

> 产出间隔(天)

---

### 属性 `MeshLocationOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category= "Base") FVector MeshLocationOffset = FVector::Zero();` |

**源码注释:**

> 地点的模型便宜

---

### 属性 `PostStationTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly, Category="PostStation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "PostStation") FTransform PostStationTransform;` |

**源码注释:**

> 驿站位置

---

### 属性 `PostStationMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadOnly, Category="PostStation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category= "PostStation") TSoftObjectPtr<UStaticMesh> PostStationMesh;` |

**源码注释:**

> 驿站模型

---
