# `class` `UEastRimWorldAnimInstance`

**源码头文件：** `EastRimWorld/Animation/EastRimWorldAnimInstance.h`

---

## 功能说明（来自头文件注释）

> UEastRimWorldAnimInstance
> The base game animation instance class used by this project.

## 蓝图暴露变量

### 属性 `GameplayTagPropertyMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagBlueprintPropertyMap` |
| 反射说明符 | Category="GameplayTags" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "GameplayTags") FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;` |

**源码注释：**

> Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.
> These should be used instead of manually querying for the gameplay tags.

---

### 属性 `GroundDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Character State Data" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Character State Data") float GroundDistance = -1.0f;` |

---

## 蓝图暴露函数

### 函数 `UpdateBattleWeapon`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWeapon` | `const FCharacterWeapon &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateBattleWeapon(const FCharacterWeapon & InWeapon);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 更新战斗的武器

---

### 函数 `SetIdleAndRunBlendSpace`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewBlendSpace` | `const TSoftObjectPtr<UBlendSpace1D> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void SetIdleAndRunBlendSpace(const TSoftObjectPtr<UBlendSpace1D> & NewBlendSpace);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 设置召唤物的待机行走混合空间

---

### 函数 `UpdateCharacterBehaviorState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterBehaviorState` | `ECharacterBehaviorState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateCharacterBehaviorState(ECharacterBehaviorState CharacterBehaviorState);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 设置角色的行为状态

---

### 函数 `SetCharacterRideAnim`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewRideAnim` | `const TSoftObjectPtr<UAnimSequence> &` |
| `bRide` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void SetCharacterRideAnim(const TSoftObjectPtr<UAnimSequence> & NewRideAnim,bool bRide);`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 设置角色的骑乘的动画

---
