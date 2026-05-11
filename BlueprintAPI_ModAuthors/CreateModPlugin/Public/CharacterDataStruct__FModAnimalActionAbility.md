# `struct` `FModAnimalActionAbility`

**源码头文件：** `CreateModPlugin/Public/CharacterDataStruct.h`

---

## 功能说明（来自头文件注释）

> 动物ActionAbility配置表结构

## 蓝图暴露变量

### 属性 `BehaviorStartAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32, TSoftObjectPtr<UAnimMontage>> BehaviorStartAnimMontage;` |

**源码注释：**

> 动画蒙太奇

---

### 属性 `BehaviorAnimSections`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32,[FModCharacterActionAbilityAnimSections](CharacterDataStruct__FModCharacterActionAbilityAnimSections.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Animation" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation") TMap<int32,FModCharacterActionAbilityAnimSections> BehaviorAnimSections;` |

**源码注释：**

> 动画蒙太奇片段

---
