# `struct` `FClosureAreaData`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 闭合区域数据

## 蓝图暴露变量

### 属性 `Points`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FIntPoint , bool>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FIntPoint , bool> Points;` |

**说明:**

> 墙经过的所有点
> TMap<点 , 占位符>

---

### 属性 `GridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , bool> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGridPosition , bool> GridPoses;` |

**说明:**

> 闭合区域包含的格子
> TMap<格子坐标 , 占位符>

---

### 属性 `RoomElementGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FRoomElementGuids](ERW_MapDataMgr__FRoomElementGuids.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<EEnvironType , FRoomElementGuids> RoomElementGuids;` |

**说明:**

> 房间要素的Guid
> TMap<环境类型 , 房间要素的Guid>

---

### 属性 `FoundationNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 FoundationNum { 0 };` |

**说明:**

> 建造完成的地基数量

---

### 属性 `WallNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 WallNum { 0 };` |

**说明:**

> 建造完成的墙面数量

---

### 属性 `DoorNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 DoorNum { 0 };` |

**说明:**

> 建造完成的门数量

---

### 属性 `RoofNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 RoofNum { 0 };` |

**说明:**

> 建造完成的屋顶数量

---

### 属性 `IsRoom`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) bool IsRoom { false };` |

**说明:**

> 是否形成房间

---

### 属性 `RoomInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FRoomInfo](../ERW_ConfigTypes__FRoomInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FRoomInfo RoomInfo;` |

**说明:**

> 房间信息

---
