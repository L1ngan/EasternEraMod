# `struct` `FIdeaTriggerConfigData`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 想法触发配置结构

## 蓝图暴露变量

### 属性 `BuffID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName BuffID;` |

**说明:**

> BUFF配置表ID

---

### 属性 `Conditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ECommonConditionType](ERW_Enumerations__ECommonConditionType.md) , [FConditions](ERW_CommonTypes__FConditions.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ECommonConditionType , FConditions> Conditions;` |

**说明:**

> 触发条件
> TMap<条件类型 , 条件>

---
