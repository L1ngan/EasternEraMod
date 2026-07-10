# `struct` `FWorldSectBattleFlagPointConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## 功能说明（来自头文件注释）

> 门派战中一个旗子的点位配置。

## 蓝图暴露变量

### 属性 `FlagID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 FlagID = INDEX_NONE;` |

**说明:**

> 对应 FWorldSectBattleFlagConfig 里的 FlagID。

---

### 属性 `FlagTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform FlagTransform = FTransform::Identity;` |

**说明:**

> 旗子在战场里的生成变换，包含位置、朝向和缩放。

---
