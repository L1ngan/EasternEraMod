# `struct` `FEmergenceEventBridgeRecord`

**Source header:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## Functional description (from header comments)

> 事件桥统一存档记录。Director 持 TArray 入档; 读档时按 BridgeType 动态重建对应派生桥。
> 各事件的状态结构体经 FInstancedStruct 多态存储(Savior 支持), 按 BridgeType 决定其内实际类型。

## Blueprint-exposed variables

### Property `BridgeType`

| Field | Details |
|------|------|
| C++ type | [EEmergentBridgeType](EmergenceTypes__EEmergentBridgeType.md) |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Bridge" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Bridge") EEmergentBridgeType BridgeType = EEmergentBridgeType::None;` |

**Notes:**

> Bridge Type field.

---

### Property `InstanceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Bridge" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Bridge") FGuid InstanceGuid;` |

**Notes:**

> 桥实例稳定标识(UI / 存档据此定位; 跨存档不变)

---

### Property `SourceEventID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Bridge" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Bridge") FName SourceEventID;` |

**Notes:**

> 来源事件行 ID(回查事件表)

---

### Property `State`

| Field | Details |
|------|------|
| C++ type | `FInstancedStruct` |
| Reflection specifiers | BlueprintReadOnly, Category="Emergence|Bridge" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Emergence|Bridge") FInstancedStruct State;` |

**Notes:**

> 派生桥自己的状态结构体(FEmergencePlaceQuestState/IronVein/RivalRaid/SwordMeet 之一)

---
