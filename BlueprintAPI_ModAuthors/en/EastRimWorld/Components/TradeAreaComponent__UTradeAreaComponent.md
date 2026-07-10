# `class` `UTradeAreaComponent`

**Source header:** `EastRimWorld/Components/TradeAreaComponent.h`

---

## Functional description (from header comments)

> Trade area component that creates transport-goods GOAP actions and manages needed goods and the sale price favorability rate

## Blueprint-exposed variables

### Property `TransportGoodsActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<FName,FGOAP_Action> TransportGoodsActions;` |

**Notes:**

> Map of transport-goods GOAP actions keyed by item ID

---

### Property `NeedGoods`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<FName,int32> NeedGoods;` |

**Notes:**

> Map of needed goods and quantities (item ID to count)

---

### Property `WaitGoodsQueue`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TMap<FName,int32> WaitGoodsQueue;` |

**Notes:**

> 等待创建的搬运

---

## Blueprint-exposed functions

### Function `CreateTransportAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGoodsInfos` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateTransportAction(const TMap<FName,FTravelerGoodsInfo>& InGoodsInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Creates transport-goods GOAP actions from the given goods info

---

### Function `AddTradeGoods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItems` | const TArray<[UInventoryItemInstance](../Inventory/InventoryItemInstance__UInventoryItemInstance.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddTradeGoods(const TArray<UInventoryItemInstance*>& InItems);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Adds the given item instances as trade goods

---

### Function `CancelTransportGoods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGoodsInfoIds` | `const TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelTransportGoods(const TArray<FName>& InGoodsInfoIds);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消搬运货物

---

### Function `PopTradeGoods`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InGoodsInfos` | const TMap<FName,[FTravelerGoodsInfo](../Struct/ItemStruct__FTravelerGoodsInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PopTradeGoods(const TMap<FName,FTravelerGoodsInfo>& InGoodsInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Removes trade goods according to the given goods info

---

### Function `GetSaleGoodsPriceFavorabilityRate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OtherForceID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static float GetSaleGoodsPriceFavorabilityRate(const FName& OtherForceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the favorability-based price rate for selling goods to the given force

---
