# `struct` `FRoomLevel`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 房间等级结构

## 蓝图暴露变量

### 属性 `MinScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MinScore = 0;` |

**说明:**

> 分数范围

---

### 属性 `MaxScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MaxScore = 0;` |

**说明:**

> 分数范围

---

### 属性 `MinFiveElementScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MinFiveElementScore = 0;` |

**说明:**

> 五行需求最小值

---

### 属性 `MaxFiveElementScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MaxFiveElementScore = 0;` |

**说明:**

> 五行需求最大值

---

### 属性 `LevelName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText LevelName;` |

**说明:**

> 等级名称

---

### 属性 `BuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ERoomEffectAppendType](ERW_Enumerations__ERoomEffectAppendType.md),[FRoomBuffIds](ERW_ConfigTypes__FRoomBuffIds.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomEffectAppendType,FRoomBuffIds> BuffIDs;` |

**说明:**

> 附加buff

---

### 属性 `AddTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ERoomEffectAppendType](ERW_Enumerations__ERoomEffectAppendType.md),FGameplayTagContainer> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomEffectAppendType,FGameplayTagContainer> AddTags;` |

**说明:**

> 附加tag

---

### 属性 `RoomPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float RoomPoints = 100.0f;` |

**说明:**

> 房间等级对应财富点数

---
