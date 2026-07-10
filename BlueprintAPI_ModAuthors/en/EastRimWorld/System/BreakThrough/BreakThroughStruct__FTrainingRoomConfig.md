# `struct` `FTrainingRoomConfig`

**Source header:** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## Functional description (from header comments)

> 练功房配置

## Blueprint-exposed variables

### Property `ElementType`

| Field | Details |
|------|------|
| C++ type | [EFiveElementType](../../Struct/CommonEnum__EFiveElementType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EFiveElementType ElementType = EFiveElementType::None;` |

**Notes:**

> 五行类型

---

### Property `LevelConfigs`

| Field | Details |
|------|------|
| C++ type | TMap<int32, [FTrainingRoomLevelConfig](BreakThroughStruct__FTrainingRoomLevelConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32, FTrainingRoomLevelConfig> LevelConfigs;` |

**Notes:**

> 各等级配置

---
