# `struct` `FEnemyForceAttackGenerationInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> Enemy Force Attack Generation Info 数据结构。

## 蓝图暴露变量

### 属性 `GenerationConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FEnemyAttackGenerationConfig](WorldStruct__FEnemyAttackGenerationConfig.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FEnemyAttackGenerationConfig GenerationConfig;` |

**说明:**

> 生成的配置ID

---

### 属性 `GenerationInstanceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid GenerationInstanceGuid;` |

**说明:**

> 生成队列激活的实例Guid

---

### 属性 `AttackState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEnemyAttackStateType](WorldStruct__EEnemyAttackStateType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EEnemyAttackStateType AttackState = EEnemyAttackStateType::None;` |

**说明:**

> 当前状态

---

### 属性 `StateTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StateTime = 0.f;` |

**说明:**

> 当前状态时间

---

### 属性 `RetreatPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FVector RetreatPosition = FVector::ZeroVector;` |

**说明:**

> 撤退位置

---

### 属性 `ForceId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ForceId;` |

**说明:**

> 势力ID

---

### 属性 `ForceName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ForceName;` |

**说明:**

> 势力名称

---
