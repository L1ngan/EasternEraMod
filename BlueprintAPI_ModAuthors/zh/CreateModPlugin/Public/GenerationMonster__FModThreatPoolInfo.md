# `struct` `FModThreatPoolInfo`

**源码头文件:** `CreateModPlugin/Public/GenerationMonster.h`

---

## 功能说明（来自头文件注释）

> 威胁池信息

## 蓝图暴露变量

### 属性 `ThreatPoolType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModThreatType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EModThreatType ThreatPoolType = EModThreatType::None;` |

**源码注释:**

> 威胁类型

---

### 属性 `RaidPoints`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 RaidPoints = 0;` |

**源码注释:**

> 袭击点数(必须为整数，随机有用)

---

### 属性 `CooldownTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float CooldownTime = 9600.f;` |

**源码注释:**

> 冷却时间(秒)

---

### 属性 `GenerationIDsMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FModNameIDArray](GenerationMonster__FModNameIDArray.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<FName,FModNameIDArray> GenerationIDsMap;` |

**源码注释:**

> 创建生成的配置ID<地图名称,生成配置ID数组>创建怪物IDs(调用 DT_MonsterGenerationConfig ) /敌对势力袭击IDs （调用 DT_EnemyAttackGenerationConfig）

---

### 属性 `SetModEnabled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool SetModEnabled = true;` |

**源码注释:**

> 是否启用此威胁

---
