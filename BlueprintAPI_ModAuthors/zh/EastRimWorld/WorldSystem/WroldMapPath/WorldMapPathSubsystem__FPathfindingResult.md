# `struct` `FPathfindingResult`

**源码头文件:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

---

## 功能说明（来自头文件注释）

> 路径查找结果

## 蓝图暴露变量

### 属性 `Path`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FVector>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FVector> Path;` |

---

### 属性 `PathLength`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0")) float PathLength;` |

---

### 属性 `Error`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EPathfindingError` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EPathfindingError Error;` |

---

### 属性 `SearchTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0")) float SearchTime;` |

---

### 属性 `NodesExplored`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0")) int32 NodesExplored;` |

---
