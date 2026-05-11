# `class` `AEasternEraTradeAreaActor`

**Source header:** `EastRimWorld/PostStation/EasternEraTradeAreaActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `StaticMeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

---

### Property `TransportGoodsActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,FGOAP_Action> TransportGoodsActions;` |

---

### Property `NeedGoods`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> NeedGoods;` |

---

### Property `WaitGoodsQueue`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> WaitGoodsQueue;` |

**Source comments:**

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

**Source comments:**

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

---

### Function `TestPutItemToTradeArea`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TestPutItemToTradeArea();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---
