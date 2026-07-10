# `struct` `FApprenticeshipRelationEntry`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 详情-单项关系变化(门派 Guid + 名称 + Delta)

## 蓝图暴露变量

### 属性 `ForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FGuid ForceGuid;` |

**说明:**

> Force Guid 字段。

---

### 属性 `ForceDisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") FText ForceDisplayName;` |

**说明:**

> Force Display Name 字段。

---

### 属性 `Delta`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Apprenticeship|Detail" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Apprenticeship|Detail") float Delta = 0.f;` |

**说明:**

> Delta 字段。

---
