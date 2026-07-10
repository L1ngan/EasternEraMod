# `struct` `FMoveItemRouteLeg`

**源码头文件:** `EastRimWorld/UI/ERW_CurveRoadFunctionLibrary.h`

---

## 功能说明（来自头文件注释）

> moveitem 移动路线的一段缓存:对应一条 WBP_CurveRoad 的 城A→城B 子路由(Road 为空时走 PosA→PosB 直线兜底)

## 蓝图暴露变量

### 属性 `Road`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UERW_CurveRoadWidget](ERW_CurveRoadWidget__UERW_CurveRoadWidget.md)> |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") TObjectPtr<UERW_CurveRoadWidget> Road = nullptr;` |

**说明:**

> Road 字段。

---

### 属性 `RoadOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FVector2D RoadOffset = FVector2D::ZeroVector;` |

**说明:**

> 这条路控件在其父画布(CanvasPanel_127)里的位置偏移;路内部坐标 + 此偏移 = 容器坐标

---

### 属性 `CityA`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FName CityA;` |

**说明:**

> City A 字段。

---

### 属性 `CityB`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FName CityB;` |

**说明:**

> City B 字段。

---

### 属性 `PosA`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FVector2D PosA = FVector2D::ZeroVector;` |

**说明:**

> Pos A 字段。

---

### 属性 `PosB`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") FVector2D PosB = FVector2D::ZeroVector;` |

**说明:**

> Pos B 字段。

---

### 属性 `LegLen`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") float LegLen = 0.f;` |

**说明:**

> Leg Len 字段。

---

### 属性 `CumStart`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "CurveRoad") float CumStart = 0.f;` |

**说明:**

> Cum Start 字段。

---
