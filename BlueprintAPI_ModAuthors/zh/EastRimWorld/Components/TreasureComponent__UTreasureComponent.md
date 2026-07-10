# `class` `UTreasureComponent`

**源码头文件:** `EastRimWorld/Components/TreasureComponent.h`

---

## 功能说明（来自头文件注释）

> 珍宝阁组件，管理珍宝阁商店的商品上下架、货架栏位、兑换统计、弟子购买与自动补货，并支持存档读档。

## 蓝图暴露变量

### 属性 `UpdateTreasure`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUpdateTreasure` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FUpdateTreasure UpdateTreasure;` |

**说明:**

> 更新珍宝阁委托，珍宝阁数据变化时广播。

---

### 属性 `TreasureTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) float TreasureTime = 0.f;` |

**说明:**

> 剩余自动补货时间

---

### 属性 `TreasureItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTreasureItemSubData](TreasureComponent__FTreasureItemSubData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FTreasureItemSubData> TreasureItems;` |

**说明:**

> 珍宝阁商店现在存在的商品

---

### 属性 `TreasureCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FTreasureStatisticsInfo](TreasureComponent__FTreasureStatisticsInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FTreasureStatisticsInfo> TreasureCount;` |

**说明:**

> 珍宝阁当期兑换过的统计

---

### 属性 `TotalTreasureCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName , FTreasureStatisticsTotalInfo> TotalTreasureCount;` |

**说明:**

> 珍宝阁总共兑换过的统计

---

### 属性 `Stalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FStallInfo](TreasureComponent__FStallInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<int32 , FStallInfo> Stalls;` |

**说明:**

> 货架

---

### 属性 `Log`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FLogData> Log;` |

**说明:**

> 珍宝阁见闻日志记录列表。

---

### 属性 `TreasureResource`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32 , [FSaveItemArr](TreasureComponent__FSaveItemArr.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<int32 , FSaveItemArr> TreasureResource;` |

**说明:**

> 珍宝阁商店现在存在的商品(数据同上,加载或修改时初始化),key是货柜编号

---

## 蓝图暴露函数

### 函数 `GetTreasureCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FTreasureStatisticsInfo](TreasureComponent__FTreasureStatisticsInfo.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FTreasureStatisticsInfo>& GetTreasureCount();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取当期兑换信息

---

### 函数 `GetTotalTreasureCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<FName , [FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<FName , FTreasureStatisticsTotalInfo>& GetTotalTreasureCount();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有兑换信息

---

### 函数 `GetTreasureHouseLogLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FLogData](../ERW_CommonTypes__FLogData.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FLogData>& GetTreasureHouseLogLog();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取见闻

---

### 函数 `GetStalls`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FStallInfo](TreasureComponent__FStallInfo.md)& |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StallIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FStallInfo& GetStalls(int32 StallIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定货栈数据

---

### 函数 `DiscipleBuyTreasure`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Human` | [AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool DiscipleBuyTreasure(AEastRimWorldCharacter_Human* Human);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 弟子购买物品

---

### 函数 `GetHaveItemSubType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TSet<int32>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TypeIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TSet<int32> GetHaveItemSubType(int32 TypeIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取有商品的子类

---

### 函数 `GetCanRandomItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FTreasureItemSubData](TreasureComponent__FTreasureItemSubData.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `TypeIndex` | `int32` |
| `SubTypeIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FTreasureItemSubData> GetCanRandomItem(AEastRimWorldCharacter* Character , int32 TypeIndex , int32 SubTypeIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取可随机的道具

---

### 函数 `TreasurePutOnSale`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ItemID` | `FName` |
| `Num` | `int32` |
| `StallIndex` | `int32` |
| `bIsMaticReplenishment` | `bool` |
| `false` | `bool bIsAuto =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool TreasurePutOnSale(FName ItemID , int32 Num , int32 StallIndex , bool bIsMaticReplenishment , bool bIsAuto = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 上架商品

---

### 函数 `TreasurePutOffSale`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `FName` |
| `Stall` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void TreasurePutOffSale(FName ID , int32 Stall);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 下架商品

---

### 函数 `GetStall`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TMap<int32 , [FStallInfo](TreasureComponent__FStallInfo.md)>& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<int32 , FStallInfo>& GetStall();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取货架

---

### 函数 `SetStallUnlockSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StallIndex` | `int32` |
| `UnlockStallSlot` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetStallUnlockSlot(int32 StallIndex , int32 UnlockStallSlot);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置（新增）货架解锁的栏位数量

---

### 函数 `GetCorrespondingItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FTreasureItemSubData](TreasureComponent__FTreasureItemSubData.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StallIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<FTreasureItemSubData> GetCorrespondingItem(int32 StallIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定货架的商品

---

### 函数 `SetItemMaticReplenishment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `IsMaticReplenishment` | `bool` |
| `StallIndex` | `int32` |
| `ItemName` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetItemMaticReplenishment(bool IsMaticReplenishment , int32 StallIndex , FName ItemName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置商品是否自动补货

---

### 函数 `SortByCurTreasureCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NeedSortArr` | UPARAM(ref) TArray<[FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SortByCurTreasureCount(UPARAM(ref) TArray<FTreasureStatisticsTotalInfo> & NeedSortArr , bool bIsAsc);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按当期兑换量排序

---

### 函数 `SortByTotalTreasureCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NeedSortArr` | UPARAM(ref) TArray<[FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SortByTotalTreasureCount(UPARAM(ref) TArray<FTreasureStatisticsTotalInfo> & NeedSortArr , bool bIsAsc);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按总兑换量排序

---

### 函数 `SortByRemainingInventory`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NeedSortArr` | UPARAM(ref) TArray<[FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SortByRemainingInventory(UPARAM(ref) TArray<FTreasureStatisticsTotalInfo> & NeedSortArr , bool bIsAsc);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按剩余库存排序

---

### 函数 `SortByMonasticBelief`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NeedSortArr` | UPARAM(ref) TArray<[FTreasureStatisticsTotalInfo](TreasureComponent__FTreasureStatisticsTotalInfo.md)> & |
| `bIsAsc` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool SortByMonasticBelief(UPARAM(ref) TArray<FTreasureStatisticsTotalInfo> & NeedSortArr , bool bIsAsc);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按宗门信仰排序

---

### 函数 `GetStallUnlockSlot`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StallIndex` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) int32 GetStallUnlockSlot(int32 StallIndex);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取货架的解锁槽位数量

---
