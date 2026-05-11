# `class` `UPostStationConfigAsset`

**Source header:** `EastRimWorld/PostStation/PostStationStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `PostStationGridSize`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FIntPoint PostStationGridSize;` |

**Source comments:**

> 驿站格子大小

---

### Property `GenerateFavorabilityWeightRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float GenerateFavorabilityWeightRate;` |

**Source comments:**

> 势力好感度转权重系数

---

### Property `GenerateLineConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FPostStationGenerateLineConfig](PostStationStruct__FPostStationGenerateLineConfig.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FPostStationGenerateLineConfig> GenerateLineConfigs;` |

**Source comments:**

> 所有的生产线配置

---

### Property `NPCBuffIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> NPCBuffIDs;` |

**Source comments:**

> 给生成出的NPC加buff

---

### Property `WaitTradeAreaStartSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaStartSocket;` |

**Source comments:**

> 待售区起始点坐标(待售区模型插槽)

---

### Property `WaitTradeAreaEndSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaEndSocket;` |

**Source comments:**

> 待售区列终止点坐标(待售区模型插槽)

---

### Property `WaitTradeAreaThirdPointSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaThirdPointSocket;` |

**Source comments:**

> 待售区列终止点坐标(待售区模型插槽)

---

### Property `WaitTradeAreaCapacity`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") int32 WaitTradeAreaCapacity;` |

**Source comments:**

> 待售区容量

---

### Property `TradeAreaClass`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<AActor>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<AActor> TradeAreaClass;` |

**Source comments:**

> 待售区类类型

---

### Property `WaitTradeAreaWidget`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonActivatableWidget>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<UCommonActivatableWidget> WaitTradeAreaWidget;` |

**Source comments:**

> 待售区UI类型

---

### Property `WaitTradeAreaMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftObjectPtr<UStaticMesh> WaitTradeAreaMesh;` |

**Source comments:**

> 待售区模型

---

### Property `WaitTradeAreaMeshSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName WaitTradeAreaMeshSocket;` |

**Source comments:**

> 待售区模型插槽位置(驿站模型上的插槽名称)

---

### Property `TradeAreaStartSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaStartSocket;` |

**Source comments:**

> 已售区起始点坐标(待售区模型插槽)

---

### Property `TradeAreaEndSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaEndSocket;` |

**Source comments:**

> 已售区列终止点坐标(待售区模型插槽)

---

### Property `TradeAreaThirdPointSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaThirdPointSocket;` |

**Source comments:**

> 已售区列终止点坐标(待售区模型插槽)

---

### Property `TradeAreaMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftObjectPtr<UStaticMesh> TradeAreaMesh;` |

**Source comments:**

> 已售区模型

---

### Property `TradeAreaMeshSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") FName TradeAreaMeshSocket;` |

**Source comments:**

> 已售区模型插槽位置(驿站模型上的插槽名称)

---

### Property `TradeWidget`

| Field | Details |
|------|------|
| C++ type | `TSoftClassPtr<UCommonActivatableWidget>` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") TSoftClassPtr<UCommonActivatableWidget> TradeWidget;` |

**Source comments:**

> 交易UI类型

---

### Property `GoodsPriceInterval`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="TradeArea" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="TradeArea") float GoodsPriceInterval = 999.f;` |

**Source comments:**

> 商人商品价格浮动周期

---

### Property `PlayerBattleSocket`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") TArray<FName> PlayerBattleSocket;` |

**Source comments:**

> 玩家参加切磋位置插槽

---

### Property `NPCBattleSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") FName NPCBattleSocket;` |

**Source comments:**

> NPC参加切磋位置插槽

---

### Property `AirWall`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") TSoftObjectPtr<UStaticMesh> AirWall;` |

**Source comments:**

> 空气墙

---

### Property `AirWallSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") FName AirWallSocket;` |

**Source comments:**

> 空气墙位置

---

### Property `ExchangeMartialArtsTimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") float ExchangeMartialArtsTimeLimit = 120.f;` |

**Source comments:**

> 切磋打架时间限制

---

### Property `ExchangeMartialArtsStartTimeLimit`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="ExchangeMartialArts" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="ExchangeMartialArts") float ExchangeMartialArtsStartTimeLimit = 960.f;` |

**Source comments:**

> 如果超出这个时间还没开始切磋,就取消当前切磋

---

### Property `NPCTeamID`

| Field | Details |
|------|------|
| C++ type | `FGenericTeamId` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FGenericTeamId NPCTeamID;` |

**Source comments:**

> NPC队伍ID

---

### Property `PostStationDoor`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Prison" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Prison") FName PostStationDoor;` |

**Source comments:**

> 驿站大门位置插槽

---

### Property `PostStationLeaveSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Prison" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="Prison") FName PostStationLeaveSocket;` |

**Source comments:**

> 离开点位置插槽

---

### Property `NPCDestroyRemoveTaskRecord`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FNameArr](../Components/ERW_GameConfigComponent__FNameArr.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FNameArr> NPCDestroyRemoveTaskRecord;` |

**Source comments:**

> NPC被销毁时移除任务完成记录

---
