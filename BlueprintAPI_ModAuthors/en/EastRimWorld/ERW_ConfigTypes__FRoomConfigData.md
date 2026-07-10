# `struct` `FRoomConfigData`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 房间配置结构

## Blueprint-exposed variables

### Property `RoomName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText RoomName;` |

**Notes:**

> 房间名称

---

### Property `RoomType`

| Field | Details |
|------|------|
| C++ type | [ERoomType](ERW_Enumerations__ERoomType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) ERoomType RoomType = ERoomType::None;` |

**Notes:**

> 房间类型

---

### Property `RoomDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText RoomDesc;` |

**Notes:**

> 房间描述

---

### Property `RoomIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> RoomIcon;` |

**Notes:**

> 房间图标

---

### Property `Priority`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Priority = 0;` |

**Notes:**

> 优先级

---

### Property `DemandForArea`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 DemandForArea = 0;` |

**Notes:**

> 面积需求(大于等于)

---

### Property `FacilityNeed`

| Field | Details |
|------|------|
| C++ type | TArray<[FFacilityNeed](ERW_ConfigTypes__FFacilityNeed.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FFacilityNeed> FacilityNeed;` |

**Notes:**

> 设施需求

---

### Property `FacilityNeedNum`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 FacilityNeedNum = 0;` |

**Notes:**

> 设施需求数量

---

### Property `ScoreTypeRate`

| Field | Details |
|------|------|
| C++ type | TMap<[ERoomScoreType](ERW_Enumerations__ERoomScoreType.md),float> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomScoreType,float> ScoreTypeRate;` |

**Notes:**

> 评级系数

---

### Property `RoomLevels`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FRoomLevel](ERW_ConfigTypes__FRoomLevel.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<int32,FRoomLevel> RoomLevels;` |

**Notes:**

> 房间等级以及效果

---

### Property `FiveElementType`

| Field | Details |
|------|------|
| C++ type | [EFiveElementType](Struct/CommonEnum__EFiveElementType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EFiveElementType FiveElementType = EFiveElementType::None;` |

**Notes:**

> 五行类型

---

### Property `FiveElementValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 FiveElementValue = 0;` |

**Notes:**

> 五行属性值

---
