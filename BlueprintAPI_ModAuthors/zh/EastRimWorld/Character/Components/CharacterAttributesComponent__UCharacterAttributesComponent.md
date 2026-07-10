# `class` `UCharacterAttributesComponent`

**源码头文件:** `EastRimWorld/Character/Components/CharacterAttributesComponent.h`

---

## 功能说明（来自头文件注释）

> 角色属性组件：绑定技能系统组件（ASC），负责响应属性事件与属性值变化。

## 蓝图暴露函数

### 函数 `InitializeWithAbilitySystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|CharacterAttributesComponent" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InASC` | [UEastRimWorldAbilitySystemComponent](../../AbilitySystem/EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|CharacterAttributesComponent") virtual void InitializeWithAbilitySystem(UEastRimWorldAbilitySystemComponent* InASC);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Initialize the component using an ability system component.

---

### 函数 `UninitializeFromAbilitySystem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|CharacterAttributesComponent" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|CharacterAttributesComponent") virtual void UninitializeFromAbilitySystem();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Uninitialize the component, clearing any references to the ability system.

---
