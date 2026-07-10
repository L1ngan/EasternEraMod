# `struct` `FRoomScoreDataArray`

**Source header:** `EastRimWorld/ERW_ConfigTypes.h`

---

## Functional description (from header comments)

> Collection of score-range data for one rating type together with its maximum score.

## Blueprint-exposed variables

### Property `RoomScoreDatas`

| Field | Details |
|------|------|
| C++ type | TArray<[FRoomScoreData](ERW_ConfigTypes__FRoomScoreData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FRoomScoreData> RoomScoreDatas;` |

**Notes:**

> Array of score-range data entries.

---

### Property `MaxScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float MaxScore = 0.f;` |

**Notes:**

> Maximum score of this rating type.

---
