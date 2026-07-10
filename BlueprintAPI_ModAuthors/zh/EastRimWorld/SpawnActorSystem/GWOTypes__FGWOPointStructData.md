# `struct` `FGWOPointStructData`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 单个生成点的数据（箱体变换、实例索引、激活状态及生成条目列表）

## 蓝图暴露变量

### 属性 `boxTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FTransform boxTransform;` |

**说明:**

> 该点对应生成箱体的变换

---

### 属性 `instanceIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int instanceIndex = 0;` |

**说明:**

> 该点对应的实例化网格实例索引

---

### 属性 `bIsSpawnPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bIsSpawnPoint = false;` |

**说明:**

> 该点是否被选为生成点

---

### 属性 `bIsActivate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bIsActivate = false;` |

**说明:**

> 该点当前是否处于激活状态

---

### 属性 `spawnDataArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOActorSpawnStruct> spawnDataArr;` |

**说明:**

> 分配到该点的演员生成条目数组

---

### 属性 `spawnPointCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int spawnPointCount = 0;` |

**说明:**

> 该点的生成点计数

---
