# `struct` `FForceAimInfo`

**源码头文件：** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 势力宗旨配置表

## 蓝图暴露变量

### 属性 `SectAimType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EForceAimType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceAimType SectAimType = EForceAimType::None;` |

**源码注释：**

> 宗旨类型

---

### 属性 `AttackDesire`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AttackDesire = 100.f;` |

**源码注释：**

> 攻击期望值

---

### 属性 `ArmisticePeriodMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ArmisticePeriodMin = 180.f;` |

**源码注释：**

> 休战期最小值

---

### 属性 `ArmisticePeriodMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ArmisticePeriodMax = 540.f;` |

**源码注释：**

> 休战期最大值

---

### 属性 `TaxationMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaxationMin = 0.5f;` |

**源码注释：**

> 税收最小值

---

### 属性 `TaxationMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaxationMax = 0.9f;` |

**源码注释：**

> 税收最大值

---

### 属性 `ProbabilityWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EAttackSuccessOperateType,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EAttackSuccessOperateType,int32> ProbabilityWeight;` |

**源码注释：**

> NPC攻打城镇成功后选择操作的权重

---

### 属性 `AutoUseCharacterType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAutoUseCharacterType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EAutoUseCharacterType AutoUseCharacterType = EAutoUseCharacterType::Random;` |

**源码注释：**

> 在战斗中使用角色卡牌的策略

---
