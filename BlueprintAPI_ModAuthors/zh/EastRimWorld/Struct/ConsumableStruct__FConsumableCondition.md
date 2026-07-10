# `struct` `FConsumableCondition`

**源码头文件:** `EastRimWorld/Struct/ConsumableStruct.h`

---

## 功能说明（来自头文件注释）

> 耗材使用条件（独立配置表 耗材表中按ID引用）

## 蓝图暴露变量

### 属性 `ConditionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EConsumableConditionType](ConsumableStruct__EConsumableConditionType.md) |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableCondition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableCondition") EConsumableConditionType ConditionType = EConsumableConditionType::None;` |

**说明:**

> 条件类型

---

### 属性 `MartialArtsType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EMartialArtsAttributeClassification](CommonEnum__EMartialArtsAttributeClassification.md) |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableCondition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableCondition", meta=(EditConditionHides,EditCondition="ConditionType == EConsumableConditionType::EquippedInternalStrength || ConditionType == EConsumableConditionType::EquippedMoves")) EMartialArtsAttributeClassification MartialArtsType = EMartialArtsAttributeClassification::None;` |

**说明:**

> 内功/招式的武学属性分类 None为不限制类型

---

### 属性 `Attribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAttribute` |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableCondition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableCondition", meta=(EditConditionHides,EditCondition="ConditionType == EConsumableConditionType::AttributeGreaterThan")) FGameplayAttribute Attribute;` |

**说明:**

> 需要比较的属性

---

### 属性 `AttributeValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="ConsumableCondition" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConsumableCondition", meta=(EditConditionHides,EditCondition="ConditionType == EConsumableConditionType::AttributeGreaterThan")) float AttributeValue = 0.f;` |

**说明:**

> 属性需要大于的配置值

---
