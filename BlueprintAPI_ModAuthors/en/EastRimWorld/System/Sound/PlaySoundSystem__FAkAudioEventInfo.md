# `struct` `FAkAudioEventInfo`

**Source header:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `SoundTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") FGameplayTag SoundTag;` |

**Source comments:**

> 标签

---

### Property `AkAudioEvent`

| Field | Details |
|------|------|
| C++ type | `class UAkAudioEvent *` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") class UAkAudioEvent * AkAudioEvent = nullptr;` |

**Source comments:**

> 播放事件

---
