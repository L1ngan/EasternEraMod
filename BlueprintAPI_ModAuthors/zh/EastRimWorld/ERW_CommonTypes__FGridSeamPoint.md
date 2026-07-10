# `struct` `FGridSeamPoint`

**源码头文件:** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 格子接缝点数据

## 蓝图暴露变量

### 属性 `X`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 X { 0 };` |

**说明:**

> X轴坐标

---

### 属性 `Y`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) int32 Y { 0 };` |

**说明:**

> Y轴位置

---

### 属性 `WorldLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FVectorData](ERW_CommonTypes__FVectorData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FVectorData WorldLocation;` |

**说明:**

> 世界坐标位置

---
