# `class` `ASoundActor`

**Source header:** `EastRimWorld/System/Sound/SoundActor.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `AudioComponent`

| Field | Details |
|------|------|
| C++ type | `UAudioComponent*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, VisibleAnywhere) UAudioComponent* AudioComponent = nullptr;` |

---

### Property `PlaySoundGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, VisibleAnywhere) FGuid PlaySoundGuid;` |

---

## Blueprint-exposed functions

### Function `PlaySoundEnd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlaySoundEnd();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PlaySound`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `float InVolumePercentage = 1.f` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlaySound(float InVolumePercentage = 1.f);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `StopSound`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StopSound();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `PauseSound`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bPause` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PauseSound(bool bPause);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `InitSoundActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewGameSoundInfo` | const [FGameSoundInfo](PlaySoundSystem__FGameSoundInfo.md) & |
| `(unnamed / type only)` | `FGuid PlayGuid = FGuid()` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitSoundActor(const FGameSoundInfo & NewGameSoundInfo,FGuid PlayGuid = FGuid());`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 初始化音效Actor

---

### Function `OnSoundChangeEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SoundOperate` | const [FSoundOperateConfig](PlaySoundSystem__FSoundOperateConfig.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnSoundChangeEvent(const FSoundOperateConfig & SoundOperate);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `SetPlaySoundSpeed`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewPitchMultiplier` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetPlaySoundSpeed(float NewPitchMultiplier);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置播放的速度

---
