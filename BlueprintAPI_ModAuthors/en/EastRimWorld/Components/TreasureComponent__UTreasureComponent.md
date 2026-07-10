# `class` `UTreasureComponent`

**Source header:** `EastRimWorld/Components/TreasureComponent.h`

---

## Functional description (from header comments)

> Treasure pavilion component managing the shop's item listing/delisting, stall slots, exchange statistics, disciple purchases and automatic replenishment, with save/load support.

## Blueprint-exposed variables

### Property `UpdateTreasure`

| Field | Details |
|------|------|
| C++ type | `FUpdateTreasure` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FUpdateTreasure UpdateTreasure;` |

**Notes:**

> Delegate broadcast when the treasure pavilion is updated.

---

### Property `TreasureTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) float TreasureTime = 0.f;` |

**Notes:**

> 剩余自动补货时间

---

### Property `TreasureItems`

| Field | Details |
|------|------|
| C++ type | TArray<[FTreasureItemSubData](TreasureComponent__FTreasureItemSubData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FTreasureItemSubData> TreasureItems;` |

**Notes:**

> 珍宝阁商店现在存在的商品

---

### Property `TreasureCount`

| Field | Details |
|------|------|
| C++ type | TArray<[FTreasureStatisticsInfo](TreasureComponent__FTreasureStatisticsInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FTreasureStatisticsInfo> TreasureCount;` |

**Notes:**

> 珍宝阁当期兑换过的统计

---

### Property `TotalTreasureCount`

| Field | Details |
|------|------|
| C++ type | TMap<FName , [FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName , FTreasureStatisticsTotalInfo> TotalTreasureCount;` |

**Notes:**

> 珍宝阁总共兑换过的统计

---

### Property `Stalls`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FStallInfo](TreasureComponent__FStallInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<int32 , FStallInfo> Stalls;` |

**Notes:**

> 货架

---

### Property `Log`

| Field | Details |
|------|------|
| C++ type | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FLogData> Log;` |

**Notes:**

> List of treasure pavilion log entries.

---

### Property `TreasureResource`

| Field | Details |
|------|------|
| C++ type | TMap<int32 , [FSaveItemArr](TreasureComponent__FSaveItemArr.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<int32 , FSaveItemArr> TreasureResource;` |

**Notes:**

> 珍宝阁商店现在存在的商品(数据同上,加载或修改时初始化),key是货柜编号

---

## Blueprint-exposed functions

### Function `GetTreasureCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FTreasureStatisticsInfo](TreasureComponent__FTreasureStatisticsInfo.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FTreasureStatisticsInfo>& GetTreasureCount();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当期兑换信息

---

### Function `GetTotalTreasureCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<FName , [FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<FName , FTreasureStatisticsTotalInfo>& GetTotalTreasureCount();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有兑换信息

---

### Function `GetTreasureHouseLogLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FLogData>& GetTreasureHouseLogLog();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取见闻

---

### Function `GetStalls`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FStallInfo](TreasureComponent__FStallInfo.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StallIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FStallInfo& GetStalls(int32 StallIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取指定货栈数据

---

### Function `DiscipleBuyTreasure`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Human` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool DiscipleBuyTreasure(AEastRimWorldCharacter_Human* Human);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 弟子购买物品

---

### Function `GetHaveItemSubType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TSet<int32>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TypeIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TSet<int32> GetHaveItemSubType(int32 TypeIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取有商品的子类

---

### Function `GetCanRandomItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FTreasureItemSubData](TreasureComponent__FTreasureItemSubData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `TypeIndex` | `int32` |
| `SubTypeIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FTreasureItemSubData> GetCanRandomItem(AEastRimWorldCharacter* Character , int32 TypeIndex , int32 SubTypeIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取可随机的道具

---

### Function `TreasurePutOnSale`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ItemID` | `FName` |
| `Num` | `int32` |
| `StallIndex` | `int32` |
| `bIsMaticReplenishment` | `bool` |
| `false` | `bool bIsAuto =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TreasurePutOnSale(FName ItemID , int32 Num , int32 StallIndex , bool bIsMaticReplenishment , bool bIsAuto = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 上架商品

---

### Function `TreasurePutOffSale`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `FName` |
| `Stall` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TreasurePutOffSale(FName ID , int32 Stall);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 下架商品

---

### Function `GetStall`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TMap<int32 , [FStallInfo](TreasureComponent__FStallInfo.md)>& |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TMap<int32 , FStallInfo>& GetStall();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取货架

---

### Function `SetStallUnlockSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StallIndex` | `int32` |
| `UnlockStallSlot` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetStallUnlockSlot(int32 StallIndex , int32 UnlockStallSlot);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置（新增）货架解锁的栏位数量

---

### Function `GetCorrespondingItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FTreasureItemSubData](TreasureComponent__FTreasureItemSubData.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StallIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FTreasureItemSubData> GetCorrespondingItem(int32 StallIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取指定货架的商品

---

### Function `SetItemMaticReplenishment`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `IsMaticReplenishment` | `bool` |
| `StallIndex` | `int32` |
| `ItemName` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetItemMaticReplenishment(bool IsMaticReplenishment , int32 StallIndex , FName ItemName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置商品是否自动补货

---

### Function `SortByCurTreasureCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NeedSortArr` | UPARAM(ref) TArray<[FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SortByCurTreasureCount(UPARAM(ref) TArray<FTreasureStatisticsTotalInfo> & NeedSortArr , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按当期兑换量排序

---

### Function `SortByTotalTreasureCount`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NeedSortArr` | UPARAM(ref) TArray<[FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SortByTotalTreasureCount(UPARAM(ref) TArray<FTreasureStatisticsTotalInfo> & NeedSortArr , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按总兑换量排序

---

### Function `SortByRemainingInventory`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NeedSortArr` | UPARAM(ref) TArray<[FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SortByRemainingInventory(UPARAM(ref) TArray<FTreasureStatisticsTotalInfo> & NeedSortArr , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按剩余库存排序

---

### Function `SortByMonasticBelief`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NeedSortArr` | UPARAM(ref) TArray<[FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> & |
| `bIsAsc` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool SortByMonasticBelief(UPARAM(ref) TArray<FTreasureStatisticsTotalInfo> & NeedSortArr , bool bIsAsc);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 按宗门信仰排序

---

### Function `GetStallUnlockSlot`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StallIndex` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetStallUnlockSlot(int32 StallIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取货架的解锁槽位数量

---
