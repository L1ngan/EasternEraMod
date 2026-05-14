# `struct` `FBuildObjectSaveData`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 建筑存档数据

## 蓝图暴露变量

### 属性 `ObjectID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FName ObjectID;` |

**源码注释:**

> 物体的ID

---

### 属性 `SGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid SGUID = FGuid();` |

---

### 属性 `SaviorDestroyed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool SaviorDestroyed = false;` |

---

### 属性 `BuildingData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EBuildingDataType , FInstancedStruct>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EBuildingDataType , FInstancedStruct> BuildingData;` |

**源码注释:**

> 建筑特有数据
> TMap<建筑数据类型 , 数据结构>

---

### 属性 `ISMSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBuildObjectData](../ERW_CommonTypes__FBuildObjectData.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FBuildObjectData ISMSaveData;` |

**源码注释:**

> 建筑在ISM组件中的存档数据

---

### 属性 `IsInMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool IsInMap { false };` |

**源码注释:**

> 是否放置在地图中

---

### 属性 `IsDestroyed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool IsDestroyed { false };` |

**源码注释:**

> 是否销毁

---

### 属性 `bBuildComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool bBuildComplete = false;` |

**源码注释:**

> 是否建造完成

---

### 属性 `SlotHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSmartObjectSlotHandle` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FSmartObjectSlotHandle SlotHandle;` |

**源码注释:**

> 选中的智能对象插槽

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECommonButtonType,bool>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<ECommonButtonType,bool> ButtonOperationState;` |

**源码注释:**

> 相关按钮的状态 是否选中

---

### 属性 `MyTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGenericTeamId MyTeamID;` |

**源码注释:**

> 建筑物TeamID

---

### 属性 `BuildingRunState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBuildingRunState` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EBuildingRunState BuildingRunState = EBuildingRunState::Stop;` |

**源码注释:**

> 建筑物状态

---

### 属性 `BuildingEnableState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBuildingEnableState` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EBuildingEnableState BuildingEnableState = EBuildingEnableState::Enable;` |

**源码注释:**

> 建筑物的启用状态

---

### 属性 `CurDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) float CurDurability = 0.0f;` |

**源码注释:**

> 当前耐久度

---

### 属性 `bBuildingState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool bBuildingState = true;` |

**源码注释:**

> 建筑状态（开启或关闭）

---

### 属性 `AttackSummonsGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid AttackSummonsGuid;` |

**源码注释:**

> 附加到建筑物上的召唤物ID

---

### 属性 `AboutBuildingAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGoalAndAction](../GOAP/GOAP_Data__FGoalAndAction.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FGoalAndAction> AboutBuildingAction;` |

**源码注释:**

> 涉及建筑运行相关的Action

---

### 属性 `SuspendItemGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid , bool>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGuid , bool> SuspendItemGuids;` |

**源码注释:**

> 建筑占据的采集物的Guid
> TMap<采集物的Guid , 占位符>

---
