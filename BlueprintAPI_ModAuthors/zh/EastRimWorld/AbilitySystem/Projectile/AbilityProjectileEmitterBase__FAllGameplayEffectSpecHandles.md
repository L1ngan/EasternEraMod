# `struct` `FAllGameplayEffectSpecHandles`

**源码头文件:** `EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase.h`

---

## 功能说明（来自头文件注释）

> 投射物携带的全部GameplayEffect效果信息集合（效果规格句柄、控制效果、发起者、目标、建筑伤害等）

## 蓝图暴露变量

### 属性 `GameplayEffectSpecHandles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGameplayEffectSpecHandle>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FGameplayEffectSpecHandle> GameplayEffectSpecHandles;` |

**说明:**

> GameplayEffect效果规格句柄数组

---

### 属性 `ControlEffect`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FControlEffectData>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FControlEffectData> ControlEffect;` |

**说明:**

> 控制效果数据数组

---

### 属性 `InstigatorActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> InstigatorActor = nullptr;` |

**说明:**

> 发起者

---

### 属性 `BuildingDamage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BuildingDamage = 0.f;` |

**说明:**

> 建筑物伤害

---

### 属性 `Target`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TWeakObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TWeakObjectPtr<AActor> Target = nullptr;` |

**说明:**

> 目标

---

### 属性 `InstigatorGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGuid InstigatorGuid;` |

**说明:**

> 发起者GUID

---
