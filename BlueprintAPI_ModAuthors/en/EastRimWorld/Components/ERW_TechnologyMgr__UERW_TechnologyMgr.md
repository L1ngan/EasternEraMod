# `class` `UERW_TechnologyMgr`

**Source header:** `EastRimWorld/Components/ERW_TechnologyMgr.h`

---

## Functional description (from header comments)

> Technology manager component handling research states of all tech items, item unlocking, tech purchasing and save/load

## Blueprint-exposed variables

### Property `MyAllTechnologysArray`

| Field | Details |
|------|------|
| C++ type | TArray<[FTechnologyItemStruct](../Struct/TechnologyStruct__FTechnologyItemStruct.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) TArray<FTechnologyItemStruct> MyAllTechnologysArray;` |

**Notes:**

> List of all my technology items

---

### Property `OnTechDevItemStateFinish`

| Field | Details |
|------|------|
| C++ type | `FOnTechDevItemChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTechDevItemChange OnTechDevItemStateFinish;` |

**Notes:**

> [自定义事件]项科技状态：->完成（删除研究中）

---

### Property `OnTechDevItemStateDeveloping`

| Field | Details |
|------|------|
| C++ type | `FOnTechDevItemChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTechDevItemChange OnTechDevItemStateDeveloping;` |

**Notes:**

> [自定义事件]项科技状态：>研究中（新增研究中）

---

### Property `OnTechDevItemStateDevelopingToUI`

| Field | Details |
|------|------|
| C++ type | `FOnTechDevItemChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTechDevItemChange OnTechDevItemStateDevelopingToUI;` |

**Notes:**

> Event broadcast to the UI when a tech item enters the developing state

---

### Property `OnTechDevItemStateUnlock`

| Field | Details |
|------|------|
| C++ type | `FOnTechDevItemChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTechDevItemChange OnTechDevItemStateUnlock;` |

**Notes:**

> [自定义事件]项科技状态：>可研究（解锁状态）

---

### Property `OnUnlockItemEvent`

| Field | Details |
|------|------|
| C++ type | `FOnUnlockId` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnUnlockId OnUnlockItemEvent;` |

**Notes:**

> [自定义事件]解锁物品

---

### Property `OnStopProduceTpointEvent`

| Field | Details |
|------|------|
| C++ type | `FOnStopProduceTpoint` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnStopProduceTpoint OnStopProduceTpointEvent;` |

**Notes:**

> [自定义事件]停止产出某种科技点（已废弃）//todo:需要解绑蓝图

---

### Property `OnTechListClickEvent`

| Field | Details |
|------|------|
| C++ type | `FOnTechCellClick` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTechCellClick OnTechListClickEvent;` |

**Notes:**

> [自定义事件]科技列表某个科技被点击了

---

## Blueprint-exposed functions

### Function `AddWorkloadFromBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TpType` | [ETechPointType](../Struct/TechnologyStruct__ETechPointType.md) |
| `Value` | `int32` |
| `BuildingTransform` | `FTransform` |
| `0` | `float BuildingRadius =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddWorkloadFromBuilding(ETechPointType TpType, int32 Value, FTransform BuildingTransform, float BuildingRadius = 0){};`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Converts added workload into tech points from a building; deprecated with an empty implementation, blueprint bindings pending removal

---

### Function `AddWorkload`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TpType` | [ETechPointType](../Struct/TechnologyStruct__ETechPointType.md) |
| `Value` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddWorkload(ETechPointType TpType,int32 Value){};`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 增加工作量（已废弃）//todo:需要解绑蓝图

---

### Function `GetCurTechPointSchedule`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Type` | [ETechPointType](../Struct/TechnologyStruct__ETechPointType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float GetCurTechPointSchedule(ETechPointType Type){return 0.f;};`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 获取当前科技点数进度（已废弃）//todo:需要解绑蓝图

---

### Function `GetFirstCanDevelopTech`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FName` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FName GetFirstCanDevelopTech(){return FName();};`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 获取第一个可以研究的科技

---

### Function `CheckSeachTech`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechId` | `FName` |
| `SearchType` | `FName` |
| `SearchWord` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckSeachTech(FName TechId,FName SearchType,FText SearchWord);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 查询是否满足搜索条件

---

### Function `HaveSeachWordTechConfig`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechId` | `FName` |
| `SearchWord` | `FText` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HaveSeachWordTechConfig(FName TechId, FText SearchWord);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 查询是否包含搜索词

---

### Function `HaveNextTech`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool HaveNextTech(FName TechId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 该科技是否有下一个科技

---

### Function `GetAllTechnologyItemStructs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FTechnologyItemStruct](../Struct/TechnologyStruct__FTechnologyItemStruct.md)> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FTechnologyItemStruct> GetAllTechnologyItemStructs(){return MyAllTechnologysArray;};`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 返回所有科技的研究状态

---

### Function `ClickLeftTechItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClickLeftTechItem(FName TechId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 左边列表点击了某哦个科技

---

### Function `CheckTechIsFinished`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckTechIsFinished(FName TechId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查科技是否解锁

---

### Function `IsShowTechBuyButton`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsShowTechBuyButton(FName TechId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 是否显示科技购买按钮

---

### Function `CheckCanBuyTech`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckCanBuyTech(FName TechId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查是否可以购买科技

---

### Function `BuyTech`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TechId` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool BuyTech(FName TechId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 购买科技

---

### Function `checkTechIsAllUnlock`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool checkTechIsAllUnlock();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 判断科技是否全部解锁

---
