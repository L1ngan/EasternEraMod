# `struct` `FEastRimWorldAbilityMontageFailureMessage`

**源码头文件:** `EastRimWorld/AbilitySystem/Abilities/EastRimWorldGameplayAbility.h`

---

## 功能说明（来自头文件注释）

> Failure reason that can be used to play an animation montage when a failure occurs

## 蓝图暴露变量

### 属性 `PlayerController`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<APlayerController>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<APlayerController> PlayerController = nullptr;` |

---

### 属性 `FailureTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FGameplayTagContainer FailureTags;` |

**源码注释:**

> All the reasons why this ability has failed

---

### 属性 `FailureMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UAnimMontage>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TObjectPtr<UAnimMontage> FailureMontage = nullptr;` |

---
