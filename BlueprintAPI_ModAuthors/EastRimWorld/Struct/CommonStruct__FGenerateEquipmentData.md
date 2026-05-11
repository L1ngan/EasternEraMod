# `struct` `FGenerateEquipmentData`

**源码头文件：** `EastRimWorld/Struct/CommonStruct.h`

---

## 功能说明（来自头文件注释）

> 生成装备的数据

## 蓝图暴露变量

### 属性 `EquipmentType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EEquipmentType` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EEquipmentType EquipmentType = EEquipmentType::None;` |

**源码注释：**

> 此池子产出的装备类型

---

### 属性 `EquipmentName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText EquipmentName;` |

**源码注释：**

> 装备名字

---

### 属性 `EquipmentID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") FName EquipmentID;` |

**源码注释：**

> 对应的装备ID 根据具体的装备类型 查询相应的装备表

---

### 属性 `MainAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> MainAttributes;` |

**源码注释：**

> 此装备的主属性(EquipmentAttribute表）

---

### 属性 `SubAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> SubAttributes;` |

**源码注释：**

> 此装备的次属性(EquipmentAttribute表）

---

### 属性 `EquipmentAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base") TArray<FName> EquipmentAbility;` |

**源码注释：**

> 此装备自带的技能

---
