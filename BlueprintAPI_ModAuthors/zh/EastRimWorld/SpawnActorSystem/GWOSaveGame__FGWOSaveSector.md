# `struct` `FGWOSaveSector`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

## 功能说明（来自头文件注释）

> 单个扇区的存档数据，含位置、状态与区内冻结Actor列表（由运行期FGWOSector转换而来）

## 蓝图暴露变量

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

> 扇区状态（EGWOSectorStatus，默认INACTIVE）

---

### 属性 `sectorVisual`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOSectorVisual](GWOTypes__EGWOSectorVisual.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() EGWOSectorVisual sectorVisual = EGWOSectorVisual::SIDE;` |

**说明:**

> 扇区可视类型（EGWOSectorVisual，默认SIDE）

---

### 属性 `sectorID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int sectorID = -1;` |

**说明:**

> 扇区的ID，-1表示无效

---

### 属性 `frozenActorsArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGWOSaveFrozenActorStruct](GWOSaveGame__FGWOSaveFrozenActorStruct.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FGWOSaveFrozenActorStruct> frozenActorsArr;` |

**说明:**

> 该扇区内冻结Actor的存档数据数组

---
