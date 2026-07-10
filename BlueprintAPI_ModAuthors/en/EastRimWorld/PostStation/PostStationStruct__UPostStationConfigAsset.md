# `class` `UPostStationConfigAsset`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## Functional description (from header comments)

> Post station config data asset: generate line configs, trade area, sparring and prison-related parameters.

## Blueprint-exposed variables

### Property `PostStationGridSize`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FIntPoint PostStationGridSize;` |

**Notes:**

> 驿站格子大小

---

### Property `GenerateFavorabilityWeightRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float GenerateFavorabilityWeightRate;` |

**Notes:**

> 势力好感度转权重系数

---

### Property `GenerateLineConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FPostStationGenerateLineConfig](PostStationStruct__FPostStationGenerateLineConfig.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FPostStationGenerateLineConfig> GenerateLineConfigs;` |

**Notes:**

> 所有的生产线配置

---

### Property `NPCBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> NPCBuffIDs;` |

**Notes:**

> 给生成出的NPC加buff

---

### Property `WaitTradeAreaStartSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaStartSocket;` |

**Notes:**

> 待售区起始点坐标(待售区模型插槽)

---

### Property `WaitTradeAreaEndSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaEndSocket;` |

**Notes:**

> 待售区列终止点坐标(待售区模型插槽)

---

### Property `WaitTradeAreaThirdPointSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaThirdPointSocket;` |

**Notes:**

> 待售区列终止点坐标(待售区模型插槽)

---

### Property `WaitTradeAreaCapacity`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") int32 WaitTradeAreaCapacity;` |

**Notes:**

> 待售区容量

---

### Property `TradeAreaClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<AActor> TradeAreaClass;` |

**Notes:**

> 待售区类类型

---

### Property `WaitTradeAreaWidget`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonActivatableWidget>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<UCommonActivatableWidget> WaitTradeAreaWidget;` |

**Notes:**

> 待售区UI类型

---

### Property `WaitTradeAreaMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftObjectPtr<UStaticMesh> WaitTradeAreaMesh;` |

**Notes:**

> 待售区模型

---

### Property `WaitTradeAreaMeshSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaMeshSocket;` |

**Notes:**

> 待售区模型插槽位置(驿站模型上的插槽名称)

---

### Property `TradeAreaStartSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaStartSocket;` |

**Notes:**

> 已售区起始点坐标(待售区模型插槽)

---

### Property `TradeAreaEndSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaEndSocket;` |

**Notes:**

> 已售区列终止点坐标(待售区模型插槽)

---

### Property `TradeAreaThirdPointSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaThirdPointSocket;` |

**Notes:**

> 已售区列终止点坐标(待售区模型插槽)

---

### Property `TradeAreaMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftObjectPtr<UStaticMesh> TradeAreaMesh;` |

**Notes:**

> 已售区模型

---

### Property `TradeAreaMeshSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaMeshSocket;` |

**Notes:**

> 已售区模型插槽位置(驿站模型上的插槽名称)

---

### Property `TradeWidget`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonActivatableWidget>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<UCommonActivatableWidget> TradeWidget;` |

**Notes:**

> 交易UI类型

---

### Property `GoodsPriceInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") float GoodsPriceInterval = 999.f;` |

**Notes:**

> 商人商品价格浮动周期

---

### Property `PlayerBattleSocket`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") TArray<FName> PlayerBattleSocket;` |

**Notes:**

> 玩家参加切磋位置插槽

---

### Property `NPCBattleSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") FName NPCBattleSocket;` |

**Notes:**

> NPC参加切磋位置插槽

---

### Property `AirWall`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") TSoftObjectPtr<UStaticMesh> AirWall;` |

**Notes:**

> 空气墙

---

### Property `AirWallSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") FName AirWallSocket;` |

**Notes:**

> 空气墙位置

---

### Property `ExchangeMartialArtsTimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") float ExchangeMartialArtsTimeLimit = 120.f;` |

**Notes:**

> 切磋打架时间限制

---

### Property `ExchangeMartialArtsStartTimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") float ExchangeMartialArtsStartTimeLimit = 960.f;` |

**Notes:**

> 如果超出这个时间还没开始切磋,就取消当前切磋

---

### Property `NPCTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGenericTeamId NPCTeamID;` |

**Notes:**

> NPC队伍ID

---

### Property `PostStationDoor`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Prison" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Prison") FName PostStationDoor;` |

**Notes:**

> 驿站大门位置插槽

---

### Property `PostStationLeaveSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Prison" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Prison") FName PostStationLeaveSocket;` |

**Notes:**

> 离开点位置插槽

---

### Property `NPCDestroyRemoveTaskRecord`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FNameArr](../Components/ERW_GameConfigComponent__FNameArr.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FNameArr> NPCDestroyRemoveTaskRecord;` |

**Notes:**

> NPC被销毁时移除任务完成记录

---
