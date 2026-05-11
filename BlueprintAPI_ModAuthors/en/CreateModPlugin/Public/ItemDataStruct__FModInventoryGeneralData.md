# `struct` `FModInventoryGeneralData`

**Source header:** `CreateModPlugin/Public/ItemDataStruct.h`

---

## Functional description (from header comments)

> 物品总表结构体

## Blueprint-exposed variables

### Property `ItemUseTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Units = s),Category="Base") float ItemUseTime = 0.f;` |

**Source comments:**

> 使用物品增加的时间 秒 目前 食用时生效

---

### Property `MaxItemDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float MaxItemDurability = -1;` |

**Source comments:**

> 耐久度 为-1时没有耐久

---

### Property `ItemWeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ItemWeight = false;` |

**Source comments:**

> 物品的重量（单位KG，支持小数点）

---

### Property `RotToItemID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName RotToItemID;` |

**Source comments:**

> 保质期过后（腐烂）的产物

---

### Property `StorageSpaceDecayRate`

| Field | Details |
|------|------|
| C++ type | `TMap<EModStorageSpace,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModStorageSpace,float> StorageSpaceDecayRate;` |

**Source comments:**

> 物品在各种存储空间下的保质期衰减率

---

### Property `ItemShelfLife`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ItemShelfLife = -1.f;` |

**Source comments:**

> 物品的保质期（游戏时间，秒） -1为没有保质期

---

### Property `RateOfDecay`

| Field | Details |
|------|------|
| C++ type | `TMap<EModGroundSoilType,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModGroundSoilType,float> RateOfDecay;` |

**Source comments:**

> 所处的地面影响保质期的衰减效率

---

### Property `TemperatureThreshold`

| Field | Details |
|------|------|
| C++ type | TArray<[FModEfficiencyByTemperature](ItemDataStruct__FModEfficiencyByTemperature.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FModEfficiencyByTemperature> TemperatureThreshold;` |

**Source comments:**

> 温度影响的相关效率(物品的保质期，植物的生成效率）

---

### Property `RawMaterial`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> RawMaterial;` |

**Source comments:**

> 此物品的原材料

---

### Property `NeedHight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float NeedHight = 0.f;` |

**Source comments:**

> 需要的高度 0 为没有高度限制

---

### Property `StackModels`

| Field | Details |
|------|------|
| C++ type | TArray<[FModStackModel](ItemDataStruct__FModStackModel.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FModStackModel> StackModels;` |

**Source comments:**

> 不同堆叠容量范围内的模型

---

### Property `SmallGridCount`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int SmallGridCount = 1;` |

**Source comments:**

> 此物品放置在地格中时占用的小格子数量 目前只有 1 跟 4 既 四分之1格和 整格

---

### Property `ItemIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> ItemIcon;` |

**Source comments:**

> 物品在UI上显示的图标

---

### Property `ItemPrice`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ItemPrice = 0.f;` |

**Source comments:**

> 物品出售/购买时的基础价格

---

### Property `bCanBeDismantled`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") bool bCanBeDismantled = false;` |

**Source comments:**

> 判断物品是否能拆解，拆解后给出的材料

---

### Property `DismantledMaterials`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int32> DismantledMaterials;` |

**Source comments:**

> 拆解后给予的道具与道具数量

---

### Property `RecoverValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 RecoverValue { 0 };` |

**Source comments:**

> 单个物品恢复值

---

### Property `MaxStackSize`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 MaxStackSize = 1;` |

**Source comments:**

> 该物品在地面/建筑内可堆叠的最大数量

---

### Property `ItemQuality`

| Field | Details |
|------|------|
| C++ type | `EModItemQuality` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModItemQuality ItemQuality = EModItemQuality::None;` |

**Source comments:**

> 物品品质，用于UI显示和筛选

---

### Property `ItemDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText ItemDescription;` |

**Source comments:**

> 物品在UI上显示的文字描述

---

### Property `ItemName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText ItemName;` |

**Source comments:**

> 物品名称

---

### Property `ItemModel`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UStaticMesh> ItemModel;` |

**Source comments:**

> 物品的3D模型 例如拿着的模型

---

### Property `GroundInventoryType`

| Field | Details |
|------|------|
| C++ type | `EModGroundInventoryType` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModGroundInventoryType GroundInventoryType = EModGroundInventoryType::None;` |

**Source comments:**

> 物品类型

---

### Property `FormatItemDescription`

| Field | Details |
|------|------|
| C++ type | [FModFormatText](BaseDataStruct__FModFormatText.md) |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FModFormatText FormatItemDescription;` |

**Source comments:**

> 格式化后的描述

---

### Property `ItemGrade`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Equipment Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") FText ItemGrade;` |

**Source comments:**

> 物品的品阶

---

### Property `ItemSubstituteClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<AActor>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftClassPtr<AActor> ItemSubstituteClass;` |

**Source comments:**

> 物品的替身类 在实际操作时会替换为此actor

---

### Property `GameplayTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base",Meta = (Categories = "Inventory")) FGameplayTag GameplayTag;` |

**Source comments:**

> 此物品的标签

---

### Property `BeforeObserveInformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Observe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FName BeforeObserveInformationWidget;` |

**Source comments:**

> 观察前点击物品实例后显示的界面ID 关联DT_CommonUIConfig表

---

### Property `InformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName InformationWidget;` |

**Source comments:**

> 点击物品实例后显示的界面ID 关联DT_CommonUIConfig表

---

### Property `TipInformationWidget`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName TipInformationWidget;` |

**Source comments:**

> 悬浮后显示的tip界面ID 关联DT_CommonUIConfig表

---

### Property `SocketName`

| Field | Details |
|------|------|
| C++ type | `TMap<EModCharacterBehaviorState,FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModCharacterBehaviorState,FName> SocketName;` |

**Source comments:**

> 在与此物品交换时此物品附加的插槽

---

### Property `GOAPActions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> GOAPActions;` |

**Source comments:**

> 物品拥有的GOAP Action的ID

---

### Property `BehaviorAnimation`

| Field | Details |
|------|------|
| C++ type | TMap<EModCharacterBehaviorState,[FModGroupCorrespondingAnim](ItemDataStruct__FModGroupCorrespondingAnim.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModCharacterBehaviorState,FModGroupCorrespondingAnim> BehaviorAnimation;` |

**Source comments:**

> 在与此物品交换时行为对应的动画(目前在拾取物品时使用）

---

### Property `BehaviorBlendAnimation`

| Field | Details |
|------|------|
| C++ type | TMap<EModCharacterBehaviorState,[FModGroupCorrespondingAnim](ItemDataStruct__FModGroupCorrespondingAnim.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModCharacterBehaviorState,FModGroupCorrespondingAnim> BehaviorBlendAnimation;` |

**Source comments:**

> 此物品拾取以后下一个action对应的混合动作 例如拾取原木后抱着原木行走的上半身混合动作

---

### Property `BehaviorItemMesh`

| Field | Details |
|------|------|
| C++ type | `TMap<EModCharacterBehaviorState,TSoftObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModCharacterBehaviorState,TSoftObjectPtr<UStaticMesh>> BehaviorItemMesh;` |

**Source comments:**

> 在行为中时使用的模型 如果不配置则使用默认

---

### Property `ItemSound`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag,FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sound") TMap<FGameplayTag,FName> ItemSound;` |

**Source comments:**

> 物品相关的音效 key 为音效的播放tag value 音效的id  读取GameSoundInfo

---

### Property `EffectContainerMap`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;` |

**Source comments:**

> 使用此物品后会产生的效果 目前 食用时生效

---

### Property `GrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Base") float GrowScore = 0.f;` |

**Source comments:**

> 对应的成长积分

---

### Property `ForMulaId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName ForMulaId;` |

**Source comments:**

> 物品关联的配方id

---
