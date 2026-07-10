# `struct` `FWorldSectBattleEventConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## 功能说明（来自头文件注释）

> 门派战事件库配置。士气库、击杀库、财富库、倒计时库四张表共用这个结构。

## 蓝图暴露变量

### 属性 `EventID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 EventID = INDEX_NONE;` |

**说明:**

> 事件唯一编号。策划填写，用于日志、调试和识别具体事件。

---

### 属性 `EventName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText EventName;` |

**说明:**

> 事件显示名称。可用于 UI 提示、战报或策划查看。

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Description;` |

**说明:**

> 事件描述文本。可用于 UI 提示、战报或调试信息。

---

### 属性 `EventType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleEventType](WorldBattleRuntimeStruct__EWorldSectBattleEventType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleEventType EventType = EWorldSectBattleEventType::None;` |

**说明:**

> 事件类型。决定代码执行刷怪、刷宝箱还是加 Buff。

---

### 属性 `ContentID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ContentID = NAME_None;` |

**说明:**

> 事件内容 ID。
> 刷怪：填写怪物生成配置行名。
> 刷宝箱：填写宝箱配置 ID。
> 加 Buff：填写 BuffID。

---

### 属性 `TargetCamp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleEventTargetCamp](WorldBattleRuntimeStruct__EWorldSectBattleEventTargetCamp.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleEventTargetCamp TargetCamp = EWorldSectBattleEventTargetCamp::None;` |

**说明:**

> 目标阵营。加 Buff 事件会按这个字段决定 Buff 加给谁；刷怪、刷宝箱可填无。

---

### 属性 `SpawnPointType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleEventSpawnPointType](WorldBattleRuntimeStruct__EWorldSectBattleEventSpawnPointType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleEventSpawnPointType SpawnPointType = EWorldSectBattleEventSpawnPointType::None;` |

**说明:**

> 刷新坐标类型。刷怪和刷宝箱会按这个类型从当前门派布局中随机取坐标；加 Buff 可填无。

---
