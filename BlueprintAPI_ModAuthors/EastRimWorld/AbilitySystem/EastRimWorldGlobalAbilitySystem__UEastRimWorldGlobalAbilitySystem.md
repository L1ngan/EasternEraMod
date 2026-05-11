# `class` `UEastRimWorldGlobalAbilitySystem`

**源码头文件：** `EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `ApplyAbilityToAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ability` | `TSubclassOf<UGameplayAbility>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="EastRimWorld") void ApplyAbilityToAll(TSubclassOf<UGameplayAbility> Ability);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> /无特殊情况不使用这些方法，统一通过buff系统施加效果 属性*****************/

---

### 函数 `ApplyEffectToAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Effect` | `TSubclassOf<UGameplayEffect>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="EastRimWorld") void ApplyEffectToAll(TSubclassOf<UGameplayEffect> Effect);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveAbilityFromAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Ability` | `TSubclassOf<UGameplayAbility>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void RemoveAbilityFromAll(TSubclassOf<UGameplayAbility> Ability);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveEffectFromAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Effect` | `TSubclassOf<UGameplayEffect>` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void RemoveEffectFromAll(TSubclassOf<UGameplayEffect> Effect);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetBasicAttributeFromAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Attribute` | `const FGameplayAttribute&` |
| `Value` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void SetBasicAttributeFromAll(const FGameplayAttribute& Attribute,float Value);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 此方法只会在增加临时属性时使用 不支持存档 如需要存档 则使用Buff系统增加属性

---

### 函数 `ApplyBuffFromAllByBuffID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuffID` | `FName` |
| `bTemporary` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void ApplyBuffFromAllByBuffID(FName BuffID,bool bTemporary);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `ApplyBuffFromAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CommonBuff` | const [FCommonBuff](../Struct/CommonStruct__FCommonBuff.md) & |
| `bTemporary` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void ApplyBuffFromAll(const FCommonBuff & CommonBuff,bool bTemporary);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveBuffFromAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CommonID` | `const FName &` |
| `bTemporary` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "EastRimWorld") void RemoveBuffFromAll(const FName & CommonID,bool bTemporary);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---
