# `struct` `FWorldSectBattleDiscipleSettlementInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## 功能说明（来自头文件注释）

> World Sect Battle Disciple Settlement Info 数据结构。

## 蓝图暴露变量

### 属性 `CharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") FGuid CharacterGuid;` |

**说明:**

> Character Guid 字段。

---

### 属性 `CharacterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") FText CharacterName;` |

**说明:**

> Character Name 字段。

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") int32 RealmLevel = 0;` |

**说明:**

> Realm Level 字段。

---

### 属性 `RealmName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") FText RealmName;` |

**说明:**

> Realm Name 字段。

---

### 属性 `KillEnemyCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") int32 KillEnemyCount = 0;` |

**说明:**

> Kill Enemy Count 字段。

---

### 属性 `DamageDoneToEnemy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") float DamageDoneToEnemy = 0.f;` |

**说明:**

> Damage Done To Enemy 字段。

---

### 属性 `DamageTakenFromEnemy`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") float DamageTakenFromEnemy = 0.f;` |

**说明:**

> Damage Taken From Enemy 字段。

---

### 属性 `DeathCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") int32 DeathCount = 0;` |

**说明:**

> Death Count 字段。

---

### 属性 `KD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") float KD = 0.f;` |

**说明:**

> KD。

---

### 属性 `bIsLeader`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Settlement" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "WorldSectBattle|Settlement") bool bIsLeader = false;` |

**说明:**

> 是否为本方领队（玩家主控 FightPawn / 队伍领队），UI 可据此高亮或置顶。

---
