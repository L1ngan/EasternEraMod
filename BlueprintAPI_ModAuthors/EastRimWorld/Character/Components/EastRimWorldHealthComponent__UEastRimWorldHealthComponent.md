# `class` `UEastRimWorldHealthComponent`

**源码头文件：** `EastRimWorld/Character/Components/EastRimWorldHealthComponent.h`

---

## 功能说明（来自头文件注释）

> UEastRimWorldHealthComponent
> An actor component used to handle anything related to health.

## 蓝图暴露变量

### 属性 `OrganName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FText OrganName;` |

---

### 属性 `OnHealthChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_AttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnHealthChanged;` |

**源码注释：**

> Delegate fired when the health value has changed. This is called on the client but the instigator may not be valid

---

### 属性 `OnCurMaxHealthChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_AttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnCurMaxHealthChanged;` |

**源码注释：**

> Delegate fired when the max health value has changed. This is called on the client but the instigator may not be valid

---

### 属性 `OnMaxHealthChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_AttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnMaxHealthChanged;` |

---

### 属性 `OnDamageShieldChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_AttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnDamageShieldChanged;` |

**源码注释：**

> 罡气值改变

---

### 属性 `OnMaxDamageShieldChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_AttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnMaxDamageShieldChanged;` |

**源码注释：**

> 罡气值最大值改变

---

### 属性 `OnInspirationChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_AttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnInspirationChanged;` |

**源码注释：**

> 感悟值改变

---

### 属性 `OnRobotEnergyMaxValueChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_AttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnRobotEnergyMaxValueChanged;` |

**源码注释：**

> 机关人能源最大值改变

---

### 属性 `OnRobotEnergyCurValueChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_AttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_AttributeChanged OnRobotEnergyCurValueChanged;` |

**源码注释：**

> 机关人当前能源改变

---

### 属性 `OnDeathStarted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_DeathEvent` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_DeathEvent OnDeathStarted;` |

**源码注释：**

> Delegate fired when the death sequence has started.

---

### 属性 `OnDeathFinished`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_DeathEvent` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_DeathEvent OnDeathFinished;` |

**源码注释：**

> Delegate fired when the death sequence has finished.

---

### 属性 `OnKnockDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_KnockDown` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_KnockDown OnKnockDown;` |

**源码注释：**

> 被击倒

---

### 属性 `OnKnockDownFinished`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FEastRimWorldHealth_KnockDown` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FEastRimWorldHealth_KnockDown OnKnockDownFinished;` |

---

### 属性 `OnGOAPAttributeChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGOAPAttributeChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGOAPAttributeChanged OnGOAPAttributeChanged;` |

**源码注释：**

> 当GOAP相关属性值改变时

---

### 属性 `OnCharacterTemperatureChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FCharacterTemperatureChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FCharacterTemperatureChanged OnCharacterTemperatureChanged;` |

**源码注释：**

> 温度变化

---

### 属性 `OnNutritionValueChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnNutritionValueChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnNutritionValueChanged OnNutritionValueChanged;` |

**源码注释：**

> 营养值改变

---

## 蓝图暴露函数

### 函数 `FindHealthComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="EastRimWorld|Health" |
| 返回类型 | `UEastRimWorldHealthComponent*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `const AActor*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure, Category = "EastRimWorld|Health") static UEastRimWorldHealthComponent* FindHealthComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UEastRimWorldHealthComponent>() : nullptr); }`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> Returns the health component if one exists on the specified actor.

---

### 函数 `GetHealth`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Health" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetHealth() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Returns the current health value.

---

### 函数 `GetMaxHealth`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Health" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetMaxHealth() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Returns the current maximum health value.

---

### 函数 `GetHealthNormalized`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Health" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetHealthNormalized() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当前生命值的百分比（以最大健康值为基础） Returns the current health in the range [0.0, 1.0].

---

### 函数 `GetCurMaxHealthNormalized`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Health" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetCurMaxHealthNormalized() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当前最大生命值的百分比（以最大健康值为基础）

---

### 函数 `GetFreeWeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Health" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetFreeWeight() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 剩余可携带重量（通过 HealthSet 获取）

---

### 函数 `GetNutritionValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Health" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetNutritionValue() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当前营养值（通过 HealthSet 获取）

---

### 函数 `GetMaxNutritionValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Health" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetMaxNutritionValue() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 营养值上限（通过 HealthSet 获取）

---

### 函数 `GetInspiration`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|Health" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|Health") float GetInspiration() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当前感悟值（通过 HealthSet 获取）

---

### 函数 `GetDamageShield`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|DamageShield" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|DamageShield") float GetDamageShield() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当前罡气值

---

### 函数 `GetMaxDamageShield`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|DamageShield" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|DamageShield") float GetMaxDamageShield() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 最大罡气值

---

### 函数 `GetDamageShieldNormalized`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|DamageShield" |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|DamageShield") float GetDamageShieldNormalized() const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 罡气值百分比（相比最大生命值）

---

### 函数 `StartDeath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void StartDeath();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> Begins the death sequence for the owner.

---

### 函数 `GetMoodValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float GetMoodValue();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
