# `struct` `FBuildObjectData`

**源码头文件:** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 建筑模型Instance的数据

## 蓝图暴露变量

### 属性 `Floor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 Floor { 0 };` |

**说明:**

> 建筑所在层

---

### 属性 `Index`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 Index { INDEX_NONE };` |

**说明:**

> 模型在ISM中的索引

---

### 属性 `VariantIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 VariantIndex { INDEX_NONE };` |

**说明:**

> 变体索引

---

### 属性 `ZIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 ZIndex { 0 };` |

**说明:**

> Z坐标偏移

---

### 属性 `Transform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FTransform Transform;` |

**说明:**

> 模型的Transform

---

### 属性 `BuildObjectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBuildObjectState](ERW_Enumerations__EBuildObjectState.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EBuildObjectState BuildObjectState { EBuildObjectState::NoResource };` |

**说明:**

> 建造物体状态

---

### 属性 `VisibleISMType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EISMType](ERW_Enumerations__EISMType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EISMType VisibleISMType { EISMType::Normal };` |

**说明:**

> 当前显示的ISM类型

---

### 属性 `EmbeddedWallType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmbeddedWallType](ERW_Enumerations__EEmbeddedWallType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EEmbeddedWallType EmbeddedWallType { EEmbeddedWallType::None };` |

**说明:**

> 嵌入式墙体类型

---

### 属性 `EmbeddedWallGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FGuid> EmbeddedWallGuids;` |

**说明:**

> 门或窗占据的嵌入式墙体的Guid

---

### 属性 `RoofPartType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ERoofPartType](ERW_Enumerations__ERoofPartType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) ERoofPartType RoofPartType { ERoofPartType::None };` |

**说明:**

> 屋顶部位类型

---

### 属性 `Visible`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool Visible { false };` |

**说明:**

> 是否显示

---

### 属性 `WallDisplayType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWallDisplayType](ERW_Enumerations__EWallDisplayType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EWallDisplayType WallDisplayType { EWallDisplayType::Normal };` |

**说明:**

> 墙显示类型

---

### 属性 `AssemblePartInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FAssemblePartInfo](ERW_CommonTypes__FAssemblePartInfo.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FAssemblePartInfo> AssemblePartInfos;` |

**说明:**

> 组装建筑部位信息

---
