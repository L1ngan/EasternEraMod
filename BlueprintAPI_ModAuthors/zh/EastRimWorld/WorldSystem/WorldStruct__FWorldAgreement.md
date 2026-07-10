# `struct` `FWorldAgreement`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> World Agreement 数据结构。

## 蓝图暴露变量

### 属性 `AgreementType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EAgreementType](WorldStruct__EAgreementType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EAgreementType AgreementType = EAgreementType::None;` |

**说明:**

> 协议类型

---

### 属性 `SourceDuty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EAgreementDutyType](WorldStruct__EAgreementDutyType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> SourceDuty;` |

**说明:**

> 发起者责任

---

### 属性 `ReceiverDuty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EAgreementDutyType](WorldStruct__EAgreementDutyType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> ReceiverDuty;` |

**说明:**

> 接受者责任

---

### 属性 `TimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TimeLimit = 0.f;` |

**说明:**

> 期限

---

### 属性 `ReceiverAward`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ReceiverAward;` |

**说明:**

> 接受者完成协议奖励

---

### 属性 `ReceiverPunishment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EPunishmentType](WorldStruct__EPunishmentType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EPunishmentType> ReceiverPunishment;` |

**说明:**

> 接受者违约处罚

---

### 属性 `SourcePunishment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EPunishmentType](WorldStruct__EPunishmentType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EPunishmentType> SourcePunishment;` |

**说明:**

> 发起者违约处罚

---

### 属性 `ClashDuty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[EAgreementDutyType](WorldStruct__EAgreementDutyType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> ClashDuty;` |

**说明:**

> 此协议冲突的责任

---

### 属性 `CoolingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CoolingTime = 0.f;` |

**说明:**

> 冷却时间(从开始签订开始计时)

---

### 属性 `SourceForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid SourceForceGuid;` |

**说明:**

> 发起者势力Guid

---

### 属性 `ReceiverForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid ReceiverForceGuid;` |

**说明:**

> 接受者势力Guid

---

### 属性 `OtherGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid OtherGuid;` |

**说明:**

> 第三方Guid 根据协议类型不同而不同

---
