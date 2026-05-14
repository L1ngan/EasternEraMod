# `struct` `FActivateAbilitiesConfig`

**源码头文件:** `EastRimWorld/AbilitySystem/EffectComponent/ActivateAbilitiesGameplayEffect.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `AbilityID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") FName AbilityID;` |

---

### 属性 `LevelScalableFloat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FScalableFloat` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition", DisplayName = "Level", meta=(UIMin=0.0)) FScalableFloat LevelScalableFloat = FScalableFloat{ 1.0f };` |

**源码注释:**

> What level to grant this ability at

---

### 属性 `InputID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") int32 InputID = INDEX_NONE;` |

**源码注释:**

> Input ID to bind this ability to

---

### 属性 `RemovalPolicy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EActivateAbilitiesRemovePolicy` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") EActivateAbilitiesRemovePolicy RemovalPolicy = EActivateAbilitiesRemovePolicy::RemoveAbilityOnEnd;` |

**源码注释:**

> What will remove this ability later

---

### 属性 `ControlEffectData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FControlEffectData` |
| 反射说明符 | Category="Ability Definition" |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, Category = "Ability Definition") FControlEffectData ControlEffectData;` |

---
