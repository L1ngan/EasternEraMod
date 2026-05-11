# `struct` `FGameSoundInfo`

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

> 音乐标签

---

### Property `SoundGroupTag`

| Field | Details |
|------|------|
| C++ type | `FGameplayTag` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Base") FGameplayTag SoundGroupTag;` |

**Source comments:**

> 音乐分组标签  用于控制数量和音量

---

### Property `SoundBase`

| Field | Details |
|------|------|
| C++ type | `TMap<int32,TSoftObjectPtr<USoundBase>>` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") TMap<int32,TSoftObjectPtr<USoundBase>> SoundBase;` |

**Source comments:**

> 音频 key 游戏加速值 下标 （ 0 1 2 3 ）value 对应速度的音效

---

### Property `Volume`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") float Volume = 1.f;` |

**Source comments:**

> 音量

---

### Property `PitchMultiplier`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") float PitchMultiplier = 1.f;` |

**Source comments:**

> 音调（即播放速率）

---

### Property `bLoop`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Base") bool bLoop = false;` |

**Source comments:**

> 是否循环

---

### Property `bUISound`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") bool bUISound = false;` |

**Source comments:**

> 是否UI音效

---

### Property `bAffectedByAcceleration`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Base" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") bool bAffectedByAcceleration = true;` |

**Source comments:**

> 是否受到加速影响

---

### Property `bFadeIn`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Fade" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade") bool bFadeIn = false;` |

**Source comments:**

> 是否淡入

---

### Property `FadeInCurve`

| Field | Details |
|------|------|
| C++ type | `EAudioFaderCurve` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides,EditCondition = "bFadeIn == true")) EAudioFaderCurve FadeInCurve = EAudioFaderCurve::Linear;` |

---

### Property `FadeInDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Fade" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeIn == true")) float FadeInDuration = 2.0;` |

---

### Property `FadeInVolumeLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Fade" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeIn == true")) float FadeInVolumeLevel = 1.0f;` |

---

### Property `FadeInStartTime`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Fade" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeIn == true")) float FadeInStartTime = 0.0f;` |

---

### Property `bFadeOut`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Fade" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade") bool bFadeOut = false;` |

**Source comments:**

> 是否淡出

---

### Property `FadeOutCurve`

| Field | Details |
|------|------|
| C++ type | `EAudioFaderCurve` |
| Reflection specifiers | BlueprintReadWrite, Category="Fade" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeOut == true")) EAudioFaderCurve FadeOutCurve = EAudioFaderCurve::Linear;` |

---

### Property `FadeOutDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Fade" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeOut == true")) float FadeOutDuration = 2.0;` |

---

### Property `FadeOutVolumeLevel`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Fade" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeOut == true")) float FadeOutVolumeLevel = 0.0f;` |

---

### Property `bEnableAttenuate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Attenuate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Attenuate") bool bEnableAttenuate = false;` |

**Source comments:**

> 是否启用衰减

---

### Property `FalloffDistance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Attenuate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Attenuate",meta=(EditConditionHides,EditCondition = "bEnableAttenuate == true")) float FalloffDistance = 1000.f;` |

**Source comments:**

> 衰减距离

---

### Property `AttenuationShape`

| Field | Details |
|------|------|
| C++ type | `TEnumAsByte<EAttenuationShape::Type>` |
| Reflection specifiers | BlueprintReadWrite, Category="Attenuate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Attenuate",meta=(EditConditionHides,EditCondition = "bEnableAttenuate == true")) TEnumAsByte<EAttenuationShape::Type> AttenuationShape = EAttenuationShape::Sphere;` |

**Source comments:**

> 衰减形状

---

### Property `AttenuationShapeExtents`

| Field | Details |
|------|------|
| C++ type | `FVector` |
| Reflection specifiers | BlueprintReadWrite, Category="Attenuate" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Attenuate",meta=(EditConditionHides,EditCondition = "bEnableAttenuate == true")) FVector AttenuationShapeExtents = FVector(600.f);` |

**Source comments:**

> 不衰减的范围

---
