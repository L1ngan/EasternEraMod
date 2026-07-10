# `struct` `FOrganAttackedShareConfig`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 器官收到伤害的分摊配置表

## 蓝图暴露变量

### 属性 `SharedOrganID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="OrganAttackedShareConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganAttackedShareConfig") FName SharedOrganID;` |

**说明:**

> 分摊伤害的部位ID

---

### 属性 `MinSharePercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="OrganAttackedShareConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganAttackedShareConfig") float MinSharePercent = 0.5f;` |

**说明:**

> 最小分摊伤害百分比

---

### 属性 `MaxSharePercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="OrganAttackedShareConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganAttackedShareConfig") float MaxSharePercent = 1.f;` |

**说明:**

> 最大分摊伤害百分比

---

### 属性 `ShareWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="OrganAttackedShareConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OrganAttackedShareConfig") int ShareWeight = 1;` |

**说明:**

> 分摊权重

---
