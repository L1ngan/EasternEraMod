# `struct` `FModGenerationData`

**源码头文件:** `CreateModPlugin/Public/GenerationMonster.h`

---

## 功能说明（来自头文件注释）

> 单条生成配置数据：生成位置、角色ID、数量、角色类型、附加Goals与生成时应用的GE等

## 蓝图暴露变量

### 属性 `GenerationPosition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FVector>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,FVector> GenerationPosition;` |

**说明:**

> 生成的位置 如果是战场小兵模板则不填

---

### 属性 `CharacterIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CharacterIDs;` |

**说明:**

> 生成的ID 最终生成的数量是 配置的ID * Number 字段(如果GenerationActorType配置为SpawnPostStationChivalrousByPresetID这里填预设角色表id)

---

### 属性 `Number`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Number = 1;` |

**说明:**

> 生成的数量

---

### 属性 `CharacterType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModCharacterType](BaseDataStruct__EModCharacterType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EModCharacterType CharacterType = EModCharacterType::Human;` |

**说明:**

> 角色类型

---

### 属性 `AddGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> AddGoals;` |

**说明:**

> 新增的Goals

---

### 属性 `GameplayEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSoftClassPtr<UGameplayEffect>>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftClassPtr<UGameplayEffect>> GameplayEffects;` |

**说明:**

> 生成时应用的GE

---

### 属性 `MovingRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MovingRange = 0.f;` |

**说明:**

> 闲逛时移动的范围 以出生点为中心

---

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ID;` |

**说明:**

> 该生成配置的唯一ID，用作哈希与相等比较依据

---
