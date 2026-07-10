# `struct` `FDoorCollisionSaveData`

**源码头文件:** `EastRimWorld/Components/ERW_DoorCollisionComponent.h`

---

## 功能说明（来自头文件注释）

> 门的碰撞存档数据

## 蓝图暴露变量

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid Guid = FGuid();` |

**说明:**

> Guid

---

### 属性 `DoorState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EDoorState](../ERW_Enumerations__EDoorState.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EDoorState DoorState { EDoorState::Closed };` |

**说明:**

> 门的开关状态

---

### 属性 `OverlappingCharacterNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 OverlappingCharacterNum { 0 };` |

**说明:**

> 碰撞体碰到的角色数量

---

### 属性 `AnimPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float AnimPosition { 0.f };` |

**说明:**

> 门动画播放位置

---
