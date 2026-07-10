# `struct` `FEmergencePressure`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> 单维压力 — 一个压力维度的评估结果。
> Value 归一化到 [0,1]; RankedObjects 是"令该维度压力最高的对象组"(策划案 §2 "指向对象", 按压力降序前若干位),
> 事件落地/结算直接从快照取对象(单对象维取 ObjectA, 成对维取 A+B; 建议在前几位里随机, 避免连续事件总取同一对象)。

## 蓝图暴露变量

### 属性 `Dim`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmergencePressureDim](EmergenceTypes__EEmergencePressureDim.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Pressure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") EEmergencePressureDim Dim = EEmergencePressureDim::Dullness;` |

**说明:**

> 维度

---

### 属性 `Value`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Pressure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") float Value = 0.f;` |

**说明:**

> 归一化压力值 [0,1]

---

### 属性 `RankedObjects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FEmergencePressureObject](EmergenceTypes__FEmergencePressureObject.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Pressure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") TArray<FEmergencePressureObject> RankedObjects;` |

**说明:**

> 该维压力指向的对象组(按压力降序, <=5): 单对象维每条只填 ObjectA; 成对维(结仇)每条 A+B 成对。[0]=压力最高者

---

### 属性 `TopObjectType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEmergenceSlotType](EmergenceTypes__EEmergenceSlotType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Pressure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") EEmergenceSlotType TopObjectType = EEmergenceSlotType::None;` |

**说明:**

> 对象组的世界对象类型(事件取对象时判断语义: 势力/地点/角色)

---

### 属性 `Descriptor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Emergence|Pressure" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Emergence|Pressure") FName Descriptor;` |

**说明:**

> 灾种/区域标签等附带信息(灾害维度填灾种 ID, 沉寂维度填区域 ID)

---
