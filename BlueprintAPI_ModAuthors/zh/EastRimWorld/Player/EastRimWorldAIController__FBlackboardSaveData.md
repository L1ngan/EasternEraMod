# `struct` `FBlackboardSaveData`

**源码头文件:** `EastRimWorld/Player/EastRimWorldAIController.h`

---

## 功能说明（来自头文件注释）

> 黑板存档数据

## 蓝图暴露变量

### 属性 `IsDataValid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool IsDataValid { false };` |

**说明:**

> 存档数据是否有效

---

### 属性 `MoveGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FVectorData](../ERW_CommonTypes__FVectorData.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FVectorData MoveGoal;` |

**说明:**

> 移动目标位置

---

### 属性 `GoalID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FName GoalID;` |

**说明:**

> GOAP目标ID

---

### 属性 `ActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FName ActionID;` |

**说明:**

> GOAP行为ID

---

### 属性 `ItemID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FName ItemID;` |

**说明:**

> 物品ID

---

### 属性 `ItemNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 ItemNum { 0 };` |

**说明:**

> 物品数量

---

### 属性 `TargetActorInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FTargetActorInfo](../ERW_CommonTypes__FTargetActorInfo.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FTargetActorInfo TargetActorInfo;` |

**说明:**

> 目标Actor的信息

---

### 属性 `ItemGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid ItemGuid = FGuid();` |

**说明:**

> InventoryItemInstance的Guid

---

### 属性 `BranchingIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 BranchingIndex = -1;` |

**说明:**

> 战斗中的路径分支

---

### 属性 `SlotIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 SlotIndex = -1;` |

**说明:**

> 对应的slotIndex

---

### 属性 `CharacterBehaviorState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterBehaviorState](../Struct/CommonEnum__ECharacterBehaviorState.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) ECharacterBehaviorState CharacterBehaviorState = ECharacterBehaviorState::None;` |

**说明:**

> 角色当前状态

---

### 属性 `BehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FSoftObjectPath BehaviorTree;` |

**说明:**

> 角色当前是用的行为树

---
