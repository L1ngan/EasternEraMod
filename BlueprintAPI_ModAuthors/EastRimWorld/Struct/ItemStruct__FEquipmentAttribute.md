# `struct` `FEquipmentAttribute`

**源码头文件：** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 装备属性

## 蓝图暴露变量

### 属性 `AttributeInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FDataTableRowHandle` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Attribute" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute",meta=(RowType = "/Script/EastRimWorld.CharacterAttributeInfo")) FDataTableRowHandle AttributeInfo;` |

**源码注释：**

> 属性信息

---

### 属性 `AttributeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Attribute" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute") float AttributeValue = 0.f;` |

**源码注释：**

> 属性值

---

### 属性 `ItemQuality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemQuality` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Attribute" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Attribute") EItemQuality ItemQuality = EItemQuality::None;` |

**源码注释：**

> 词条品质

---
