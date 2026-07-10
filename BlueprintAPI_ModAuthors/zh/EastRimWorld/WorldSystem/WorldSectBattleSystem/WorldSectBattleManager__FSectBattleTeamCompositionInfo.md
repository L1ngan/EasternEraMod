# `struct` `FSectBattleTeamCompositionInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## 功能说明（来自头文件注释）

> 攻/防某一方的编制构成（按门派层级细分），供 UI 显示"内门弟子 / 外门弟子 / 支援"人数。

## 蓝图暴露变量

### 属性 `InnerDiscipleCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") int32 InnerDiscipleCount = 0;` |

**说明:**

> 内门弟子数量。

---

### 属性 `OuterDiscipleCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") int32 OuterDiscipleCount = 0;` |

**说明:**

> 外门弟子数量。

---

### 属性 `SupportCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Runtime") int32 SupportCount = 0;` |

**说明:**

> 支援数量（暂留位，后续接入，当前恒为 0）。

---
