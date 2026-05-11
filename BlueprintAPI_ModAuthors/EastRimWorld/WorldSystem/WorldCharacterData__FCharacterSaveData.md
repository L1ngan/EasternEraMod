# `struct` `FCharacterSaveData`

**源码头文件：** `EastRimWorld/WorldSystem/WorldCharacterData.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `CharacterSGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterSGuid;` |

**源码注释：**

> 角色的存档GUID 可能为空

---

### 属性 `CharacterAISGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterAISGuid;` |

**源码注释：**

> 角色的AI 存档GUID 可能为空

---

### 属性 `CharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid CharacterGuid;` |

**源码注释：**

> 角色的唯一GUID

---

### 属性 `CharacterID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) FName CharacterID;` |

**源码注释：**

> 角色ID

---

### 属性 `CharacterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterName;` |

**源码注释：**

> 角色名字

---

### 属性 `CharacterFirstName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FText CharacterFirstName;` |

**源码注释：**

> 角色姓氏

---

### 属性 `CharacterType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ECharacterType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) ECharacterType CharacterType;` |

**源码注释：**

> 角色类型

---

### 属性 `MyTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGenericTeamId MyTeamID;` |

**源码注释：**

> 阵营ID

---

### 属性 `bOpenDanTian`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bOpenDanTian = false;` |

**源码注释：**

> 是否开启丹田

---

### 属性 `bCanOpenDanTian`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bCanOpenDanTian = false;` |

**源码注释：**

> 是否可以开启

---

### 属性 `CharacteristicInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TArray<FName> CharacteristicInfos;` |

**源码注释：**

> 拥有的特性

---

### 属性 `BeInPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid BeInPlaceGuid;` |

**源码注释：**

> 当前所在的地点GUID

---

### 属性 `BelongToPlaceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FGuid BelongToPlaceGuid;` |

**源码注释：**

> 所属的城镇

---

### 属性 `BeInLevelName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName BeInLevelName;` |

**源码注释：**

> 当前所在的关卡名字

---

### 属性 `bActive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") bool bActive = false;` |

**源码注释：**

> 当前激活状态

---

### 属性 `OnWorldState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EOnWorldState` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") EOnWorldState OnWorldState = EOnWorldState::None;` |

**源码注释：**

> 角色在世界中的状态

---

### 属性 `CharacterWorldMapLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FVector CharacterWorldMapLocation = FVector::ZeroVector;` |

**源码注释：**

> 角色在世界中的位置信息

---

### 属性 `CharacterWorldPlaceTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FTransform CharacterWorldPlaceTransform = FTransform::Identity;` |

**源码注释：**

> 角色在地点中的位置

---

### 属性 `NutritionTriggerFlag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") bool NutritionTriggerFlag;` |

**源码注释：**

> 饥饿触发标记

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECommonButtonType,bool>` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<ECommonButtonType,bool> ButtonOperationState;` |

**源码注释：**

> 按钮相关的功能

---

### 属性 `CharacterRelationshipData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,FSocialRelationshipData>` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FGuid,FSocialRelationshipData> CharacterRelationshipData;` |

**源码注释：**

> 角色的社交关系

---

### 属性 `ItemDrugUsed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,int32> ItemDrugUsed;` |

**源码注释：**

> 角色使用过的药品记录（用于计算耐药性）

---

### 属性 `CurrentHungryIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") float CurrentHungryIntervalTime = 0.f;` |

**源码注释：**

> 当前处于饥饿状态的时间

---

### 属性 `CurHungryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName CurHungryId;` |

**源码注释：**

> 当前饥饿状态

---

### 属性 `ProhibitTreatSelf`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool ProhibitTreatSelf = true;` |

**源码注释：**

> 是否禁止治疗自己

---

### 属性 `bCanSelect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) bool bCanSelect = true;` |

**源码注释：**

> 是否可以被选中

---

### 属性 `SpawnPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FVector SpawnPoint;` |

**源码注释：**

> 出生点位置

---

### 属性 `Attributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> Attributes;` |

**源码注释：**

> 存储的属性

---

### 属性 `CalcuOnyAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FString,float> CalcuOnyAttributes;` |

**源码注释：**

> 存储用于在大世界中计算数据的属性,不用来复原角色数据

---

### 属性 `CultivateAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,float>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FString,float> CultivateAttributes;` |

**源码注释：**

> 存储的培养属性(势力自动培养给的)

---

### 属性 `BuffArray`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FCommonBuff>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TArray<FCommonBuff> BuffArray;` |

**源码注释：**

> 角色身上的buff

---

### 属性 `CurInjuryEffectArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FInjuryEffectInstance>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FInjuryEffectInstance> CurInjuryEffectArr;` |

**源码注释：**

> 伤势

---

### 属性 `CurrentTreatInjuryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame,Category= "Runtime") FName CurrentTreatInjuryId;` |

**源码注释：**

> 当前在治疗的伤势

---

### 属性 `MartialArtsLearnData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FMartialArtsLearnData>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<FName,FMartialArtsLearnData> MartialArtsLearnData;` |

**源码注释：**

> 已经学习的武学

---

### 属性 `CarryingMoves`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<int,FName> CarryingMoves;` |

**源码注释：**

> 携带的招式

---

### 属性 `CarryingPassive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) TMap<int,FName> CarryingPassive;` |

**源码注释：**

> 携带的被动

---

### 属性 `CarryingInternalStrength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) FName CarryingInternalStrength;` |

**源码注释：**

> 携带的内功

---

### 属性 `MovesSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int MovesSlotCount = 0;` |

**源码注释：**

> 招式槽位数量

---

### 属性 `PassiveSlotCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int PassiveSlotCount = 0;` |

**源码注释：**

> 被动槽位数量

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int RealmLevel = 0;` |

**源码注释：**

> 当前的境界等级

---

### 属性 `CurMartialArtsScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere) int CurMartialArtsScore = 0;` |

**源码注释：**

> 当前的武学积分

---

### 属性 `BooksReadTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FName,float> BooksReadTime;` |

**源码注释：**

> 当前阅读的书籍时间

---

### 属性 `BooksReadCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TMap<FName,int32> BooksReadCount;` |

**源码注释：**

> 书籍阅读完次数

---

### 属性 `CurReadMartialArts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") FName CurReadMartialArts;` |

**源码注释：**

> 当前阅读的武学书籍

---

### 属性 `BreakThroughHarvest`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FBreakThroughHarvest>` |
| 反射说明符 | BlueprintReadWrite, Category="Runtime" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,EditAnywhere,Category= "Runtime") TArray<FBreakThroughHarvest> BreakThroughHarvest;` |

**源码注释：**

> 当前角色已经突破后选择的技能等

---

### 属性 `UseItemSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FUseItemSaveData>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FUseItemSaveData> UseItemSaveData;` |

**源码注释：**

> 角色身上的物品 只会在跨世界时读取

---

### 属性 `CombatScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) float CombatScore =0.f;` |

**源码注释：**

> 战力

---

### 属性 `bRegisterWorld`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bRegisterWorld = true;` |

**源码注释：**

> 是否需要注册到世界势力中

---

### 属性 `CustomApparels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EArmorType,FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TMap<EArmorType,FName>CustomApparels;` |

**源码注释：**

> 定制服饰外观

---

### 属性 `bUseCustomApparels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bUseCustomApparels = false;` |

**源码注释：**

> 是否应用服饰外观

---

### 属性 `CurMartialArtsMajorCategory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EMartialArtsMajorCategories` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) EMartialArtsMajorCategories CurMartialArtsMajorCategory;` |

**源码注释：**

> 当前的修炼倾向

---

### 属性 `BreakthroughNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 BreakthroughNumber = 0;` |

**源码注释：**

> 突破次数

---

### 属性 `RealmLevelHistoricHigh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 RealmLevelHistoricHigh = 1;` |

**源码注释：**

> 历史最高境界

---

### 属性 `ReachableRealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 ReachableRealmLevel = 1;` |

**源码注释：**

> 当前可以突破到的境界

---

### 属性 `CultivationLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Animal" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,Category= "Animal") int32 CultivationLevel = 0;` |

**源码注释：**

> 动物修炼等级

---

### 属性 `CurrentExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Animal" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,Category= "Animal") float CurrentExperience = 0.0f;` |

**源码注释：**

> 动物修炼经验

---

### 属性 `bUseProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bUseProtagonistAppearance = false;` |

---
