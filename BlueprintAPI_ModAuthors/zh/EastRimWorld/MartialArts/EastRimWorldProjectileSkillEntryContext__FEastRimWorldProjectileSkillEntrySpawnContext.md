# `struct` `FEastRimWorldProjectileSkillEntrySpawnContext`

**源码头文件:** `EastRimWorld/MartialArts/EastRimWorldProjectileSkillEntryContext.h`

---

## 功能说明（来自头文件注释）

> 投射物生成时携带的技能/词条上下文（用于 CreateNewProjectileByProject）。

## 蓝图暴露变量

### 属性 `SourceAbilityId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="SkillEntry" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") FName SourceAbilityId = NAME_None;` |

**说明:**

> 来源技能的ID

---

### 属性 `SourceAbilityProjectile`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAbilityProjectileStruct` |
| 反射说明符 | BlueprintReadWrite, Category="SkillEntry" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") FAbilityProjectileStruct SourceAbilityProjectile;` |

**说明:**

> 来源技能的投射物配置数据

---

### 属性 `SourceAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TWeakObjectPtr<[UEastRimWorldGameplayAbility](../AbilitySystem/Abilities/EastRimWorldGameplayAbility__UEastRimWorldGameplayAbility.md)> |
| 反射说明符 | BlueprintReadWrite, Category="SkillEntry" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") TWeakObjectPtr<UEastRimWorldGameplayAbility> SourceAbility;` |

**说明:**

> 来源技能的弱引用

---

### 属性 `SpawnTargetActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite, Category="SkillEntry" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") TWeakObjectPtr<AActor> SpawnTargetActor;` |

**说明:**

> 生成时的目标Actor（弱引用）

---

### 属性 `bTriggeredByAnimationTagSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="SkillEntry" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") bool bTriggeredByAnimationTagSpawn = false;` |

**说明:**

> true：动画标签/技能正常触发的生成物；false：词条链式生成的子投射物（仅参与 End 时机）。

---

### 属性 `MontageSpawnEffectTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="SkillEntry" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "SkillEntry") FGameplayTag MontageSpawnEffectTag;` |

**说明:**

> 触发该生成物时的蒙太奇投射物事件标签（用于 Locator 筛选）。

---
