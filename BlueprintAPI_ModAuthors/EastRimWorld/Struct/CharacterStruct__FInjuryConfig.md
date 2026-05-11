# `struct` `FInjuryConfig`

**源码头文件：** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 伤势配置解构

## 蓝图暴露变量

### 属性 `DamageType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EDamageType` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryConfig") EDamageType DamageType = EDamageType::None;` |

**源码注释：**

> 伤害攻击类型

---

### 属性 `HurtLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EHurtLevel` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryConfig") EHurtLevel HurtLevel = EHurtLevel::None;` |

**源码注释：**

> 受伤害等级

---

### 属性 `InjuryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryConfig") FName InjuryId;` |

**源码注释：**

> 伤势类型ID

---
