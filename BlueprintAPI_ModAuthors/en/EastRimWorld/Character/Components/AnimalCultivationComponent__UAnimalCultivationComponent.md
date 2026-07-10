# `class` `UAnimalCultivationComponent`

**Source header:** `EastRimWorld/Character/Components/AnimalCultivationComponent.h`

---

## Functional description (from header comments)

> UAnimalCultivationComponent
> 动物修炼组件，用于处理怪物的修炼系统
> 包括经验获取、等级提升、行为管理、属性提升、能力添加等功能

## Blueprint-exposed variables

### Property `OnCultivationExperienceChanged`

| Field | Details |
|------|------|
| C++ type | `FOnCultivationExperienceChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCultivationExperienceChanged OnCultivationExperienceChanged;` |

**Notes:**

> 修炼经验变化事件

---

### Property `OnCultivationLevelChanged`

| Field | Details |
|------|------|
| C++ type | `FOnCultivationLevelChanged` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnCultivationLevelChanged OnCultivationLevelChanged;` |

**Notes:**

> 修炼等级变化事件

---

### Property `CultivationLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 CultivationLevel = 0;` |

**Notes:**

> 当前修炼等级

---

### Property `CurrentExperience`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float CurrentExperience = 0.0f;` |

**Notes:**

> 当前修炼经验

---

### Property `RequiredExperienceForNextLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) float RequiredExperienceForNextLevel = 0.0f;` |

**Notes:**

> 当前等级所需经验（从等级表获取）

---

### Property `CultivationConfigID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CultivationConfigID;` |

**Notes:**

> 修炼配置ID（关联FAnimalCultivationConfig配置表）

---

### Property `MaxCultivationLevel`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) int32 MaxCultivationLevel = 0;` |

**Notes:**

> 最大修炼等级（从配置获取）

---

## Blueprint-exposed functions

### Function `FindAnimalCultivationComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="EastRimWorld|AnimalCultivation" |
| Return type | [UAnimalCultivationComponent](AnimalCultivationComponent__UAnimalCultivationComponent.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `const AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "EastRimWorld|AnimalCultivation") static UAnimalCultivationComponent* FindAnimalCultivationComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UAnimalCultivationComponent>() : nullptr); }`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the AnimalCultivation component if one exists on the specified actor.

---

### Function `AddCultivationExperience`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AnimalCultivation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddExperience` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AnimalCultivation") void AddCultivationExperience(float AddExperience);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 添加修炼经验

---

### Function `SetCultivationConfigID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AnimalCultivation" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCultivationConfigID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AnimalCultivation") void SetCultivationConfigID(FName InCultivationConfigID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置修炼配置ID（初始化时调用）

---

### Function `GetRequiredExperienceForLevel`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AnimalCultivation" |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Level` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AnimalCultivation") float GetRequiredExperienceForLevel(int32 Level) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取当前等级所需经验

---

### Function `CanLevelUp`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="AnimalCultivation" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "AnimalCultivation") bool CanLevelUp() const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查是否可以升级

---
