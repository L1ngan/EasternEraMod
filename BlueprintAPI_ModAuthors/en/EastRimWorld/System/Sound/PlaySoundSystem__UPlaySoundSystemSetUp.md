# `class` `UPlaySoundSystemSetUp`

**Source header:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

## Functional description (from header comments)

> Play Sound System Set Up UObject type.

## Blueprint-exposed variables

### Property `SoundChangeEventPreset`

| Field | Details |
|------|------|
| C++ type | TMap<[ESoundChangeEvent](PlaySoundSystem__ESoundChangeEvent.md),FName> |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Sound") TMap<ESoundChangeEvent,FName> SoundChangeEventPreset;` |

**Notes:**

> 预设音效切换事件 Key 事件类型  Value 事件操作 读取SoundChangeEventConfig 配置表

---

### Property `ConcurrenceSetup`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag, int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Sound") TMap<FGameplayTag, int32> ConcurrenceSetup;` |

**Notes:**

> 并发设置  Key 分组标签  Value 数量

---

### Property `EnvironmentalSound`

| Field | Details |
|------|------|
| C++ type | `TMap<FVector,FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Sound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Sound") TMap<FVector,FName> EnvironmentalSound;` |

**Notes:**

> 环境音效 key 播放的位置 value 播放的音乐 读取GameSoundInfo 配置表

---

### Property `AkAudioSoundChangeEventPreset`

| Field | Details |
|------|------|
| C++ type | TMap<[ESoundChangeEvent](PlaySoundSystem__ESoundChangeEvent.md),FName> |
| Reflection specifiers | BlueprintReadWrite, Category="AkAudioSound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="AkAudioSound") TMap<ESoundChangeEvent,FName> AkAudioSoundChangeEventPreset;` |

**Notes:**

> AK音效切换预设

---

### Property `EnvironmentalSoundStartEvent`

| Field | Details |
|------|------|
| C++ type | `class UAkAudioEvent *` |
| Reflection specifiers | BlueprintReadWrite, Category="AkAudioSound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") class UAkAudioEvent * EnvironmentalSoundStartEvent = nullptr;` |

**Notes:**

> 环境音开始

---

### Property `EnvironmentalSoundEndEvent`

| Field | Details |
|------|------|
| C++ type | `class UAkAudioEvent *` |
| Reflection specifiers | BlueprintReadWrite, Category="AkAudioSound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") class UAkAudioEvent * EnvironmentalSoundEndEvent = nullptr;` |

**Notes:**

> 环境音结束

---

### Property `SeasonalTransitionEvent`

| Field | Details |
|------|------|
| C++ type | TMap<[EERWSeason](../../WorldSystem/WorldStruct__EERWSeason.md),class UAkAudioEvent*> |
| Reflection specifiers | BlueprintReadWrite, Category="AkAudioSound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") TMap<EERWSeason,class UAkAudioEvent*> SeasonalTransitionEvent;` |

**Notes:**

> 季节切换的事件

---

### Property `TimeHourRTP`

| Field | Details |
|------|------|
| C++ type | `UAkRtpc *` |
| Reflection specifiers | BlueprintReadWrite, Category="AkAudioSound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AkAudioSound") UAkRtpc * TimeHourRTP = nullptr;` |

**Notes:**

> 设置当前小时

---

### Property `PlayerCameraHeightRTP`

| Field | Details |
|------|------|
| C++ type | `UAkRtpc *` |
| Reflection specifiers | BlueprintReadWrite, Category="AkAudioSound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AkAudioSound") UAkRtpc * PlayerCameraHeightRTP = nullptr;` |

**Notes:**

> 设置玩家相机高度百分比

---

### Property `ChooseMapAkAudioEvent`

| Field | Details |
|------|------|
| C++ type | `class UAkAudioEvent *` |
| Reflection specifiers | BlueprintReadWrite, Category="AkAudioSound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") class UAkAudioEvent * ChooseMapAkAudioEvent = nullptr;` |

**Notes:**

> 地图切换事件

---

### Property `OtherAkAudioEvent`

| Field | Details |
|------|------|
| C++ type | `TArray<class UAkAudioEvent*>` |
| Reflection specifiers | BlueprintReadWrite, Category="AkAudioSound" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") TArray<class UAkAudioEvent*> OtherAkAudioEvent;` |

**Notes:**

> 地图中其他额外的事件 例如门派比武中 预览对决界面切换到战斗界面

---
