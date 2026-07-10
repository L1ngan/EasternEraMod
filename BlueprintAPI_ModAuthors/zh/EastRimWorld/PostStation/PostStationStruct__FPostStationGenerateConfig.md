# `struct` `FPostStationGenerateConfig`

**源码头文件:** `EastRimWorld/PostStation/PostStationStruct.h`

---

## 功能说明（来自头文件注释）

> 驿站生成配置表行（势力ID、权重、生成配置ID、销毁条件与存续时间）

## 蓝图暴露变量

### 属性 `WorldForceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName WorldForceID;` |

**说明:**

> 势力ID

---

### 属性 `BaseWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 BaseWeight;` |

**说明:**

> 基础权重（最终权重=BaseWeight+好感度*FavorabilityWeightRate）

---

### 属性 `FavorabilityWeightRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float FavorabilityWeightRate;` |

**说明:**

> 势力好感度权重系数

---

### 属性 `GenerateConfigIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> GenerateConfigIDs;` |

**说明:**

> 生成配置ID(DT_MonsterGenerationConfig表ID)

---

### 属性 `DestroyCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCommonTaskCondition> DestroyCondition;` |

**说明:**

> 该生成的销毁条件列表

---

### 属性 `DestroyRemoveTaskRecord`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> DestroyRemoveTaskRecord;` |

**说明:**

> NPC销毁清除任务记录

---

### 属性 `ExistTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 ExistTime;` |

**说明:**

> 生成对象的存续时间(-1无限制)

---
