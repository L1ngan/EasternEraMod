# `struct` `FGOAP_Action`

**源码头文件:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## 功能说明（来自头文件注释）

> GOAP行动数据

## 蓝图暴露变量

### 属性 `ActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ActionID;` |

**说明:**

> 行动配置表ID

---

### 属性 `ItemID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName ItemID;` |

**说明:**

> 对应的物品ID

---

### 属性 `ItemNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 ItemNum { 0 };` |

**说明:**

> Action需要的物品数量

---

### 属性 `CarryNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 CarryNum { 0 };` |

**说明:**

> 实际搬运数量

---

### 属性 `Tag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FGameplayTag Tag;` |

**说明:**

> 标签

---

### 属性 `SelectableTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayTag>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FGameplayTag> SelectableTags;` |

**说明:**

> 可选标签

---

### 属性 `OwnerData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FUObjectData OwnerData;` |

**说明:**

> Owner的数据

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

### 属性 `Location`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FVectorData](../ERW_CommonTypes__FVectorData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FVectorData Location;` |

**说明:**

> Owner的位置

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

### 属性 `SpecifiedGoal`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName SpecifiedGoal;` |

**说明:**

> 角色指定Action对应的GOAP目标

---

### 属性 `Batch`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 Batch { INDEX_NONE };` |

**说明:**

> 在批量处理的Action中的批次

---

### 属性 `PlayAnimSection`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FName PlayAnimSection;` |

**说明:**

> 播放的动画片段

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

### 属性 `Conditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGOAP_Condition](GOAP_Data__FGOAP_Condition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) TArray<FGOAP_Condition> Conditions;` |

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

### 属性 `Desc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) FString Desc;` |

**说明:**

> 行动描述

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

> 行为会添加的buff(行为结束会被移除)

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

### 属性 `bCanPassCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) bool bCanPassCondition;` |

**说明:**

> 能否跳过前置条件

---

### 属性 `SpecificExecutorData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FUObjectData SpecificExecutorData;` |

**说明:**

> 特定执行人的数据

---
