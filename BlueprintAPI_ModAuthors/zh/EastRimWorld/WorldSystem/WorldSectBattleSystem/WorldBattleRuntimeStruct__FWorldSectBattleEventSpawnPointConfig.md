# `struct` `FWorldSectBattleEventSpawnPointConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## 功能说明（来自头文件注释）

> 门派战事件刷新点配置。每个门派可以为进攻方、防守方、中立分别配置多个坐标，事件执行时按类型随机取一个。

## 蓝图暴露变量

### 属性 `SpawnPointType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleEventSpawnPointType](WorldBattleRuntimeStruct__EWorldSectBattleEventSpawnPointType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleEventSpawnPointType SpawnPointType = EWorldSectBattleEventSpawnPointType::None;` |

**说明:**

> 刷新点类型。和事件库里的 SpawnPointType 对应。

---

### 属性 `SpawnTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform SpawnTransform = FTransform::Identity;` |

**说明:**

> 事件实际刷新坐标。刷怪和刷宝箱会使用这个 Transform。

---
