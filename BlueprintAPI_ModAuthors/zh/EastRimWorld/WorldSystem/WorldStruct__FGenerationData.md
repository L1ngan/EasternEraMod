# `struct` `FGenerationData`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> Generation Data 数据结构。

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

### 属性 `GenerationRotation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FRotator` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FRotator GenerationRotation = FRotator::ZeroRotator;` |

**说明:**

> 生成的方向 如果是战场小兵模板则不填

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

### 属性 `bGenerationRemove`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bGenerationRemove = false;` |

**说明:**

> 生成后是否移除

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
| C++ 类型 | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECharacterType CharacterType = ECharacterType::Human;` |

**说明:**

> 角色类型

---

### 属性 `BehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Team" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Team", meta = (AllowedClasses = "/Script/AIModule.BehaviorTree")) FSoftObjectPath BehaviorTree;` |

**说明:**

> 对应的行为树 不配置则使用默认阵营行为树

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

### 属性 `RemoveGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> RemoveGoals;` |

**说明:**

> 移除的Goals

---

### 属性 `BranchingIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BranchingIndex = 0;` |

**说明:**

> 分路战场中的分路 从0开始 (例如 战场中3条路  填0 1 2）

---

### 属性 `BattlefieldRolesType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBattlefieldRolesType](../Struct/CommonEnum__EBattlefieldRolesType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBattlefieldRolesType BattlefieldRolesType = EBattlefieldRolesType::None;` |

**说明:**

> 战场中生成后的类型 用于区分不同功能

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

### 属性 `LevelGameplayEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<TSoftClassPtr<UGameplayEffect>, [FEffectLevelData](WorldStruct__FEffectLevelData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSoftClassPtr<UGameplayEffect>, FEffectLevelData> LevelGameplayEffects;` |

**说明:**

> 生成时应用的带等级GE Key为GE类 Value为等级信息(等级来源+额外等级)

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

### 属性 `RandomDiscipleConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RandomDiscipleConfigID;` |

**说明:**

> 随机弟子生成配置ID（DT_RandomDiscipleConfig 表行；仅当所在 FMonsterGenerationConfig.GenerationActorType == SpawnRandomDisciple 时生效）
> CharacterIDs 字段在 SpawnRandomDisciple 类型下留空即可，不参与生成逻辑

---
