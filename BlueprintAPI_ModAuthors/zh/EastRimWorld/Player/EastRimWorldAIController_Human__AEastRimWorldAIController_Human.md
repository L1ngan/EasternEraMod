# `class` `AEastRimWorldAIController_Human`

**源码头文件:** `EastRimWorld/Player/EastRimWorldAIController_Human.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `ReadingTimerID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 ReadingTimerID { -1 };` |

**源码注释:**

> 读书计时器ID

---

### 属性 `WriteCopyTimerID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) int32 WriteCopyTimerID { -1 };` |

**源码注释:**

> 抄录计时器ID

---

### 属性 `UsedBed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) FUObjectData UsedBed;` |

**源码注释:**

> 记录上次使用过的床

---

## 蓝图暴露函数

### 函数 `ResetGoalPriority`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GoalID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent , BlueprintCallable) void ResetGoalPriority(const FName& GoalID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 重置GOAP目标优先级为默认值

---

### 函数 `SetUsedBed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Bed` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetUsedBed(AGOAP_ActorBase* Bed);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置使用过的床

---

### 函数 `ResetGoals`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewGoals` | `const TArray<FName>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category="GOAP") void ResetGoals(const TArray<FName>& NewGoals);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释:**

> 重置所有Goal

---

### 函数 `UpdateMemberGoals`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent, Category="GOAP" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RemovedGoals` | `const TArray<FName>&` |
| `NewGoals` | `const TArray<FName>&` |
| `false` | `bool IsSetMember =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent , BlueprintCallable , Category="GOAP") void UpdateMemberGoals(const TArray<FName>& RemovedGoals , const TArray<FName>& NewGoals , bool IsSetMember = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释:**

> 更新内外门弟子的GOAP目标

---
