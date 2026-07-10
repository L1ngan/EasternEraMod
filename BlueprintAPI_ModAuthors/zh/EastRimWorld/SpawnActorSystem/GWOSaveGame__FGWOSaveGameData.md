# `struct` `FGWOSaveGameData`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

## 功能说明（来自头文件注释）

> GWO世界优化系统的整体存档数据，包含扇区、解冻/生成队列、生成器标识与唯一ID分配状态

## 蓝图暴露变量

### 属性 `sectorsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOSaveSector](GWOSaveGame__FGWOSaveSector.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOSaveSector> sectorsArr;` |

**说明:**

> 所有扇区的存档数据数组

---

### 属性 `activeSectorsIndexesArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<int> activeSectorsIndexesArr;` |

**说明:**

> 活跃扇区的索引数组

---

### 属性 `cacheSectorsIndexesArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<int> cacheSectorsIndexesArr;` |

**说明:**

> 缓存扇区的索引数组

---

### 属性 `defrostQueueArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOSaveFrozenActorStruct](GWOSaveGame__FGWOSaveFrozenActorStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOSaveFrozenActorStruct> defrostQueueArr;` |

**说明:**

> 等待解冻生成的冻结Actor队列

---

### 属性 `spawnerQueueArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOActorSpawnStruct> spawnerQueueArr;` |

**说明:**

> 生成器待生成Actor的队列（FGWOActorSpawnStruct）

---

### 属性 `unusedUniqIDArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<int> unusedUniqIDArr;` |

**说明:**

> 已回收待复用的唯一ID数组

---

### 属性 `worldActorsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOActorSpawnStruct> worldActorsArr;` |

**说明:**

> 世界Actor的生成数据数组（FGWOActorSpawnStruct）

---

### 属性 `spawnersArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOSpawnerIdentification](GWOTypes__FGWOSpawnerIdentification.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOSpawnerIdentification> spawnersArr;` |

**说明:**

> 生成器标识信息数组（FGWOSpawnerIdentification）

---

### 属性 `currentUniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int currentUniqID = -1;` |

**说明:**

> 当前已分配到的最新唯一ID

---
