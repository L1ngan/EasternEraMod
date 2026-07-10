# `struct` `FMonsterGenerationConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 怪物生成

## 蓝图暴露变量

### 属性 `GenerationCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> GenerationCondition;` |

**说明:**

> 生成条件 commonCondition 配置表

---

### 属性 `ActivateCountDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ActivateCountDown = 0.f;` |

**说明:**

> 激活倒计时

---

### 属性 `GenerationDelay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationDelay = 0;` |

**说明:**

> 生成怪物的延迟

---

### 属性 `GenerationSetData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGenerationSetData](WorldStruct__FGenerationSetData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGenerationSetData> GenerationSetData;` |

**说明:**

> 生成设置

---

### 属性 `GenerationTimes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationTimes = -1;` |

**说明:**

> 生成的次数 -1 为无限次

---

### 属性 `bActivateCheckCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bActivateCheckCondition = false;` |

**说明:**

> 是否在激活时重新检查条件

---

### 属性 `GenerationInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationInterval = 0;` |

**说明:**

> 生成的间隔

---

### 属性 `GenerationMaxNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 GenerationMaxNumber = -1;` |

**说明:**

> 此生成配置 生成的单位最多同时存在多少个 -1 为无限制

---

### 属性 `Condition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Not Config" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides,EditCondition = "false"), Category="Not Config") TArray<FCommonTaskCondition> Condition;` |

**说明:**

> 包含的条件

---

### 属性 `AlreadyGenerationTimes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Not Config" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "false"),Category="Not Config") int32 AlreadyGenerationTimes = 0;` |

**说明:**

> 已经生成的次数

---

### 属性 `ActivateTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETipsType](WorldStruct__ETipsType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType ActivateTips = ETipsType::None;` |

**说明:**

> 提示 激活提示

---

### 属性 `GenerationTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETipsType](WorldStruct__ETipsType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType GenerationTips = ETipsType::None;` |

**说明:**

> 提示 生成提示

---

### 属性 `GenerationRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGenerationRuleData](WorldStruct__FGenerationRuleData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGenerationRuleData GenerationRule;` |

**说明:**

> 生成规则

---

### 属性 `GenerationActorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGenerationActorType](WorldStruct__EGenerationActorType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGenerationActorType GenerationActorType = EGenerationActorType::SpawnMonster;` |

**说明:**

> 生成actor的类型

---

### 属性 `ForceGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite, Category="Not Config" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "false"),Category="Not Config") FGuid ForceGuid;` |

**说明:**

> 此配置所属的势力

---
