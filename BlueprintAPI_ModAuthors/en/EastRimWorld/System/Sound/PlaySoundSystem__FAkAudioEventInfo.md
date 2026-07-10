# `struct` `FAkAudioEventInfo`

**Source header:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

## Functional description (from header comments)

> Ak Audio Event Info data structure.

## Blueprint-exposed variables

### Property `SoundTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") FGameplayTag SoundTag;` |

**Notes:**

> 标签

---

### Property `AkAudioEvent`

| Field | Details |
|------|------|
| C++ type | `class UAkAudioEvent *` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") class UAkAudioEvent * AkAudioEvent = nullptr;` |

**Notes:**

> 播放事件

---
