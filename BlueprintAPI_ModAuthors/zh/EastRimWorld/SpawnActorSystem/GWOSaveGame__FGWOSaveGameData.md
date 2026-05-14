# `struct` `FGWOSaveGameData`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `sectorsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOSaveSector](GWOSaveGame__FGWOSaveSector.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOSaveSector> sectorsArr;` |

---

### 属性 `activeSectorsIndexesArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<int> activeSectorsIndexesArr;` |

---

### 属性 `cacheSectorsIndexesArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<int> cacheSectorsIndexesArr;` |

---

### 属性 `defrostQueueArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOSaveFrozenActorStruct](GWOSaveGame__FGWOSaveFrozenActorStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOSaveFrozenActorStruct> defrostQueueArr;` |

---

### 属性 `spawnerQueueArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOActorSpawnStruct> spawnerQueueArr;` |

---

### 属性 `unusedUniqIDArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<int> unusedUniqIDArr;` |

---

### 属性 `worldActorsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOActorSpawnStruct](GWOTypes__FGWOActorSpawnStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOActorSpawnStruct> worldActorsArr;` |

---

### 属性 `spawnersArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOSpawnerIdentification](GWOTypes__FGWOSpawnerIdentification.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOSpawnerIdentification> spawnersArr;` |

---

### 属性 `currentUniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int currentUniqID = -1;` |

---
