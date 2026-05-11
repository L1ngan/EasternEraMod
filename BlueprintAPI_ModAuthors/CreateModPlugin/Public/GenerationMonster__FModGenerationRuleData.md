# `struct` `FModGenerationRuleData`

**源码头文件：** `CreateModPlugin/Public/GenerationMonster.h`

---

## 功能说明（来自头文件注释）

> 生成的规则

## 蓝图暴露变量

### 属性 `GenerationRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModGenerationRuleType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModGenerationRuleType GenerationRule = EModGenerationRuleType::Fixed;` |

**源码注释：**

> 生成规则类型

---

### 属性 `BaseProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EModGenerationRuleType::Probability")) float BaseProbability = 1.f;` |

**源码注释：**

> 基础概率

---

### 属性 `ProbabilityInfluence`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModGenerationProbabilityInfluence](GenerationMonster__FModGenerationProbabilityInfluence.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(EditConditionHides,EditCondition = "GenerationRule == EModGenerationRuleType::Probability")) TArray<FModGenerationProbabilityInfluence> ProbabilityInfluence;` |

**源码注释：**

> 概率的影响配置

---
