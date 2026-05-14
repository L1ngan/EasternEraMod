# `struct` `FFillerSaveData`

**源码头文件:** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 填充模型存档数据

## 蓝图暴露变量

### 属性 `GridPos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGridPosition GridPos;` |

**源码注释:**

> 格子坐标

---

### 属性 `LayerIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 LayerIndex { INDEX_NONE };` |

**源码注释:**

> 所在层的索引

---

### 属性 `PartType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EPositionPartType` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EPositionPartType PartType { EPositionPartType::COUNT };` |

**源码注释:**

> 九宫格部分类型

---

### 属性 `AutoTileType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAutoTileType` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EAutoTileType AutoTileType { EAutoTileType::Flat };` |

**源码注释:**

> 九宫格类型

---

### 属性 `Transform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FTransform Transform;` |

**源码注释:**

> 填充模型的Transform

---
