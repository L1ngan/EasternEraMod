# `struct` `FWorldAgreement`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `AgreementType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAgreementType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EAgreementType AgreementType = EAgreementType::None;` |

**源码注释:**

> 协议类型

---

### 属性 `SourceDuty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EAgreementDutyType>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> SourceDuty;` |

**源码注释:**

> 发起者责任

---

### 属性 `ReceiverDuty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EAgreementDutyType>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> ReceiverDuty;` |

**源码注释:**

> 接受者责任

---

### 属性 `TimeLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float TimeLimit = 0.f;` |

**源码注释:**

> 期限

---

### 属性 `ReceiverAward`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> ReceiverAward;` |

**源码注释:**

> 接受者完成协议奖励

---

### 属性 `ReceiverPunishment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EPunishmentType>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EPunishmentType> ReceiverPunishment;` |

**源码注释:**

> 接受者违约处罚

---

### 属性 `SourcePunishment`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EPunishmentType>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EPunishmentType> SourcePunishment;` |

**源码注释:**

> 发起者违约处罚

---

### 属性 `ClashDuty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<EAgreementDutyType>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<EAgreementDutyType> ClashDuty;` |

**源码注释:**

> 此协议冲突的责任

---

### 属性 `CoolingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CoolingTime = 0.f;` |

**源码注释:**

> 冷却时间(从开始签订开始计时)

---

### 属性 `SourceForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid SourceForceGuid;` |

**源码注释:**

> 发起者势力Guid

---

### 属性 `ReceiverForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid ReceiverForceGuid;` |

**源码注释:**

> 接受者势力Guid

---

### 属性 `OtherGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid OtherGuid;` |

**源码注释:**

> 第三方Guid 根据协议类型不同而不同

---
