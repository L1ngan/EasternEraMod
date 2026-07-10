# `struct` `FRoomTemperatureScoreData`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 房间温度区间对应分数的配置数据。

## 蓝图暴露变量

### 属性 `MinTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float MinTemperature = 0.f;` |

**说明:**

> 温度区间下限。

---

### 属性 `MaxTemperature`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float MaxTemperature = 0.f;` |

**说明:**

> 温度区间上限。

---

### 属性 `Score`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float Score = 0.f;` |

**说明:**

> 该温度区间对应的分数。

---
