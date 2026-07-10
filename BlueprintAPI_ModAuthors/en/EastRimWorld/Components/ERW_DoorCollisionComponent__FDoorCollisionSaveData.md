# `struct` `FDoorCollisionSaveData`

**Source header:** `EastRimWorld/Components/ERW_DoorCollisionComponent.h`

---

## Functional description (from header comments)

> 门的碰撞存档数据

## Blueprint-exposed variables

### Property `Guid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid Guid = FGuid();` |

**Notes:**

> Guid

---

### Property `DoorState`

| Field | Details |
|------|------|
| C++ type | [EDoorState](../ERW_Enumerations__EDoorState.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) EDoorState DoorState { EDoorState::Closed };` |

**Notes:**

> 门的开关状态

---

### Property `OverlappingCharacterNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 OverlappingCharacterNum { 0 };` |

**Notes:**

> 碰撞体碰到的角色数量

---

### Property `AnimPosition`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) float AnimPosition { 0.f };` |

**Notes:**

> 门动画播放位置

---
