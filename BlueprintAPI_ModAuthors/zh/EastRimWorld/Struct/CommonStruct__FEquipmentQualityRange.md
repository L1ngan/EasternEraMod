# `struct` `FEquipmentQualityRange`

**源码头文件:** `EastRimWorld/Struct/CommonStruct.h`

---

## 功能说明（来自头文件注释）

> 装备的品质区间

## 蓝图暴露变量

### 属性 `MinQualityValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float MinQualityValue = 0.f;` |

**说明:**

> 最小品质值 都是包含

---

### 属性 `MaxQualityValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") float MaxQualityValue = 0.f;` |

**说明:**

> 最大品质值 包含

---

### 属性 `SubAttributesNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int SubAttributesNumber = 1;` |

**说明:**

> 副属性的数量

---

### 属性 `AbilityNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") int AbilityNumber = 1;` |

**说明:**

> 技能的数量

---

### 属性 `Quality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemQuality` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EItemQuality Quality = EItemQuality::None;` |

**说明:**

> 此区间属于什么品质

---

### 属性 `GenerateEquipmentID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> GenerateEquipmentID;` |

**说明:**

> 装备的ID（关联DT_GenerateEquipmentData）

---
