# `struct` `FGameSoundInfo`

**源码头文件:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `SoundTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") FGameplayTag SoundTag;` |

**源码注释:**

> 音乐标签

---

### 属性 `SoundGroupTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Base") FGameplayTag SoundGroupTag;` |

**源码注释:**

> 音乐分组标签  用于控制数量和音量

---

### 属性 `SoundBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,TSoftObjectPtr<USoundBase>>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") TMap<int32,TSoftObjectPtr<USoundBase>> SoundBase;` |

**源码注释:**

> 音频 key 游戏加速值 下标 （ 0 1 2 3 ）value 对应速度的音效

---

### 属性 `Volume`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") float Volume = 1.f;` |

**源码注释:**

> 音量

---

### 属性 `PitchMultiplier`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") float PitchMultiplier = 1.f;` |

**源码注释:**

> 音调（即播放速率）

---

### 属性 `bLoop`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Base") bool bLoop = false;` |

**源码注释:**

> 是否循环

---

### 属性 `bUISound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") bool bUISound = false;` |

**源码注释:**

> 是否UI音效

---

### 属性 `bAffectedByAcceleration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") bool bAffectedByAcceleration = true;` |

**源码注释:**

> 是否受到加速影响

---

### 属性 `bFadeIn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Fade" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade") bool bFadeIn = false;` |

**源码注释:**

> 是否淡入

---

### 属性 `FadeInCurve`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAudioFaderCurve` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,meta=(EditConditionHides,EditCondition = "bFadeIn == true")) EAudioFaderCurve FadeInCurve = EAudioFaderCurve::Linear;` |

---

### 属性 `FadeInDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Fade" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeIn == true")) float FadeInDuration = 2.0;` |

---

### 属性 `FadeInVolumeLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Fade" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeIn == true")) float FadeInVolumeLevel = 1.0f;` |

---

### 属性 `FadeInStartTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Fade" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeIn == true")) float FadeInStartTime = 0.0f;` |

---

### 属性 `bFadeOut`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Fade" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade") bool bFadeOut = false;` |

**源码注释:**

> 是否淡出

---

### 属性 `FadeOutCurve`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAudioFaderCurve` |
| 反射说明符 | BlueprintReadWrite, Category="Fade" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeOut == true")) EAudioFaderCurve FadeOutCurve = EAudioFaderCurve::Linear;` |

---

### 属性 `FadeOutDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Fade" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeOut == true")) float FadeOutDuration = 2.0;` |

---

### 属性 `FadeOutVolumeLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Fade" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Fade",meta=(EditConditionHides,EditCondition = "bFadeOut == true")) float FadeOutVolumeLevel = 0.0f;` |

---

### 属性 `bEnableAttenuate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Attenuate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Attenuate") bool bEnableAttenuate = false;` |

**源码注释:**

> 是否启用衰减

---

### 属性 `FalloffDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Attenuate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Attenuate",meta=(EditConditionHides,EditCondition = "bEnableAttenuate == true")) float FalloffDistance = 1000.f;` |

**源码注释:**

> 衰减距离

---

### 属性 `AttenuationShape`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TEnumAsByte<EAttenuationShape::Type>` |
| 反射说明符 | BlueprintReadWrite, Category="Attenuate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Attenuate",meta=(EditConditionHides,EditCondition = "bEnableAttenuate == true")) TEnumAsByte<EAttenuationShape::Type> AttenuationShape = EAttenuationShape::Sphere;` |

**源码注释:**

> 衰减形状

---

### 属性 `AttenuationShapeExtents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Attenuate" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category = "Attenuate",meta=(EditConditionHides,EditCondition = "bEnableAttenuate == true")) FVector AttenuationShapeExtents = FVector(600.f);` |

**源码注释:**

> 不衰减的范围

---
