# `struct` `FSectBattleCharacterBuffDisplay`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## 功能说明（来自头文件注释）

> 一个角色（带进战场的弟子 / FightPawn）的整组 buff 显示数据。

## 蓝图暴露变量

### 属性 `CharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") FGuid CharacterGuid;` |

**说明:**

> Character Guid 字段。

---

### 属性 `CharacterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") FText CharacterName;` |

**说明:**

> Character Name 字段。

---

### 属性 `bIsFightPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") bool bIsFightPawn = false;` |

**说明:**

> 是否为玩家操控的 FightPawn。

---

### 属性 `TeamRole`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldBattleRuntimeTeamRole](WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") EWorldBattleRuntimeTeamRole TeamRole = EWorldBattleRuntimeTeamRole::None;` |

**说明:**

> 所属阵营（进攻方 / 防守方）。

---

### 属性 `Buffs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FSectBattleBuffDisplayItem](WorldSectBattleManager__FSectBattleBuffDisplayItem.md)> |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") TArray<FSectBattleBuffDisplayItem> Buffs;` |

**说明:**

> 该角色当前要显示的 buff 列表（已过滤 bShow=false）。

---
