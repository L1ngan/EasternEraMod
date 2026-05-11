# `class` `UPostStationConfigAsset`

**源码头文件：** `EastRimWorld/PostStation/PostStationStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `PostStationGridSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FIntPoint PostStationGridSize;` |

**源码注释：**

> 驿站格子大小

---

### 属性 `GenerateFavorabilityWeightRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float GenerateFavorabilityWeightRate;` |

**源码注释：**

> 势力好感度转权重系数

---

### 属性 `GenerateLineConfigs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPostStationGenerateLineConfig](PostStationStruct__FPostStationGenerateLineConfig.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FPostStationGenerateLineConfig> GenerateLineConfigs;` |

**源码注释：**

> 所有的生产线配置

---

### 属性 `NPCBuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> NPCBuffIDs;` |

**源码注释：**

> 给生成出的NPC加buff

---

### 属性 `WaitTradeAreaStartSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaStartSocket;` |

**源码注释：**

> 待售区起始点坐标(待售区模型插槽)

---

### 属性 `WaitTradeAreaEndSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaEndSocket;` |

**源码注释：**

> 待售区列终止点坐标(待售区模型插槽)

---

### 属性 `WaitTradeAreaThirdPointSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaThirdPointSocket;` |

**源码注释：**

> 待售区列终止点坐标(待售区模型插槽)

---

### 属性 `WaitTradeAreaCapacity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") int32 WaitTradeAreaCapacity;` |

**源码注释：**

> 待售区容量

---

### 属性 `TradeAreaClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<AActor> TradeAreaClass;` |

**源码注释：**

> 待售区类类型

---

### 属性 `WaitTradeAreaWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UCommonActivatableWidget>` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<UCommonActivatableWidget> WaitTradeAreaWidget;` |

**源码注释：**

> 待售区UI类型

---

### 属性 `WaitTradeAreaMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftObjectPtr<UStaticMesh> WaitTradeAreaMesh;` |

**源码注释：**

> 待售区模型

---

### 属性 `WaitTradeAreaMeshSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaMeshSocket;` |

**源码注释：**

> 待售区模型插槽位置(驿站模型上的插槽名称)

---

### 属性 `TradeAreaStartSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaStartSocket;` |

**源码注释：**

> 已售区起始点坐标(待售区模型插槽)

---

### 属性 `TradeAreaEndSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaEndSocket;` |

**源码注释：**

> 已售区列终止点坐标(待售区模型插槽)

---

### 属性 `TradeAreaThirdPointSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaThirdPointSocket;` |

**源码注释：**

> 已售区列终止点坐标(待售区模型插槽)

---

### 属性 `TradeAreaMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftObjectPtr<UStaticMesh> TradeAreaMesh;` |

**源码注释：**

> 已售区模型

---

### 属性 `TradeAreaMeshSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaMeshSocket;` |

**源码注释：**

> 已售区模型插槽位置(驿站模型上的插槽名称)

---

### 属性 `TradeWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UCommonActivatableWidget>` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<UCommonActivatableWidget> TradeWidget;` |

**源码注释：**

> 交易UI类型

---

### 属性 `GoodsPriceInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="TradeArea" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") float GoodsPriceInterval = 999.f;` |

**源码注释：**

> 商人商品价格浮动周期

---

### 属性 `PlayerBattleSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="ExchangeMartialArts" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") TArray<FName> PlayerBattleSocket;` |

**源码注释：**

> 玩家参加切磋位置插槽

---

### 属性 `NPCBattleSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="ExchangeMartialArts" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") FName NPCBattleSocket;` |

**源码注释：**

> NPC参加切磋位置插槽

---

### 属性 `AirWall`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadOnly, Category="ExchangeMartialArts" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") TSoftObjectPtr<UStaticMesh> AirWall;` |

**源码注释：**

> 空气墙

---

### 属性 `AirWallSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="ExchangeMartialArts" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") FName AirWallSocket;` |

**源码注释：**

> 空气墙位置

---

### 属性 `ExchangeMartialArtsTimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="ExchangeMartialArts" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") float ExchangeMartialArtsTimeLimit = 120.f;` |

**源码注释：**

> 切磋打架时间限制

---

### 属性 `ExchangeMartialArtsStartTimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="ExchangeMartialArts" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") float ExchangeMartialArtsStartTimeLimit = 960.f;` |

**源码注释：**

> 如果超出这个时间还没开始切磋,就取消当前切磋

---

### 属性 `NPCTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGenericTeamId NPCTeamID;` |

**源码注释：**

> NPC队伍ID

---

### 属性 `PostStationDoor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Prison" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Prison") FName PostStationDoor;` |

**源码注释：**

> 驿站大门位置插槽

---

### 属性 `PostStationLeaveSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Prison" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Prison") FName PostStationLeaveSocket;` |

**源码注释：**

> 离开点位置插槽

---

### 属性 `NPCDestroyRemoveTaskRecord`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FNameArr](../Components/ERW_GameConfigComponent__FNameArr.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FNameArr> NPCDestroyRemoveTaskRecord;` |

**源码注释：**

> NPC被销毁时移除任务完成记录

---
