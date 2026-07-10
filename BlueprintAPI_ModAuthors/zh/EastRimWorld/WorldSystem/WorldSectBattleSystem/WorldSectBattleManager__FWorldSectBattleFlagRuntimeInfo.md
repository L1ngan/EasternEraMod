# `struct` `FWorldSectBattleFlagRuntimeInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## 功能说明（来自头文件注释）

> World Sect Battle Flag Runtime Info 数据结构。

## 蓝图暴露变量

### 属性 `FlagType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleFlagType](WorldBattleRuntimeStruct__EWorldSectBattleFlagType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) EWorldSectBattleFlagType FlagType = EWorldSectBattleFlagType::None;` |

**说明:**

> 旗帜类型（普通旗 / 特殊旗）。

---

### 属性 `CurrentOwner`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleFlagOwner](WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, EditAnywhere) EWorldSectBattleFlagOwner CurrentOwner = EWorldSectBattleFlagOwner::Neutral;` |

**说明:**

> 当前归属阵营（进攻方 / 防守方 / 中立）。

---
