# `struct` `FEmbeddedWallInfo`

**源码头文件：** `EastRimWorld/Components/ERW_HISMManager.h`

---

## 功能说明（来自头文件注释）

> 嵌入式墙体在ISM中的信息

## 蓝图暴露变量

### 属性 `Wall`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) AGOAP_ActorBase* Wall { nullptr };` |

**源码注释：**

> 原有墙体Actor

---

### 属性 `Index`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 Index { INDEX_NONE };` |

**源码注释：**

> 嵌入式墙体模型在ISM中的索引

---

### 属性 `Transforms`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EISMType , FTransform>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<EISMType , FTransform> Transforms;` |

**源码注释：**

> 嵌入式墙体模型的Transform
> TMap<ISM类型 , Transform>

---

### 属性 `VisibleISMType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EISMType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) EISMType VisibleISMType { EISMType::Normal };` |

**源码注释：**

> 当前显示的ISM类型

---

### 属性 `Visible`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool Visible { false };` |

**源码注释：**

> 是否显示

---
