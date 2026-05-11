# `class` `URoomConfigAsset`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 房间配置资产

## 蓝图暴露变量

### 属性 `RoomScoreTypeData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ERoomScoreType,[FRoomScoreDataArray](ERW_ConfigTypes__FRoomScoreDataArray.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomScoreType,FRoomScoreDataArray> RoomScoreTypeData;` |

**源码注释:**

> 房间各类型评分分数段信息

---

### 属性 `RoomTemperatureScoreData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FRoomTemperatureScoreData](ERW_ConfigTypes__FRoomTemperatureScoreData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FRoomTemperatureScoreData> RoomTemperatureScoreData;` |

**源码注释:**

> 房间温度区间分数

---

### 属性 `RoomSizeTemperatureRates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FRoomSizeTemperatureRate](ERW_ConfigTypes__FRoomSizeTemperatureRate.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FRoomSizeTemperatureRate> RoomSizeTemperatureRates;` |

**源码注释:**

> 房间大小对应的温度系数(结算房间温度时乘以这个)

---
