# `class` `AEasternEraTradeAreaActor`

**Source header:** `EastRimWorld/PostStation/EasternEraTradeAreaActor.h`

---

## Functional description (from header comments)

> Trade area actor of the post station, managing goods transport GOAP actions and the required goods list.

## Blueprint-exposed variables

### Property `StaticMeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

**Notes:**

> Static mesh component of the trade area.

---

### Property `TransportGoodsActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,FGOAP_Action> TransportGoodsActions;` |

**Notes:**

> GOAP transport actions keyed by item ID (saved).

---

### Property `NeedGoods`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> NeedGoods;` |

**Notes:**

> Required goods list mapping item ID to count (saved).

---

### Property `WaitGoodsQueue`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> WaitGoodsQueue;` |

**Notes:**

> 等待创建的搬运

---

## Blueprint-exposed functions

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

> Returns the sale goods price rate based on favorability with the given force.

---
