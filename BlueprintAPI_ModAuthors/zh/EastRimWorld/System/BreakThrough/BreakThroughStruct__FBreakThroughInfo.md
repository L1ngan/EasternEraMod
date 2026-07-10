# `struct` `FBreakThroughInfo`

**源码头文件:** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## 功能说明（来自头文件注释）

> 突破信息实例

## 蓝图暴露变量

### 属性 `BreakThroughGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid BreakThroughGuid = FGuid();` |

**说明:**

> 突破唯一标识

---

### 属性 `CharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid CharacterGuid;` |

**说明:**

> 角色Guid

---

### 属性 `RealmLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 RealmLevel = 1;` |

**说明:**

> 突破的境界等级

---

### 属性 `RoomGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid RoomGuid;` |

**说明:**

> 选择的房间Guid

---

### 属性 `TrainingRoomType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EFiveElementType](../../Struct/CommonEnum__EFiveElementType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EFiveElementType TrainingRoomType = EFiveElementType::None;` |

**说明:**

> 突破开始时记录的练功房类型（用于检查房间是否变化）

---

### 属性 `TrainingRoomLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TrainingRoomLevel = 0;` |

**说明:**

> 突破开始时记录的练功房等级（用于检查房间是否变化）

---

### 属性 `BreakThroughProgress`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float BreakThroughProgress = 0;` |

**说明:**

> 突破已增加的进度（突破点数）

---

### 属性 `PendingSkillIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> PendingSkillIDs;` |

**说明:**

> 待发放的技能奖励ID

---

### 属性 `State`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBreakThroughState](BreakThroughStruct__EBreakThroughState.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EBreakThroughState State = EBreakThroughState::NotStarted;` |

**说明:**

> 突破状态

---

### 属性 `ElementValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ElementValue = 0.f;` |

**说明:**

> 五行属性

---

### 属性 `BreakthroughNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BreakthroughNumber = 0;` |

**说明:**

> Breakthrough Number 字段。

---
