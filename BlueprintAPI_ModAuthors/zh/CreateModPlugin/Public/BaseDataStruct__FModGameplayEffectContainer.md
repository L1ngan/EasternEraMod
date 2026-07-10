# `struct` `FModGameplayEffectContainer`

**源码头文件:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## 功能说明（来自头文件注释）

> GameplayEffect 容器，定义目标选取方式（TargetType）及要施加给目标的一组 GameplayEffect

## 蓝图暴露变量

### 属性 `TargetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UEastRimWorldTargetType>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer) TSubclassOf<UEastRimWorldTargetType> TargetType;` |

**说明:**

> Sets the way that targeting happens

---

### 属性 `TargetGameplayEffectClasses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSubclassOf<UGameplayEffect>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer) TArray<TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses;` |

**说明:**

> List of gameplay effects to apply to the targets

---
