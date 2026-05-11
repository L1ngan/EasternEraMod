# `struct` `FClosureAreaData`

**源码头文件:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 闭合区域数据

## 蓝图暴露变量

### 属性 `GridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , bool> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGridPosition , bool> GridPoses;` |

**源码注释:**

> 闭合区域包含的格子
> TMap<格子坐标 , 占位符>

---

### 属性 `FoundationNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 FoundationNum { 0 };` |

**源码注释:**

> 建造完成的地基数量

---

### 属性 `RoomInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FRoomInfo](../ERW_ConfigTypes__FRoomInfo.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) FRoomInfo RoomInfo;` |

**源码注释:**

> 房间信息

---
