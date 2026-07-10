# `struct` `FModEquipmentAttribute`

**源码头文件:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## 功能说明（来自头文件注释）

> Mod 装备属性结构

## 蓝图暴露变量

### 属性 `AttributeInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FDataTableRowHandle` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Attribute" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute") FDataTableRowHandle AttributeInfo;` |

**说明:**

> 属性信息

---

### 属性 `AttributeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Attribute" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute") float AttributeValue = 0.f;` |

**说明:**

> 属性值

---

### 属性 `Comment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FString Comment;` |

**说明:**

> Comment

---
