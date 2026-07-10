# `struct` `FWorldSectBattleFlagConfig`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## 功能说明（来自头文件注释）

> 门派战旗子配置，用于创建 DataTable。

## 蓝图暴露变量

### 属性 `FlagID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 FlagID = INDEX_NONE;` |

**说明:**

> 旗子的唯一编号，配置表内独立对应。

---

### 属性 `SectName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName SectName = NAME_None;` |

**说明:**

> 该旗配置所属的门派名。门派战运行时按【防守方门派名 + FlagID】联合查这张表。

---

### 属性 `FlagName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText FlagName;` |

**说明:**

> 旗子的显示名称。

---

### 属性 `FlagType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleFlagType](WorldBattleRuntimeStruct__EWorldSectBattleFlagType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleFlagType FlagType = EWorldSectBattleFlagType::Normal;` |

**说明:**

> 旗子的类型：特殊旗或普通旗。

---

### 属性 `CaptureValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CaptureValue = 0;` |

**说明:**

> 占领该旗子需要累计达到的总占领值。

---

### 属性 `CaptureValuePerSecond`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 CaptureValuePerSecond = 1;` |

**说明:**

> 单个单位每秒提供的基础占领值。时间步长默认按 1 秒计算，实际增量可在运行时按人数差累加。

---

### 属性 `CaptureRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CaptureRadius = 800.f;` |

**说明:**

> 圆形占领范围半径。以旗子生成位置为圆心，角色进入该范围后开始累计占领进度。

---

### 属性 `InitialOwner`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleFlagOwner](WorldBattleRuntimeStruct__EWorldSectBattleFlagOwner.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldSectBattleFlagOwner InitialOwner = EWorldSectBattleFlagOwner::Neutral;` |

**说明:**

> 战斗开始时旗子的初始归属。

---

### 属性 `BuffIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> BuffIDs;` |

**说明:**

> 旗子占有时关联的 Buff ID。

---

### 属性 `MonsterGenerationConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName MonsterGenerationConfigID = NAME_None;` |

**说明:**

> 旗子关联的野怪组 ID。

---
