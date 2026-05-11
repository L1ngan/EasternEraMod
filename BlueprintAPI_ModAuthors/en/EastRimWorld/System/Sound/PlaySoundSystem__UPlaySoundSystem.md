# `class` `UPlaySoundSystem`

**Source header:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `OnVoicePlayComplete`

| Field | Details |
|------|------|
| C++ type | `FOnVoicePlayCompleteDelegate` |
| Reflection specifiers | BlueprintAssignable, Category="PlaySoundSystem" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "PlaySoundSystem") FOnVoicePlayCompleteDelegate OnVoicePlayComplete;` |

**Source comments:**

> 语音播放完成时广播，可在蓝图中绑定事件

---

## Blueprint-exposed functions

### Function `GetInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="PlaySoundSystem" |
| Return type | [UPlaySoundSystem](PlaySoundSystem__UPlaySoundSystem.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "PlaySoundSystem") static UPlaySoundSystem* GetInstance();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `PlaySoundByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundTag` | `const FGameplayTag &` |
| `InAttachActor` | `AActor *` |
| `InTransform` | `const FTransform &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySoundByTag(const FGameplayTag & SoundTag,AActor * InAttachActor,const FTransform & InTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 播放音效

---

### Function `PlaySoundByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundID` | `FName` |
| `InAttachActor` | `AActor *` |
| `InTransform` | `const FTransform &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySoundByID(FName SoundID,AActor * InAttachActor,const FTransform & InTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PlaySound2DByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySound2DByID(FName SoundID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 播放UI音乐

---

### Function `PlaySound2DByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySound2DByTag(const FGameplayTag & SoundTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PlaySoundEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Event` | `ESoundChangeEvent` |
| `InEventActor` | `AActor *` |
| `InTransform` | `FTransform` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySoundEvent(ESoundChangeEvent Event,AActor * InEventActor,FTransform InTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过事件改变音效组

---

### Function `PlaySoundEventByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventID` | `FName` |
| `InEventActor` | `AActor *` |
| `InTransform` | `FTransform` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySoundEventByID(FName EventID,AActor * InEventActor,FTransform InTransform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PlayAkAudioSoundByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundTag` | `const FGameplayTag &` |
| `InAttachActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSoundByTag(const FGameplayTag & SoundTag,AActor * InAttachActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 播放AK音效

---

### Function `PlayAkAudioSoundByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundID` | `FName` |
| `InAttachActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSoundByID(FName SoundID,AActor * InAttachActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PlayAkAudioSound2DByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSound2DByID(FName SoundID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 播放UIAk音效

---

### Function `PlayAkAudioSound2DByTag`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundTag` | `const FGameplayTag &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSound2DByTag(const FGameplayTag & SoundTag);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PlayAkAudioSoundEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Event` | `ESoundChangeEvent` |
| `InEventActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSoundEvent(ESoundChangeEvent Event,AActor * InEventActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 通过事件改变AK音效组

---

### Function `PlayAkAudioSoundEventByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventID` | `FName` |
| `InEventActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSoundEventByID(FName EventID,AActor * InEventActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PostAkAudioSoundEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AkAudioEvent` | `UAkAudioEvent *` |
| `InEventActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PostAkAudioSoundEvent(UAkAudioEvent * AkAudioEvent,AActor * InEventActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `RemoveAllSoundActorByAttachActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InAttachActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveAllSoundActorByAttachActor(AActor * InAttachActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 移除所有附加到此Actor上的音效

---

### Function `SetAllSoundPause`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bPause` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetAllSoundPause(bool bPause);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置所有音效暂停

---

### Function `SetAkAudioRTPCValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RTPCValue` | `const UAkRtpc*` |
| `InAttachActor` | `AActor *` |
| `InValue` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetAkAudioRTPCValue(const UAkRtpc* RTPCValue,AActor * InAttachActor,float InValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置音效播放参数

---

### Function `StopSoundByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundID` | `FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StopSoundByID(FName SoundID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 停止播放对应ID的音效

---

### Function `PlayVoiceByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PlaySoundSystem" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `VoiceID` | `FName` |
| `InAttachActor` | `AActor*` |
| `false` | `bool bCheckPlaying =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PlaySoundSystem") void PlayVoiceByID(FName VoiceID, AActor* InAttachActor,bool bCheckPlaying = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `StopVoiceByID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `VoiceID` | `FName` |
| `InAttachActor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StopVoiceByID(FName VoiceID,AActor * InAttachActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 停止播放对应ID的音效

---
