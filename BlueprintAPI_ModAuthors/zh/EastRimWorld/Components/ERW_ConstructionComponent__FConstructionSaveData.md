# `struct` `FConstructionSaveData`

**源码头文件:** `EastRimWorld/Components/ERW_ConstructionComponent.h`

---

## 功能说明（来自头文件注释）

> 建造组件存档数据

## 蓝图暴露变量

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid Guid;` |

**说明:**

> 组件的Guid

---

### 属性 `Batch`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 Batch { INDEX_NONE };` |

**说明:**

> Action所在批次

---

### 属性 `IsPullDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool IsPullDown { false };` |

**说明:**

> 是否是拆除建筑

---

### 属性 `IsPriori`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool IsPriori { false };` |

**说明:**

> 是否加入优先执行

---

### 属性 `TransBuildingType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETransBuildingType](../ERW_Enumerations__ETransBuildingType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) ETransBuildingType TransBuildingType { ETransBuildingType::None };` |

**说明:**

> 移动建筑类型

---

### 属性 `WorkType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EConstructionWorkType](ERW_ConstructionComponent__EConstructionWorkType.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) EConstructionWorkType WorkType { EConstructionWorkType::Construction };` |

**说明:**

> 本次建造工作的类型（建造或维修建筑）

---

### 属性 `NeedResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , int32> NeedResources;` |

**说明:**

> 建造所需资源
> TMap<资源ID , 数量>

---

### 属性 `CurrentResources`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , int32> CurrentResources;` |

**说明:**

> 当前拥有资源
> TMap<资源ID , 数量>

---

### 属性 `MaxWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 MaxWorkload { 0 };` |

**说明:**

> 完成建造需要工作量

---

### 属性 `CurrentWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 CurrentWorkload { 0 };` |

**说明:**

> 当前接收工作量

---

### 属性 `OwnerData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FUObjectData OwnerData;` |

**说明:**

> Owner的数据

---
