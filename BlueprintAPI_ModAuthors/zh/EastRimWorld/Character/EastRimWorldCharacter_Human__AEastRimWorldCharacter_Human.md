# `class` `AEastRimWorldCharacter_Human`

**源码头文件:** `EastRimWorld/Character/EastRimWorldCharacter_Human.h`

---

## 功能说明（来自头文件注释）

> 人类角色类：包含工作、社交、耗材、闲聊、心情崩溃、行商交易与珍宝阁兑换等功能

## 蓝图暴露变量

### 属性 `WorkComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldWorkComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldWorkComponent> WorkComponent;` |

**说明:**

> 工作组件

---

### 属性 `SocialComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldSocialComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldSocialComponent> SocialComponent;` |

**说明:**

> 社交组件

---

### 属性 `ConsumableComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UConsumableComponent](Components/ConsumableComponent__UConsumableComponent.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UConsumableComponent> ConsumableComponent;` |

**说明:**

> 耗材组件（行为开始/结束时自动使用背包中"角色拥有"状态的耗材 只有人类角色使用耗材）

---

### 属性 `CharacterChatComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEastRimWorldCharacterChatComponent](Components/EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)> |
| 反射说明符 | BlueprintReadOnly, Category="EastRimWorld|Human" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human") TObjectPtr<UEastRimWorldCharacterChatComponent> CharacterChatComponent;` |

**说明:**

> 角色闲聊组件

---

### 属性 `OnBreakdown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBreakdown` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBreakdown OnBreakdown;` |

**说明:**

> 当触发崩溃时

---

### 属性 `OnBreakdownEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBreakdownEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBreakdownEnd OnBreakdownEnd;` |

**说明:**

> 当崩溃行为结束时

---

### 属性 `RoomBuffIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FName> RoomBuffIds;` |

**说明:**

> 进入房间给的buff

---

### 属性 `TravelerMoney`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Traveler" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") float TravelerMoney = 0;` |

**说明:**

> 行商携带的金钱

---

### 属性 `GoodsInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Traveler" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") TMap<FName,FTravelerGoodsInfo> GoodsInfos;` |

**说明:**

> 行商商品信息（商品ID→商品信息）

---

### 属性 `GoodsPriceInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Traveler" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") float GoodsPriceInterval = 999.f;` |

**说明:**

> 行商商品价格更新的间隔计时

---

### 属性 `AIVisionMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UProceduralMeshComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="Vision|Debug" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Vision|Debug", Meta=(AllowPrivateAccess="true")) TObjectPtr<UProceduralMeshComponent> AIVisionMeshComponent;` |

**说明:**

> AI视野调试用的扇形程序化网格组件

---

### 属性 `VisibleVisionMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadOnly, Category="Vision|Debug" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") TObjectPtr<UMaterialInterface> VisibleVisionMaterial;` |

**说明:**

> AI视野网格中可见区域使用的材质

---

### 属性 `OccludedVisionMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadOnly, Category="Vision|Debug" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") TObjectPtr<UMaterialInterface> OccludedVisionMaterial;` |

**说明:**

> AI视野网格中被遮挡（不可见）区域使用的材质

---

### 属性 `VisionPlaneLift`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Vision|Debug" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") float VisionPlaneLift = 12.f;` |

**说明:**

> AI视野网格显示平面的抬升高度

---

### 属性 `CharacterCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CharacterCoin;` |

**说明:**

> 弟子拥有的例银

---

### 属性 `CharacterExchangeRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FExchangeRuleData](../Struct/CharacterStruct__FExchangeRuleData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<int32 , FExchangeRuleData> CharacterExchangeRule;` |

**说明:**

> 角色珍宝阁兑换信息

---

### 属性 `CharacterCanBuyItemFromTreasureHouse`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) bool CharacterCanBuyItemFromTreasureHouse = true;` |

**说明:**

> 角色是否可以去购物

---

### 属性 `CharacterExchangeRemainingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CharacterExchangeRemainingTime;` |

**说明:**

> 角色珍宝阁兑换剩余时间

---

### 属性 `CharacterLog`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TArray<FLogData> CharacterLog;` |

**说明:**

> 角色日志记录数组

---

### 属性 `BedBuildingGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) FGuid BedBuildingGuid = FGuid();` |

**说明:**

> 安置占用的床ID

---

## 蓝图暴露函数

### 函数 `InitProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitProtagonistAppearance();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 初始化主角外观

---

### 函数 `LoadProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void LoadProtagonistAppearance();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 加载主角的外观

---

### 函数 `InitCharacterAppearanceById`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Id` | `const FString&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitCharacterAppearanceById(const FString& Id);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 通过id初始化角色外观

---

### 函数 `SaveProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SaveProtagonistAppearance();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> 保存主角的外观（蓝图实现事件）

---

### 函数 `CheckAttributeBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AttributeName` | `const FName&` |
| `Percent` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckAttributeBuff(const FName& AttributeName , float Percent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查属性是否应该触发BUFF

---

### 函数 `GetBreakDownState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [EBreakdownState](../ERW_Enumerations__EBreakdownState.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) EBreakdownState GetBreakDownState();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取角色的心情崩溃状态

---

### 函数 `GetHumanData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FEastRimWorldHumanData](../Struct/CharacterStruct__FEastRimWorldHumanData.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FEastRimWorldHumanData GetHumanData() { if (auto HumanData = EastRimWorldCharacterData.GetPtr<FEastRimWorldHumanData>()) { return *HumanData; } return {}; }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取人类的信息

---

### 函数 `AddChatComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddChatComponent();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化社交聊天组件

---

### 函数 `RemoveChatComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveChatComponent();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除社交聊天组件

---

### 函数 `GainCharacterOwnedItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemInstance` | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool GainCharacterOwnedItem(UInventoryItemInstance* ItemInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 让角色获得一个物品：转移进角色背包并把物品状态设为"角色拥有"（耗材自动使用的前提状态）

---

### 函数 `AddItemToBackpackByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `const FName&` |
| `1` | `int32 ItemNum =` |
| `true` | `bool bCharacterOwned =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) UInventoryItemInstance* AddItemToBackpackByID(const FName& ItemID,int32 ItemNum = 1,bool bCharacterOwned = true);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过物品ID(DT_InventoryItem)创建物品并添加到角色背包 返回创建的实例 失败返回空
> bCharacterOwned为true时置为"角色拥有"状态（耗材自动使用需要此状态）

---

### 函数 `GetObjectInfoName_MultiSelect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FText GetObjectInfoName_MultiSelect();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 多选时获取对象信息名字

---

### 函数 `GetBuyGoodsPriceFavorabilityRate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetBuyGoodsPriceFavorabilityRate();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 向此商人购买物品的价格系数

---

### 函数 `GetSaleGoodsPriceFavorabilityRate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) float GetSaleGoodsPriceFavorabilityRate();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 向此商人售卖物品的价格系数

---

### 函数 `GetTravelerGoodsInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutGoodsInfo` | TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) void GetTravelerGoodsInfo(TMap<FName,FTravelerGoodsInfo>& OutGoodsInfo);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取行商的商品信息表

---

### 函数 `BuyAndSaleTravelerGoods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuyGoods` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |
| `InSaleGoods` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool BuyAndSaleTravelerGoods(const TMap<FName,FTravelerGoodsInfo>& InBuyGoods,const TMap<FName,FTravelerGoodsInfo>& InSaleGoods);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 购买 出售商品给NPC

---

### 函数 `CharacterStartCheckExchange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CharacterStartCheckExchange();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 弟子开始循环检测兑换

---

### 函数 `CheckExchangeEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CheckExchangeEvent();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 弟子循环检测兑换事件

---

### 函数 `EndExchangeAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EndExchangeAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 弟子兑换行为结束

---

### 函数 `GetExchangeProduct`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FBuyTreasureInfo](../Components/TreasureComponent__FBuyTreasureInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TreasureHouse` | [ABuildingActorBase](../Building/BuildingActorBase__ABuildingActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FBuyTreasureInfo GetExchangeProduct(ABuildingActorBase* TreasureHouse);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取到兑换商品的信息（为空则检测失败）

---

### 函数 `ScreeningCanUseTreasureItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItems` | TArray<[FTreasureItemSubData](../Components/TreasureComponent__FTreasureItemSubData.md)> & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ScreeningCanUseTreasureItems(TArray<FTreasureItemSubData> & InItems);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 过滤不能买到的商品

---

### 函数 `InitCharacterExchangeRule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitCharacterExchangeRule();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化角色兑换规则

---

### 函数 `SetCharacterExchangeRule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bIsRandom` | `bool` |
| `bIsAllow` | `bool` |
| `TypeRule` | `int32` |
| `SubTypeRule` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCharacterExchangeRule(bool bIsRandom , bool bIsAllow , int32 TypeRule , int32 SubTypeRule);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置角色兑换规则

---

### 函数 `CheckCanReadMartialArts`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MartialArtsItem` | [FTreasureItemSubData](../Components/TreasureComponent__FTreasureItemSubData.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanReadMartialArts(FTreasureItemSubData MartialArtsItem);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查是否是已学的武学或是不可学的武学

---

### 函数 `CheckDrugResistance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemData` | [FTreasureItemSubData](../Components/TreasureComponent__FTreasureItemSubData.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckDrugResistance(FTreasureItemSubData ItemData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查丹药类限制

---

### 函数 `AddCharacterCoin`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddCoin` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddCharacterCoin(int32 AddCoin);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 角色增加例银

---

### 函数 `SetCharacterCanBuyItemFromTreasureHouse`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bCan` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCharacterCanBuyItemFromTreasureHouse(bool bCan);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置角色是否可以去珍宝阁购物

---

### 函数 `AddCharacterLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InLog` | [FLogData](../ERW_CommonTypes__FLogData.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void AddCharacterLog(FLogData InLog);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 添加一条角色日志记录

---

### 函数 `SetCharacterRescuedBy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InHuman` | [AEastRimWorldCharacter_Human](EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetCharacterRescuedBy(AEastRimWorldCharacter_Human* InHuman);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置被谁营救

---

### 函数 `RemoveRescueAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutAbortUsers` | TArray<[AEastRimWorldAIController](../Player/EastRimWorldAIController__AEastRimWorldAIController.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveRescueAction(TArray<AEastRimWorldAIController*>& OutAbortUsers);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除营救行为，并输出需要中断的AI控制器列表

---
