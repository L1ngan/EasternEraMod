# `struct` `FPresetData`

**源码头文件:** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 预设建筑数据

## 蓝图暴露变量

### 属性 `Transform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FTransform Transform;` |

**源码注释:**

> 相对坐标

---

### 属性 `EmbeddedWallType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EEmbeddedWallType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EEmbeddedWallType EmbeddedWallType { EEmbeddedWallType::None };` |

**源码注释:**

> 嵌入式墙体类型

---

### 属性 `RoofPartType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ERoofPartType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) ERoofPartType RoofPartType { ERoofPartType::None };` |

**源码注释:**

> 屋顶部位类型

---

### 属性 `IsWide`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool IsWide { false };` |

**源码注释:**

> 是否是宽的门或窗

---

### 属性 `Actor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `AActor*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) AActor* Actor { nullptr };` |

**源码注释:**

> 对应的建筑

---
