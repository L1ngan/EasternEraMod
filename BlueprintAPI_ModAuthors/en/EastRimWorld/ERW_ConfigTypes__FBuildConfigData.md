# `struct` `FBuildConfigData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 建筑配置结构

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FString Name;` |

**Notes:**

> 建筑物名称(不显示)

---

### Property `EnvironType`

| Field | Details |
|------|------|
| C++ type | [EEnvironType](ERW_Enumerations__EEnvironType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EEnvironType EnvironType = EEnvironType::None;` |

**Notes:**

> 环境类型

---

### Property `ExtraEnvironInfos`

| Field | Details |
|------|------|
| C++ type | TMap<[EEnvironType](ERW_Enumerations__EEnvironType.md) , [FExtraInfos](ERW_ConfigTypes__FExtraInfos.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , Category = "Base") TMap<EEnvironType , FExtraInfos> ExtraEnvironInfos;` |

**Notes:**

> 建筑额外的占位信息
> TMap<环境类型 , 占位信息集合>

---

### Property `BuildingType`

| Field | Details |
|------|------|
| C++ type | [EBuildingType](ERW_Enumerations__EBuildingType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EBuildingType BuildingType = EBuildingType::None;` |

**Notes:**

> 建筑类型（主要用于区分功能型建筑）

---

### Property `FabricateType`

| Field | Details |
|------|------|
| C++ type | [EFabricateType](Struct/CommonEnum__EFabricateType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EFabricateType FabricateType = EFabricateType::None;` |

**Notes:**

> 设备类型

---

### Property `Size`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FIntVector Size = FIntVector::ZeroValue;` |

**Notes:**

> 占格子尺寸(Z为占高度尺寸)

---

### Property `SuitBodyType`

| Field | Details |
|------|------|
| C++ type | [EAnimalBodyType](ERW_Enumerations__EAnimalBodyType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EAnimalBodyType SuitBodyType = EAnimalBodyType::Normal;` |

**Notes:**

> 适应动物的体型

---

### Property `bHaveTips`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bHaveTips = false;` |

**Notes:**

> 是否会具有上方提示信息

---

### Property `bNeedFuel`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bNeedFuel = false;` |

**Notes:**

> 是否是需要消耗燃料的建筑

---

### Property `BuildHeightDifference`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float BuildHeightDifference { 5.f };` |

**Notes:**

> 建筑放置允许的最大高低差

---

### Property `TotalFuel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float TotalFuel = 0.f;` |

**Notes:**

> 建筑总燃料

---

### Property `OneTimeExpendFuel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float OneTimeExpendFuel = 0.f;` |

**Notes:**

> 建筑每次消耗的燃料

---

### Property `ExpendFuelInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float ExpendFuelInterval = 0.f;` |

**Notes:**

> 建筑消耗燃料的时间间隔

---

### Property `SelectableFuelTag`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) TArray<FGameplayTag> SelectableFuelTag;` |

**Notes:**

> 建筑的燃料ID

---

### Property `OwnerNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 OwnerNum { 0 };` |

**Notes:**

> 拥有者数量

---

### Property `BuildNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 BuildNum { 0 };` |

**Notes:**

> 可建造数量

---

### Property `ZIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 ZIndex { 0 };` |

**Notes:**

> 物体所处高度

---

### Property `GenerateMode`

| Field | Details |
|------|------|
| C++ type | [EGenerateMode](ERW_Enumerations__EGenerateMode.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") EGenerateMode GenerateMode = EGenerateMode::Solo;` |

**Notes:**

> 创建方式(单个, 线型, 矩形)

---

### Property `GOAPActions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="GOAP" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "GOAP") TArray<FName> GOAPActions;` |

**Notes:**

> 建筑拥有的GOAP Action

---

### Property `PresetSize`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Preset" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Preset") FIntVector PresetSize = FIntVector::ZeroValue;` |

**Notes:**

> 预设建筑的占格子尺寸

---

### Property `PresetData`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPresetInfos](ERW_CommonTypes__FPresetInfos.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Preset" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Preset") TMap<FName , FPresetInfos> PresetData;` |

**Notes:**

> 预设建筑的数据
> TMap<建筑表ID , 数据>

---

### Property `WallPillarData`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FPresetInfos](ERW_CommonTypes__FPresetInfos.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Preset" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Preset") TMap<FName , FPresetInfos> WallPillarData;` |

**Notes:**

> 预设墙接缝柱的数据
> TMap<建筑表ID , 数据>

---

### Property `StaticMeshes`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;` |

**Notes:**

> 普通建筑模型(有多个则随机选择)

---

### Property `StairFlatMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TSoftObjectPtr<UStaticMesh> StairFlatMesh;` |

**Notes:**

> 阶梯平台模型

---

### Property `AssembleStaticMeshes`

| Field | Details |
|------|------|
| C++ type | TMap<[EAssemblePartType](ERW_Enumerations__EAssemblePartType.md) , TSoftObjectPtr<UStaticMesh>> |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TMap<EAssemblePartType , TSoftObjectPtr<UStaticMesh>> AssembleStaticMeshes;` |

**Notes:**

> 组装部位对应的模型

---

### Property `AssemblePartTransforms`

| Field | Details |
|------|------|
| C++ type | TArray<[FAssemblePartTransform](ERW_CommonTypes__FAssemblePartTransform.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TArray<FAssemblePartTransform> AssemblePartTransforms;` |

**Notes:**

> 组装部位的Transform

---

### Property `ShackPillarMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TSoftObjectPtr<UStaticMesh> ShackPillarMesh;` |

**Notes:**

> 窝棚柱子模型

---

### Property `CastShadow`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") bool CastShadow { true };` |

**Notes:**

> 建筑模型是否投影

---

### Property `DoorCollisionOffset`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") FVector DoorCollisionOffset = FVector::ZeroVector;` |

**Notes:**

> 门包围盒偏移

---

### Property `DoorCollisionExtent`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") FVector DoorCollisionExtent = FVector::ZeroVector;` |

**Notes:**

> 门包围盒大小

---

### Property `MeshMaterialParameter`

| Field | Details |
|------|------|
| C++ type | [FMeshMaterialParameter](ERW_ConfigTypes__FMeshMaterialParameter.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") FMeshMaterialParameter MeshMaterialParameter;` |

**Notes:**

> 建筑模型材质参数

---

### Property `EntranceGridPoses`

| Field | Details |
|------|------|
| C++ type | TArray<[FRelativeGridPoses](ERW_ConfigTypes__FRelativeGridPoses.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FRelativeGridPoses> EntranceGridPoses;` |

**Notes:**

> 建筑入口的格子坐标(相对格子坐标)

---

### Property `SupportingGrids`

| Field | Details |
|------|------|
| C++ type | TMap<[EEnvironType](ERW_Enumerations__EEnvironType.md) , [FRelativeGridPoses](ERW_ConfigTypes__FRelativeGridPoses.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TMap<EEnvironType , FRelativeGridPoses> SupportingGrids;` |

**Notes:**

> 配套物体的格子坐标(相对格子坐标)

---

### Property `FacilityEffect`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UGameplayEffect>` |
| Reflection specifiers | BlueprintReadWrite, Category="Effect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Effect") TSoftClassPtr<UGameplayEffect> FacilityEffect;` |

**Notes:**

> 设施效果

---

### Property `ParticleEffectData`

| Field | Details |
|------|------|
| C++ type | [FParticleEffectData](ERW_ConfigTypes__FParticleEffectData.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Effect" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere , Category = "Effect") FParticleEffectData ParticleEffectData;` |

**Notes:**

> 粒子效果数据

---

### Property `PillarForWall`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Wall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Wall") TSoftObjectPtr<UStaticMesh> PillarForWall;` |

**Notes:**

> 墙体接缝柱(墙专用)

---

### Property `WallWithHole`

| Field | Details |
|------|------|
| C++ type | TMap<[EEmbeddedWallType](ERW_Enumerations__EEmbeddedWallType.md) , TSoftObjectPtr<UStaticMesh>> |
| Reflection specifiers | BlueprintReadWrite, Category="Wall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Wall") TMap<EEmbeddedWallType , TSoftObjectPtr<UStaticMesh>> WallWithHole;` |

**Notes:**

> 带洞的墙模型(墙专用)

---

### Property `AutoTileMeshes`

| Field | Details |
|------|------|
| C++ type | TArray<[FAutoTileMeshConfigData](ERW_ConfigTypes__FAutoTileMeshConfigData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TArray<FAutoTileMeshConfigData> AutoTileMeshes;` |

**Notes:**

> 九宫格模型

---

### Property `RoofMeshes`

| Field | Details |
|------|------|
| C++ type | TMap<[ERoofPartType](ERW_Enumerations__ERoofPartType.md) , TSoftObjectPtr<UStaticMesh>> |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TMap<ERoofPartType , TSoftObjectPtr<UStaticMesh>> RoofMeshes;` |

**Notes:**

> 屋顶每个部位对应的模型

---

### Property `Durability`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Durability { -1 };` |

**Notes:**

> 耐久度

---

### Property `BuildResource`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TMap<FName , int32> BuildResource;` |

**Notes:**

> 建造资源(item--数量)

---

### Property `RebuiltIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FName> RebuiltIDs;` |

**Notes:**

> 重建的ID

---

### Property `Workload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Workload { 0 };` |

**Notes:**

> 建造工作量

---

### Property `DestoryWorkload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 DestoryWorkload {0};` |

**Notes:**

> 拆除工作量

---

### Property `DestoryReturnPrecent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float DestoryReturnPrecent {0.f};` |

**Notes:**

> 拆除返还建造资源的百分比(0~1)

---

### Property `SkillLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 SkillLevel { 0 };` |

**Notes:**

> 需求建造技能等级

---

### Property `ThermalConductivity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float ThermalConductivity { 0.f };` |

**Notes:**

> 热传导效率

---

### Property `Solidness`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Solidness { 0 };` |

**Notes:**

> 坚固度(0没有)

---

### Property `Aesthetic`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Aesthetic { 0 };` |

**Notes:**

> 美观度

---

### Property `FiveElementScore`

| Field | Details |
|------|------|
| C++ type | TMap<[EFiveElementType](Struct/CommonEnum__EFiveElementType.md),float> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TMap<EFiveElementType,float> FiveElementScore;` |

**Notes:**

> 五行属性

---

### Property `Defense`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Defense { 0 };` |

**Notes:**

> 防御

---

### Property `MaterialCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base",meta=(ClampMin = 0.f,ClampMax = 1.f)) float MaterialCoefficient { 0 };` |

**Notes:**

> 材质系数 计算公式为（攻击 - 防御 ） * （1 - 材质系数）当系数为1时 无法被攻击

---

### Property `bRepairable`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bRepairable = false;` |

**Notes:**

> 损坏后是否可以被修复

---

### Property `Parameter`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , FString>` |
| Reflection specifiers | BlueprintReadWrite, Category="Parameter" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Parameter") TMap<int32 , FString> Parameter;` |

**Notes:**

> 额外变量(值: 说明文本) 仓库：第一个参数 初始高度 第二个参数 每层的间隔高度 第三个参数 总共层数

---

### Property `NameParameter`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Parameter" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Parameter") TArray<FName> NameParameter;` |

**Notes:**

> 读取其他配置表的行命名参数 建筑物为炮台时 读取召唤物表

---

### Property `AttachTransform`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadWrite, Category="Parameter" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Parameter") FTransform AttachTransform = FTransform::Identity;` |

**Notes:**

> 附加到的位置偏移 建筑为炮台时 为炮塔的位置

---

### Property `InterActionDefine`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<USmartObjectDefinition>` |
| Reflection specifiers | BlueprintReadWrite, Category="SmartObject" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "SmartObject") TSoftObjectPtr<USmartObjectDefinition> InterActionDefine;` |

**Notes:**

> 设备交互定义

---

### Property `OpenBuildingWidgetID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "UI") FName OpenBuildingWidgetID;` |

**Notes:**

> 打开的建筑物主界面ID

---

### Property `ConstructCollisionProfileName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Collision" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Collision") FName ConstructCollisionProfileName;` |

**Notes:**

> 建造中的碰撞预设(透明状态)
> 可选项有Building_NoCollision_NoNavigation, Building_Base_Complete, Building_Base_Construct, Building_Navigation_Collision, Building_Navigation_NoCollision

---

### Property `CompleteCollisionProfileName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Collision" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Collision") FName CompleteCollisionProfileName;` |

**Notes:**

> 建造完成后使用的碰撞预设

---

### Property `UseMeshScale`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Collision" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite ,EditAnywhere,Category = "Collision") bool UseMeshScale { false };` |

**Notes:**

> 地基不勾选此项, 地基动态的根据高度创建碰撞, 与地基相同需要根据高度创建时不勾选此项

---

### Property `CollisionMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Collision" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Collision") TSoftObjectPtr<UStaticMesh> CollisionMesh;` |

**Notes:**

> 使用的碰撞模型

---

### Property `UseDefaultMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Collision" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Collision") bool UseDefaultMesh { false };` |

**Notes:**

> 是否是使用的基础正方形模型, 既预设模型而不是建筑物本身模型

---

### Property `LightParams`

| Field | Details |
|------|------|
| C++ type | TArray<[FBuildLightSourceData](ERW_CommonTypes__FBuildLightSourceData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Light" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Light") TArray<FBuildLightSourceData> LightParams;` |

**Notes:**

> 灯具相关配置参数

---

### Property `UnlockItemTags`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FGameplayTag> UnlockItemTags;` |

**Notes:**

> 解锁必须要获取的物品的TAG（满足任意一，就可以解锁）

---

### Property `UnlockItemDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FText UnlockItemDesc;` |

**Notes:**

> 解锁必须要获取的物品描述内容

---

### Property `bIsFightRobotUse`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bIsFightRobotUse = false;` |

**Notes:**

> 是否是战斗机关人使用的(傀儡)

---

### Property `bIsAnimalUse`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bIsAnimalUse = false;` |

**Notes:**

> 是否是动物使用的

---

### Property `FoodTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FGameplayTag FoodTag;` |

**Notes:**

> 食槽可以添加的物品Tag

---

### Property `bUseSkeletalMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="SmartObject" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "SmartObject") bool bUseSkeletalMesh = false;` |

**Notes:**

> 是否使用骨骼网格体

---

### Property `SkeletalMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<USkeletalMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="SmartObject" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SmartObject",meta=(EditConditionHides,EditCondition = "bUseSkeletalMesh")) TSoftObjectPtr<USkeletalMesh> SkeletalMesh;` |

**Notes:**

> 骨骼网格体

---

### Property `AnimInstance`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UAnimInstance>` |
| Reflection specifiers | BlueprintReadOnly, Category="SmartObject" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "SmartObject",meta=(EditConditionHides,EditCondition = "bUseSkeletalMesh")) TSubclassOf<UAnimInstance> AnimInstance;` |

**Notes:**

> 设施交互动画

---

### Property `BuildingSound`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag,FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Sound") TMap<FGameplayTag,FName> BuildingSound;` |

**Notes:**

> 建筑物的音效 key为音效的tag value 为对应的音效 读取GameSoundInfo配置

---

### Property `BuildingPutDownSound`

| Field | Details |
|------|------|
| C++ type | `class UAkAudioEvent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sound") class UAkAudioEvent* BuildingPutDownSound = nullptr;` |

**Notes:**

> 建筑放置音效

---

### Property `BuildingCompleteSound`

| Field | Details |
|------|------|
| C++ type | `class UAkAudioEvent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sound") class UAkAudioEvent* BuildingCompleteSound = nullptr;` |

**Notes:**

> 建筑完成音效

---

### Property `CanNotPlaceItemTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") FGameplayTagContainer CanNotPlaceItemTag;` |

**Notes:**

> 仓库禁止放置物品分类标签

---

### Property `bWarehouseShowItemMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") bool bWarehouseShowItemMesh = true;` |

**Notes:**

> 仓库是否显示存放物模型

---

### Property `bWarehouseShowItemUI`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") bool bWarehouseShowItemUI = true;` |

**Notes:**

> 仓库是否显示存放物UI

---

### Property `bUseWarehouseTemperature`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse", meta=(InlineEditConditionToggle)) bool bUseWarehouseTemperature = false;` |

**Notes:**

> 是否使用仓库温度（WarehouseTemperature）影响存放物的温度

---

### Property `WarehouseTemperature`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse", meta=(Editcondition="bUseWarehouseTemperature" )) int32 WarehouseTemperature = 15;` |

**Notes:**

> 仓库的温度(修改存放物的温度为这个值)

---

### Property `AvailableGridOffset`

| Field | Details |
|------|------|
| C++ type | TArray<[FGridPosition](ERW_CommonTypes__FGridPosition.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") TArray<FGridPosition> AvailableGridOffset;` |

**Notes:**

> 可用的格子（以建筑物占格最小格子为起点）

---

### Property `EnergyType`

| Field | Details |
|------|------|
| C++ type | [EEnergyType](ERW_Enumerations__EEnergyType.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") EEnergyType EnergyType = EEnergyType::None;` |

**Notes:**

> 能源类型

---

### Property `EnergyBuildingDetailImage`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TSoftObjectPtr<UTexture2D> EnergyBuildingDetailImage;` |

**Notes:**

> 能源建筑详情图片

---

### Property `EnergyBeControlledControlType`

| Field | Details |
|------|------|
| C++ type | TArray<[EEnergyControlType](ERW_Enumerations__EEnergyControlType.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TArray<EEnergyControlType> EnergyBeControlledControlType;` |

**Notes:**

> 自动化控件控制的方式

---

### Property `RolePerceptionlength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") float RolePerceptionlength = 0.f;` |

**Notes:**

> 角色感知控制方式的范围长

---

### Property `RolePerceptionwidth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") float RolePerceptionwidth = 0.f;` |

**Notes:**

> 角色感知控制方式的范围宽

---

### Property `EfficiencyCurve`

| Field | Details |
|------|------|
| C++ type | `UCurveFloat*` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy" , meta=(EditConditionHides,Editcondition="EnergyType == EEnergyType::GenerateEnergy")) UCurveFloat* EfficiencyCurve = nullptr;` |

**Notes:**

> 供能建筑效率曲线

---

### Property `GenerateBuildingWhenRunVariableProbabilityOfFailure`

| Field | Details |
|------|------|
| C++ type | TMap<[EGenerateBuildingFaultProbability](ERW_Enumerations__EGenerateBuildingFaultProbability.md),float> |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy" , meta=(EditConditionHides,Editcondition="EnergyType == EEnergyType::GenerateEnergy")) TMap<EGenerateBuildingFaultProbability,float> GenerateBuildingWhenRunVariableProbabilityOfFailure;` |

**Notes:**

> 供能建筑运行时不同情况变化的的故障概率

---

### Property `GenerateBuildingFaultInfo`

| Field | Details |
|------|------|
| C++ type | TMap<[EGenerateBuildingFaultType](ERW_Enumerations__EGenerateBuildingFaultType.md),int32> |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TMap<EGenerateBuildingFaultType,int32> GenerateBuildingFaultInfo;` |

**Notes:**

> 供能建筑故障类型及其权重

---

### Property `MaxConsumeEnergyValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides, Editcondition="EnergyType == EEnergyType::ConsumeEnergy")) int32 MaxConsumeEnergyValue = 0;` |

**Notes:**

> 能源消耗单位时间最大消耗的能源

---

### Property `CurConsumeEnergyValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 CurConsumeEnergyValue = 0;` |

**Notes:**

> 能源消耗单位时间当前消耗的能源

---

### Property `MaxGenerateEnergyValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides,Editcondition="EnergyType == EEnergyType::GenerateEnergy")) int32 MaxGenerateEnergyValue = 0;` |

**Notes:**

> 运行时单位时间最大产出的能源

---

### Property `CurGenerateEnergyValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 CurGenerateEnergyValue = 0;` |

**Notes:**

> 运行时单位时间当前产出最大能源

---

### Property `MaxEnergyStorageValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides,Editcondition = "EnergyType == EEnergyType::EnergyStorage")) int32 MaxEnergyStorageValue = 0;` |

**Notes:**

> 可以存储的最大能源

---

### Property `bIsPracticeBuilding`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") bool bIsPracticeBuilding = false;` |

**Notes:**

> 是否是修炼建筑

---

### Property `PracticeBuildingOverlockingData`

| Field | Details |
|------|------|
| C++ type | TMap<[EOverlockingType](ERW_Enumerations__EOverlockingType.md) , [FPracticeBuildingOverlockingData](ERW_ConfigTypes__FPracticeBuildingOverlockingData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides,Editcondition = "bIsPracticeBuilding == true")) TMap<EOverlockingType , FPracticeBuildingOverlockingData> PracticeBuildingOverlockingData;` |

**Notes:**

> 修炼建筑的超频类型及其信息

---

### Property `SpecialEffectHeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides, Editcondition="EnergyType != EEnergyType::None")) int32 SpecialEffectHeight = 0;` |

**Notes:**

> 连线特效高度

---

### Property `IsCombinationCore`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="BuildCombination" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "BuildCombination") bool IsCombinationCore = false;` |

**Notes:**

> 是否组合中的核心建筑

---

### Property `PlayerTeamBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FName> PlayerTeamBuffIDs;` |

**Notes:**

> 玩家方的群BUff

---

### Property `IsHeatSource`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="HeatSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource") bool IsHeatSource = false;` |

**Notes:**

> Whether this building is a heat source.

---

### Property `HeatSourceTemperatureEffect`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="HeatSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource", meta=( editcondition="IsHeatSource" )) int32 HeatSourceTemperatureEffect = 0;` |

**Notes:**

> 热源影响默认值

---

### Property `HeatSourceTemperatureEffectRange`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite, Category="HeatSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource", meta=( editcondition="IsHeatSource" )) FIntPoint HeatSourceTemperatureEffectRange;` |

**Notes:**

> 热源影响范围限制

---

### Property `IsLightSource`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="LightSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "LightSource") bool IsLightSource = false;` |

**Notes:**

> 是否光源

---

### Property `LightSourceTemperatureEffect`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="LightSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "LightSource", meta=( editcondition="IsLightSource" )) int32 LightSourceTemperatureEffect = 0;` |

**Notes:**

> 光源影响值

---

### Property `HaveEffectSize`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize") bool HaveEffectSize=false;` |

**Notes:**

> 是否有影响范围

---

### Property `bCreateCollisionBox`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize",meta=( editcondition="HaveEffectSize")) bool bCreateCollisionBox = true;` |

**Notes:**

> 是否创建碰撞框

---

### Property `BuildingEffectSize`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FIntVector BuildingEffectSize = FIntVector::ZeroValue;` |

**Notes:**

> 影响范围(基于建筑尺寸的加值)(X行，Y列，Z高)

---

### Property `BuildingEffectSizeOffset`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FIntVector BuildingEffectSizeOffset = FIntVector::ZeroValue;` |

**Notes:**

> 影响范围偏移

---

### Property `BuildingEffectTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FGameplayTagContainer BuildingEffectTags;` |

**Notes:**

> 在影响范围内为角色添加的tag

---

### Property `BuildingEffectBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) TArray<FName> BuildingEffectBuffIDs;` |

**Notes:**

> 在影响范围内为角色添加的buff

---

### Property `LeaveEffectRangeBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) TArray<FName> LeaveEffectRangeBuffIDs;` |

**Notes:**

> 离开影响范围为角色添加的buff

---

### Property `FaultGenerateProjectile`

| Field | Details |
|------|------|
| C++ type | TMap<[EGenerateBuildingFaultType](ERW_Enumerations__EGenerateBuildingFaultType.md),FAbilityProjectileStruct> |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TMap<EGenerateBuildingFaultType,FAbilityProjectileStruct> FaultGenerateProjectile;` |

**Notes:**

> 供能建筑故障后产生的投射物

---

### Property `VehicleID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Vehicle" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Vehicle",meta=(EditCondition = "BuildingType == EBuildingType::Transportation",EditConditionHides)) FName VehicleID;` |

**Notes:**

> 交通工具配置id TransportationInfo 表

---

### Property `bAutoFabricateBuild`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Fabricate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Fabricate",meta=(EditCondition = "BuildingType == EBuildingType::Fabricate",EditConditionHides)) bool bAutoFabricateBuild = false;` |

**Notes:**

> 制造建筑物 是否是自动制造

---

### Property `AutoFabricateOutputWorkload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Fabricate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Fabricate") int32 AutoFabricateOutputWorkload = 0;` |

**Notes:**

> 自动化建筑自动输出的工作量

---

### Property `ItemPrice`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float ItemPrice = 0.1f;` |

**Notes:**

> 建筑价值(实际财富点数)

---

### Property `CustomMeshBoundsRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Battle" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, EditAnywhere,Category = "Battle") float CustomMeshBoundsRadius = 0.f;` |

**Notes:**

> 自定义Mesh边界半径，不再通过Mesh获取(战斗使用)

---

### Property `SelectButtonType`

| Field | Details |
|------|------|
| C++ type | TArray<[ECommonButtonType](UI/Struct/UIStruct__ECommonButtonType.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Button" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Button") TArray<ECommonButtonType> SelectButtonType;` |

**Notes:**

> 默认选中状态的按钮

---
