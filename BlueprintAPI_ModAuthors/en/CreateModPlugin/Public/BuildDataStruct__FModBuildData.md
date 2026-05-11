# `struct` `FModBuildData`

**Source header:** `CreateModPlugin/Public/BuildDataStruct.h`

---

## Functional description (from header comments)

> mod建筑物

## Blueprint-exposed variables

### Property `Size`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") FIntVector Size = FIntVector::ZeroValue;` |

**Source comments:**

> 占格子尺寸(Z为占高度尺寸)

---

### Property `BuildResource`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TMap<FName , int32> BuildResource;` |

**Source comments:**

> 建造资源(item--数量)

---

### Property `Workload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Workload { 0 };` |

**Source comments:**

> 建造工作量

---

### Property `DestoryWorkload`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 DestoryWorkload {0};` |

**Source comments:**

> 拆除工作量

---

### Property `DestoryReturnPrecent`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float DestoryReturnPrecent {0.f};` |

**Source comments:**

> 拆除返还建造资源的百分比(0~1)

---

### Property `SkillLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 SkillLevel { 0 };` |

**Source comments:**

> 需求建造技能等级

---

### Property `OwnerNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 OwnerNum { 0 };` |

**Source comments:**

> 拥有者数量

---

### Property `EntranceGridPoses`

| Field | Details |
|------|------|
| C++ type | TArray<[FModRelativeGridPoses](BuildDataStruct__FModRelativeGridPoses.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FModRelativeGridPoses> EntranceGridPoses;` |

**Source comments:**

> 建筑入口的格子坐标(相对格子坐标)

---

### Property `Durability`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Durability { -1 };` |

**Source comments:**

> 耐久度

---

### Property `Aesthetic`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Aesthetic { 0 };` |

**Source comments:**

> 美观度

---

### Property `FiveElementScore`

| Field | Details |
|------|------|
| C++ type | `TMap<EModFiveElementType,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TMap<EModFiveElementType,float> FiveElementScore;` |

**Source comments:**

> 五行属性

---

### Property `Defense`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") int32 Defense { 0 };` |

**Source comments:**

> 防御

---

### Property `MaterialCoefficient`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base",meta=(ClampMin = 0.f,ClampMax = 1.f)) float MaterialCoefficient { 0 };` |

**Source comments:**

> 材质系数 计算公式为（攻击 - 防御 ） * （1 - 材质系数）当系数为1时 无法被攻击

---

### Property `PlayerTeamBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") TArray<FName> PlayerTeamBuffIDs;` |

**Source comments:**

> 玩家方的群BUff 关联Buff表

---

### Property `AutoTileMeshes`

| Field | Details |
|------|------|
| C++ type | TArray<[FModAutoTileMeshConfigData](BuildDataStruct__FModAutoTileMeshConfigData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TArray<FModAutoTileMeshConfigData> AutoTileMeshes;` |

**Source comments:**

> 九宫格模型

---

### Property `StaticMeshes`

| Field | Details |
|------|------|
| C++ type | `TArray<TSoftObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TArray<TSoftObjectPtr<UStaticMesh>> StaticMeshes;` |

**Source comments:**

> 普通建筑模型(有多个则随机选择)

---

### Property `RoofMeshes`

| Field | Details |
|------|------|
| C++ type | `TMap<EModRoofPartType , TSoftObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Mesh" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Mesh") TMap<EModRoofPartType , TSoftObjectPtr<UStaticMesh>> RoofMeshes;` |

**Source comments:**

> 屋顶每个部位对应的模型

---

### Property `PillarForWall`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Wall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Wall") TSoftObjectPtr<UStaticMesh> PillarForWall;` |

**Source comments:**

> 墙体接缝柱(墙专用)

---

### Property `WallWithHole`

| Field | Details |
|------|------|
| C++ type | `TMap<EModEmbeddedWallType , TSoftObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Wall" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Wall") TMap<EModEmbeddedWallType , TSoftObjectPtr<UStaticMesh>> WallWithHole;` |

**Source comments:**

> 带洞的墙模型(墙专用)

---

### Property `Parameter`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , FString>` |
| Reflection specifiers | BlueprintReadWrite, Category="Parameter" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Parameter") TMap<int32 , FString> Parameter;` |

**Source comments:**

> 额外变量(值: 说明文本) 仓库：第一个参数 初始高度 第二个参数 每层的间隔高度 第三个参数 总共层数

---

### Property `InterActionDefine`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<USmartObjectDefinition>` |
| Reflection specifiers | BlueprintReadWrite, Category="SmartObject" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "SmartObject") TSoftObjectPtr<USmartObjectDefinition> InterActionDefine;` |

**Source comments:**

> 设备交互定义

---

### Property `bUseSkeletalMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="SmartObject" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "SmartObject") bool bUseSkeletalMesh = false;` |

**Source comments:**

> 是否使用骨骼网格体

---

### Property `SkeletalMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<USkeletalMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="SmartObject" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SmartObject",meta=(EditConditionHides,EditCondition = "bUseSkeletalMesh")) TSoftObjectPtr<USkeletalMesh> SkeletalMesh;` |

**Source comments:**

> 骨骼网格体

---

### Property `AnimInstance`

| Field | Details |
|------|------|
| C++ type | `TSubclassOf<UAnimInstance>` |
| Reflection specifiers | BlueprintReadOnly, Category="SmartObject" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "SmartObject",meta=(EditConditionHides,EditCondition = "bUseSkeletalMesh")) TSubclassOf<UAnimInstance> AnimInstance;` |

**Source comments:**

> 设施交互动画

---

### Property `LightParams`

| Field | Details |
|------|------|
| C++ type | TArray<[FModBuildLightSourceData](BuildDataStruct__FModBuildLightSourceData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Light" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Light") TArray<FModBuildLightSourceData> LightParams;` |

**Source comments:**

> 灯具相关配置参数

---

### Property `bWarehouseShowItemMesh`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") bool bWarehouseShowItemMesh = true;` |

**Source comments:**

> 仓库是否显示存放物模型

---

### Property `CanNotPlaceItemTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse") FGameplayTagContainer CanNotPlaceItemTag;` |

**Source comments:**

> 仓库禁止放置物品分类标签

---

### Property `bUseWarehouseTemperature`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse", meta=(InlineEditConditionToggle)) bool bUseWarehouseTemperature = false;` |

**Source comments:**

> 是否使用仓库温度（WarehouseTemperature）影响存放物的温度

---

### Property `WarehouseTemperature`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Warehouse" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Warehouse", meta=(Editcondition="bUseWarehouseTemperature" )) int32 WarehouseTemperature = 15;` |

**Source comments:**

> 仓库的温度(修改存放物的温度为这个值)

---

### Property `IsHeatSource`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="HeatSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource") bool IsHeatSource = false;` |

---

### Property `HeatSourceTemperatureEffect`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="HeatSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "HeatSource", meta=( editcondition="IsHeatSource" )) int32 HeatSourceTemperatureEffect = 0;` |

**Source comments:**

> 热源影响值

---

### Property `IsLightSource`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="LightSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "LightSource") bool IsLightSource = false;` |

**Source comments:**

> 是否光源

---

### Property `LightSourceTemperatureEffect`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="LightSource" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "LightSource", meta=( editcondition="IsLightSource" )) int32 LightSourceTemperatureEffect = 0;` |

**Source comments:**

> 光源影响值

---

### Property `HaveEffectSize`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize") bool HaveEffectSize=false;` |

**Source comments:**

> 是否有影响范围

---

### Property `BuildingEffectSize`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FIntVector BuildingEffectSize = FIntVector::ZeroValue;` |

**Source comments:**

> 影响范围(基于建筑尺寸的加值)(X行，Y列，Z高)

---

### Property `BuildingEffectSizeOffset`

| Field | Details |
|------|------|
| C++ type | `FIntVector` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FIntVector BuildingEffectSizeOffset = FIntVector::ZeroValue;` |

**Source comments:**

> 影响范围偏移

---

### Property `BuildingEffectTags`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) FGameplayTagContainer BuildingEffectTags;` |

**Source comments:**

> 在影响范围内为角色添加的tag

---

### Property `BuildingEffectBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) TArray<FName> BuildingEffectBuffIDs;` |

**Source comments:**

> 在影响范围内为角色添加的buff

---

### Property `LeaveEffectRangeBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="EffectSize" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "EffectSize", meta=( editcondition="HaveEffectSize" )) TArray<FName> LeaveEffectRangeBuffIDs;` |

**Source comments:**

> 离开影响范围为角色添加的buff

---

### Property `bNeedFuel`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") bool bNeedFuel = false;` |

**Source comments:**

> 是否是需要消耗燃料的建筑

---

### Property `TotalFuel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float TotalFuel = 0.f;` |

**Source comments:**

> 建筑总燃料

---

### Property `OneTimeExpendFuel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float OneTimeExpendFuel = 0.f;` |

**Source comments:**

> 建筑每次消耗的燃料

---

### Property `ExpendFuelInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) float ExpendFuelInterval = 0.f;` |

**Source comments:**

> 建筑消耗燃料的时间间隔

---

### Property `SelectableFuelTag`

| Field | Details |
|------|------|
| C++ type | `TArray<FGameplayTag>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base" , Meta = (EditCondition = "bNeedFuel")) TArray<FGameplayTag> SelectableFuelTag;` |

**Source comments:**

> 建筑的燃料ID

---

### Property `EnergyType`

| Field | Details |
|------|------|
| C++ type | `EModEnergyType` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") EModEnergyType EnergyType = EModEnergyType::None;` |

**Source comments:**

> 能源类型

---

### Property `RolePerceptionlength`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") float RolePerceptionlength = 0.f;` |

**Source comments:**

> 角色感知控制方式的范围长

---

### Property `RolePerceptionwidth`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") float RolePerceptionwidth = 0.f;` |

**Source comments:**

> 角色感知控制方式的范围宽

---

### Property `GenerateBuildingFaultInfo`

| Field | Details |
|------|------|
| C++ type | `TMap<EModGenerateBuildingFaultType,int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy") TMap<EModGenerateBuildingFaultType,int32> GenerateBuildingFaultInfo;` |

**Source comments:**

> 供能建筑故障类型及其权重

---

### Property `MaxConsumeEnergyValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides, Editcondition="EnergyType == EModEnergyType::ConsumeEnergy")) int32 MaxConsumeEnergyValue = 0;` |

**Source comments:**

> 能源消耗单位时间最大消耗的能源

---

### Property `SpecialEffectHeight`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Energy" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Energy",meta=(EditConditionHides, Editcondition="EnergyType != EModEnergyType::None")) int32 SpecialEffectHeight = 0;` |

**Source comments:**

> 连线特效高度

---

### Property `OpenBuildingWidgetID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="UI" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "UI") FName OpenBuildingWidgetID;` |

**Source comments:**

> 打开的建筑物主界面ID

---

### Property `ItemPrice`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Base") float ItemPrice = 0.1f;` |

**Source comments:**

> 建筑价值(实际财富点数)

---
