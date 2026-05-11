# `struct` `FAbilityTargetEntriesEffect`

**源码头文件：** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 技能触发的词条效果

## 蓝图暴露变量

### 属性 `AbilityClassifyTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") FGameplayTag AbilityClassifyTag;` |

**源码注释：**

> 技能分类标签(什么技能标签会触发这些效果)

---

### 属性 `EffectContainerMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") TMap<FGameplayTag, FEastRimWorldGameplayEffectContainer> EffectContainerMap;` |

**源码注释：**

> 技能效果

---

### 属性 `AnimationSpawnProjectiles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag,FAbilityProjectileStruct>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") TMap<FGameplayTag,FAbilityProjectileStruct> AnimationSpawnProjectiles;` |

**源码注释：**

> 触发的投射物

---

### 属性 `AttributesTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayTag>` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") TArray<FGameplayTag> AttributesTag;` |

**源码注释：**

> Tag属性分类标签(例如是什么伤害类型)

---

### 属性 `ClassifyTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="MartialArts" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="MartialArts") FGameplayTag ClassifyTag;` |

**源码注释：**

> 分类标签

---
