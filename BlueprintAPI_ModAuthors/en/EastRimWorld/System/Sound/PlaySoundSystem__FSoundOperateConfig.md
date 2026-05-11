# `struct` `FSoundOperateConfig`

**Source header:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `SoundGroupTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGameplayTagContainer SoundGroupTag;` |

**Source comments:**

> 影响的音效组 填分组标签

---

### Property `SoundOperateType`

| Field | Details |
|------|------|
| C++ type | `ESoundOperateType` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ESoundOperateType SoundOperateType = ESoundOperateType::None;` |

**Source comments:**

> 音效操作类型

---

### Property `VolumePercentage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::Gradient || SoundOperateType == ESoundOperateType::ResetPlay", EditConditionHides)) float VolumePercentage = 0.2;` |

**Source comments:**

> 音量百分比

---

### Property `GradientTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::Gradient", EditConditionHides)) float GradientTime = 1.f;` |

**Source comments:**

> 渐变时间

---

### Property `PlaySoundID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::NewPlay", EditConditionHides)) TArray<FName> PlaySoundID;` |

**Source comments:**

> 播放的新的音效 读取GameSoundInfo表

---
