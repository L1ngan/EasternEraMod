# `struct` `FTradeAreaSaveData`

**Source header:** `EastRimWorld/Components/TradeAreaComponent.h`

---

## Functional description (from header comments)

> Trade area save data: transport goods actions, needed goods and the pending transport queue

## Blueprint-exposed variables

### Property `TransportGoodsActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,FGOAP_Action> TransportGoodsActions;` |

**Notes:**

> Map of transport-goods GOAP actions keyed by item ID

---

### Property `NeedGoods`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FName,int32> NeedGoods;` |

**Notes:**

> Map of needed goods and quantities (item ID to count)

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
