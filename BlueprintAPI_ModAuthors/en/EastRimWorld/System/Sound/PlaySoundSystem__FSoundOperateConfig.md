# `struct` `FSoundOperateConfig`

**Source header:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

## Functional description (from header comments)

> Sound Operate Config data structure.

## Blueprint-exposed variables

### Property `SoundGroupTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTagContainer` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGameplayTagContainer SoundGroupTag;` |

**Notes:**

> 影响的音效组 填分组标签

---

### Property `SoundOperateType`

| Field | Details |
|------|------|
| C++ type | [ESoundOperateType](PlaySoundSystem__ESoundOperateType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ESoundOperateType SoundOperateType = ESoundOperateType::None;` |

**Notes:**

> 音效操作类型

---

### Property `VolumePercentage`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::Gradient || SoundOperateType == ESoundOperateType::ResetPlay", EditConditionHides)) float VolumePercentage = 0.2;` |

**Notes:**

> 音量百分比

---

### Property `GradientTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::Gradient", EditConditionHides)) float GradientTime = 1.f;` |

**Notes:**

> 渐变时间

---

### Property `PlaySoundID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::NewPlay", EditConditionHides)) TArray<FName> PlaySoundID;` |

**Notes:**

> 播放的新的音效 读取GameSoundInfo表

---
