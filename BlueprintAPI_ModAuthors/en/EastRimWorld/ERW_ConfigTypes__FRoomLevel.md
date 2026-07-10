# `struct` `FRoomLevel`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> 房间等级结构

## Blueprint-exposed variables

### Property `MinScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MinScore = 0;` |

**Notes:**

> 分数范围

---

### Property `MaxScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MaxScore = 0;` |

**Notes:**

> 分数范围

---

### Property `MinFiveElementScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MinFiveElementScore = 0;` |

**Notes:**

> 五行需求最小值

---

### Property `MaxFiveElementScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MaxFiveElementScore = 0;` |

**Notes:**

> 五行需求最大值

---

### Property `LevelName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText LevelName;` |

**Notes:**

> 等级名称

---

### Property `BuffIDs`

| Field | Details |
|------|------|
| C++ type | TMap<[ERoomEffectAppendType](ERW_Enumerations__ERoomEffectAppendType.md),[FRoomBuffIds](ERW_ConfigTypes__FRoomBuffIds.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomEffectAppendType,FRoomBuffIds> BuffIDs;` |

**Notes:**

> 附加buff

---

### Property `AddTags`

| Field | Details |
|------|------|
| C++ type | TMap<[ERoomEffectAppendType](ERW_Enumerations__ERoomEffectAppendType.md),FGameplayTagContainer> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomEffectAppendType,FGameplayTagContainer> AddTags;` |

**Notes:**

> 附加tag

---

### Property `RoomPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float RoomPoints = 100.0f;` |

**Notes:**

> 房间等级对应财富点数

---
