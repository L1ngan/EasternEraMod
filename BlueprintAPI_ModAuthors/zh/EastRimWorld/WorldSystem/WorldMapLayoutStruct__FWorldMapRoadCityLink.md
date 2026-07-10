# `struct` `FWorldMapRoadCityLink`

**源码头文件:** `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

---

## 功能说明（来自头文件注释）

> 曲线路单条连接：CityId + 在路面(控件)局部空间的连接点。对应 UERW_CurveRoadWidget 的 FCurveRoadCity

## 蓝图暴露变量

### 属性 `CityId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FName CityId;` |

**说明:**

> City Id 字段。

---

### 属性 `Point`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") FVector2D Point = FVector2D::ZeroVector;` |

**说明:**

> Point 字段。

---
