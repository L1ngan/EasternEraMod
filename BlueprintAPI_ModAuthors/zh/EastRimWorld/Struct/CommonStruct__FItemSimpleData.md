# `struct` `FItemSimpleData`

**源码头文件:** `EastRimWorld/Struct/CommonStruct.h`

---

## 功能说明（来自头文件注释）

> Item Simple Data 数据结构。

## 蓝图暴露变量

### 属性 `Id`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName Id;` |

**说明:**

> 物品id

---

### 属性 `Type`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGroundInventoryType Type;` |

**说明:**

> 物品类型

---

### 属性 `Num`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Num = 1;` |

**说明:**

> 物品数量

---

### 属性 `bRandomAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "Type == EGroundInventoryType::Equipment")) bool bRandomAttribute = false;` |

**说明:**

> 当为装备时是否随机属性 如果是则读取DT_EquipmentQualityRange表

---
