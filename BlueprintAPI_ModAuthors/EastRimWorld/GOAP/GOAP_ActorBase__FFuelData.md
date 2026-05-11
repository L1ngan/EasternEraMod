# `struct` `FFuelData`

**源码头文件：** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## 功能说明（来自头文件注释）

> 燃料相关数据

## 蓝图暴露变量

### 属性 `CurFuelValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) float CurFuelValue = 0.f;` |

**源码注释：**

> 当前的燃料储量

---

### 属性 `bHaveFuel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) bool bHaveFuel = true;` |

**源码注释：**

> 是否有燃料

---

### 属性 `bNeedCreateAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) bool bNeedCreateAction = true;` |

**源码注释：**

> 是否需要创建添加燃料得GOAP，第一次创建，只有当移除GOAP得时候才再次为true

---

### 属性 `bNeedAbortPlan`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere,BlueprintReadOnly) bool bNeedAbortPlan = true;` |

**源码注释：**

> 是否需要打断一次当前建筑需要燃料才能执行的GOAP，第一次允许，后续只有当添加燃料的时候才为true

---

### 属性 `bAutoAddFuel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) bool bAutoAddFuel = true;` |

**源码注释：**

> 燃料低于20%时是否自动为其添加燃料

---
