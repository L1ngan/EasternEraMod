# `struct` `FGWOSector`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 世界优化扇区数据（位置、状态、冻结演员与生成点列表）

## 蓝图暴露变量

### 属性 `boxRef`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UBoxComponent*` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(Transient) class UBoxComponent* boxRef = nullptr;` |

**说明:**

> 扇区对应的盒体组件引用（运行时缓存，不序列化）

---

### 属性 `location`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector location = FVector::ZeroVector;` |

**说明:**

> 扇区的世界位置

---

### 属性 `sectorStatus`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOSectorStatus](GWOTypes__EGWOSectorStatus.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() EGWOSectorStatus sectorStatus = EGWOSectorStatus::INACTIVE;` |

**说明:**

> 扇区当前的运行状态（激活/缓存/闲置/未激活）

---

### 属性 `sectorVisual`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOSectorVisual](GWOTypes__EGWOSectorVisual.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() EGWOSectorVisual sectorVisual = EGWOSectorVisual::SIDE;` |

**说明:**

> 扇区的调试可视化类别

---

### 属性 `sectorID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int sectorID = -1;` |

**说明:**

> 扇区的ID（-1表示无效）

---

### 属性 `frozenActorsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOFrozenActorStruct](GWOTypes__FGWOFrozenActorStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOFrozenActorStruct> frozenActorsArr;` |

**说明:**

> 该扇区内所有冻结演员的数据数组

---

### 属性 `spawnerPointsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOSpawnerStruct](GWOTypes__FGWOSpawnerStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOSpawnerStruct> spawnerPointsArr;` |

**说明:**

> 该扇区内各生成器及其生成点索引的数组

---
