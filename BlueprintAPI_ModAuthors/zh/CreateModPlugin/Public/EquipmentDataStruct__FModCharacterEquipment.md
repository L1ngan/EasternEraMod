# `struct` `FModCharacterEquipment`

**源码头文件:** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## 功能说明（来自头文件注释）

> 角色装备

## 蓝图暴露变量

### 属性 `EquipmentType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModEquipmentType](EquipmentDataStruct__EModEquipmentType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") EModEquipmentType EquipmentType = EModEquipmentType::None;` |

**说明:**

> 装备的类型

---

### 属性 `MainAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") TArray<FName> MainAttributes;` |

**说明:**

> 此装备的主属性(EquipmentAttribute表）

---

### 属性 `SubAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") TArray<FName> SubAttributes;` |

**说明:**

> 此装备的次属性(EquipmentAttribute表）

---

### 属性 `EquipmentAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Base") TArray<FName> EquipmentAbility;` |

**说明:**

> 此装备自带的技能

---

### 属性 `RefitDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Puppet Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Puppet Equipment") float RefitDurability = 500.f;` |

**说明:**

> 傀儡改装耐久度

---
