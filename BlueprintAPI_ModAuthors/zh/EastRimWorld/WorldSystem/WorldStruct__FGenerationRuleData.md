# `struct` `FGenerationRuleData`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 生成的规则

## 蓝图暴露变量

### 属性 `GenerationRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGenerationRuleType](WorldStruct__EGenerationRuleType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGenerationRuleType GenerationRule = EGenerationRuleType::Fixed;` |

**说明:**

> 生成规则类型

---

### 属性 `BaseProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EGenerationRuleType::Probability")) float BaseProbability = 1.f;` |

**说明:**

> 基础概率

---

### 属性 `ProbabilityInfluence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGenerationProbabilityInfluence](WorldStruct__FGenerationProbabilityInfluence.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EGenerationRuleType::Probability")) TArray<FGenerationProbabilityInfluence> ProbabilityInfluence;` |

**说明:**

> 概率的影响配置

---
