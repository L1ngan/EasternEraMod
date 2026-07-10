# `struct` `FGOAP_Action_Data`

**源码头文件:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## 功能说明（来自头文件注释）

> GOAP行为信息

## 蓝图暴露变量

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FText Desc;` |

**说明:**

> 行动描述

---

### 属性 `GoalID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName GoalID;` |

**说明:**

> Action对应的GOAP目标(GOAP目标配置表ID)

---

### 属性 `Cost`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) float Cost { 0.f };` |

**说明:**

> 行动消耗

---

### 属性 `NeedMoveAway`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) bool NeedMoveAway { false };` |

**说明:**

> 执行该行为是否需要离开原地

---

### 属性 `Conditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FName> Conditions;` |

**说明:**

> 前置条件

---

### 属性 `MaxUserNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 MaxUserNum { 1 };` |

**说明:**

> 最大执行人数

---

### 属性 `ActionAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ActionAbility;` |

**说明:**

> 对应 DT_CharacterActionAbility的id

---

### 属性 `WorkExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayAttribute,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TMap<FGameplayAttribute,float> WorkExperience;` |

**说明:**

> 工作增加的经验

---

### 属性 `AddWorkExperienceEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UGameplayEffect>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TSoftClassPtr<UGameplayEffect> AddWorkExperienceEffect;` |

**说明:**

> 增加工作经验的GE

---

### 属性 `ExtaOutputAttribute`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayAttribute` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayAttribute ExtaOutputAttribute;` |

**说明:**

> 影响产出的属性

---

### 属性 `RealmLevelLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 RealmLevelLimit = 0;` |

**说明:**

> 境界限制

---

### 属性 `TrainingPointProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) float TrainingPointProbability;` |

**说明:**

> 获得历练点概率

---

### 属性 `AddTrainingPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 AddTrainingPoint;` |

**说明:**

> 获得历练点数

---

### 属性 `RetracePointProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) float RetracePointProbability;` |

**说明:**

> 获得回溯点概率

---

### 属性 `AddRetracePoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 AddRetracePoint;` |

**说明:**

> 获得回溯点数

---

### 属性 `CharacterBehaviorState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECharacterBehaviorState](../Struct/CommonEnum__ECharacterBehaviorState.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite , SaveGame) ECharacterBehaviorState CharacterBehaviorState = ECharacterBehaviorState::None;` |

**说明:**

> 行为的类型

---

### 属性 `ActionBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FName> ActionBuff;` |

**说明:**

> 行为会添加的buff

---

### 属性 `ActionEndBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FName> ActionEndBuff;` |

**说明:**

> 行为结束会添加的buff

---

### 属性 `InteractiveTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayTag InteractiveTag;` |

**说明:**

> 指定交互配置中插槽的Tag

---

### 属性 `AgentCharacterTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayTag AgentCharacterTag;` |

**说明:**

> 此Action会给执行行为的角色添加这个标签

---

### 属性 `bCanPassCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) bool bCanPassCondition = false;` |

**说明:**

> 能否跳过前置条件

---
