# `struct` `FAnimalCultivationLevelUpgrade`

**源码头文件：** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 动物修炼等级升级功能配置
> 用于配置到达某个等级时增加的各项功能（经验值、行为树、Goals、能力、Buff、属性、掉落组、模型等）

## 蓝图暴露变量

### 属性 `Level`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Cultivation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cultivation") int32 Level = 1;` |

**源码注释：**

> 等级（到达此等级时应用以下配置）

---

### 属性 `BehaviorTree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Behavior" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Behavior", meta = (AllowedClasses = "/Script/AIModule.BehaviorTree")) FSoftObjectPath BehaviorTree;` |

**源码注释：**

> 更换的行为树（如果为空则不更换，保留之前的行为树）

---

### 属性 `AddGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Behavior" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Behavior") TArray<FName> AddGoals;` |

**源码注释：**

> 添加的Goals列表（到达此等级时添加这些Goals）

---

### 属性 `RemoveGoals`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Behavior" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Behavior") TArray<FName> RemoveGoals;` |

**源码注释：**

> 移除的Goals列表（到达此等级时移除这些Goals）

---

### 属性 `AbilityIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TArray<FName> AbilityIDs;` |

**源码注释：**

> 添加的能力ID列表（GameplayAbility），到达此等级时获得这些能力

---

### 属性 `BuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Abilities" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities") TArray<FName> BuffIDs;` |

**源码注释：**

> 添加的Buff ID列表（GameplayEffect），到达此等级时获得这些Buff

---

### 属性 `AttributeBonusGameplayEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadWrite, Category="Attributes" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", meta = (AllowedClasses = "/Script/GameplayAbilities.GameplayEffect")) FSoftClassPath AttributeBonusGameplayEffect;` |

**源码注释：**

> 属性提升GameplayEffect，到达此等级时应用此GE来提升属性
> 通过GE来修改属性，而不是直接配置属性值

---

### 属性 `OverrideDropItemConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, float>` |
| 反射说明符 | BlueprintReadWrite, Category="Loot" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loot") TMap<FName, float> OverrideDropItemConfig;` |

**源码注释：**

> 覆盖的掉落组配置（掉落组ID -> 权重），如果为空则不覆盖，保留之前的掉落组
> 到达此等级时，使用此配置覆盖原有的掉落组配置

---

### 属性 `MeshPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Appearance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance", meta = (AllowedClasses = "/Script/Engine.SkeletalMesh")) FSoftObjectPath MeshPath;` |

**源码注释：**

> 更换的模型路径（如果为空则不更换，保留之前的模型）
> 到达此等级时更换为此模型

---

### 属性 `MeshScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Appearance" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance") FVector MeshScale = FVector(1.0f, 1.0f, 1.0f);` |

**源码注释：**

> 模型缩放比例（可选，用于调整模型大小）

---
