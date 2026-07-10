# `struct` `FWorkAttributeLevelConfig`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 工作属性等级配置

## 蓝图暴露变量

### 属性 `Attribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAttribute` |
| 反射说明符 | BlueprintReadWrite, Category="WorkAttributeLevelConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorkAttributeLevelConfig") FGameplayAttribute Attribute;` |

**说明:**

> 属性值

---

### 属性 `BaseValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorkAttributeLevelConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorkAttributeLevelConfig") float BaseValue = 0.f;` |

**说明:**

> 属性等级关联的基础值

---

### 属性 `AdditionPercentage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int,float>` |
| 反射说明符 | BlueprintReadWrite, Category="WorkAttributeLevelConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorkAttributeLevelConfig") TMap<int,float> AdditionPercentage;` |

**说明:**

> 属性等级关联的百分比

---
