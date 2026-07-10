# `class` `AEastRimWorldCharacter_Human`

**Source header:** `EastRimWorld/Character/EastRimWorldCharacter_Human.h`

---

## Functional description (from header comments)

> Human character class covering work, social, consumables, chatting, mood breakdown, traveler trading and treasure-house exchange features

## Blueprint-exposed variables

### Property `WorkComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UEastRimWorldWorkComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldWorkComponent> WorkComponent;` |

**Notes:**

> Work component

---

### Property `SocialComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UEastRimWorldSocialComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldSocialComponent> SocialComponent;` |

**Notes:**

> Social component

---

### Property `ConsumableComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UConsumableComponent](Components/ConsumableComponent__UConsumableComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UConsumableComponent> ConsumableComponent;` |

**Notes:**

> 耗材组件（行为开始/结束时自动使用背包中"角色拥有"状态的耗材 只有人类角色使用耗材）

---

### Property `CharacterChatComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEastRimWorldCharacterChatComponent](Components/EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human") TObjectPtr<UEastRimWorldCharacterChatComponent> CharacterChatComponent;` |

**Notes:**

> Character chat component

---

### Property `OnBreakdown`

| Field | Details |
|------|------|
| C++ type | `FOnBreakdown` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBreakdown OnBreakdown;` |

**Notes:**

> 当触发崩溃时

---

### Property `OnBreakdownEnd`

| Field | Details |
|------|------|
| C++ type | `FOnBreakdownEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBreakdownEnd OnBreakdownEnd;` |

**Notes:**

> 当崩溃行为结束时

---

### Property `RoomBuffIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FName> RoomBuffIds;` |

**Notes:**

> 进入房间给的buff

---

### Property `TravelerMoney`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") float TravelerMoney = 0;` |

**Notes:**

> Money carried by the traveler merchant

---

### Property `GoodsInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") TMap<FName,FTravelerGoodsInfo> GoodsInfos;` |

**Notes:**

> Traveler merchant goods info (item ID to goods info)

---

### Property `GoodsPriceInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") float GoodsPriceInterval = 999.f;` |

**Notes:**

> Interval timer for updating the traveler merchant's goods prices

---

### Property `AIVisionMeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UProceduralMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Vision|Debug" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Vision|Debug", Meta=(AllowPrivateAccess="true")) TObjectPtr<UProceduralMeshComponent> AIVisionMeshComponent;` |

**Notes:**

> Procedural mesh component used to visualize the AI vision fan for debugging

---

### Property `VisibleVisionMaterial`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadOnly, Category="Vision|Debug" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") TObjectPtr<UMaterialInterface> VisibleVisionMaterial;` |

**Notes:**

> Material used for the visible section of the AI vision mesh

---

### Property `OccludedVisionMaterial`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadOnly, Category="Vision|Debug" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") TObjectPtr<UMaterialInterface> OccludedVisionMaterial;` |

**Notes:**

> Material used for the occluded (invisible) section of the AI vision mesh

---

### Property `VisionPlaneLift`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Vision|Debug" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") float VisionPlaneLift = 12.f;` |

**Notes:**

> Height offset by which the AI vision mesh plane is lifted

---

### Property `CharacterCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CharacterCoin;` |

**Notes:**

> 弟子拥有的例银

---

### Property `CharacterExchangeRule`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FExchangeRuleData](../Struct/CharacterStruct__FExchangeRuleData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<int32 , FExchangeRuleData> CharacterExchangeRule;` |

**Notes:**

> 角色珍宝阁兑换信息

---

### Property `CharacterCanBuyItemFromTreasureHouse`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) bool CharacterCanBuyItemFromTreasureHouse = true;` |

**Notes:**

> 角色是否可以去购物

---

### Property `CharacterExchangeRemainingTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CharacterExchangeRemainingTime;` |

**Notes:**

> 角色珍宝阁兑换剩余时间

---

### Property `CharacterLog`

| Field | Details |
|------|------|
| C++ type | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TArray<FLogData> CharacterLog;` |

**Notes:**

> Array of the character's log entries

---

### Property `BedBuildingGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame) FGuid BedBuildingGuid = FGuid();` |

**Notes:**

> 安置占用的床ID

---

## Blueprint-exposed functions

### Function `InitProtagonistAppearance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitProtagonistAppearance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 初始化主角外观

---

### Function `LoadProtagonistAppearance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void LoadProtagonistAppearance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 加载主角的外观

---

### Function `InitCharacterAppearanceById`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Id` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitCharacterAppearanceById(const FString& Id);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 通过id初始化角色外观

---

### Function `SaveProtagonistAppearance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SaveProtagonistAppearance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Saves the protagonist's appearance (Blueprint-implemented event)

---

### Function `CheckAttributeBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AttributeName` | `const FName&` |
| `Percent` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckAttributeBuff(const FName& AttributeName , float Percent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查属性是否应该触发BUFF

---

### Function `GetBreakDownState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | [EBreakdownState](../ERW_Enumerations__EBreakdownState.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) EBreakdownState GetBreakDownState();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the character's breakdown state

---

### Function `GetHumanData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FEastRimWorldHumanData GetHumanData() { if (auto HumanData = EastRimWorldCharacterData.GetPtr<FEastRimWorldHumanData>()) { return *HumanData; } return {}; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取人类的信息

---

### Function `AddChatComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddChatComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化社交聊天组件

---

### Function `RemoveChatComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveChatComponent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除社交聊天组件

---

### Function `GainCharacterOwnedItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool GainCharacterOwnedItem(UInventoryItemInstance* ItemInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 让角色获得一个物品：转移进角色背包并把物品状态设为"角色拥有"（耗材自动使用的前提状态）

---

### Function `AddItemToBackpackByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `const FName&` |
| `1` | `int32 ItemNum =` |
| `true` | `bool bCharacterOwned =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* AddItemToBackpackByID(const FName& ItemID,int32 ItemNum = 1,bool bCharacterOwned = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过物品ID(DT_InventoryItem)创建物品并添加到角色背包 返回创建的实例 失败返回空
> bCharacterOwned为true时置为"角色拥有"状态（耗材自动使用需要此状态）

---

### Function `GetObjectInfoName_MultiSelect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FText GetObjectInfoName_MultiSelect();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 多选时获取对象信息名字

---

### Function `GetBuyGoodsPriceFavorabilityRate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetBuyGoodsPriceFavorabilityRate();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 向此商人购买物品的价格系数

---

### Function `GetSaleGoodsPriceFavorabilityRate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetSaleGoodsPriceFavorabilityRate();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 向此商人售卖物品的价格系数

---

### Function `GetTravelerGoodsInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutGoodsInfo` | TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetTravelerGoodsInfo(TMap<FName,FTravelerGoodsInfo>& OutGoodsInfo);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets the traveler merchant's goods info map

---

### Function `BuyAndSaleTravelerGoods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuyGoods` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |
| `InSaleGoods` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool BuyAndSaleTravelerGoods(const TMap<FName,FTravelerGoodsInfo>& InBuyGoods,const TMap<FName,FTravelerGoodsInfo>& InSaleGoods);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 购买 出售商品给NPC

---

### Function `CharacterStartCheckExchange`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CharacterStartCheckExchange();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 弟子开始循环检测兑换

---

### Function `CheckExchangeEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckExchangeEvent();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 弟子循环检测兑换事件

---

### Function `EndExchangeAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EndExchangeAction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 弟子兑换行为结束

---

### Function `GetExchangeProduct`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FBuyTreasureInfo](../Components/TreasureComponent__FBuyTreasureInfo.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TreasureHouse` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FBuyTreasureInfo GetExchangeProduct(ABuildingActorBase* TreasureHouse);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取到兑换商品的信息（为空则检测失败）

---

### Function `ScreeningCanUseTreasureItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItems` | TArray<[FTreasureItemSubData](../Components/TreasureComponent__FTreasureItemSubData.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ScreeningCanUseTreasureItems(TArray<FTreasureItemSubData> & InItems);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 过滤不能买到的商品

---

### Function `InitCharacterExchangeRule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitCharacterExchangeRule();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化角色兑换规则

---

### Function `SetCharacterExchangeRule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bIsRandom` | `bool` |
| `bIsAllow` | `bool` |
| `TypeRule` | `int32` |
| `SubTypeRule` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCharacterExchangeRule(bool bIsRandom , bool bIsAllow , int32 TypeRule , int32 SubTypeRule);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置角色兑换规则

---

### Function `CheckCanReadMartialArts`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MartialArtsItem` | [FTreasureItemSubData](../Components/TreasureComponent__FTreasureItemSubData.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanReadMartialArts(FTreasureItemSubData MartialArtsItem);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否是已学的武学或是不可学的武学

---

### Function `CheckDrugResistance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemData` | [FTreasureItemSubData](../Components/TreasureComponent__FTreasureItemSubData.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckDrugResistance(FTreasureItemSubData ItemData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查丹药类限制

---

### Function `AddCharacterCoin`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddCoin` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddCharacterCoin(int32 AddCoin);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 角色增加例银

---

### Function `SetCharacterCanBuyItemFromTreasureHouse`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bCan` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCharacterCanBuyItemFromTreasureHouse(bool bCan);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置角色是否可以去珍宝阁购物

---

### Function `AddCharacterLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InLog` | [FLogData](../ERW_CommonTypes__FLogData.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddCharacterLog(FLogData InLog);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Adds a character log entry

---

### Function `SetCharacterRescuedBy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InHuman` | [AEastRimWorldCharacter_Human](EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetCharacterRescuedBy(AEastRimWorldCharacter_Human* InHuman);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置被谁营救

---

### Function `RemoveRescueAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutAbortUsers` | TArray<[AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveRescueAction(TArray<AEastRimWorldAIController*>& OutAbortUsers);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes the rescue action and outputs the AI controllers that need to be aborted

---
