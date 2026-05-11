# `class` `UPracticeConfigurationAsset`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> 修炼配置

## Blueprint-exposed variables

### Property `RoomAddExperience`

| Field | Details |
|------|------|
| C++ type | TArray<[FPracticeAddAttributeRange](ERW_GameConfigComponent__FPracticeAddAttributeRange.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FPracticeAddAttributeRange> RoomAddExperience;` |

**Source comments:**

> 房间增加经验

---

### Property `FiveElementsAddExperience`

| Field | Details |
|------|------|
| C++ type | TArray<[FPracticeAddAttributeRange](ERW_GameConfigComponent__FPracticeAddAttributeRange.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FPracticeAddAttributeRange> FiveElementsAddExperience;` |

**Source comments:**

> 五行增加经验

---

### Property `MoodAddExperience`

| Field | Details |
|------|------|
| C++ type | TArray<[FPracticeAddAttributeRange](ERW_GameConfigComponent__FPracticeAddAttributeRange.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FPracticeAddAttributeRange> MoodAddExperience;` |

**Source comments:**

> 心情增加经验

---

### Property `AptitudeConversion`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AptitudeConversion = 0.1;` |

**Source comments:**

> 资质转化率 每点资质额外提升百分比经验加成

---

### Property `ContinuouslyIncreaseIntervalTime`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 ContinuouslyIncreaseIntervalTime = 40;` |

**Source comments:**

> 持续增加经验间隔时间

---
