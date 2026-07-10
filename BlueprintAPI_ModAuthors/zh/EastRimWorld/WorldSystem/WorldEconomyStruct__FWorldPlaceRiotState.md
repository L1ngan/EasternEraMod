# `struct` `FWorldPlaceRiotState`

**源码头文件:** `EastRimWorld/WorldSystem/WorldEconomyStruct.h`

---

## 功能说明（来自头文件注释）

> 据点暴乱运行时状态

## 蓝图暴露变量

### 属性 `bInRiot`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) bool bInRiot = false;` |

**说明:**

> 是否处于暴乱中

---

### 属性 `StartGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float StartGameTime = 0.f;` |

**说明:**

> 暴乱开始时的 GameTime(秒)

---

### 属性 `EndGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float EndGameTime = 0.f;` |

**说明:**

> 暴乱预定结束的 GameTime(秒)

---

### 属性 `LastTickGameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame) float LastTickGameTime = 0.f;` |

**说明:**

> 上一次扣繁荣/扣人口/扣治安触发的 GameTime

---
