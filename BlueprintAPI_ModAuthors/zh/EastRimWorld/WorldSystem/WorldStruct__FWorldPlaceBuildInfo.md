# `struct` `FWorldPlaceBuildInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> World Place Build Info 数据结构。

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName ID;` |

**说明:**

> 表ID

---

### 属性 `RunState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldPlaceBuildRunState](WorldStruct__EWorldPlaceBuildRunState.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EWorldPlaceBuildRunState RunState = EWorldPlaceBuildRunState::Normal;` |

**说明:**

> 运行状态

---

### 属性 `BuildLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 BuildLevel = 1;` |

**说明:**

> 当前等级

---

### 属性 `RemainBuildTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float RemainBuildTime = 999.f;` |

**说明:**

> 剩余建成时间

---
