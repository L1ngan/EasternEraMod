# `struct` `FPillarSaveData`

**源码头文件:** `EastRimWorld/Components/ERW_HISMManager.h`

---

## 功能说明（来自头文件注释）

> 建筑柱子的存档数据

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FName ID;` |

**源码注释:**

> 墙的配置表ID

---

### 属性 `LayerIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 LayerIndex { INDEX_NONE };` |

**源码注释:**

> 模型所在层的索引

---

### 属性 `SeamPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGridSeamPoint SeamPoint;` |

**源码注释:**

> 所在接缝点

---

### 属性 `Transform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FTransform Transform;` |

**源码注释:**

> 模型的Transform

---

### 属性 `VisibleISMType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EISMType` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EISMType VisibleISMType { EISMType::Normal };` |

**源码注释:**

> 当前显示的ISM类型

---

### 属性 `BuildObjectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBuildObjectState` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EBuildObjectState BuildObjectState { EBuildObjectState::NoResource };` |

**源码注释:**

> 建造状态

---
