# `struct` `FAllGameplayEffectSpecHandles`

**源码头文件：** `EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `GameplayEffectSpecHandles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayEffectSpecHandle>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGameplayEffectSpecHandle> GameplayEffectSpecHandles;` |

---

### 属性 `InstigatorActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> InstigatorActor = nullptr;` |

**源码注释：**

> 发起者

---

### 属性 `BuildingDamage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BuildingDamage = 0.f;` |

**源码注释：**

> 建筑物伤害

---

### 属性 `Target`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> Target = nullptr;` |

**源码注释：**

> 目标

---

### 属性 `InstigatorGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid InstigatorGuid;` |

**源码注释：**

> 发起者GUID

---
