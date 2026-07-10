# `struct` `FBuildConfigData`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 建筑配置结构

## 蓝图暴露变量

### 属性 `Name`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FString Name;` |

**说明:**

> 建筑物名称(不显示)

---

### 属性 `EnvironType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEnvironType](ERW_Enumerations__EEnvironType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EEnvironType EnvironType = EEnvironType::None;` |

**说明:**

> 环境类型

---

### 属性 `ExtraEnvironInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEnvironType](ERW_Enumerations__EEnvironType.md) , [FExtraInfos](ERW_ConfigTypes__FExtraInfos.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , Category = "Base") TMap<EEnvironType , FExtraInfos> ExtraEnvironInfos;` |

**说明:**

> 建筑额外的占位信息
> TMap<环境类型 , 占位信息集合>

---

### 属性 `BuildingType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBuildingType](ERW_Enumerations__EBuildingType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EBuildingType BuildingType = EBuildingType::None;` |

**说明:**

> 建筑类型（主要用于区分功能型建筑）

---

### 属性 `FabricateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EFabricateType](Struct/CommonEnum__EFabricateType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EFabricateType FabricateType = EFabricateType::None;` |

**说明:**

> 设备类型

---

### 属性 `Size`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FIntVector Size = FIntVector::ZeroValue;` |

**说明:**

> 占格子尺寸(Z为占高度尺寸)

---

### 属性 `SuitBodyType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EAnimalBodyType](ERW_Enumerations__EAnimalBodyType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EAnimalBodyType SuitBodyType = EAnimalBodyType::Normal;` |

**说明:**

> 适应动物的体型

---

### 属性 `bHaveTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bHaveTips = false;` |

**说明:**

> 是否会具有上方提示信息

---

### 属性 `bNeedFuel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bNeedFuel = false;` |

**说明:**

> 是否是需要消耗燃料的建筑

---

### 属性 `BuildHeightDifference`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float BuildHeightDifference { 5.f };` |

**说明:**

> 建筑放置允许的最大高低差

---

### 属性 `TotalFuel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float TotalFuel = 0.f;` |

**说明:**

> 建筑总燃料

---

### 属性 `OneTimeExpendFuel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float OneTimeExpendFuel = 0.f;` |

**说明:**

> 建筑每次消耗的燃料

---

### 属性 `ExpendFuelInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float ExpendFuelInterval = 0.f;` |

**说明:**

> 建筑消耗燃料的时间间隔

---

### 属性 `SelectableFuelTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayTag>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) TArray<FGameplayTag> SelectableFuelTag;` |

**说明:**

> 建筑的燃料ID

---

### 属性 `OwnerNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 OwnerNum { 0 };` |

**说明:**

> 拥有者数量

---

### 属性 `BuildNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 BuildNum { 0 };` |

**说明:**

> 可建造数量

---

### 属性 `ZIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 ZIndex { 0 };` |

**说明:**

> 物体所处高度

---

### 属性 `GenerateMode`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGenerateMode](ERW_Enumerations__EGenerateMode.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EGenerateMode GenerateMode = EGenerateMode::Solo;` |

**说明:**

> 创建方式(单个, 线型, 矩形)

---

### 属性 `GOAPActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="GOAP" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "GOAP") TArray<FName> GOAPActions;` |

**说明:**

> 建筑拥有的GOAP Action

---

### 属性 `PresetSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | BlueprintReadWrite, Category="Preset" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Preset") FIntVector PresetSize = FIntVector::ZeroValue;` |

**说明:**

> 预设建筑的占格子尺寸

---

### 属性 `PresetData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FPresetInfos](ERW_CommonTypes__FPresetInfos.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Preset" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Preset") TMap<FName , FPresetInfos> PresetData;` |

**说明:**

> 预设建筑的数据
> TMap<建筑表ID , 数据>

---

### 属性 `WallPillarData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FPresetInfos](ERW_CommonTypes__FPresetInfos.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Preset" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Preset") TMap<FName , FPresetInfos> WallPillarData;` |

**说明:**

> 预设墙接缝柱的数据
> TMap<建筑表ID , 数据>

---

### 属性 `StaticMeshes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSoftObjectPtr<UStaticMesh>>` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;` |

**说明:**

> 普通建筑模型(有多个则随机选择)

---

### 属性 `StairFlatMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TSoftObjectPtr<UStaticMesh> StairFlatMesh;` |

**说明:**

> 阶梯平台模型

---

### 属性 `AssembleStaticMeshes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EAssemblePartType](ERW_Enumerations__EAssemblePartType.md) , TSoftObjectPtr<UStaticMesh>> |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TMap<EAssemblePartType , TSoftObjectPtr<UStaticMesh>> AssembleStaticMeshes;` |

**说明:**

> 组装部位对应的模型

---

### 属性 `AssemblePartTransforms`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FAssemblePartTransform](ERW_CommonTypes__FAssemblePartTransform.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TArray<FAssemblePartTransform> AssemblePartTransforms;` |

**说明:**

> 组装部位的Transform

---

### 属性 `ShackPillarMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TSoftObjectPtr<UStaticMesh> ShackPillarMesh;` |

**说明:**

> 窝棚柱子模型

---

### 属性 `CastShadow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") bool CastShadow { true };` |

**说明:**

> 建筑模型是否投影

---

### 属性 `DoorCollisionOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") FVector DoorCollisionOffset = FVector::ZeroVector;` |

**说明:**

> 门包围盒偏移

---

### 属性 `DoorCollisionExtent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") FVector DoorCollisionExtent = FVector::ZeroVector;` |

**说明:**

> 门包围盒大小

---

### 属性 `MeshMaterialParameter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FMeshMaterialParameter](ERW_ConfigTypes__FMeshMaterialParameter.md) |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") FMeshMaterialParameter MeshMaterialParameter;` |

**说明:**

> 建筑模型材质参数

---

### 属性 `EntranceGridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FRelativeGridPoses](ERW_ConfigTypes__FRelativeGridPoses.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FRelativeGridPoses> EntranceGridPoses;` |

**说明:**

> 建筑入口的格子坐标(相对格子坐标)

---

### 属性 `SupportingGrids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEnvironType](ERW_Enumerations__EEnvironType.md) , [FRelativeGridPoses](ERW_ConfigTypes__FRelativeGridPoses.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TMap<EEnvironType , FRelativeGridPoses> SupportingGrids;` |

**说明:**

> 配套物体的格子坐标(相对格子坐标)

---

### 属性 `FacilityEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UGameplayEffect>` |
| 反射说明符 | BlueprintReadWrite, Category="Effect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Effect") TSoftClassPtr<UGameplayEffect> FacilityEffect;` |

**说明:**

> 设施效果

---

### 属性 `ParticleEffectData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FParticleEffectData](ERW_ConfigTypes__FParticleEffectData.md) |
| 反射说明符 | BlueprintReadWrite, Category="Effect" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , Category = "Effect") FParticleEffectData ParticleEffectData;` |

**说明:**

> 粒子效果数据

---

### 属性 `PillarForWall`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Wall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Wall") TSoftObjectPtr<UStaticMesh> PillarForWall;` |

**说明:**

> 墙体接缝柱(墙专用)

---

### 属性 `WallWithHole`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEmbeddedWallType](ERW_Enumerations__EEmbeddedWallType.md) , TSoftObjectPtr<UStaticMesh>> |
| 反射说明符 | BlueprintReadWrite, Category="Wall" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Wall") TMap<EEmbeddedWallType , TSoftObjectPtr<UStaticMesh>> WallWithHole;` |

**说明:**

> 带洞的墙模型(墙专用)

---

### 属性 `AutoTileMeshes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FAutoTileMeshConfigData](ERW_ConfigTypes__FAutoTileMeshConfigData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TArray<FAutoTileMeshConfigData> AutoTileMeshes;` |

**说明:**

> 九宫格模型

---

### 属性 `RoofMeshes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ERoofPartType](ERW_Enumerations__ERoofPartType.md) , TSoftObjectPtr<UStaticMesh>> |
| 反射说明符 | BlueprintReadWrite, Category="Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TMap<ERoofPartType , TSoftObjectPtr<UStaticMesh>> RoofMeshes;` |

**说明:**

> 屋顶每个部位对应的模型

---

### 属性 `Durability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Durability { -1 };` |

**说明:**

> 耐久度

---

### 属性 `BuildResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TMap<FName , int32> BuildResource;` |

**说明:**

> 建造资源(item--数量)

---

### 属性 `RebuiltIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FName> RebuiltIDs;` |

**说明:**

> 重建的ID

---

### 属性 `Workload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Workload { 0 };` |

**说明:**

> 建造工作量

---

### 属性 `DestoryWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 DestoryWorkload {0};` |

**说明:**

> 拆除工作量

---

### 属性 `DestoryReturnPrecent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float DestoryReturnPrecent {0.f};` |

**说明:**

> 拆除返还建造资源的百分比(0~1)

---

### 属性 `SkillLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 SkillLevel { 0 };` |

**说明:**

> 需求建造技能等级

---

### 属性 `ThermalConductivity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float ThermalConductivity { 0.f };` |

**说明:**

> 热传导效率

---

### 属性 `Solidness`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Solidness { 0 };` |

**说明:**

> 坚固度(0没有)

---

### 属性 `Aesthetic`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Aesthetic { 0 };` |

**说明:**

> 美观度

---

### 属性 `FiveElementScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EFiveElementType](Struct/CommonEnum__EFiveElementType.md),float> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TMap<EFiveElementType,float> FiveElementScore;` |

**说明:**

> 五行属性

---

### 属性 `Defense`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Defense { 0 };` |

**说明:**

> 防御

---

### 属性 `MaterialCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base",meta=(ClampMin = 0.f,ClampMax = 1.f)) float MaterialCoefficient { 0 };` |

**说明:**

> 材质系数 计算公式为（攻击 - 防御 ） * （1 - 材质系数）当系数为1时 无法被攻击

---

### 属性 `bRepairable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bRepairable = false;` |

**说明:**

> 损坏后是否可以被修复

---

### 属性 `Parameter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , FString>` |
| 反射说明符 | BlueprintReadWrite, Category="Parameter" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Parameter") TMap<int32 , FString> Parameter;` |

**说明:**

> 额外变量(值: 说明文本) 仓库：第一个参数 初始高度 第二个参数 每层的间隔高度 第三个参数 总共层数

---

### 属性 `NameParameter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Parameter" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Parameter") TArray<FName> NameParameter;` |

**说明:**

> 读取其他配置表的行命名参数 建筑物为炮台时 读取召唤物表

---

### 属性 `AttachTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="Parameter" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Parameter") FTransform AttachTransform = FTransform::Identity;` |

**说明:**

> 附加到的位置偏移 建筑为炮台时 为炮塔的位置

---

### 属性 `InterActionDefine`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<USmartObjectDefinition>` |
| 反射说明符 | BlueprintReadWrite, Category="SmartObject" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "SmartObject") TSoftObjectPtr<USmartObjectDefinition> InterActionDefine;` |

**说明:**

> 设备交互定义

---

### 属性 `OpenBuildingWidgetID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="UI" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "UI") FName OpenBuildingWidgetID;` |

**说明:**

> 打开的建筑物主界面ID

---

### 属性 `ConstructCollisionProfileName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Collision" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Collision") FName ConstructCollisionProfileName;` |

**说明:**

> 建造中的碰撞预设(透明状态)
> 可选项有Building_NoCollision_NoNavigation, Building_Base_Complete, Building_Base_Construct, Building_Navigation_Collision, Building_Navigation_NoCollision

---

### 属性 `CompleteCollisionProfileName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Collision" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Collision") FName CompleteCollisionProfileName;` |

**说明:**

> 建造完成后使用的碰撞预设

---

### 属性 `UseMeshScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Collision" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite ,EditAnywhere,Category = "Collision") bool UseMeshScale { false };` |

**说明:**

> 地基不勾选此项, 地基动态的根据高度创建碰撞, 与地基相同需要根据高度创建时不勾选此项

---

### 属性 `CollisionMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Collision" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Collision") TSoftObjectPtr<UStaticMesh> CollisionMesh;` |

**说明:**

> 使用的碰撞模型

---

### 属性 `UseDefaultMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Collision" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Collision") bool UseDefaultMesh { false };` |

**说明:**

> 是否是使用的基础正方形模型, 既预设模型而不是建筑物本身模型

---

### 属性 `LightParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FBuildLightSourceData](ERW_CommonTypes__FBuildLightSourceData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Light" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Light") TArray<FBuildLightSourceData> LightParams;` |

**说明:**

> 灯具相关配置参数

---

### 属性 `UnlockItemTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayTag>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FGameplayTag> UnlockItemTags;` |

**说明:**

> 解锁必须要获取的物品的TAG（满足任意一，就可以解锁）

---

### 属性 `UnlockItemDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FText UnlockItemDesc;` |

**说明:**

> 解锁必须要获取的物品描述内容

---

### 属性 `bIsFightRobotUse`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bIsFightRobotUse = false;` |

**说明:**

> 是否是战斗机关人使用的(傀儡)

---

### 属性 `bIsAnimalUse`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bIsAnimalUse = false;` |

**说明:**

> 是否是动物使用的

---

### 属性 `FoodTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FGameplayTag FoodTag;` |

**说明:**

> 食槽可以添加的物品Tag

---

### 属性 `bUseSkeletalMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="SmartObject" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "SmartObject") bool bUseSkeletalMesh = false;` |

**说明:**

> 是否使用骨骼网格体

---

### 属性 `SkeletalMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<USkeletalMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="SmartObject" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SmartObject",meta=(EditConditionHides,EditCondition = "bUseSkeletalMesh")) TSoftObjectPtr<USkeletalMesh> SkeletalMesh;` |

**说明:**

> 骨骼网格体

---

### 属性 `AnimInstance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UAnimInstance>` |
| 反射说明符 | BlueprintReadOnly, Category="SmartObject" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "SmartObject",meta=(EditConditionHides,EditCondition = "bUseSkeletalMesh")) TSubclassOf<UAnimInstance> AnimInstance;` |

**说明:**

> 设施交互动画

---

### 属性 `BuildingSound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag,FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Sound") TMap<FGameplayTag,FName> BuildingSound;` |

**说明:**

> 建筑物的音效 key为音效的tag value 为对应的音效 读取GameSoundInfo配置

---

### 属性 `BuildingPutDownSound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAkAudioEvent*` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sound") class UAkAudioEvent* BuildingPutDownSound = nullptr;` |

**说明:**

> 建筑放置音效

---

### 属性 `BuildingCompleteSound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAkAudioEvent*` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sound") class UAkAudioEvent* BuildingCompleteSound = nullptr;` |

**说明:**

> 建筑完成音效

---

### 属性 `CanNotPlaceItemTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="Warehouse" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") FGameplayTagContainer CanNotPlaceItemTag;` |

**说明:**

> 仓库禁止放置物品分类标签

---

### 属性 `bWarehouseShowItemMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Warehouse" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") bool bWarehouseShowItemMesh = true;` |

**说明:**

> 仓库是否显示存放物模型

---

### 属性 `bWarehouseShowItemUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Warehouse" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") bool bWarehouseShowItemUI = true;` |

**说明:**

> 仓库是否显示存放物UI

---

### 属性 `bUseWarehouseTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Warehouse" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse", meta=(InlineEditConditionToggle)) bool bUseWarehouseTemperature = false;` |

**说明:**

> 是否使用仓库温度（WarehouseTemperature）影响存放物的温度

---

### 属性 `WarehouseTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Warehouse" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse", meta=(Editcondition="bUseWarehouseTemperature" )) int32 WarehouseTemperature = 15;` |

**说明:**

> 仓库的温度(修改存放物的温度为这个值)

---

### 属性 `AvailableGridOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGridPosition](ERW_CommonTypes__FGridPosition.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Warehouse" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") TArray<FGridPosition> AvailableGridOffset;` |

**说明:**

> 可用的格子（以建筑物占格最小格子为起点）

---

### 属性 `EnergyType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEnergyType](ERW_Enumerations__EEnergyType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") EEnergyType EnergyType = EEnergyType::None;` |

**说明:**

> 能源类型

---

### 属性 `EnergyBuildingDetailImage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TSoftObjectPtr<UTexture2D> EnergyBuildingDetailImage;` |

**说明:**

> 能源建筑详情图片

---

### 属性 `EnergyBeControlledControlType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EEnergyControlType](ERW_Enumerations__EEnergyControlType.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TArray<EEnergyControlType> EnergyBeControlledControlType;` |

**说明:**

> 自动化控件控制的方式

---

### 属性 `RolePerceptionlength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") float RolePerceptionlength = 0.f;` |

**说明:**

> 角色感知控制方式的范围长

---

### 属性 `RolePerceptionwidth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") float RolePerceptionwidth = 0.f;` |

**说明:**

> 角色感知控制方式的范围宽

---

### 属性 `EfficiencyCurve`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UCurveFloat*` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy" , meta=(EditConditionHides,Editcondition="EnergyType == EEnergyType::GenerateEnergy")) UCurveFloat* EfficiencyCurve = nullptr;` |

**说明:**

> 供能建筑效率曲线

---

### 属性 `GenerateBuildingWhenRunVariableProbabilityOfFailure`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EGenerateBuildingFaultProbability](ERW_Enumerations__EGenerateBuildingFaultProbability.md),float> |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy" , meta=(EditConditionHides,Editcondition="EnergyType == EEnergyType::GenerateEnergy")) TMap<EGenerateBuildingFaultProbability,float> GenerateBuildingWhenRunVariableProbabilityOfFailure;` |

**说明:**

> 供能建筑运行时不同情况变化的的故障概率

---

### 属性 `GenerateBuildingFaultInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EGenerateBuildingFaultType](ERW_Enumerations__EGenerateBuildingFaultType.md),int32> |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TMap<EGenerateBuildingFaultType,int32> GenerateBuildingFaultInfo;` |

**说明:**

> 供能建筑故障类型及其权重

---

### 属性 `MaxConsumeEnergyValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides, Editcondition="EnergyType == EEnergyType::ConsumeEnergy")) int32 MaxConsumeEnergyValue = 0;` |

**说明:**

> 能源消耗单位时间最大消耗的能源

---

### 属性 `CurConsumeEnergyValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 CurConsumeEnergyValue = 0;` |

**说明:**

> 能源消耗单位时间当前消耗的能源

---

### 属性 `MaxGenerateEnergyValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides,Editcondition="EnergyType == EEnergyType::GenerateEnergy")) int32 MaxGenerateEnergyValue = 0;` |

**说明:**

> 运行时单位时间最大产出的能源

---

### 属性 `CurGenerateEnergyValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 CurGenerateEnergyValue = 0;` |

**说明:**

> 运行时单位时间当前产出最大能源

---

### 属性 `MaxEnergyStorageValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides,Editcondition = "EnergyType == EEnergyType::EnergyStorage")) int32 MaxEnergyStorageValue = 0;` |

**说明:**

> 可以存储的最大能源

---

### 属性 `bIsPracticeBuilding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") bool bIsPracticeBuilding = false;` |

**说明:**

> 是否是修炼建筑

---

### 属性 `PracticeBuildingOverlockingData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EOverlockingType](ERW_Enumerations__EOverlockingType.md) , [FPracticeBuildingOverlockingData](ERW_ConfigTypes__FPracticeBuildingOverlockingData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides,Editcondition = "bIsPracticeBuilding == true")) TMap<EOverlockingType , FPracticeBuildingOverlockingData> PracticeBuildingOverlockingData;` |

**说明:**

> 修炼建筑的超频类型及其信息

---

### 属性 `SpecialEffectHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides, Editcondition="EnergyType != EEnergyType::None")) int32 SpecialEffectHeight = 0;` |

**说明:**

> 连线特效高度

---

### 属性 `IsCombinationCore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="BuildCombination" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "BuildCombination") bool IsCombinationCore = false;` |

**说明:**

> 是否组合中的核心建筑

---

### 属性 `PlayerTeamBuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FName> PlayerTeamBuffIDs;` |

**说明:**

> 玩家方的群BUff

---

### 属性 `IsHeatSource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="HeatSource" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource") bool IsHeatSource = false;` |

**说明:**

> 该建筑是否为热源建筑。

---

### 属性 `HeatSourceTemperatureEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="HeatSource" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource", meta=( editcondition="IsHeatSource" )) int32 HeatSourceTemperatureEffect = 0;` |

**说明:**

> 热源影响默认值

---

### 属性 `HeatSourceTemperatureEffectRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadWrite, Category="HeatSource" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource", meta=( editcondition="IsHeatSource" )) FIntPoint HeatSourceTemperatureEffectRange;` |

**说明:**

> 热源影响范围限制

---

### 属性 `IsLightSource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="LightSource" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "LightSource") bool IsLightSource = false;` |

**说明:**

> 是否光源

---

### 属性 `LightSourceTemperatureEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="LightSource" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "LightSource", meta=( editcondition="IsLightSource" )) int32 LightSourceTemperatureEffect = 0;` |

**说明:**

> 光源影响值

---

### 属性 `HaveEffectSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="EffectSize" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize") bool HaveEffectSize=false;` |

**说明:**

> 是否有影响范围

---

### 属性 `bCreateCollisionBox`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="EffectSize" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize",meta=( editcondition="HaveEffectSize")) bool bCreateCollisionBox = true;` |

**说明:**

> 是否创建碰撞框

---

### 属性 `BuildingEffectSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | BlueprintReadWrite, Category="EffectSize" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FIntVector BuildingEffectSize = FIntVector::ZeroValue;` |

**说明:**

> 影响范围(基于建筑尺寸的加值)(X行，Y列，Z高)

---

### 属性 `BuildingEffectSizeOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | BlueprintReadWrite, Category="EffectSize" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FIntVector BuildingEffectSizeOffset = FIntVector::ZeroValue;` |

**说明:**

> 影响范围偏移

---

### 属性 `BuildingEffectTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite, Category="EffectSize" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FGameplayTagContainer BuildingEffectTags;` |

**说明:**

> 在影响范围内为角色添加的tag

---

### 属性 `BuildingEffectBuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="EffectSize" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) TArray<FName> BuildingEffectBuffIDs;` |

**说明:**

> 在影响范围内为角色添加的buff

---

### 属性 `LeaveEffectRangeBuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="EffectSize" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) TArray<FName> LeaveEffectRangeBuffIDs;` |

**说明:**

> 离开影响范围为角色添加的buff

---

### 属性 `FaultGenerateProjectile`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EGenerateBuildingFaultType](ERW_Enumerations__EGenerateBuildingFaultType.md),FAbilityProjectileStruct> |
| 反射说明符 | BlueprintReadWrite, Category="Energy" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TMap<EGenerateBuildingFaultType,FAbilityProjectileStruct> FaultGenerateProjectile;` |

**说明:**

> 供能建筑故障后产生的投射物

---

### 属性 `VehicleID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Vehicle" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Vehicle",meta=(EditCondition = "BuildingType == EBuildingType::Transportation",EditConditionHides)) FName VehicleID;` |

**说明:**

> 交通工具配置id TransportationInfo 表

---

### 属性 `bAutoFabricateBuild`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Fabricate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Fabricate",meta=(EditCondition = "BuildingType == EBuildingType::Fabricate",EditConditionHides)) bool bAutoFabricateBuild = false;` |

**说明:**

> 制造建筑物 是否是自动制造

---

### 属性 `AutoFabricateOutputWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Fabricate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Fabricate") int32 AutoFabricateOutputWorkload = 0;` |

**说明:**

> 自动化建筑自动输出的工作量

---

### 属性 `ItemPrice`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float ItemPrice = 0.1f;` |

**说明:**

> 建筑价值(实际财富点数)

---

### 属性 `CustomMeshBoundsRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Battle" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere,Category = "Battle") float CustomMeshBoundsRadius = 0.f;` |

**说明:**

> 自定义Mesh边界半径，不再通过Mesh获取(战斗使用)

---

### 属性 `SelectButtonType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[ECommonButtonType](UI/Struct/UIStruct__ECommonButtonType.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Button" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Button") TArray<ECommonButtonType> SelectButtonType;` |

**说明:**

> 默认选中状态的按钮

---
