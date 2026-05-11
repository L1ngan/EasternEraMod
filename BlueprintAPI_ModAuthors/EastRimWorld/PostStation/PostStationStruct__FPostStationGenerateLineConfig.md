# `struct` `FPostStationGenerateLineConfig`

**源码头文件：** `EastRimWorld/PostStation/PostStationStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName ID;` |

**源码注释：**

> 此配置ID

---

### 属性 `PostStationGenerateIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> PostStationGenerateIDs;` |

**源码注释：**

> 关联DT_PostStationGenerateConfig表

---

### 属性 `FirstTimeSpawnDelay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float FirstTimeSpawnDelay;` |

**源码注释：**

> 第一次开始生成的延迟(无视生成配置的时间)

---

### 属性 `SpawnTimeRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntPoint` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FIntPoint SpawnTimeRange;` |

**源码注释：**

> 刷新时间随机范围(基于生成配置的加值)

---

### 属性 `Sockets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> Sockets;` |

**源码注释：**

> NPC在驿站停留的位置(驿站的插槽)

---

### 属性 `SpawnSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName SpawnSocket;` |

**源码注释：**

> NPC生成中心位置(驿站的插槽)

---

### 属性 `SpawnPointHalfRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float SpawnPointHalfRadius = 1000.f;` |

**源码注释：**

> NPC生成范围半径

---

### 属性 `GenerateConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FCommonTaskCondition>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FCommonTaskCondition> GenerateConditions;` |

**源码注释：**

> 开始生成的条件

---

### 属性 `DestroyConditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FCommonTaskCondition>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FCommonTaskCondition> DestroyConditions;` |

**源码注释：**

> 删除条件

---

### 属性 `RetryGenerateInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) float RetryGenerateInterval;` |

**源码注释：**

> 生成阻塞后(比如位置不够)重新尝试生成的时间

---
