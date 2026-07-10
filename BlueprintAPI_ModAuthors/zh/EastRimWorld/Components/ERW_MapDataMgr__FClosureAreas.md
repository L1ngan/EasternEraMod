# `struct` `FClosureAreas`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 同一层的所有闭合区域

## 蓝图暴露变量

### 属性 `PlannedAreas`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FClosureAreaRange](ERW_MapDataMgr__FClosureAreaRange.md) , [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FClosureAreaRange , FClosureAreaData> PlannedAreas;` |

**说明:**

> 已规划的区域(修建中)
> TMap<闭合区域范围 , 闭合区域数据>

---

### 属性 `RoomAreas`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FClosureAreaRange](ERW_MapDataMgr__FClosureAreaRange.md) , [FClosureAreaData](ERW_MapDataMgr__FClosureAreaData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FClosureAreaRange , FClosureAreaData> RoomAreas;` |

**说明:**

> 已形成房间的区域
> TMap<闭合区域范围 , 闭合区域数据>

---

### 属性 `CombinationBuildAreas`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FClosureAreaRange](ERW_MapDataMgr__FClosureAreaRange.md),[FCombinationBuildAreaData](ERW_MapDataMgr__FCombinationBuildAreaData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FClosureAreaRange,FCombinationBuildAreaData> CombinationBuildAreas;` |

**说明:**

> 组合建筑的区域

---

### 属性 `HeatSourceRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FClosureAreaRange](ERW_MapDataMgr__FClosureAreaRange.md),[FHeatSourceAreaData](ERW_MapDataMgr__FHeatSourceAreaData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly ,SaveGame) TMap<FClosureAreaRange,FHeatSourceAreaData> HeatSourceRange;` |

**说明:**

> 该层热源影响范围映射(闭合区域范围→热源区域数据)

---
