# `struct` `FCommonTaskCondition`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 达成任务的条件

## 蓝图暴露变量

### 属性 `Describe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Describe;` |

**说明:**

> 条件描述

---

### 属性 `SubDescribes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FText> SubDescribes;` |

**说明:**

> 次级描述

---

### 属性 `SubConditionIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> SubConditionIDs;` |

**说明:**

> 次级条件ID

---

### 属性 `CoverTipsID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName CoverTipsID;` |

**说明:**

> 遮罩Tips配置表ID

---

### 属性 `CommonTaskConditionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECommonTaskConditionType](CommonTaskStruct__ECommonTaskConditionType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonTaskConditionType CommonTaskConditionType = ECommonTaskConditionType::None;` |

**说明:**

> 条件类型

---

### 属性 `RequiredID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName RequiredID;` |

**说明:**

> 所需类型ID 例如 资源id  建筑id 没有则不填

---

### 属性 `RequiredValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int RequiredValue;` |

**说明:**

> 所需值

---

### 属性 `CurrentValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CurrentValue;` |

**说明:**

> 当前值

---

### 属性 `ConditionValueUpdateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EConditionValueUpdateType](CommonTaskStruct__EConditionValueUpdateType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EConditionValueUpdateType ConditionValueUpdateType = EConditionValueUpdateType::Addition;` |

**说明:**

> 更新类型

---

### 属性 `ConditionValueCompareType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EConditionValueCompareType](CommonTaskStruct__EConditionValueCompareType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EConditionValueCompareType ConditionValueCompareType = EConditionValueCompareType::GreatThanOrEqualTo;` |

**说明:**

> 条件数值的比较类型

---

### 属性 `ConditionState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECompleteState](CommonTaskStruct__ECompleteState.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) ECompleteState ConditionState = ECompleteState::Unfinished;` |

**说明:**

> 条件状态

---

### 属性 `ConditionSchedule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ConditionSchedule;` |

**说明:**

> 条件进度

---

### 属性 `BuildingType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int BuildingType;` |

**说明:**

> 任务关联的建筑物类型

---

### 属性 `FiltrateTypeID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int FiltrateTypeID;` |

**说明:**

> 相同建筑物的不同类型

---

### 属性 `bDynamicCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bDynamicCondition = false;` |

**说明:**

> 是否会更加实际数值改变条件状态

---

### 属性 `ExecuteStateTips`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FText ExecuteStateTips;` |

**说明:**

> 执行状态tips

---

### 属性 `ExtraParam1`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 ExtraParam1 = 0;` |

**说明:**

> 额外参数1

---

### 属性 `FailedTipText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText FailedTipText;` |

**说明:**

> 条件检查不通过时的提示文本

---
