# `class` `AEastRimWorldCharacter_Human`

**源码头文件：** `EastRimWorld/Character/EastRimWorldCharacter_Human.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `WorkComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldWorkComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldWorkComponent> WorkComponent;` |

---

### 属性 `SocialComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldSocialComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldSocialComponent> SocialComponent;` |

---

### 属性 `CharacterChatComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldCharacterChatComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="EastRimWorld|Human" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human") TObjectPtr<UEastRimWorldCharacterChatComponent> CharacterChatComponent;` |

---

### 属性 `OnBreakdown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBreakdown` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBreakdown OnBreakdown;` |

**源码注释：**

> 当触发崩溃时

---

### 属性 `OnBreakdownEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBreakdownEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBreakdownEnd OnBreakdownEnd;` |

**源码注释：**

> 当崩溃行为结束时

---

### 属性 `RoomBuffIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) TArray<FName> RoomBuffIds;` |

**源码注释：**

> 进入房间给的buff

---

### 属性 `TravelerMoney`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Traveler" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") float TravelerMoney = 0;` |

---

### 属性 `GoodsInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FTravelerGoodsInfo>` |
| 反射说明符 | BlueprintReadWrite, Category="Traveler" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") TMap<FName,FTravelerGoodsInfo> GoodsInfos;` |

---

### 属性 `GoodsPriceInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Traveler" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame,Category="Traveler") float GoodsPriceInterval = 999.f;` |

---

### 属性 `AIVisionMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UProceduralMeshComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="Vision|Debug" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Vision|Debug", Meta=(AllowPrivateAccess="true")) TObjectPtr<UProceduralMeshComponent> AIVisionMeshComponent;` |

---

### 属性 `VisibleVisionMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadOnly, Category="Vision|Debug" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") TObjectPtr<UMaterialInterface> VisibleVisionMaterial;` |

---

### 属性 `OccludedVisionMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UMaterialInterface>` |
| 反射说明符 | BlueprintReadOnly, Category="Vision|Debug" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") TObjectPtr<UMaterialInterface> OccludedVisionMaterial;` |

---

### 属性 `VisionPlaneLift`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Vision|Debug" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Vision|Debug") float VisionPlaneLift = 12.f;` |

---

### 属性 `CharacterCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CharacterCoin;` |

**源码注释：**

> 弟子拥有的例银

---

### 属性 `CharacterExchangeRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , FExchangeRuleData>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<int32 , FExchangeRuleData> CharacterExchangeRule;` |

**源码注释：**

> 角色珍宝阁兑换信息

---

### 属性 `CharacterCanBuyItemFromTreasureHouse`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) bool CharacterCanBuyItemFromTreasureHouse = true;` |

**源码注释：**

> 角色是否可以去购物

---

### 属性 `CharacterExchangeRemainingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) int32 CharacterExchangeRemainingTime;` |

**源码注释：**

> 角色珍宝阁兑换剩余时间

---

### 属性 `CharacterLog`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FLogData>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TArray<FLogData> CharacterLog;` |

---

### 属性 `BedBuildingGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, SaveGame) FGuid BedBuildingGuid = FGuid();` |

**源码注释：**

> 安置占用的床ID

---

## 蓝图暴露函数

### 函数 `InitProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitProtagonistAppearance();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 初始化主角外观

---

### 函数 `LoadProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void LoadProtagonistAppearance();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void InitCharacterAppearanceById(const FString& Id);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 通过id初始化角色外观

---

### 函数 `SaveProtagonistAppearance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void SaveProtagonistAppearance();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckAttributeBuff(const FName& AttributeName , float Percent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查属性是否应该触发BUFF

---

### 函数 `GetBreakDownState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `EBreakdownState` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) EBreakdownState GetBreakDownState();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetHumanData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FEastRimWorldHumanData` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FEastRimWorldHumanData GetHumanData() { if (auto HumanData = EastRimWorldCharacterData.GetPtr<FEastRimWorldHumanData>()) { return *HumanData; } return {}; }`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取人类的信息

---

### 函数 `AddChatComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddChatComponent();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化社交聊天组件

---

### 函数 `RemoveChatComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveChatComponent();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除社交聊天组件

---

### 函数 `GetObjectInfoName_MultiSelect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FText` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FText GetObjectInfoName_MultiSelect();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 多选时获取对象信息名字

---

### 函数 `GetBuyGoodsPriceFavorabilityRate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) float GetBuyGoodsPriceFavorabilityRate();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 向此商人购买物品的价格系数

---

### 函数 `GetSaleGoodsPriceFavorabilityRate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) float GetSaleGoodsPriceFavorabilityRate();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

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
| `OutGoodsInfo` | `TMap<FName,FTravelerGoodsInfo>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetTravelerGoodsInfo(TMap<FName,FTravelerGoodsInfo>& OutGoodsInfo);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `BuyAndSaleTravelerGoods`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBuyGoods` | `const TMap<FName,FTravelerGoodsInfo>&` |
| `InSaleGoods` | `const TMap<FName,FTravelerGoodsInfo>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BuyAndSaleTravelerGoods(const TMap<FName,FTravelerGoodsInfo>& InBuyGoods,const TMap<FName,FTravelerGoodsInfo>& InSaleGoods);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 购买 出售商品给NPC

---

### 函数 `CharacterStartCheckExchange`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CharacterStartCheckExchange();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 弟子开始循环检测兑换

---

### 函数 `CheckExchangeEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckExchangeEvent();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 弟子循环检测兑换事件

---

### 函数 `EndExchangeAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EndExchangeAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 弟子兑换行为结束

---

### 函数 `GetExchangeProduct`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FBuyTreasureInfo` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TreasureHouse` | `ABuildingActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FBuyTreasureInfo GetExchangeProduct(ABuildingActorBase* TreasureHouse);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `InItems` | `TArray<FTreasureItemSubData> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ScreeningCanUseTreasureItems(TArray<FTreasureItemSubData> & InItems);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 过滤不能买到的商品

---

### 函数 `InitCharacterExchangeRule`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitCharacterExchangeRule();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetCharacterExchangeRule(bool bIsRandom , bool bIsAllow , int32 TypeRule , int32 SubTypeRule);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `MartialArtsItem` | `FTreasureItemSubData` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckCanReadMartialArts(FTreasureItemSubData MartialArtsItem);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `ItemData` | `FTreasureItemSubData` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CheckDrugResistance(FTreasureItemSubData ItemData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddCharacterCoin(int32 AddCoin);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetCharacterCanBuyItemFromTreasureHouse(bool bCan);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `InLog` | `FLogData` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddCharacterLog(FLogData InLog);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetCharacterRescuedBy`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InHuman` | `AEastRimWorldCharacter_Human*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetCharacterRescuedBy(AEastRimWorldCharacter_Human* InHuman);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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
| `OutAbortUsers` | `TArray<AEastRimWorldAIController*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveRescueAction(TArray<AEastRimWorldAIController*>& OutAbortUsers);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
