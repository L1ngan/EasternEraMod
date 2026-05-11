# `struct` `FModDataBase`

**源码头文件:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## 功能说明（来自头文件注释）

> Mod数据表基类

## 蓝图暴露变量

### 属性 `TemplateID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName TemplateID;` |

**源码注释:**

> 模板id，用于原表中没有的条目时获取此模板来增加新的数据

---

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ID;` |

**源码注释:**

> 此条数据的id 必须与行命名相同

---
