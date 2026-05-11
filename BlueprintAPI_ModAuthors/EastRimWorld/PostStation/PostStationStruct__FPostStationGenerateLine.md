# `struct` `FPostStationGenerateLine`

**源码头文件：** `EastRimWorld/PostStation/PostStationStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `GenerateLineConfig`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FPostStationGenerateLineConfig` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FPostStationGenerateLineConfig GenerateLineConfig;` |

---

### 属性 `GenerateInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FPostStationGenerateInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FPostStationGenerateInfo> GenerateInfos;` |

---

### 属性 `GenerateState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EPostStationGenerateState` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPostStationGenerateState GenerateState;` |

**源码注释：**

> 当前的生成状态

---

### 属性 `GenerateConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FCommonTaskCondition>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCommonTaskCondition> GenerateConditions;` |

**源码注释：**

> 开始生成的条件

---

### 属性 `bCanStartGenerate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bCanStartGenerate;` |

**源码注释：**

> 能否开始生成

---

### 属性 `RetryGenerateInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float RetryGenerateInterval;` |

**源码注释：**

> 重新尝试生成的间隔

---

### 属性 `OccupySockets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> OccupySockets;` |

**源码注释：**

> 旧版每线独立池；运行时由 AEasternEraPostStationActor 的 NPCStation* 统一维护，读档后会清空并迁移

---

### 属性 `EmptySockets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> EmptySockets;` |

---

### 属性 `SpawnTimesCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 SpawnTimesCount;` |

**源码注释：**

> 总计生成过多少次

---
