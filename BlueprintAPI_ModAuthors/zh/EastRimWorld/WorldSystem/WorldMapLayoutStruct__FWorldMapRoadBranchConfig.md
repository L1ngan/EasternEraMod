# `struct` `FWorldMapRoadBranchConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldMapLayoutStruct.h`

---

## 功能说明（来自头文件注释）

> 曲线路一条分支的配置：CityId + [岔路口] + 各红点(按序，末点 = 通向该城的连接点)，局部坐标。对应内部 FCurveRoadBranchData

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

### 属性 `Points`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FVector2D>` |
| 反射说明符 | BlueprintReadWrite, Category="CurveRoad" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurveRoad") TArray<FVector2D> Points;` |

**说明:**

> Points 字段。

---
