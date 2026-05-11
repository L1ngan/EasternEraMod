# `struct` `FClosureAreaData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 闭合区域数据

## Blueprint-exposed variables

### Property `GridPoses`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , bool> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGridPosition , bool> GridPoses;` |

**Source comments:**

> 闭合区域包含的格子
> TMap<格子坐标 , 占位符>

---

### Property `FoundationNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 FoundationNum { 0 };` |

**Source comments:**

> 建造完成的地基数量

---

### Property `RoomInfo`

| Field | Details |
|------|------|
| C++ type | [FRoomInfo](../ERW_ConfigTypes__FRoomInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FRoomInfo RoomInfo;` |

**Source comments:**

> 房间信息

---
