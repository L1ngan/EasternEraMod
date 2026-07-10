# `struct` `FRoomScoreDataArray`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 某一评分类型的分数段数据集合及其分数上限。

## 蓝图暴露变量

### 属性 `RoomScoreDatas`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FRoomScoreData](ERW_ConfigTypes__FRoomScoreData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FRoomScoreData> RoomScoreDatas;` |

**说明:**

> 分数段数据数组。

---

### 属性 `MaxScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float MaxScore = 0.f;` |

**说明:**

> 该评分类型的分数上限。

---
