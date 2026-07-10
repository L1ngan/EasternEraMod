# `struct` `FGWOSpawnerIdentification`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 单个生成器的标识与工作数据集合（生成列表、点集、优先级等）

## 蓝图暴露变量

### 属性 `spawnerUniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FString spawnerUniqID = "";` |

**说明:**

> 生成器的唯一ID字符串

---

### 属性 `collectionActorsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOActorSpawnStruct> collectionActorsArr;` |

**说明:**

> 从生成列表收集的全部演员条目数组

---

### 属性 `actorsSpawnSetArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOActorSpawnStruct> actorsSpawnSetArr;` |

**说明:**

> 当前实际参与生成的演员条目数组

---

### 属性 `allPointsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOPointStructData](GWOTypes__FGWOPointStructData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOPointStructData> allPointsArr;` |

**说明:**

> 该生成器所有生成点的数据数组

---

### 属性 `spawnPointIndexesArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<int> spawnPointIndexesArr;` |

**说明:**

> 被选为生成点的点索引数组

---

### 属性 `currentPriority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int currentPriority = -1;` |

**说明:**

> 生成器当前处理的波次/优先级（-1表示未开始）

---

### 属性 `numberActorsPreparedForSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int numberActorsPreparedForSpawn = 0;` |

**说明:**

> 已准备好等待生成的演员数量

---
