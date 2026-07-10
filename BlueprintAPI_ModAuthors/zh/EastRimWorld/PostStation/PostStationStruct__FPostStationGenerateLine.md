# `struct` `FPostStationGenerateLine`

**源码头文件:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## 功能说明（来自头文件注释）

> 驿站一条生产线的运行时数据（线路配置、各槽生成信息、生成状态与插槽池）

## 蓝图暴露变量

### 属性 `GenerateLineConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FPostStationGenerateLineConfig](PostStationStruct__FPostStationGenerateLineConfig.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FPostStationGenerateLineConfig GenerateLineConfig;` |

**说明:**

> 该生产线对应的配置（FPostStationGenerateLineConfig）

---

### 属性 `GenerateInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPostStationGenerateInfo](PostStationStruct__FPostStationGenerateInfo.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPostStationGenerateInfo> GenerateInfos;` |

**说明:**

> 该生产线各槽位的生成信息列表

---

### 属性 `GenerateState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EPostStationGenerateState](PostStationStruct__EPostStationGenerateState.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPostStationGenerateState GenerateState;` |

**说明:**

> 当前的生成状态

---

### 属性 `GenerateConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCommonTaskCondition> GenerateConditions;` |

**说明:**

> 开始生成的条件

---

### 属性 `bCanStartGenerate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bCanStartGenerate;` |

**说明:**

> 能否开始生成

---

### 属性 `RetryGenerateInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RetryGenerateInterval;` |

**说明:**

> 重新尝试生成的间隔

---

### 属性 `OccupySockets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> OccupySockets;` |

**说明:**

> 旧版每线独立池；运行时由 AEasternEraPostStationActor 的 NPCStation* 统一维护，读档后会清空并迁移

---

### 属性 `EmptySockets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> EmptySockets;` |

**说明:**

> 旧版每线独立的空闲插槽池；运行时由驿站Actor的NPCStation统一池维护，读档后会清空并迁移

---

### 属性 `SpawnTimesCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 SpawnTimesCount;` |

**说明:**

> 总计生成过多少次

---
