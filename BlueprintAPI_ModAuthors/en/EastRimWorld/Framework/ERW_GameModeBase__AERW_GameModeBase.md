# `class` `AERW_GameModeBase`

**Source header:** `EastRimWorld/Framework/ERW_GameModeBase.h`

---

## Functional description (from header comments)

> GameMode基类

## Blueprint-exposed variables

### Property `GameConfigComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UERW_GameConfigComponent](../Components/ERW_GameConfigComponent__UERW_GameConfigComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Configs" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Configs", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UERW_GameConfigComponent> GameConfigComponent;` |

---

### Property `RoleMng`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<ULGameRoleMng>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TObjectPtr<ULGameRoleMng> RoleMng;` |

---

### Property `AllActorMng`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<ULGameActorMng>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , VisibleAnywhere) TObjectPtr<ULGameActorMng> AllActorMng;` |

---

### Property `OnPlayerTeamCharacterDead`

| Field | Details |
|------|------|
| C++ type | `FOnPlayerTeamCharacterDead` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPlayerTeamCharacterDead OnPlayerTeamCharacterDead;` |

**Source comments:**

> 当玩家阵营角色死亡时

---

### Property `GoalBaseInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FGoalBaseInfo](ERW_GameModeBase__FGoalBaseInfo.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TMap<FName , FGoalBaseInfo> GoalBaseInfos;` |

**Source comments:**

> GOAP目标的信息

---

### Property `BIsShowCharacTips`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool BIsShowCharacTips = true;` |

**Source comments:**

> 是否显示角色的经验值变化提示

---

### Property `BIsShowTemperatureRange`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool BIsShowTemperatureRange = true;` |

**Source comments:**

> 是否显示温度范围

---

### Property `BIsShowpowerRange`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool BIsShowpowerRange = true;` |

**Source comments:**

> 是否显示星能范围

---

### Property `BIsShowAttackRange`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) bool BIsShowAttackRange = true;` |

**Source comments:**

> 是否显示攻击范围

---

## Blueprint-exposed functions

### Function `SpawnSceneManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SpawnSceneManager();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 生成SceneManager

---

### Function `GemeModeLoadSuccess`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GemeModeLoadSuccess();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 生成SceneManager

---

### Function `GetSceneManager`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | [AERW_SceneManager](../ERW_SceneManager__AERW_SceneManager.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) AERW_SceneManager* GetSceneManager() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 获得SceneManager

---

### Function `AttributeChangeNeedTips`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterAttributeInfo](../Struct/ItemStruct__FCharacterAttributeInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAttribute` | `const FGameplayAttribute &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterAttributeInfo & AttributeChangeNeedTips(const FGameplayAttribute & GameplayAttribute);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 属性变化是否需要提示

---

### Function `AddGoalBaseScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `const FName&` |
| `Score` | `float` |
| `WorkSchedule` | `const FName&` |
| `GoalCategory` | `EGOAPGoalCategory` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddGoalBaseScore(const FName& GoalID , float Score , const FName& WorkSchedule , EGOAPGoalCategory GoalCategory) { GoalBaseInfos.Add(GoalID , FGoalBaseInfo(Score , WorkSchedule , GoalCategory)); }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 记录GOAP目标基础分值

---

### Function `GetCharacterActionAbilityByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterActionAbility](../Player/EastRimWorldAIController__FCharacterActionAbility.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacterActionAbilityID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterActionAbility & GetCharacterActionAbilityByID(const FName & CharacterActionAbilityID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID（行命名）获取角色的具体动作能力

---

### Function `GetGameplayAbilityByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `const FGameAbilityStruct &` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AbilityID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FGameAbilityStruct & GetGameplayAbilityByID(const FName & AbilityID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID（行命名）获取能力配置

---

### Function `GetBuffTagInfoByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FBuffTagInfo](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__FBuffTagInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuffTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FBuffTagInfo & GetBuffTagInfoByTag(const FGameplayTag & BuffTag) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过Tag获取buff图标

---

### Function `GetGameplayAbilityByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `const FGameAbilityStruct &` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayTagContainer` | `const FGameplayTagContainer &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FGameAbilityStruct & GetGameplayAbilityByTag(const FGameplayTagContainer & GameplayTagContainer) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过标签（行命名）获取能力配置

---

### Function `GetProjectileByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `const FProjectileStruct &` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ProjectileID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FProjectileStruct & GetProjectileByID(const FName & ProjectileID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID（行命名）获取投射物配置

---

### Function `GetGamePlayConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UGamePlayConfigurationAsset](../Components/ERW_GameConfigComponent__UGamePlayConfigurationAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UGamePlayConfigurationAsset * GetGamePlayConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取游戏的通用配置

---

### Function `GetSceneTextInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FSceneTextInfo](../AbilitySystem/SceneText/SceneTextStruct__FSceneTextInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SceneTextType` | `const ESceneTextType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FSceneTextInfo & GetSceneTextInfo(const ESceneTextType SceneTextType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过类型获取场景文字配置

---

### Function `GetModuleUIInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FModuleUIConfig](../UI/Struct/UIStruct__FModuleUIConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FModuleUIConfig GetModuleUIInfoByID(const FName & ID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID（行命名）获取模块UI配置

---

### Function `GetGridCollectDataBySurfaceType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FGridCollectData](../Components/ERW_MapDataMgr__FGridCollectData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSurfaceType` | `const EPhysicalSurface` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FGridCollectData & GetGridCollectDataBySurfaceType(const EPhysicalSurface InSurfaceType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过物理材质SurfaceType获取地格属性

---

### Function `(see source signature)`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `(complex return type)` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `FInstancedStruct GetInventoryGeneralDataByMeshName(const FName & MeshName)const;` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FInstancedStruct GetInventoryGeneralDataByMeshName(const FName & MeshName)const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过模型名字获取采集物或者物品

---

### Function `GetCollectItemDataByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCollectItem](../Struct/ItemStruct__FCollectItem.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCollectItem & GetCollectItemDataByID(const FName & ID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取采集物表

---

### Function `GetInventoryItemByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FInventoryItem](../Struct/ItemStruct__FInventoryItem.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FInventoryItem & GetInventoryItemByID(const FName & ID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取对应的物品配置

---

### Function `GetTreasureItemIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetTreasureItemIDs();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有珍宝阁商品ID

---

### Function `GetTreasureItemByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FTreasureItem](../Components/TreasureComponent__FTreasureItem.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FTreasureItem & GetTreasureItemByID(const FName & ID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取对应的商品配置

---

### Function `GetWeaponInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterWeapon](../Struct/ItemStruct__FCharacterWeapon.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWeaponID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterWeapon & GetWeaponInfoByID(const FName & InWeaponID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取对应的武器配置

---

### Function `GetToolInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterTool](../Struct/ItemStruct__FCharacterTool.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InToolID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterTool & GetToolInfoByID(const FName & InToolID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取工具配置

---

### Function `GetBuildingDataByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FBuildingData](../Struct/BuildingData__FBuildingData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuildingID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FBuildingData & GetBuildingDataByID(const FName & InBuildingID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取建筑配置

---

### Function `GetEquipmentAttributeByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FEquipmentAttribute](../Struct/ItemStruct__FEquipmentAttribute.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAttributeID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FEquipmentAttribute & GetEquipmentAttributeByID(const FName & InAttributeID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取装备词条属性

---

### Function `GetCharacterEquipmentByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterApparel](../Struct/ItemStruct__FCharacterApparel.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InEquipmentID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterApparel & GetCharacterEquipmentByID(const FName & InEquipmentID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取装备属性

---

### Function `GetCommonUIInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCommonUIConfig](../UI/Struct/UIStruct__FCommonUIConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCommonUIConfig & GetCommonUIInfoByID(const FName & ID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID（行命名）获取UI配置

---

### Function `GetCommonButtonByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCommonButton](../UI/Struct/UIStruct__FCommonButton.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCommonButton & GetCommonButtonByID(const FName & ID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID（行命名）获取按钮配置

---

### Function `GetInventoryGeneralDataByItemID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FInstancedStruct` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemID` | `const FName &` |
| `GroundInventoryType` | `EGroundInventoryType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FInstancedStruct GetInventoryGeneralDataByItemID(const FName & InItemID,EGroundInventoryType GroundInventoryType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过id 物品类型查询配置

---

### Function `GetForceDataByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FForceData](../Struct/ForceStruct__FForceData.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FForceData& GetForceDataByID(const FName & ID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID（行命名）获取势力数据

---

### Function `GetAllForceData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutData` | TArray<[FForceData](../Struct/ForceStruct__FForceData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllForceData(TArray<FForceData>& OutData) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有势力数据

---

### Function `GetPassGameConditionByForceID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FPassGameConditionDescribe](../Struct/ForceStruct__FPassGameConditionDescribe.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FPassGameConditionDescribe> GetPassGameConditionByForceID(const FName & ID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID（行命名）获取势力通关条件数据

---

### Function `GetCharacterAttributeInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterAttributeInfo](../Struct/ItemStruct__FCharacterAttributeInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAttribute` | `FGameplayAttribute` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterAttributeInfo & GetCharacterAttributeInfo(FGameplayAttribute InAttribute);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过属性集来获取详细的属性信息

---

### Function `GetCharacterAttributeInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterAttributeInfo](../Struct/ItemStruct__FCharacterAttributeInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterAttributeInfo & GetCharacterAttributeInfoByID(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过属性ID来获取详细的属性信息

---

### Function `GetAllCharacterAttributeInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCharacterAttributeInfo](../Struct/ItemStruct__FCharacterAttributeInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `true` | `bool isShowUI =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCharacterAttributeInfo> GetAllCharacterAttributeInfo(bool isShowUI = true) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有属性信息

---

### Function `GetCharacterAttributeInfoByName`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterAttributeInfo](../Struct/ItemStruct__FCharacterAttributeInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAttributeName` | `FString` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterAttributeInfo & GetCharacterAttributeInfoByName(FString InAttributeName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过属性镜子来获取详细的属性信息

---

### Function `GetEquipmentQualityRange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FEquipmentQualityRange](../Struct/CommonStruct__FEquipmentQualityRange.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FEquipmentQualityRange & GetEquipmentQualityRange(const FName & ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取装备的品质区间配置

---

### Function `GetFabricateEquipmentData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FFabricateEquipmentData](../Struct/CommonStruct__FFabricateEquipmentData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FFabricateEquipmentData & GetFabricateEquipmentData(const FName & ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过id获取制造的装备池子

---

### Function `GetGenerateEquipmentData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FGenerateEquipmentData](../Struct/CommonStruct__FGenerateEquipmentData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FGenerateEquipmentData & GetGenerateEquipmentData(const FName & ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取装备生成信息

---

### Function `GetFormulaDataByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FFormulaData](../Struct/CommonStruct__FFormulaData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `const FName &ID` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FFormulaData & GetFormulaDataByID(const FName &ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取制造配方

---

### Function `GetItemClassifyInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FItemClassify](../Struct/ItemStruct__FItemClassify.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGameplayTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FItemClassify & GetItemClassifyInfo(const FGameplayTag & InGameplayTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过标签获取标签的信息

---

### Function `GetAllItemClassifyInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutItemClassifyArray` | UPARAM(ref) TArray<[FItemClassify](../Struct/ItemStruct__FItemClassify.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllItemClassifyInfo(UPARAM(ref) TArray<FItemClassify>& OutItemClassifyArray);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有物品分类分类信息

---

### Function `GetGOAPActionData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FGOAP_Action_Data](../GOAP/GOAP_Data__FGOAP_Action_Data.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActionID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FGOAP_Action_Data& GetGOAPActionData(const FName & InActionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取goap动作信息

---

### Function `GetGOAPActionDataArr`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FGOAP_Action_Data](../GOAP/GOAP_Data__FGOAP_Action_Data.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGoalID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FGOAP_Action_Data> GetGOAPActionDataArr(const FName& InGoalID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询符合目标的所有行动数据

---

### Function `GetGOAPGoalBaseScore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GoalID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) float GetGOAPGoalBaseScore(FName GoalID);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `GetCommonButtonByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCommonButton](../UI/Struct/UIStruct__FCommonButton.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CommonButtonType` | `ECommonButtonType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCommonButton & GetCommonButtonByType(ECommonButtonType CommonButtonType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过按钮类型获取按钮配置

---

### Function `GetCharacterInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FInstancedStruct` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterID` | `FName` |
| `InCharacterType` | `ECharacterType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FInstancedStruct GetCharacterInfoByID(FName InCharacterID,ECharacterType InCharacterType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过角色id和角色类型获取角色信息

---

### Function `GetHumanInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InHumanID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FEastRimWorldHumanData & GetHumanInfoByID(FName InHumanID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通人类id获取人类信息

---

### Function `GetAllHumanId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetAllHumanId();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有人类id

---

### Function `GetSummonsInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FEastRimWorldSummonsData](../Struct/CharacterStruct__FEastRimWorldSummonsData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSummonsID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FEastRimWorldSummonsData & GetSummonsInfoByID(FName InSummonsID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通召唤物id获取召唤物信息

---

### Function `GetAnimalInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FEastRimWorldAnimalData](../Struct/CharacterStruct__FEastRimWorldAnimalData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAnimalID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FEastRimWorldAnimalData & GetAnimalInfoByID(FName InAnimalID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通动物id获取动物信息

---

### Function `GetTechCategoryUIConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FTechCategoryUIConfigStruct](../Struct/TechnologyStruct__FTechCategoryUIConfigStruct.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechCategoryID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FTechCategoryUIConfigStruct& GetTechCategoryUIConfigByID(const FName& TechCategoryID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID科技分类配置

---

### Function `GetTechnologyConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FTechnologyConfigStruct](../Struct/TechnologyStruct__FTechnologyConfigStruct.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechItemID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FTechnologyConfigStruct& GetTechnologyConfigByID(const FName& TechItemID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取科技配置

---

### Function `GetTechPointConverConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FTechPointConverConfigStruct](../Struct/TechnologyStruct__FTechPointConverConfigStruct.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechPointConverID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FTechPointConverConfigStruct& GetTechPointConverConfigByID(const FName& TechPointConverID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取科技点转换配置

---

### Function `GetTechPointConvertConfigByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechPointType` | `ETechPointType` |
| `Config` | [FTechPointConverConfigStruct](../Struct/TechnologyStruct__FTechPointConverConfigStruct.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool GetTechPointConvertConfigByType(ETechPointType TechPointType , FTechPointConverConfigStruct& Config) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 通过科技点类型获得科技点转换配置

---

### Function `GetTechPointConvertConfigByBuildID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildID` | `const FName&` |
| `Config` | [FTechPointConverConfigStruct](../Struct/TechnologyStruct__FTechPointConverConfigStruct.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool GetTechPointConvertConfigByBuildID(const FName& BuildID , FTechPointConverConfigStruct& Config) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 通过建筑ID获得科技点转换配置

---

### Function `GetTechUnlockItemConigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FTechUnlockItemConigStruct](../Struct/TechnologyStruct__FTechUnlockItemConigStruct.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechUnlockItemConigID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FTechUnlockItemConigStruct& GetTechUnlockItemConigByID(const FName& TechUnlockItemConigID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取科技解锁物品配置

---

### Function `GetTechUnlockItemConigByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FTechUnlockItemConigStruct](../Struct/TechnologyStruct__FTechUnlockItemConigStruct.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UnlockType` | `ETechUnlockItemType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FTechUnlockItemConigStruct> GetTechUnlockItemConigByType(ETechUnlockItemType UnlockType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询某种类型的解锁包

---

### Function `GetAllTechnologyConfigs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FTechnologyConfigStruct](../Struct/TechnologyStruct__FTechnologyConfigStruct.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FTechnologyConfigStruct> GetAllTechnologyConfigs() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有科技分类配置

---

### Function `GetAllTechCategoryUIConfigs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FTechCategoryUIConfigStruct](../Struct/TechnologyStruct__FTechCategoryUIConfigStruct.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FTechCategoryUIConfigStruct> GetAllTechCategoryUIConfigs() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有科技解锁物品配置

---

### Function `GetWorkAttributeLevelConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorkAttributeLevelConfig](../Struct/CharacterStruct__FWorkAttributeLevelConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAttribute` | `FGameplayAttribute` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorkAttributeLevelConfig & GetWorkAttributeLevelConfig(FGameplayAttribute GameplayAttribute) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取属性值的等级配置

---

### Function `GetNewGameConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UNewGameConfigAsset](../Struct/NewGameStruct__UNewGameConfigAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UNewGameConfigAsset * GetNewGameConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取新游戏的配置

---

### Function `GetAllStoryBackgroundData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FStoryBackgroundQuestionData](../Struct/StoryBackgroundStruct__FStoryBackgroundQuestionData.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FStoryBackgroundQuestionData> GetAllStoryBackgroundData() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有背景故事

---

### Function `GetStoryBackAnswerById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FStoryBackgroundAnswerData](../Struct/StoryBackgroundStruct__FStoryBackgroundAnswerData.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Id` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FStoryBackgroundAnswerData& GetStoryBackAnswerById(FName Id) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过id获取背景故事选项

---

### Function `GetStoryBackAnswersByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Type` | `FName` |
| `OutAnswer` | UPARAM(ref) TArray<[FStoryBackgroundAnswerData](../Struct/StoryBackgroundStruct__FStoryBackgroundAnswerData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetStoryBackAnswersByType(FName Type,UPARAM(ref) TArray<FStoryBackgroundAnswerData>& OutAnswer);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过type获取背景故事选项

---

### Function `GetCharacterOrganConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterOrganConfig](../Struct/CharacterStruct__FCharacterOrganConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAttribute` | `FGameplayAttribute` |
| `TargetSpecies` | `ESpeciesType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterOrganConfig & GetCharacterOrganConfig(FGameplayAttribute GameplayAttribute , ESpeciesType TargetSpecies) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色器官信息

---

### Function `GetAllCharacterOrganConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCharacterOrganConfig](../Struct/CharacterStruct__FCharacterOrganConfig.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TargetSpecies` | `ESpeciesType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCharacterOrganConfig> GetAllCharacterOrganConfig(ESpeciesType TargetSpecies) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有角色器官配置

---

### Function `GetCharacterOrganConfigById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterOrganConfig](../Struct/CharacterStruct__FCharacterOrganConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GAId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterOrganConfig& GetCharacterOrganConfigById(FName GAId) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 读取角色器官配置表

---

### Function `GetCharacterOrganConfigByOrganType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterOrganConfig](../Struct/CharacterStruct__FCharacterOrganConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OType` | `EBodyOrganType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterOrganConfig& GetCharacterOrganConfigByOrganType(EBodyOrganType OType) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过器官类型获取角色器官配置

---

### Function `GetCharacterOrganStatus`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FOrganStatus](../Struct/CharacterStruct__FOrganStatus.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GameplayAttribute` | `FGameplayAttribute` |
| `InCurrentValue` | `float` |
| `InMaxValue` | `float` |
| `Species` | `ESpeciesType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FOrganStatus GetCharacterOrganStatus(FGameplayAttribute GameplayAttribute,float InCurrentValue,float InMaxValue , ESpeciesType Species) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色器官当前状态

---

### Function `GetCharacterOrganStatusByOrganId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FOrganStatus](../Struct/CharacterStruct__FOrganStatus.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OrganId` | `FName` |
| `InCurrentValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FOrganStatus GetCharacterOrganStatusByOrganId(FName OrganId, float InCurrentValue) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色器官当前状态按ID

---

### Function `GetCharacterOrganUIConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCharacterOrganUIConfig](../Struct/CharacterStruct__FCharacterOrganUIConfig.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCharacterOrganUIConfig> GetCharacterOrganUIConfig() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有角色器官UI配置

---

### Function `GetCharacterMainSkillUIConfigs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCharacterMainSkillUIConfig](../Struct/ItemStruct__FCharacterMainSkillUIConfig.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCharacterMainSkillUIConfig> GetCharacterMainSkillUIConfigs() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色主技能UI配置

---

### Function `GetCharacterMainSkillUIConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `ConfigData` | [FCharacterMainSkillUIConfig](../Struct/ItemStruct__FCharacterMainSkillUIConfig.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetCharacterMainSkillUIConfigByID(const FName& ID , FCharacterMainSkillUIConfig& ConfigData) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过行名获取角色主技能UI配置

---

### Function `GetCharacterAttributeUpgradeConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterAttributeUpgradeConfig](../Struct/CharacterStruct__FCharacterAttributeUpgradeConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InLevel` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterAttributeUpgradeConfig & GetCharacterAttributeUpgradeConfig(int InLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取角色属性等级升级配置

---

### Function `GetAnimalActionAbilityByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FAnimalActionAbility](../Player/EastRimWorldAIController__FAnimalActionAbility.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActionAbilityID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FAnimalActionAbility& GetAnimalActionAbilityByID(const FName& ActionAbilityID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取动物的具体动作能力

---

### Function `GetAnimalCultivationConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FAnimalCultivationConfig](../Struct/CharacterStruct__FAnimalCultivationConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CultivationConfigID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FAnimalCultivationConfig& GetAnimalCultivationConfigByID(const FName& CultivationConfigID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取动物修炼配置

---

### Function `GetMartialArtsBookData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FMartialArtsBookData](../Struct/MartialArts__FMartialArtsBookData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMartialArtsID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FMartialArtsBookData & GetMartialArtsBookData(const FName & InMartialArtsID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取武学书籍信息

---

### Function `GetAllRealmData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FRealmData](../Struct/MartialArts__FRealmData.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FRealmData> GetAllRealmData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有的境界信息

---

### Function `GetRealmDataByLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FRealmData](../Struct/MartialArts__FRealmData.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InLevel` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FRealmData & GetRealmDataByLevel(int InLevel) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取境界等级信息

---

### Function `GetMartialArtsEntries`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FMartialArtsEntries](../Struct/MartialArts__FMartialArtsEntries.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InEntriesID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FMartialArtsEntries & GetMartialArtsEntries(const FName & InEntriesID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取武学词条信息

---

### Function `GetSkillEntryConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FSkillEntryConfig &` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EntryID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FSkillEntryConfig & GetSkillEntryConfig(const FName & EntryID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取技能词条配置（DT SkillEntryConfig）

---

### Function `GetAllCharacterNameConfigByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FText>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Type` | `const ECharacterNameType&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FText> GetAllCharacterNameConfigByType(const ECharacterNameType& Type);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有角色名字

---

### Function `GetAllCharacterFirstNameConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FText>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FText> GetAllCharacterFirstNameConfig();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有角色姓氏

---

### Function `GetCharacteristicInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacteristicInfo](../Struct/CommonStruct__FCharacteristicInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacteristicID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacteristicInfo & GetCharacteristicInfo(const FName & InCharacteristicID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取特性信息

---

### Function `GetAllCharacteristicInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacteristicInfos` | TArray<[FCharacteristicInfo](../Struct/CommonStruct__FCharacteristicInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllCharacteristicInfo(TArray<FCharacteristicInfo>& CharacteristicInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有特性信息

---

### Function `GetAllCharacteristicInfoQualityMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CharacteristicInfos` | TMap<EItemQuality,[FCharacteristicInfoArray](../Struct/CommonStruct__FCharacteristicInfoArray.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllCharacteristicInfoQualityMap(TMap<EItemQuality,FCharacteristicInfoArray>& CharacteristicInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetCommonBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCommonBuff](../Struct/CommonStruct__FCommonBuff.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuffID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCommonBuff & GetCommonBuff(const FName & InBuffID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取buff信息

---

### Function `GetBreakdownValueData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `Data` | [FBreakdownValueConfigData](../ERW_ConfigTypes__FBreakdownValueConfigData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBreakdownValueData(const FName& ID , FBreakdownValueConfigData& Data);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得崩溃值配置数据

---

### Function `GetBreakdownValueDataByCurrentMood`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CurrentMood` | `float` |
| `BreakdownThresholdChangeValue` | `float` |
| `Data` | [FBreakdownValueConfigData](../ERW_ConfigTypes__FBreakdownValueConfigData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBreakdownValueDataByCurrentMood(float CurrentMood, float BreakdownThresholdChangeValue, FBreakdownValueConfigData& Data);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过当前心情值获得崩溃值配置数据

---

### Function `GetAllWorkPriorityUIConfigData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConfigDatas` | TArray<[FWorkPriorityUIConfigData](../UI/Struct/UIStruct__FWorkPriorityUIConfigData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllWorkPriorityUIConfigData(TArray<FWorkPriorityUIConfigData>& ConfigDatas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得工作优先级UI配置所有行数据

---

### Function `GetAllBuildConfigData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Datas` | TArray<[FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllBuildConfigData(TArray<FBuildConfigData>& Datas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得所有建筑配置行数据

---

### Function `GetBuildConfigData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `Data` | [FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBuildConfigData(const FName& ID , FBuildConfigData& Data);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得建筑配置数据

---

### Function `GetAllBuildConfigDataByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Datas` | TArray<[FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)>& |
| `GOAPActionType` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllBuildConfigDataByType(TArray<FBuildConfigData>& Datas,FName GOAPActionType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询所有建筑配置数据，有对应的GOAPAction

---

### Function `GetAllBuildConfigDataByBuildingType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Datas` | TArray<[FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)>& |
| `BType` | `EBuildingType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllBuildConfigDataByBuildingType(TArray<FBuildConfigData>& Datas,EBuildingType BType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询所有建筑配置数据，有对应的建筑类型

---

### Function `GetAllBuildConfigDataByEnvironType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Datas` | TArray<[FBuildConfigData](../ERW_ConfigTypes__FBuildConfigData.md)>& |
| `EType` | `EEnvironType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllBuildConfigDataByEnvironType(TArray<FBuildConfigData>& Datas,EEnvironType EType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询所有建筑配置数据，有对应的环境类型

---

### Function `GetBuildTabByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `FName` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) FName GetBuildTabByID(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

> 获取建筑物的二级分类

---

### Function `GetAllMartialArtsBookCateConfigs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FMartialArtsBookCategoryData](../Struct/MartialArts__FMartialArtsBookCategoryData.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FMartialArtsBookCategoryData> GetAllMartialArtsBookCateConfigs() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有武学分类配置

---

### Function `GetMartialArtsBookCateConfigByMABID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FMartialArtsBookCategoryData](../Struct/MartialArts__FMartialArtsBookCategoryData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsBookID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FMartialArtsBookCategoryData> GetMartialArtsBookCateConfigByMABID(const FName& MartialArtsBookID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据数据名称，获取武学分类配置

---

### Function `GetWorldPlaceInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorldPlaceInfo](../WorldSystem/WorldStruct__FWorldPlaceInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorldPlaceInfo & GetWorldPlaceInfo(const FName & WorldPlaceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetWorldForceInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorldForceInfo](../WorldSystem/WorldStruct__FWorldForceInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldForceID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorldForceInfo & GetWorldForceInfo(const FName & WorldForceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetWorldAreaInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldAreaInfo](../WorldSystem/WorldStruct__FWorldAreaInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldAreaID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldAreaInfo GetWorldAreaInfo(const FName & WorldAreaID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetWorldForceConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | class [UWorldForceConfigurationAsset](../WorldSystem/WorldStruct__UWorldForceConfigurationAsset.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) class UWorldForceConfigurationAsset* GetWorldForceConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetPlayerDiplomacyConfigAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | class [UPlayerDiplomacyConfigAsset](../Struct/DiplomacyStruct__UPlayerDiplomacyConfigAsset.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) class UPlayerDiplomacyConfigAsset* GetPlayerDiplomacyConfigAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetWorldForceAimInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FForceAimInfo](../WorldSystem/WorldStruct__FForceAimInfo.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldForceAimID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FForceAimInfo& GetWorldForceAimInfo(const FName & WorldForceAimID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetWorldPlaceWeatherInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorldPlaceWeatherInfo](../WorldSystem/WorldStruct__FWorldPlaceWeatherInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Weather` | `EERWWeather` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorldPlaceWeatherInfo & GetWorldPlaceWeatherInfo(EERWWeather Weather);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取天气信息

---

### Function `GetWorldPlaceWeatherInfoById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorldPlaceWeatherInfo](../WorldSystem/WorldStruct__FWorldPlaceWeatherInfo.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WeatherID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorldPlaceWeatherInfo& GetWorldPlaceWeatherInfoById(FName WeatherID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过天气ID获取天气信息

---

### Function `GetInjuryBuffById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FInjuryEffectConfig](../Struct/CharacterStruct__FInjuryEffectConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InInjuryID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FInjuryEffectConfig & GetInjuryBuffById(const FName& InInjuryID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取伤势配置

---

### Function `GetWorldConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UWorldGameConfigurationAsset](../Components/ERW_GameConfigComponent__UWorldGameConfigurationAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UWorldGameConfigurationAsset * GetWorldConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取世界的配置资产

---

### Function `GetInjuryScar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FInjuryEffectConfig](../Struct/CharacterStruct__FInjuryEffectConfig.md)& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FInjuryEffectConfig& GetInjuryScar();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取疤痕配置信息

---

### Function `GetWorldMoveInfoPreset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorldMoveInfoPreset](../WorldSystem/WorldStruct__FWorldMoveInfoPreset.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldMapMoveType` | `EWorldMapMoveType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorldMoveInfoPreset & GetWorldMoveInfoPreset(EWorldMapMoveType WorldMapMoveType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取世界地图移动预设

---

### Function `GetForceFavorabilityConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FForceFavorabilityConfig](../WorldSystem/WorldStruct__FForceFavorabilityConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FavorabilityType` | `const EForceFavorabilityType&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FForceFavorabilityConfig & GetForceFavorabilityConfig(const EForceFavorabilityType& FavorabilityType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetWorldEventConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UWorldEventData](../Components/ERW_GameConfigComponent__UWorldEventData.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UWorldEventData * GetWorldEventConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取世界事件的配置资产

---

### Function `GetTipsInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCommonTips](../WorldSystem/WorldStruct__FCommonTips.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TipsType` | `const ETipsType&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCommonTips GetTipsInfo(const ETipsType& TipsType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通用提示

---

### Function `GetWorldTaskInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCommonTaskInfo](../Struct/CommonTaskStruct__FCommonTaskInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TaskID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCommonTaskInfo & GetWorldTaskInfo(const FName & TaskID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取任务信息

---

### Function `GetBeginnerGuideDialogue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DialogueID` | `const FName&` |
| `Dialogue` | [FBeginnerGuideDialogue](../Struct/CommonTaskStruct__FBeginnerGuideDialogue.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBeginnerGuideDialogue(const FName& DialogueID , FBeginnerGuideDialogue& Dialogue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得新手引导对话

---

### Function `GetBeginnerGuidePopupData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `PopupData` | [FBeginnerGuidePopup](../Struct/CommonTaskStruct__FBeginnerGuidePopup.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBeginnerGuidePopupData(const FName& ID , FBeginnerGuidePopup& PopupData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得新手引导弹窗数据

---

### Function `GetBeginnerGuideTipsData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `TipsData` | [FBeginnerGuideTips](../Struct/CommonTaskStruct__FBeginnerGuideTips.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GetBeginnerGuideTipsData(const FName& ID , FBeginnerGuideTips& TipsData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得新手引导Tips数据

---

### Function `GetConditionInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConditionID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCommonTaskCondition & GetConditionInfo(const FName & ConditionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取任务信息

---

### Function `GetCommonDialogueGroup`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FDialogueGroup](../System/Dialogue/DialogueStruct__FDialogueGroup.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `const FName &GroupID` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FDialogueGroup & GetCommonDialogueGroup(const FName &GroupID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取对话信息

---

### Function `GetCommonDialogueInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FDialogueInfo](../System/Dialogue/DialogueStruct__FDialogueInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DialogueID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FDialogueInfo & GetCommonDialogueInfo(const FName & DialogueID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetCommonDialogueOption`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FDialogueOption](../System/Dialogue/DialogueStruct__FDialogueOption.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OptionID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FDialogueOption& GetCommonDialogueOption(const FName & OptionID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetDialogueOptionsByNPCId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NPCId` | `const FName &` |
| `OutOptions` | TArray<[FDialogueOption](../System/Dialogue/DialogueStruct__FDialogueOption.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetDialogueOptionsByNPCId(const FName & NPCId,TArray<FDialogueOption>& OutOptions);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetFarmlandConfigAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UFarmlandConfigAsset](../Struct/FarmlandStruct__UFarmlandConfigAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UFarmlandConfigAsset * GetFarmlandConfigAsset() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取田地的配置

---

### Function `GetPlantTypeTabInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FPlantTypeTabInfo](../Struct/FarmlandStruct__FPlantTypeTabInfo.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Type` | `const ECollectPlantType &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FPlantTypeTabInfo& GetPlantTypeTabInfo(const ECollectPlantType & Type);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取种植物分类数据

---

### Function `GetForceLevelInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FForceLevelInfo](../WorldSystem/WorldStruct__FForceLevelInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InForceLevel` | `const int32 &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FForceLevelInfo & GetForceLevelInfo(const int32 & InForceLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取势力等级信息

---

### Function `GetForceLevelInfoByUnlockItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FForceLevelInfo](../WorldSystem/WorldStruct__FForceLevelInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UnlockItemId` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FForceLevelInfo & GetForceLevelInfoByUnlockItem(const FName & UnlockItemId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询解锁包id对应的势力等级信息

---

### Function `GetAllForceLevelInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const TArray<[FForceLevelInfo](../WorldSystem/WorldStruct__FForceLevelInfo.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const TArray<FForceLevelInfo> GetAllForceLevelInfo();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询所有势力等级信息

---

### Function `GetMaxForceLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `const int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const int32 GetMaxForceLevel();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取配置的最大势力等级

---

### Function `GetAllForcePurpose`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const TArray<[FForcePurpose](../WorldSystem/WorldStruct__FForcePurpose.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const TArray<FForcePurpose> GetAllForcePurpose();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有的门派宗旨

---

### Function `GetForcePurposeByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FForcePurpose](../WorldSystem/WorldStruct__FForcePurpose.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ForcePurposeID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FForcePurpose GetForcePurposeByID(const FName & ForcePurposeID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据ID获取门派宗旨配置

---

### Function `GetPlaceLevelInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FPlaceLevelInfo](../WorldSystem/WorldStruct__FPlaceLevelInfo.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPlaceLevel` | `const int32 &` |
| `WorldPlaceType` | `EWorldPlaceType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FPlaceLevelInfo & GetPlaceLevelInfo(const int32 & InPlaceLevel,EWorldPlaceType WorldPlaceType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据等级和类型获取城市等级信息

---

### Function `GetPlaceAllLevelInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const TArray<[FPlaceLevelInfo](../WorldSystem/WorldStruct__FPlaceLevelInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldPlaceType` | `EWorldPlaceType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const TArray<FPlaceLevelInfo> GetPlaceAllLevelInfo(EWorldPlaceType WorldPlaceType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据类型获取城市各等级信息

---

### Function `GetWeathersInfoBySeason`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FSeasonWeathersInfo](../WorldSystem/WorldStruct__FSeasonWeathersInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SType` | `EERWSeason` |
| `LevelName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FSeasonWeathersInfo> GetWeathersInfoBySeason(EERWSeason SType,FName LevelName) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 按季节返回天气配置信息

---

### Function `GetGOAPActionIcon`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FGOAP_ActionIcon](../GOAP/GOAP_Data__FGOAP_ActionIcon.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BehaviorState` | `const ECharacterBehaviorState &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FGOAP_ActionIcon & GetGOAPActionIcon(const ECharacterBehaviorState & BehaviorState) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取行为对应配置信息（图标）

---

### Function `GetGameplayTeamInfoByTeamID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `const FGenericTeamId` |
| `GameplayTeamInfo` | [FGameplayTeamInfo](../Struct/CharacterStruct__FGameplayTeamInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetGameplayTeamInfoByTeamID(const FGenericTeamId TeamId , FGameplayTeamInfo& GameplayTeamInfo) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过阵营ID获取阵营信息

---

### Function `GetNewGameResourcePackages`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutData` | TArray<[FResourcePackage](../Struct/ItemStruct__FResourcePackage.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetNewGameResourcePackages(TArray<FResourcePackage>& OutData) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 创建游戏时，可以选择的初始资源包列表

---

### Function `GetSoundChangeEventConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FSoundChangeEventConfig](../System/Sound/PlaySoundSystem__FSoundChangeEventConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FSoundChangeEventConfig & GetSoundChangeEventConfig(const FName & EventID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetAllStoryBackgroundStorys`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Datas` | TArray<[FStoryBackgroundData](../Struct/StoryBackgroundStruct__FStoryBackgroundData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllStoryBackgroundStorys(TArray<FStoryBackgroundData>& Datas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 返回全部新游戏剧本

---

### Function `GetMonsterGenerationConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FMonsterGenerationConfig](../WorldSystem/WorldStruct__FMonsterGenerationConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MonsterGenerationID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FMonsterGenerationConfig & GetMonsterGenerationConfig(const FName & MonsterGenerationID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取怪物生成配置

---

### Function `GetEnemyAttackGenerationConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FEnemyAttackGenerationConfig](../WorldSystem/WorldStruct__FEnemyAttackGenerationConfig.md) & |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConfigID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FEnemyAttackGenerationConfig & GetEnemyAttackGenerationConfig(const FName & ConfigID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 敌对势力袭击配置

---

### Function `GetAllAchievementUIConfigs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Datas` | TArray<[FAchievementUIConfigData](../UI/Struct/UIStruct__FAchievementUIConfigData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllAchievementUIConfigs(TArray<FAchievementUIConfigData>& Datas);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 返回所有成就配置

---

### Function `GetRoomConfigDataByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FRoomConfigData](../ERW_ConfigTypes__FRoomConfigData.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RoomID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FRoomConfigData& GetRoomConfigDataByID(const FName& RoomID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据id获取房间配置

---

### Function `GetRoomConfigDataByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FRoomConfigData](../ERW_ConfigTypes__FRoomConfigData.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RoomType` | `const ERoomType&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FRoomConfigData& GetRoomConfigDataByType(const ERoomType& RoomType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据RoomType获取房间配置

---

### Function `GetAllRoomConfigData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutRoomData` | TArray<[FRoomConfigData](../ERW_ConfigTypes__FRoomConfigData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllRoomConfigData(TArray<FRoomConfigData>& OutRoomData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有房间配置

---

### Function `GetSeasonMaterialInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FSeasonMaterialInfo](../WorldSystem/WorldStruct__FSeasonMaterialInfo.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SeasonID` | `const EERWSeason&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FSeasonMaterialInfo& GetSeasonMaterialInfo(const EERWSeason& SeasonID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询季节参数变化配置

---

### Function `GetRoomConfigAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [URoomConfigAsset](../ERW_ConfigTypes__URoomConfigAsset.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) URoomConfigAsset* GetRoomConfigAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetBuildCombinationById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FBuildCombination](../ERW_ConfigTypes__FBuildCombination.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FBuildCombination& GetBuildCombinationById(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过id获取组合建筑配置

---

### Function `GetAllBuildCombinations`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutAllCombinations` | TArray<[FBuildCombination](../ERW_ConfigTypes__FBuildCombination.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllBuildCombinations(TArray<FBuildCombination>& OutAllCombinations);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有组合建筑配置

---

### Function `GetCharacterChatConfigAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | class [UCharacterChatConfigAsset](../Struct/CharacterChatStruct__UCharacterChatConfigAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) class UCharacterChatConfigAsset * GetCharacterChatConfigAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取聊天配置

---

### Function `GetSocialRelationshipConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FSocialRelationshipConfig](../Struct/CharacterChatStruct__FSocialRelationshipConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `const FName &ID` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FSocialRelationshipConfig& GetSocialRelationshipConfigByID(const FName &ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过ID获取社交关系配置

---

### Function `GetAllSocialRelationshipConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutSocialRelationshipConfigs` | TArray<[FSocialRelationshipConfig](../Struct/CharacterChatStruct__FSocialRelationshipConfig.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllSocialRelationshipConfig(TArray<FSocialRelationshipConfig>& OutSocialRelationshipConfigs);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过type获取社交关系配置
> UFUNCTION(BlueprintCallable)
> const FSocialRelationshipConfig& GetSocialRelationshipConfigByType(const ESocialRelationshipType& RelationshipType);
> 获取所有社交关系配置

---

### Function `GetHobbyConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FHobbyConfig](../Struct/CharacterStruct__FHobbyConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InHobbyConfigID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FHobbyConfig& GetHobbyConfigByID(FName InHobbyConfigID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询爱好配置

---

### Function `GetBattleRuleset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FBattleRuleset](../WorldSystem/WorldBattleSystem/WorldBattleStruct__FBattleRuleset.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BattleType` | `EBattleType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FBattleRuleset GetBattleRuleset(EBattleType BattleType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取战斗规则

---

### Function `GetCharacterPresetData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InPresetID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacterSaveData GetCharacterPresetData(FName InPresetID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过预设id 获取预设信息

---

### Function `GetNPCForceConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldNPCForceConfig](../WorldSystem/WorldStruct__FWorldNPCForceConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InNPCForceConfigID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldNPCForceConfig GetNPCForceConfig(FName InNPCForceConfigID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过NCP配置ID 获取配置

---

### Function `GetStratagemAbilityInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FStratagemAbility](../WorldSystem/WorldBattleSystem/WorldBattleStruct__FStratagemAbility.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAbilityID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FStratagemAbility GetStratagemAbilityInfo(FName InAbilityID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取战略技能信息

---

### Function `GetAllStratagemAbilityInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutSaData` | TArray<[FStratagemAbility](../WorldSystem/WorldBattleSystem/WorldBattleStruct__FStratagemAbility.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) void GetAllStratagemAbilityInfo(TArray<FStratagemAbility>& OutSaData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取全部战略技能信息

---

### Function `GetAutoUseCharacterRule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FAutoUseCharacterRule](../WorldSystem/WorldBattleSystem/WorldBattleStruct__FAutoUseCharacterRule.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AutoUseCharacterType` | `EAutoUseCharacterType` |
| `BattleType` | `EBattleType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FAutoUseCharacterRule GetAutoUseCharacterRule(EAutoUseCharacterType AutoUseCharacterType,EBattleType BattleType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取自动使用角色规则

---

### Function `GetDropSetConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FDropSetConfig](../Struct/CommonStruct__FDropSetConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DropSetID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FDropSetConfig GetDropSetConfig(FName DropSetID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取掉落集

---

### Function `GetWorldPlaceBuildInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorldPlaceBuildConfig](../WorldSystem/WorldStruct__FWorldPlaceBuildConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorldPlaceBuildConfig& GetWorldPlaceBuildInfo(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取城镇建筑设施配置

---

### Function `GetWorldPlaceEffectInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorldPlaceEffectConfig](../WorldSystem/WorldStruct__FWorldPlaceEffectConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorldPlaceEffectConfig& GetWorldPlaceEffectInfo(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取城镇效果配置

---

### Function `GetWorldPlaceSpecialEffectConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FWorldPlaceSpecialEffectConfig](../WorldSystem/WorldStruct__FWorldPlaceSpecialEffectConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FWorldPlaceSpecialEffectConfig& GetWorldPlaceSpecialEffectConfig(const FName& ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取地点特殊效果配置（全局效果）

---

### Function `GetPlaceJobConfigByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldPlaceJobConfig](../WorldSystem/WorldStruct__FWorldPlaceJobConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `JobType` | `EPlaceJobType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldPlaceJobConfig GetPlaceJobConfigByType(EPlaceJobType JobType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetCommonLogConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UCommonLogConfigurationAsset](../Components/ERW_GameConfigComponent__UCommonLogConfigurationAsset.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UCommonLogConfigurationAsset* GetCommonLogConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetTransportationInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FTransportationInfo](../WorldSystem/WorldStruct__FTransportationInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FTransportationInfo GetTransportationInfoByID(const FName & ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取交通工具的信息

---

### Function `GetTransportationInfoByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FTransportationInfo](../WorldSystem/WorldStruct__FTransportationInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TransportationType` | `ETransportationType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FTransportationInfo GetTransportationInfoByType(ETransportationType TransportationType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过类型获取交通工具的信息

---

### Function `GetAllTransportationInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutData` | TArray<[FTransportationInfo](../WorldSystem/WorldStruct__FTransportationInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllTransportationInfo(TArray<FTransportationInfo>& OutData) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有交通工具信息

---

### Function `GetPuppetPlatformConfigAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | class [UPuppetPlatformConfigurationAsset](../ERW_ConfigTypes__UPuppetPlatformConfigurationAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) class UPuppetPlatformConfigurationAsset * GetPuppetPlatformConfigAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取傀儡台配置

---

### Function `GetPlaceLightInfluenceInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldPlaceLightInfluenceInfo](../WorldSystem/WorldStruct__FWorldPlaceLightInfluenceInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LightValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldPlaceLightInfluenceInfo GetPlaceLightInfluenceInfo(float LightValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetPlaceLightInfluenceInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FWorldPlaceLightInfluenceInfo](../WorldSystem/WorldStruct__FWorldPlaceLightInfluenceInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FWorldPlaceLightInfluenceInfo GetPlaceLightInfluenceInfoByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetTournamentRule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FTournamentRule](../System/Tournament/TournamentStruct__FTournamentRule.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TournamentType` | `ETournamentType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FTournamentRule GetTournamentRule(ETournamentType TournamentType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 比武规则

---

### Function `GetTournamentConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UTournamentConfigurationAsset](../Components/ERW_GameConfigComponent__UTournamentConfigurationAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UTournamentConfigurationAsset * GetTournamentConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取游戏的通用配置

---

### Function `GetOffFieldOperationInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FOffFieldOperationInfo](../System/Tournament/TournamentStruct__FOffFieldOperationInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FOffFieldOperationInfo GetOffFieldOperationInfoByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetPostStationConfigAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UPostStationConfigAsset](../PostStation/PostStationStruct__UPostStationConfigAsset.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UPostStationConfigAsset* GetPostStationConfigAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 驿站

---

### Function `GetAllPostStationGenerateConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutData` | TArray<[FPostStationGenerateConfig](../PostStation/PostStationStruct__FPostStationGenerateConfig.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllPostStationGenerateConfig(TArray<FPostStationGenerateConfig>& OutData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 驿站生成

---

### Function `GetPostStationGenerateConfigByIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InIDs` | `const TArray<FName>&` |
| `OutData` | TArray<[FPostStationGenerateConfig](../PostStation/PostStationStruct__FPostStationGenerateConfig.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetPostStationGenerateConfigByIDs(const TArray<FName>& InIDs,TArray<FPostStationGenerateConfig>& OutData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetAnnualRewardConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FAnnualRewardConfig](../System/Tournament/TournamentStruct__FAnnualRewardConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Rank` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FAnnualRewardConfig GetAnnualRewardConfig(int32 Rank);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取排名奖励

---

### Function `GetBreakThroughConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UBreakThroughConfigurationAsset](../System/BreakThrough/BreakThroughStruct__UBreakThroughConfigurationAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UBreakThroughConfigurationAsset * GetBreakThroughConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 突破配置

---

### Function `GetTrainingRoomConfigByType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FTrainingRoomConfig](../System/BreakThrough/BreakThroughStruct__FTrainingRoomConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FiveElementType` | `EFiveElementType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FTrainingRoomConfig GetTrainingRoomConfigByType(EFiveElementType FiveElementType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 按五行类型获取训练房间配置信息

---

### Function `GetTrainingRoomSkillIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FiveElementType` | `EFiveElementType` |
| `RoomLevel` | `int32` |
| `CharacterPoints` | `int32` |
| `OutLoopSections` | `TArray<FName> &` |
| `OutPoolId` | `FName &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetTrainingRoomSkillIDs(EFiveElementType FiveElementType, int32 RoomLevel,int32 CharacterPoints,TArray<FName> & OutLoopSections,FName & OutPoolId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取指定类型和等级的技能池ID列表

---

### Function `GetTrainingRoomAllSkillIDs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<int32, [FNameArr](../Components/ERW_GameConfigComponent__FNameArr.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FiveElementType` | `EFiveElementType` |
| `RoomLevel` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<int32, FNameArr> GetTrainingRoomAllSkillIDs(EFiveElementType FiveElementType, int32 RoomLevel);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取指定类型和等级的技能池ID列表 不计算

---

### Function `GetSkillPoolConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FSkillPoolConfig](../System/BreakThrough/BreakThroughStruct__FSkillPoolConfig.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FSkillPoolConfig GetSkillPoolConfigByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取随机的技能配置

---

### Function `BreakThroughCharacteristicInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FCharacteristicInfo](../Struct/CommonStruct__FCharacteristicInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FCharacteristicInfo BreakThroughCharacteristicInfoByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取突破技能配置

---

### Function `GetApparelLimit`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<int32>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ApparelID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<int32> GetApparelLimit(const FName& ApparelID) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 查询势力分堂服饰限制

---

### Function `GetPracticeConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UPracticeConfigurationAsset](../Components/ERW_GameConfigComponent__UPracticeConfigurationAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UPracticeConfigurationAsset * GetPracticeConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取修炼配置

---

### Function `GetTravelerGoodsConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FTravelerGoodsConfig](../Struct/ItemStruct__FTravelerGoodsConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FTravelerGoodsConfig& GetTravelerGoodsConfigByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 商品配置

---

### Function `GetDefaultTeamInfoAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UDefaultTeamInfoAsset](../Struct/CharacterStruct__UDefaultTeamInfoAsset.md) * |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UDefaultTeamInfoAsset * GetDefaultTeamInfoAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取默认的阵营信息

---

### Function `GetExchangeMartialArtsConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FExchangeMartialArtsConfig](../PostStation/PostStationStruct__FExchangeMartialArtsConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FExchangeMartialArtsConfig& GetExchangeMartialArtsConfigByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据ID获取切磋配置

---

### Function `GetRaidConfigurationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [URaidConfigurationAsset](../WorldSystem/WorldStruct__URaidConfigurationAsset.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) URaidConfigurationAsset* GetRaidConfigurationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取袭击配置资产

---

### Function `GetPrisonConfigAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UPrisonConfigAsset](../Components/ERW_GameConfigComponent__UPrisonConfigAsset.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UPrisonConfigAsset* GetPrisonConfigAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取监狱配置资产

---

### Function `GetThreatPoolInfoByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FThreatPoolInfo](../WorldSystem/WorldStruct__FThreatPoolInfo.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FThreatPoolInfo& GetThreatPoolInfoByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据ID获取威胁池信息

---

### Function `GetThreatPoolInfoArr`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FThreatPoolInfo](../WorldSystem/WorldStruct__FThreatPoolInfo.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `CurPoints` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FThreatPoolInfo> GetThreatPoolInfoArr(int32 CurPoints);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据当前点数获取威胁池信息数组

---

### Function `GetRaidRulesetByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FRaidRuleset](../WorldSystem/WorldStruct__FRaidRuleset.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FRaidRuleset& GetRaidRulesetByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据ID获取袭击规则

---

### Function `GetCharacterLoyaltyConfigByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterLoyaltyConfig](../Struct/CharacterStruct__FCharacterLoyaltyConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterLoyaltyConfig& GetCharacterLoyaltyConfigByID(FName ID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据ID获取角色忠诚度配置

---

### Function `GetCharacterLoyaltyConfigByImportance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | const [FCharacterLoyaltyConfig](../Struct/CharacterStruct__FCharacterLoyaltyConfig.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Importance` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) const FCharacterLoyaltyConfig& GetCharacterLoyaltyConfigByImportance(int32 Importance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 根据重要度获取角色忠诚度配置

---
