# `struct` `FLightSkillResolvedParams`

**源码头文件:** `EastRimWorld/MartialArts/MartialArtsSkillEntryChangeLightSkill.h`

---

## 功能说明（来自头文件注释）

> 轻功运行时解算参数：以技能配置行（FGameAbilityStruct 的 LightSkill 字段）为基准，
> 叠加该武学全部 ChangeLightSkillParam 词条后得到。每次激活轻功时即时计算。

## 蓝图暴露变量

### 属性 `Distance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") float Distance = 0.f;` |

**说明:**

> 移动距离（cm）

---

### 属性 `Speed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") float Speed = 1.f;` |

**说明:**

> 移动速度（cm/s）

---

### 属性 `bTeleportToFront`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") bool bTeleportToFront = false;` |

**说明:**

> 瞬移到目标前方

---

### 属性 `bTeleportToBack`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") bool bTeleportToBack = false;` |

**说明:**

> 瞬移到目标后方

---

### 属性 `TeleportOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") float TeleportOffset = 0.f;` |

**说明:**

> 瞬移落点相对目标朝向的偏移（cm）

---

### 属性 `CastingEffectLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") float CastingEffectLevel = 1.f;` |

**说明:**

> 施法期间 GE 的应用等级

---

### 属性 `BeginSpawns`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FAbilityProjectileStruct>` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") TArray<FAbilityProjectileStruct> BeginSpawns;` |

**说明:**

> 起点生成物

---

### 属性 `EndSpawns`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FAbilityProjectileStruct>` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") TArray<FAbilityProjectileStruct> EndSpawns;` |

**说明:**

> 终点生成物

---

### 属性 `CollisionSpawns`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FAbilityProjectileStruct>` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") TArray<FAbilityProjectileStruct> CollisionSpawns;` |

**说明:**

> 碰撞处生成物（撞到障碍时在命中点生成）

---

### 属性 `CastingTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") FGameplayTagContainer CastingTags;` |

**说明:**

> 施法期间标签

---

### 属性 `CastingGEs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TSubclassOf<UGameplayEffect>>` |
| 反射说明符 | BlueprintReadOnly, Category="LightSkill" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="LightSkill") TArray<TSubclassOf<UGameplayEffect>> CastingGEs;` |

**说明:**

> 施法期间 GE

---
