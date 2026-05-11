# `struct` `FMonsterAttackSetting`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 怪物巢穴攻击设置

## 蓝图暴露变量

### 属性 `WaitingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float WaitingTime = 0.f;` |

**源码注释:**

> 攻击的等待时间

---

### 属性 `IntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float IntervalTime = 100.f;` |

**源码注释:**

> 间隔时间

---

### 属性 `MonsterID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> MonsterID;` |

**源码注释:**

> 发起攻击时的指定怪物ID 不为空时 只有包含的怪物才会攻击

---

### 属性 `AttackNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 AttackNumber = INDEX_NONE;` |

**源码注释:**

> 发起攻击时的指定数量 -1为当前营地所有怪物 会受到指定怪物id限制

---

### 属性 `RunNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 RunNumber = INDEX_NONE;` |

**源码注释:**

> 此设置运行的次数 -1 为无限次

---

### 属性 `MonsterAttackState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EMonsterAttackState` |
| 反射说明符 | BlueprintReadOnly, Category="Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category = "Runtime") EMonsterAttackState MonsterAttackState = EMonsterAttackState::None;` |

**源码注释:**

> 状态 不配置

---

### 属性 `StateTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category = "Runtime") float StateTime = 0.f;` |

**源码注释:**

> 当前状态时间 不配置

---
