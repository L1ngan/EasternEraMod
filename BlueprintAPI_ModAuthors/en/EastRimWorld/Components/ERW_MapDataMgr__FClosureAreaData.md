# `struct` `FClosureAreaData`

**Source header:** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## Functional description (from header comments)

> 闭合区域数据

## Blueprint-exposed variables

### Property `Points`

| Field | Details |
|------|------|
| C++ type | `TMap<FIntPoint , bool>` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FIntPoint , bool> Points;` |

**Notes:**

> 墙经过的所有点
> TMap<点 , 占位符>

---

### Property `GridPoses`

| Field | Details |
|------|------|
| C++ type | TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , bool> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGridPosition , bool> GridPoses;` |

**Notes:**

> 闭合区域包含的格子
> TMap<格子坐标 , 占位符>

---

### Property `RoomElementGuids`

| Field | Details |
|------|------|
| C++ type | TMap<[EEnvironType](../ERW_Enumerations__EEnvironType.md) , [FRoomElementGuids](ERW_MapDataMgr__FRoomElementGuids.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<EEnvironType , FRoomElementGuids> RoomElementGuids;` |

**Notes:**

> 房间要素的Guid
> TMap<环境类型 , 房间要素的Guid>

---

### Property `FoundationNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) int32 FoundationNum { 0 };` |

**Notes:**

> 建造完成的地基数量

---

### Property `WallNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 WallNum { 0 };` |

**Notes:**

> 建造完成的墙面数量

---

### Property `DoorNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 DoorNum { 0 };` |

**Notes:**

> 建造完成的门数量

---

### Property `RoofNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) int32 RoofNum { 0 };` |

**Notes:**

> 建造完成的屋顶数量

---

### Property `IsRoom`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) bool IsRoom { false };` |

**Notes:**

> 是否形成房间

---

### Property `RoomInfo`

| Field | Details |
|------|------|
| C++ type | [FRoomInfo](../ERW_ConfigTypes__FRoomInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) FRoomInfo RoomInfo;` |

**Notes:**

> 房间信息

---
