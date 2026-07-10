# `struct` `FMonsterGenerationInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 怪物生成

## 蓝图暴露变量

### 属性 `MonsterGenerationConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FMonsterGenerationConfig](WorldStruct__FMonsterGenerationConfig.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FMonsterGenerationConfig MonsterGenerationConfig;` |

**说明:**

> 生成的配置ID

---

### 属性 `GenerationGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid GenerationGuid;` |

**说明:**

> 生成信息Guid

---

### 属性 `GenerationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGenerationStateType](WorldStruct__EGenerationStateType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EGenerationStateType GenerationState = EGenerationStateType::None;` |

**说明:**

> 生成的状态

---

### 属性 `GenerationMonster`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> GenerationMonster;` |

**说明:**

> 生成的怪物

---

### 属性 `StateTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float StateTime = 0.f;` |

**说明:**

> 当前状态时间

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = 255;` |

**说明:**

> TeamID

---

### 属性 `bUpdateGenerationTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bUpdateGenerationTime = false;` |

**说明:**

> 广播生成事件

---

### 属性 `NeeGenerateSetData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGenerationSetData](WorldStruct__FGenerationSetData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGenerationSetData> NeeGenerateSetData;` |

**说明:**

> 需要生成的实例

---
