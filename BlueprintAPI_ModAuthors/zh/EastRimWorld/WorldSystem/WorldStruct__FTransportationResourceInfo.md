# `struct` `FTransportationResourceInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 交通工具信息

## 蓝图暴露变量

### 属性 `BasicConsumption`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 BasicConsumption = 0;` |

**说明:**

> 基础消耗(选择该交通工具的一次性固定消耗)

---

### 属性 `StageConsumption`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float StageConsumption = 0.f;` |

**说明:**

> 每小时消耗(乘以往返小时数;支持小数,最终产出向上取整)

---
