# `struct` `FForceAimInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 势力宗旨配置表

## 蓝图暴露变量

### 属性 `SectAimType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceAimType](WorldStruct__EForceAimType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EForceAimType SectAimType = EForceAimType::None;` |

**说明:**

> 宗旨类型

---

### 属性 `AttackDesire`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AttackDesire = 100.f;` |

**说明:**

> 攻击期望值

---

### 属性 `ArmisticePeriodMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ArmisticePeriodMin = 180.f;` |

**说明:**

> 休战期最小值

---

### 属性 `ArmisticePeriodMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ArmisticePeriodMax = 540.f;` |

**说明:**

> 休战期最大值

---

### 属性 `TaxationMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaxationMin = 0.5f;` |

**说明:**

> 税收最小值

---

### 属性 `TaxationMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TaxationMax = 0.9f;` |

**说明:**

> 税收最大值

---

### 属性 `ProbabilityWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EAttackSuccessOperateType](WorldStruct__EAttackSuccessOperateType.md),int32> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EAttackSuccessOperateType,int32> ProbabilityWeight;` |

**说明:**

> NPC攻打城镇成功后选择操作的权重

---

### 属性 `AutoUseCharacterType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EAutoUseCharacterType](../Struct/CommonEnum__EAutoUseCharacterType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EAutoUseCharacterType AutoUseCharacterType = EAutoUseCharacterType::Random;` |

**说明:**

> 在战斗中使用角色卡牌的策略

---

### 属性 `SearchDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float SearchDistance = 8.f;` |

**说明:**

> 搜索目标半径（单位：格，1格=100像素）。中立=8，保守=5，激进=12；默认8防止0半径搜不到目标

---
