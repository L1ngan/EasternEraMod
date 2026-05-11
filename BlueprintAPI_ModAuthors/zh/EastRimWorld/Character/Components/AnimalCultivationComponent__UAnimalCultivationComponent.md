# `class` `UAnimalCultivationComponent`

**源码头文件:** `EastRimWorld/Character/Components/AnimalCultivationComponent.h`

---

## 功能说明（来自头文件注释）

> UAnimalCultivationComponent
> 动物修炼组件，用于处理怪物的修炼系统
> 包括经验获取、等级提升、行为管理、属性提升、能力添加等功能

## 蓝图暴露变量

### 属性 `OnCultivationExperienceChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCultivationExperienceChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCultivationExperienceChanged OnCultivationExperienceChanged;` |

**源码注释:**

> 修炼经验变化事件

---

### 属性 `OnCultivationLevelChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCultivationLevelChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCultivationLevelChanged OnCultivationLevelChanged;` |

**源码注释:**

> 修炼等级变化事件

---

### 属性 `CultivationLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 CultivationLevel = 0;` |

**源码注释:**

> 当前修炼等级

---

### 属性 `CurrentExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float CurrentExperience = 0.0f;` |

**源码注释:**

> 当前修炼经验

---

### 属性 `RequiredExperienceForNextLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float RequiredExperienceForNextLevel = 0.0f;` |

**源码注释:**

> 当前等级所需经验（从等级表获取）

---

### 属性 `CultivationConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CultivationConfigID;` |

**源码注释:**

> 修炼配置ID（关联FAnimalCultivationConfig配置表）

---

### 属性 `MaxCultivationLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 MaxCultivationLevel = 0;` |

**源码注释:**

> 最大修炼等级（从配置获取）

---

## 蓝图暴露函数

### 函数 `FindAnimalCultivationComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="EastRimWorld|AnimalCultivation" |
| 返回类型 | [UAnimalCultivationComponent](AnimalCultivationComponent__UAnimalCultivationComponent.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `const AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "EastRimWorld|AnimalCultivation") static UAnimalCultivationComponent* FindAnimalCultivationComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UAnimalCultivationComponent>() : nullptr); }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> Returns the AnimalCultivation component if one exists on the specified actor.

---

### 函数 `AddCultivationExperience`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AnimalCultivation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddExperience` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AnimalCultivation") void AddCultivationExperience(float AddExperience);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 添加修炼经验

---

### 函数 `SetCultivationConfigID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AnimalCultivation" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCultivationConfigID` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AnimalCultivation") void SetCultivationConfigID(FName InCultivationConfigID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置修炼配置ID（初始化时调用）

---

### 函数 `GetRequiredExperienceForLevel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AnimalCultivation" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Level` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AnimalCultivation") float GetRequiredExperienceForLevel(int32 Level) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取当前等级所需经验

---

### 函数 `CanLevelUp`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="AnimalCultivation" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "AnimalCultivation") bool CanLevelUp() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 检查是否可以升级

---
