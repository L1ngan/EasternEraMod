# `struct` `FTaskCategoryDetail`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 任务类别信息

## 蓝图暴露变量

### 属性 `TaskCategory`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETaskCategory](CommonTaskStruct__ETaskCategory.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ETaskCategory TaskCategory = ETaskCategory::None;` |

**说明:**

> 任务类型枚举

---

### 属性 `Title`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText Title;` |

**说明:**

> 任务名称

---

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText Desc;` |

**说明:**

> 任务说明

---
