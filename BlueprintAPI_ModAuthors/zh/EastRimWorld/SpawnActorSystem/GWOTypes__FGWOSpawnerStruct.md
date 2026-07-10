# `struct` `FGWOSpawnerStruct`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 扇区中记录的生成器条目（生成器GUID及其点索引列表）

## 蓝图暴露变量

### 属性 `SpawnerActorGUID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FGuid SpawnerActorGUID;` |

**说明:**

> 生成器Actor的GUID

---

### 属性 `pointsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<int> pointsArr;` |

**说明:**

> 该生成器在此扇区内的生成点索引数组

---
