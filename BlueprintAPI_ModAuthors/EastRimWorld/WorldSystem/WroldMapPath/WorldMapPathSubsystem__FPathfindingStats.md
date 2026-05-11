# `struct` `FPathfindingStats`

**源码头文件：** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapPathSubsystem.h`

---

## 功能说明（来自头文件注释）

> 性能统计

## 蓝图暴露变量

### 属性 `AverageFindTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0")) float AverageFindTime;` |

**源码注释：**

> 路径查找时间

---

### 属性 `MaxFindTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0")) float MaxFindTime;` |

---

### 属性 `CacheHitRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0.0", ClampMax = "1.0")) float CacheHitRate;` |

**源码注释：**

> 缓存命中率

---

### 属性 `TotalPathRequests`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0")) int32 TotalPathRequests;` |

**源码注释：**

> 路径查找次数

---

### 属性 `SuccessfulPaths`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, meta = (ClampMin = "0")) int32 SuccessfulPaths;` |

---
