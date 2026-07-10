# `struct` `FSeasonWeathersInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 季节天气配置表（参考 UDS_Weather_Settings）

## 蓝图暴露变量

### 属性 `Season`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EERWSeason](WorldStruct__EERWSeason.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EERWSeason Season = EERWSeason::Spring;` |

**说明:**

> 季节

---

### 属性 `WeatherType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EERWWeather](WorldStruct__EERWWeather.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EERWWeather WeatherType = EERWWeather::None;` |

**说明:**

> 天气配置

---

### 属性 `WeatherWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int WeatherWeight = 1;` |

**说明:**

> 天气权重（小于等于0，不参与随机）

---

### 属性 `LevelName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName LevelName = NAME_None;` |

**说明:**

> 对应地图名称（名称为None或""表示通用配置）

---

### 属性 `WeatherChangeTransitionTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float WeatherChangeTransitionTime = 20.f;` |

**说明:**

> 天气过度时间(秒)

---
