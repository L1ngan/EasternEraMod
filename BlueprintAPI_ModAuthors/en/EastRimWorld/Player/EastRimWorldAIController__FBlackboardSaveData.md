# `struct` `FBlackboardSaveData`

**Source header:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## Functional description (from header comments)

> 黑板存档数据

## Blueprint-exposed variables

### Property `IsDataValid`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsDataValid { false };` |

**Notes:**

> 存档数据是否有效

---

### Property `MoveGoal`

| Field | Details |
|------|------|
| C++ type | [FVectorData](../ERW_CommonTypes__FVectorData.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FVectorData MoveGoal;` |

**Notes:**

> 移动目标位置

---

### Property `GoalID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FName GoalID;` |

**Notes:**

> GOAP目标ID

---

### Property `ActionID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FName ActionID;` |

**Notes:**

> GOAP行为ID

---

### Property `ItemID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FName ItemID;` |

**Notes:**

> 物品ID

---

### Property `ItemNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 ItemNum { 0 };` |

**Notes:**

> 物品数量

---

### Property `TargetActorInfo`

| Field | Details |
|------|------|
| C++ type | [FTargetActorInfo](../ERW_CommonTypes__FTargetActorInfo.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FTargetActorInfo TargetActorInfo;` |

**Notes:**

> 目标Actor的信息

---

### Property `ItemGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FGuid ItemGuid = FGuid();` |

**Notes:**

> InventoryItemInstance的Guid

---

### Property `BranchingIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 BranchingIndex = -1;` |

**Notes:**

> 战斗中的路径分支

---

### Property `SlotIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 SlotIndex = -1;` |

**Notes:**

> 对应的slotIndex

---

### Property `CharacterBehaviorState`

| Field | Details |
|------|------|
| C++ type | [ECharacterBehaviorState](../Struct/CommonEnum__ECharacterBehaviorState.md) |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) ECharacterBehaviorState CharacterBehaviorState = ECharacterBehaviorState::None;` |

**Notes:**

> 角色当前状态

---

### Property `BehaviorTree`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) FSoftObjectPath BehaviorTree;` |

**Notes:**

> 角色当前是用的行为树

---
