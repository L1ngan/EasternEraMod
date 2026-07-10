# `struct` `FActivateAbilitiesConfig`

**源码头文件:** `EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect.h`

---

## 功能说明（来自头文件注释）

> GE授予技能的配置项：技能ID、授予等级、输入ID、移除策略与控制效果数据

## 蓝图暴露变量

### 属性 `AbilityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") FName AbilityID;` |

**说明:**

> 要授予的技能ID

---

### 属性 `LevelScalableFloat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FScalableFloat` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition", DisplayName = "Level", meta=(UIMin=0.0)) FScalableFloat LevelScalableFloat = FScalableFloat{ 1.0f };` |

**说明:**

> What level to grant this ability at

---

### 属性 `InputID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") int32 InputID = INDEX_NONE;` |

**说明:**

> Input ID to bind this ability to

---

### 属性 `RemovalPolicy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EActivateAbilitiesRemovePolicy](ActivateAbilitiesGameplayEffect__EActivateAbilitiesRemovePolicy.md) |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") EActivateAbilitiesRemovePolicy RemovalPolicy = EActivateAbilitiesRemovePolicy::RemoveAbilityOnEnd;` |

**说明:**

> What will remove this ability later

---

### 属性 `ControlEffectData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FControlEffectData` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") FControlEffectData ControlEffectData;` |

**说明:**

> 授予技能时附带的控制效果数据

---
