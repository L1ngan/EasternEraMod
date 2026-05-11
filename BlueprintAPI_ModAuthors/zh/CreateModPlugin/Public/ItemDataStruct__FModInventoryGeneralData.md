# `struct` `FModInventoryGeneralData`

**源码头文件:** `CreateModPlugin/Public/ItemDataStruct.h`

---

## 功能说明（来自头文件注释）

> 物品总表结构体

## 蓝图暴露变量

### 属性 `ItemUseTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(Units = s),Category="Base") float ItemUseTime = 0.f;` |

**源码注释:**

> 使用物品增加的时间 秒 目前 食用时生效

---

### 属性 `MaxItemDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float MaxItemDurability = -1;` |

**源码注释:**

> 耐久度 为-1时没有耐久

---

### 属性 `ItemWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ItemWeight = false;` |

**源码注释:**

> 物品的重量（单位KG，支持小数点）

---

### 属性 `RotToItemID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName RotToItemID;` |

**源码注释:**

> 保质期过后（腐烂）的产物

---

### 属性 `StorageSpaceDecayRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EModStorageSpace,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModStorageSpace,float> StorageSpaceDecayRate;` |

**源码注释:**

> 物品在各种存储空间下的保质期衰减率

---

### 属性 `ItemShelfLife`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ItemShelfLife = -1.f;` |

**源码注释:**

> 物品的保质期（游戏时间，秒） -1为没有保质期

---

### 属性 `RateOfDecay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EModGroundSoilType,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModGroundSoilType,float> RateOfDecay;` |

**源码注释:**

> 所处的地面影响保质期的衰减效率

---

### 属性 `TemperatureThreshold`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModEfficiencyByTemperature](ItemDataStruct__FModEfficiencyByTemperature.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FModEfficiencyByTemperature> TemperatureThreshold;` |

**源码注释:**

> 温度影响的相关效率(物品的保质期，植物的生成效率）

---

### 属性 `RawMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> RawMaterial;` |

**源码注释:**

> 此物品的原材料

---

### 属性 `NeedHight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float NeedHight = 0.f;` |

**源码注释:**

> 需要的高度 0 为没有高度限制

---

### 属性 `StackModels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModStackModel](ItemDataStruct__FModStackModel.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FModStackModel> StackModels;` |

**源码注释:**

> 不同堆叠容量范围内的模型

---

### 属性 `SmallGridCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int SmallGridCount = 1;` |

**源码注释:**

> 此物品放置在地格中时占用的小格子数量 目前只有 1 跟 4 既 四分之1格和 整格

---

### 属性 `ItemIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> ItemIcon;` |

**源码注释:**

> 物品在UI上显示的图标

---

### 属性 `ItemPrice`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float ItemPrice = 0.f;` |

**源码注释:**

> 物品出售/购买时的基础价格

---

### 属性 `bCanBeDismantled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") bool bCanBeDismantled = false;` |

**源码注释:**

> 判断物品是否能拆解，拆解后给出的材料

---

### 属性 `DismantledMaterials`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,int32> DismantledMaterials;` |

**源码注释:**

> 拆解后给予的道具与道具数量

---

### 属性 `RecoverValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 RecoverValue { 0 };` |

**源码注释:**

> 单个物品恢复值

---

### 属性 `MaxStackSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int32 MaxStackSize = 1;` |

**源码注释:**

> 该物品在地面/建筑内可堆叠的最大数量

---

### 属性 `ItemQuality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModItemQuality` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModItemQuality ItemQuality = EModItemQuality::None;` |

**源码注释:**

> 物品品质，用于UI显示和筛选

---

### 属性 `ItemDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText ItemDescription;` |

**源码注释:**

> 物品在UI上显示的文字描述

---

### 属性 `ItemName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText ItemName;` |

**源码注释:**

> 物品名称

---

### 属性 `ItemModel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UStaticMesh> ItemModel;` |

**源码注释:**

> 物品的3D模型 例如拿着的模型

---

### 属性 `GroundInventoryType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModGroundInventoryType` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModGroundInventoryType GroundInventoryType = EModGroundInventoryType::None;` |

**源码注释:**

> 物品类型

---

### 属性 `FormatItemDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FModFormatText](BaseDataStruct__FModFormatText.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FModFormatText FormatItemDescription;` |

**源码注释:**

> 格式化后的描述

---

### 属性 `ItemGrade`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") FText ItemGrade;` |

**源码注释:**

> 物品的品阶

---

### 属性 `ItemSubstituteClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftClassPtr<AActor> ItemSubstituteClass;` |

**源码注释:**

> 物品的替身类 在实际操作时会替换为此actor

---

### 属性 `GameplayTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base",Meta = (Categories = "Inventory")) FGameplayTag GameplayTag;` |

**源码注释:**

> 此物品的标签

---

### 属性 `BeforeObserveInformationWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Observe" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Observe") FName BeforeObserveInformationWidget;` |

**源码注释:**

> 观察前点击物品实例后显示的界面ID 关联DT_CommonUIConfig表

---

### 属性 `InformationWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName InformationWidget;` |

**源码注释:**

> 点击物品实例后显示的界面ID 关联DT_CommonUIConfig表

---

### 属性 `TipInformationWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FName TipInformationWidget;` |

**源码注释:**

> 悬浮后显示的tip界面ID 关联DT_CommonUIConfig表

---

### 属性 `SocketName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EModCharacterBehaviorState,FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModCharacterBehaviorState,FName> SocketName;` |

**源码注释:**

> 在与此物品交换时此物品附加的插槽

---

### 属性 `GOAPActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> GOAPActions;` |

**源码注释:**

> 物品拥有的GOAP Action的ID

---

### 属性 `BehaviorAnimation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EModCharacterBehaviorState,[FModGroupCorrespondingAnim](ItemDataStruct__FModGroupCorrespondingAnim.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModCharacterBehaviorState,FModGroupCorrespondingAnim> BehaviorAnimation;` |

**源码注释:**

> 在与此物品交换时行为对应的动画(目前在拾取物品时使用）

---

### 属性 `BehaviorBlendAnimation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EModCharacterBehaviorState,[FModGroupCorrespondingAnim](ItemDataStruct__FModGroupCorrespondingAnim.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModCharacterBehaviorState,FModGroupCorrespondingAnim> BehaviorBlendAnimation;` |

**源码注释:**

> 此物品拾取以后下一个action对应的混合动作 例如拾取原木后抱着原木行走的上半身混合动作

---

### 属性 `BehaviorItemMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EModCharacterBehaviorState,TSoftObjectPtr<UStaticMesh>>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<EModCharacterBehaviorState,TSoftObjectPtr<UStaticMesh>> BehaviorItemMesh;` |

**源码注释:**

> 在行为中时使用的模型 如果不配置则使用默认

---

### 属性 `ItemSound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag,FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sound") TMap<FGameplayTag,FName> ItemSound;` |

**源码注释:**

> 物品相关的音效 key 为音效的播放tag value 音效的id  读取GameSoundInfo

---

### 属性 `EffectContainerMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;` |

**源码注释:**

> 使用此物品后会产生的效果 目前 食用时生效

---

### 属性 `GrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Base") float GrowScore = 0.f;` |

**源码注释:**

> 对应的成长积分

---

### 属性 `ForMulaId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName ForMulaId;` |

**源码注释:**

> 物品关联的配方id

---
