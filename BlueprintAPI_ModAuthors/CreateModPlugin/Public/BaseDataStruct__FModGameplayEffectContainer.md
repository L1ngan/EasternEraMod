# `struct` `FModGameplayEffectContainer`

**源码头文件：** `CreateModPlugin/Public/BaseDataStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `TargetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UEastRimWorldTargetType>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer) TSubclassOf<UEastRimWorldTargetType> TargetType;` |

**源码注释：**

> Sets the way that targeting happens

---

### 属性 `TargetGameplayEffectClasses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSubclassOf<UGameplayEffect>>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = GameplayEffectContainer) TArray<TSubclassOf<UGameplayEffect>> TargetGameplayEffectClasses;` |

**源码注释：**

> List of gameplay effects to apply to the targets

---
