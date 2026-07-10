# `struct` `FEastRimWorldAbilityTagRelationship`

**源码头文件:** `EastRimWorld/AbilitySystem/EastRimWorldAbilityTagRelationshipMapping.h`

---

## 功能说明（来自头文件注释）

> Struct that defines the relationship between different ability tags

## 蓝图暴露变量

### 属性 `AbilityTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, Category = Ability, meta = (Categories = "Gameplay.Action")) FGameplayTag AbilityTag;` |

**说明:**

> The tag that this container relationship is about. Single tag, but abilities can have multiple of these

---

### 属性 `AbilityTagsToBlock`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, Category = Ability) FGameplayTagContainer AbilityTagsToBlock;` |

**说明:**

> The other ability tags that will be blocked by any ability using this tag

---

### 属性 `AbilityTagsToCancel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, Category = Ability) FGameplayTagContainer AbilityTagsToCancel;` |

**说明:**

> The other ability tags that will be canceled by any ability using this tag

---

### 属性 `ActivationRequiredTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, Category = Ability) FGameplayTagContainer ActivationRequiredTags;` |

**说明:**

> If an ability has the tag, this is implicitly added to the activation required tags of the ability

---

### 属性 `ActivationBlockedTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, Category = Ability) FGameplayTagContainer ActivationBlockedTags;` |

**说明:**

> If an ability has the tag, this is implicitly added to the activation blocked tags of the ability

---
