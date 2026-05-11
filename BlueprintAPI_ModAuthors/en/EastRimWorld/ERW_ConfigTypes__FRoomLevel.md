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

**Source comments:**

> 分数范围

---

### Property `MaxScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MaxScore = 0;` |

**Source comments:**

> 分数范围

---

### Property `MinFiveElementScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MinFiveElementScore = 0;` |

**Source comments:**

> 五行需求最小值

---

### Property `MaxFiveElementScore`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 MaxFiveElementScore = 0;` |

**Source comments:**

> 五行需求最大值

---

### Property `LevelName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText LevelName;` |

**Source comments:**

> 等级名称

---

### Property `BuffIDs`

| Field | Details |
|------|------|
| C++ type | TMap<ERoomEffectAppendType,[FRoomBuffIds](ERW_ConfigTypes__FRoomBuffIds.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomEffectAppendType,FRoomBuffIds> BuffIDs;` |

**Source comments:**

> 附加buff

---

### Property `AddTags`

| Field | Details |
|------|------|
| C++ type | `TMap<ERoomEffectAppendType,FGameplayTagContainer>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<ERoomEffectAppendType,FGameplayTagContainer> AddTags;` |

**Source comments:**

> 附加tag

---

### Property `RoomPoints`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float RoomPoints = 100.0f;` |

**Source comments:**

> 房间等级对应财富点数

---
