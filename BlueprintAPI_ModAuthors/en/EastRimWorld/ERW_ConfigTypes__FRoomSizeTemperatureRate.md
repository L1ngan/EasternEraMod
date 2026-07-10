# `struct` `FRoomSizeTemperatureRate`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> Configuration mapping a room size range to a temperature rate, multiplied in when settling the room temperature.

## Blueprint-exposed variables

### Property `RoomSizeRange`

| Field | Details |
|------|------|
| C++ type | `FIntPoint` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FIntPoint RoomSizeRange;` |

**Notes:**

> 房间大小范围

---

### Property `TemperatureRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float TemperatureRate;` |

**Notes:**

> 温度系数

---
