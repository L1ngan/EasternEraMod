# `struct` `FMartialArtsEntries`

**源码头文件：** `EastRimWorld/Struct/MartialArts.h`

---

## 功能说明（来自头文件注释）

> 武学词条

## 蓝图暴露变量

### 属性 `EffectiveAfterEquippingGameplayEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSubclassOf<UGameplayEffect>>` |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<TSubclassOf<UGameplayEffect>> EffectiveAfterEquippingGameplayEffects;` |

**源码注释：**

> 装备时立即生效的GE

---

### 属性 `EffectiveAfterEquippingGameplayAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FName> EffectiveAfterEquippingGameplayAttributes;` |

**源码注释：**

> 装备时增加的属性

---

### 属性 `AbilityTargetEntriesEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FAbilityTargetEntriesEffect](MartialArts__FAbilityTargetEntriesEffect.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FAbilityTargetEntriesEffect> AbilityTargetEntriesEffects;` |

**源码注释：**

> 释放技能时触发的额外效果

---

### 属性 `SelfGameplayTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") FGameplayTagContainer SelfGameplayTags;` |

**源码注释：**

> 装备时给予自己的标签

---

### 属性 `GiveAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FName> GiveAbility;` |

**源码注释：**

> 获得的技能 关联GameAbilityStruct

---

### 属性 `ReduceCooldown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FReduceCoolDownConfig](MartialArts__FReduceCoolDownConfig.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Entries" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Entries") TArray<FReduceCoolDownConfig> ReduceCooldown;` |

**源码注释：**

> 减少冷却时间的配置

---
