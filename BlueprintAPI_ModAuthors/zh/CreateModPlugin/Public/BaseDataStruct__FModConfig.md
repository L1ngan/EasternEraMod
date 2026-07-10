# `struct` `FModConfig`

**源码头文件:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## 功能说明（来自头文件注释）

> Mod数据表

## 蓝图暴露变量

### 属性 `ModConfigType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModConfigType](BaseDataStruct__EModConfigType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EModConfigType ModConfigType = EModConfigType::None;` |

**说明:**

> 配置类型

---

### 属性 `DataTable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UDataTable>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UDataTable> DataTable;` |

**说明:**

> 配置表

---

### 属性 `StructName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FString StructName;` |

**说明:**

> 结构名称

---

### 属性 `bOverrideData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool bOverrideData = false;` |

**说明:**

> 勾选后Map或Array则直接覆盖原来的数据，不勾选则在原有的基础增加。其他类型的属性如果是默认值则不生效

---
