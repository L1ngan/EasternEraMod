# `struct` `FInjuryEffectInstance`

**源码头文件：** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 伤势效果实施对象

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") FName ID;` |

**源码注释：**

> ID（伤势配置的ID,和InjuryConfig里的ID相同）

---

### 属性 `InjuryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") FGuid InjuryID;` |

**源码注释：**

> 伤势ID（唯一值）

---

### 属性 `OrganID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") FName OrganID;` |

**源码注释：**

> 部位ID

---

### 属性 `OrganType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBodyOrganType` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") EBodyOrganType OrganType = EBodyOrganType::None;` |

**源码注释：**

> 部位类型

---

### 属性 `RestHurtValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") float RestHurtValue = 0.f;` |

**源码注释：**

> 当前剩余损伤程度（减小到0就治愈了）

---

### 属性 `TreatValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") float TreatValue = 0.f;` |

**源码注释：**

> 当前治疗值(如果>0则正在治疗)

---

### 属性 `TreatRemainTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") float TreatRemainTime = 0.f;` |

**源码注释：**

> 剩余治疗时间

---

### 属性 `InjuryConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInjuryEffectConfig` |
| 反射说明符 | BlueprintReadWrite, Category="FInjuryEffectInstance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FInjuryEffectInstance") FInjuryEffectConfig InjuryConfig;` |

**源码注释：**

> 伤势配置

---
