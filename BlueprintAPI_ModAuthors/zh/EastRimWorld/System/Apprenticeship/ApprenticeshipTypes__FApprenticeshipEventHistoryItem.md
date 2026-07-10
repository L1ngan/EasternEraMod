# `struct` `FApprenticeshipEventHistoryItem`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 详情-单条经历事件(事件名 + 触发时间)

## 蓝图暴露变量

### 属性 `EventID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FName EventID;` |

**说明:**

> Event ID 字段。

---

### 属性 `EventName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText EventName;` |

**说明:**

> Event Name 字段。

---

### 属性 `GameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") int32 GameDay = 0;` |

**说明:**

> Game Day 字段。

---

### 属性 `GameTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") float GameTime = 0.f;` |

**说明:**

> Game Time 字段。

---

### 属性 `CityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FName CityID;` |

**说明:**

> City ID 字段。

---
