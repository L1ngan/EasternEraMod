# `struct` `FCharacterSaveData`

**源码头文件:** `EastRimWorld/WorldSystem/WorldCharacterData.h`

---

## 功能说明（来自头文件注释）

> Character Save Data 数据结构。

## 蓝图暴露变量

### 属性 `CharacterSGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterSGuid;` |

**说明:**

> 角色的存档GUID 可能为空

---

### 属性 `CharacterAISGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterAISGuid;` |

**说明:**

> 角色的AI 存档GUID 可能为空

---

### 属性 `CharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterGuid;` |

**说明:**

> 角色的唯一GUID

---

### 属性 `AreaCurrentAreaId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid AreaCurrentAreaId;` |

**说明:**

> —— 区域控制：弟子区域归属（随存档持久化；HungerState 读档可重新派生，不存）——

---

### 属性 `AreaHungerZeroAccumSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float AreaHungerZeroAccumSeconds = 0.f;` |

**说明:**

> Area Hunger Zero Accum Seconds 字段。

---

### 属性 `AreaFrozenByCaptured`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool AreaFrozenByCaptured = false;` |

**说明:**

> Area Frozen By Captured 字段。

---

### 属性 `CharacterID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) FName CharacterID;` |

**说明:**

> 角色ID

---

### 属性 `CharacterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterName;` |

**说明:**

> 角色名字

---

### 属性 `CharacterFirstName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterFirstName;` |

**说明:**

> 角色姓氏

---

### 属性 `CharacterType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) ECharacterType CharacterType;` |

**说明:**

> 角色类型

---

### 属性 `Sex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool Sex = false;` |

**说明:**

> Sex 字段。

---

### 属性 `bSexOverride`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") bool bSexOverride = false;` |

**说明:**

> Sex 是否为权威值（仅随机生成的弟子置 true；其余角色性别仍由模板决定，避免读档时错误覆盖）

---

### 属性 `CustomizationId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "Base") FString CustomizationId;` |

**说明:**

> 个体捏脸ID（指向 DT_PresetCustomizationProfiles_V10；空=用模板默认捏脸，随机弟子按性别抽取后填入）

---

### 属性 `MyTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGenericTeamId MyTeamID;` |

**说明:**

> 阵营ID

---

### 属性 `bOpenDanTian`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bOpenDanTian = false;` |

**说明:**

> 是否开启丹田

---

### 属性 `bCanOpenDanTian`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bCanOpenDanTian = false;` |

**说明:**

> 是否可以开启

---

### 属性 `CharacteristicInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TArray<FName> CharacteristicInfos;` |

**说明:**

> 拥有的特性

---

### 属性 `BeInPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid BeInPlaceGuid;` |

**说明:**

> 当前所在的地点GUID

---

### 属性 `BelongToPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid BelongToPlaceGuid;` |

**说明:**

> 所属的城镇

---

### 属性 `BeInLevelName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName BeInLevelName;` |

**说明:**

> 当前所在的关卡名字

---

### 属性 `CurrentWorkScheduleName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FString CurrentWorkScheduleName;` |

**说明:**

> 当前工作日程名称（Agents 改 Transient 后，角色读档/重建时据此回注到工作日程）

---

### 属性 `bActive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") bool bActive = false;` |

**说明:**

> 当前激活状态

---

### 属性 `OnWorldState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EOnWorldState](../Struct/CommonEnum__EOnWorldState.md) |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") EOnWorldState OnWorldState = EOnWorldState::None;` |

**说明:**

> 角色在世界中的状态

---

### 属性 `CharacterWorldMapLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FVector CharacterWorldMapLocation = FVector::ZeroVector;` |

**说明:**

> 角色在世界中的位置信息

---

### 属性 `CharacterWorldPlaceTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FTransform CharacterWorldPlaceTransform = FTransform::Identity;` |

**说明:**

> 角色在地点中的位置

---

### 属性 `NutritionTriggerFlag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") bool NutritionTriggerFlag;` |

**说明:**

> 饥饿触发标记

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<ECommonButtonType,bool> ButtonOperationState;` |

**说明:**

> 按钮相关的功能

---

### 属性 `CharacterRelationshipData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FSocialRelationshipData](../Struct/CharacterChatStruct__FSocialRelationshipData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FGuid,FSocialRelationshipData> CharacterRelationshipData;` |

**说明:**

> 角色的社交关系

---

### 属性 `ItemDrugUsed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,int32> ItemDrugUsed;` |

**说明:**

> 角色使用过的药品记录（用于计算耐药性）

---

### 属性 `ConsumablePermanentEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,int32> ConsumablePermanentEffects;` |

**说明:**

> 耗材永久属性效果获得记录（key=耗材效果ID value=已获得次数）

---

### 属性 `LastConsumableUseTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) float LastConsumableUseTime = -1.f;` |

**说明:**

> 上次使用耗材的时间（AWorldDirector::GameTime 秒 小于0=从未使用 用于耗材公共CD）

---

### 属性 `CurrentHungryIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") float CurrentHungryIntervalTime = 0.f;` |

**说明:**

> 当前处于饥饿状态的时间

---

### 属性 `CurHungryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName CurHungryId;` |

**说明:**

> 当前饥饿状态

---

### 属性 `ProhibitTreatSelf`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool ProhibitTreatSelf = true;` |

**说明:**

> 是否禁止治疗自己

---

### 属性 `bCanSelect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bCanSelect = true;` |

**说明:**

> 是否可以被选中

---

### 属性 `SpawnPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FVector SpawnPoint;` |

**说明:**

> 出生点位置

---

### 属性 `Attributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> Attributes;` |

**说明:**

> 存储的属性

---

### 属性 `CalcuOnyAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> CalcuOnyAttributes;` |

**说明:**

> 存储用于在大世界中计算数据的属性,不用来复原角色数据

---

### 属性 `UIDisplayAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> UIDisplayAttributes;` |

**说明:**

> 存储UI需要显示的临时属性(配置见UGamePlayConfigurationAsset::UIDisplayTempAttributes),不用来复原角色数据

---

### 属性 `CultivateAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FString,float> CultivateAttributes;` |

**说明:**

> 存储的培养属性(势力自动培养给的)

---

### 属性 `BuffArray`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TArray<FCommonBuff> BuffArray;` |

**说明:**

> 角色身上的buff

---

### 属性 `CurInjuryEffectArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FInjuryEffectInstance](../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FInjuryEffectInstance> CurInjuryEffectArr;` |

**说明:**

> 伤势

---

### 属性 `CurrentTreatInjuryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame,Category= "Runtime") FName CurrentTreatInjuryId;` |

**说明:**

> 当前在治疗的伤势

---

### 属性 `MartialArtsLearnData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FMartialArtsLearnData](../Struct/MartialArts__FMartialArtsLearnData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,FMartialArtsLearnData> MartialArtsLearnData;` |

**说明:**

> 已经学习的武学

---

### 属性 `CarryingMoves`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<int,FName> CarryingMoves;` |

**说明:**

> 携带的招式

---

### 属性 `CarryingPassive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<int,FName> CarryingPassive;` |

**说明:**

> 携带的被动

---

### 属性 `CarryingInternalStrength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) FName CarryingInternalStrength;` |

**说明:**

> 携带的内功

---

### 属性 `MovesSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int MovesSlotCount = 0;` |

**说明:**

> 招式槽位数量

---

### 属性 `PassiveSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int PassiveSlotCount = 0;` |

**说明:**

> 被动槽位数量

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int RealmLevel = 0;` |

**说明:**

> 当前的境界等级

---

### 属性 `CurMartialArtsScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int CurMartialArtsScore = 0;` |

**说明:**

> 当前的武学积分

---

### 属性 `BooksReadTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FName,float> BooksReadTime;` |

**说明:**

> 当前阅读的书籍时间

---

### 属性 `BooksReadCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FName,int32> BooksReadCount;` |

**说明:**

> 书籍阅读完次数

---

### 属性 `CurReadMartialArts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName CurReadMartialArts;` |

**说明:**

> 当前阅读的武学书籍

---

### 属性 `BreakThroughHarvest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FBreakThroughHarvest](WorldCharacterData__FBreakThroughHarvest.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**说明:**

> 当前角色已经突破后选择的技能等

---

### 属性 `UseItemSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FUseItemSaveData> UseItemSaveData;` |

**说明:**

> 角色身上的物品 只会在跨世界时读取

---

### 属性 `CombatScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) float CombatScore =0.f;` |

**说明:**

> 战力

---

### 属性 `bRegisterWorld`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bRegisterWorld = true;` |

**说明:**

> 是否需要注册到世界势力中

---

### 属性 `CustomApparels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EArmorType](../Struct/CommonEnum__EArmorType.md),FName> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TMap<EArmorType,FName>CustomApparels;` |

**说明:**

> 定制服饰外观

---

### 属性 `AvatarConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) FName AvatarConfigID;` |

**说明:**

> 立绘配置ID（关联 DT_CharacterAvatarConfig）；None = 用模板默认立绘

---

### 属性 `bUseCustomApparels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bUseCustomApparels = false;` |

**说明:**

> 是否应用服饰外观

---

### 属性 `CurMartialArtsMajorCategory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsMajorCategories](../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) EMartialArtsMajorCategories CurMartialArtsMajorCategory;` |

**说明:**

> 当前的修炼倾向

---

### 属性 `BreakthroughNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 BreakthroughNumber = 0;` |

**说明:**

> 突破次数

---

### 属性 `RealmLevelHistoricHigh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 RealmLevelHistoricHigh = 1;` |

**说明:**

> 历史最高境界

---

### 属性 `ReachableRealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 ReachableRealmLevel = 1;` |

**说明:**

> 当前可以突破到的境界

---

### 属性 `CultivationLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Animal" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,Category= "Animal") int32 CultivationLevel = 0;` |

**说明:**

> 动物修炼等级

---

### 属性 `CurrentExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Animal" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,Category= "Animal") float CurrentExperience = 0.0f;` |

**说明:**

> 动物修炼经验

---

### 属性 `bUseProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bUseProtagonistAppearance = false;` |

**说明:**

> 是否 Use Protagonist Appearance 的布尔标记。

---
