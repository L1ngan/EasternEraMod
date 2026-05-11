# `struct` `FModGenerationProbabilityInfluence`

**源码头文件:** `CreateModPlugin/Public/GenerationMonster.h`

---

## 功能说明（来自头文件注释）

> 生成的概率影响

## 蓝图暴露变量

### 属性 `InfluenceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModInfluenceType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModInfluenceType InfluenceType = EModInfluenceType::None;` |

**源码注释:**

> 影响的类型

---

### 属性 `Probability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Probability = 0.1f;` |

**源码注释:**

> 概率变化

---

### 属性 `MaxCharacterNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "InfluenceType == EModInfluenceType::LackCharacterNumber")) int32 MaxCharacterNumber = 0;` |

**源码注释:**

> 最大人数

---
