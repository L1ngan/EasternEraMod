# `struct` `FModCompatibilityIssue`

**源码头文件:** `EastRimWorld/Mod/ModInfo.h`

---

## 功能说明（来自头文件注释）

> 读档时发现的单个 Mod 兼容问题（供 UI 弹窗展示）

## 蓝图暴露变量

### 属性 `ModId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName ModId;` |

**说明:**

> 出现兼容问题的 Mod 唯一标识符

---

### 属性 `IssueType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModCompatIssueType](ModInfo__EModCompatIssueType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EModCompatIssueType IssueType = EModCompatIssueType::Missing;` |

**说明:**

> 兼容问题类型（缺失/未启用/版本不符）

---

### 属性 `SavedVersion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString SavedVersion;` |

**说明:**

> 存档时的版本

---

### 属性 `CurrentVersion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString CurrentVersion;` |

**说明:**

> 当前安装的版本（Missing 时为空）

---
