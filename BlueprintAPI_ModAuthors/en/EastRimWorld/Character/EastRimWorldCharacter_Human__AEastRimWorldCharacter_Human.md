# `class` `AEastRimWorldCharacter_Human`

**Source header:** `EastRimWorld/Character/EastRimWorldCharacter_Human.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `WorkComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UEastRimWorldWorkComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldWorkComponent> WorkComponent;` |

---

### Property `SocialComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UEastRimWorldSocialComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldSocialComponent> SocialComponent;` |

---

### Property `CharacterChatComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEastRimWorldCharacterChatComponent](Components/EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="EastRimWorld|Human" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human") TObjectPtr<UEastRimWorldCharacterChatComponent> CharacterChatComponent;` |

---

### Property `OnBreakdown`

| Field | Details |
|------|------|
| C++ type | `FOnBreakdown` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBreakdown OnBreakdown;` |

**Source comments:**

> 当触发崩溃时

---

### Property `OnBreakdownEnd`

| Field | Details |
|------|------|
| C++ type | `FOnBreakdownEnd` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnBreakdownEnd OnBreakdownEnd;` |

**Source comments:**

> 当崩溃行为结束时

---

### Property `RoomBuffIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FName> RoomBuffIds;` |

**Source comments:**

> 进入房间给的buff

---

### Property `TravelerMoney`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") float TravelerMoney = 0;` |

---

### Property `GoodsInfos`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") TMap<FName,FTravelerGoodsInfo> GoodsInfos;` |

---

### Property `GoodsPriceInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Traveler" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") float GoodsPriceInterval = 999.f;` |

---

### Property `AIVisionMeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UProceduralMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly, AllowPrivateAccess, Category="Vision|Debug" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Vision|Debug", Meta=(AllowPrivateAccess="true")) TObjectPtr<UProceduralMeshComponent> AIVisionMeshComponent;` |

---

### Property `VisibleVisionMaterial`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadOnly, Category="Vision|Debug" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") TObjectPtr<UMaterialInterface> VisibleVisionMaterial;` |

---

### Property `OccludedVisionMaterial`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UMaterialInterface>` |
| Reflection specifiers | BlueprintReadOnly, Category="Vision|Debug" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") TObjectPtr<UMaterialInterface> OccludedVisionMaterial;` |

---

### Property `VisionPlaneLift`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Vision|Debug" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") float VisionPlaneLift = 12.f;` |

---

### Property `CharacterCoin`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CharacterCoin;` |

**Source comments:**

> 弟子拥有的例银

---

### Property `CharacterExchangeRule`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FExchangeRuleData](../Struct/CharacterStruct__FExchangeRuleData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<int32 , FExchangeRuleData> CharacterExchangeRule;` |

**Source comments:**

> 角色珍宝阁兑换信息

---

### Property `CharacterCanBuyItemFromTreasureHouse`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) bool CharacterCanBuyItemFromTreasureHouse = true;` |

**Source comments:**

> 角色是否可以去购物

---

### Property `CharacterExchangeRemainingTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CharacterExchangeRemainingTime;` |

**Source comments:**

> 角色珍宝阁兑换剩余时间

---

### Property `CharacterLog`

| Field | Details |
|------|------|
| C++ type | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly , SaveGame) TArray<FLogData> CharacterLog;` |

---

### Property `BedBuildingGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, SaveGame) FGuid BedBuildingGuid = FGuid();` |

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 检查属性是否应该触发BUFF

---

### Function `GetBreakDownState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `EBreakdownState` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) EBreakdownState GetBreakDownState();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `GetHumanData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FEastRimWorldHumanData GetHumanData() { if (auto HumanData = EastRimWorldCharacterData.GetPtr<FEastRimWorldHumanData>()) { return *HumanData; } return {}; }`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 移除社交聊天组件

---

### Function `GetObjectInfoName_MultiSelect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FText` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FText GetObjectInfoName_MultiSelect();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---

### Function `BuyAndSaleTravelerGoods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InBuyGoods` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |
| `InSaleGoods` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BuyAndSaleTravelerGoods(const TMap<FName,FTravelerGoodsInfo>& InBuyGoods,const TMap<FName,FTravelerGoodsInfo>& InSaleGoods);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---
