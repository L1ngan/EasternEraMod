# `struct` `FSectBattleBuffDisplayItem`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## 功能说明（来自头文件注释）

> 单条 buff 的显示数据（UI 直接读，不必接触角色实例）。

## 蓝图暴露变量

### 属性 `Buff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCommonBuff](../../Struct/CommonStruct__FCommonBuff.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") FCommonBuff Buff;` |

**说明:**

> 原始 buff 数据（图标 BuffIcon / 名字 BuffName / 描述 Describe / 剩余时间 Duration 等都在内）。

---

### 属性 `Kind`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ESectBattleBuffKind](WorldSectBattleManager__ESectBattleBuffKind.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") ESectBattleBuffKind Kind = ESectBattleBuffKind::Other;` |

**说明:**

> buff 分类：士气 / 事件 / 其它（按 manager 记录的 OriginGuid 判定）。

---

### 属性 `MoraleStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") int32 MoraleStage = 0;` |

**说明:**

> 士气 buff 的档位（= 该方占旗数；Kind==Morale 时有效，其它为 0）。

---
