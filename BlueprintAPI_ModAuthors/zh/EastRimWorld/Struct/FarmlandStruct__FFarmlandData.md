# `struct` `FFarmlandData`

**源码头文件:** `EastRimWorld/Struct/FarmlandStruct.h`

---

## 功能说明（来自头文件注释）

> Farmland Data 数据结构。

## 蓝图暴露变量

### 属性 `GridPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGridPosition](../ERW_CommonTypes__FGridPosition.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FGridPosition GridPosition;` |

**说明:**

> Grid Position 字段。

---

### 属性 `bPlanted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPlanted;` |

**说明:**

> 是否创建了种植goap

---

### 属性 `bAlreadyPlanted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlreadyPlanted;` |

**说明:**

> 是否完成了种植

---

### 属性 `LandEdgeType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LandEdgeType;` |

**说明:**

> 农田边缘淡化参数

---

### 属性 `LandCornerType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LandCornerType;` |

**说明:**

> 农田内角淡化参数

---
