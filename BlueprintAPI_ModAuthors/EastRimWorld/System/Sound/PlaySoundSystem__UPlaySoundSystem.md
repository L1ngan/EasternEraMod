# `class` `UPlaySoundSystem`

**源码头文件：** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnVoicePlayComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnVoicePlayCompleteDelegate` |
| 反射说明符 | BlueprintAssignable, Category="PlaySoundSystem" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "PlaySoundSystem") FOnVoicePlayCompleteDelegate OnVoicePlayComplete;` |

**源码注释：**

> 语音播放完成时广播，可在蓝图中绑定事件

---

## 蓝图暴露函数

### 函数 `GetInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="PlaySoundSystem" |
| 返回类型 | `UPlaySoundSystem*` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure, Category = "PlaySoundSystem") static UPlaySoundSystem* GetInstance();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `PlaySoundByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundTag` | `const FGameplayTag &` |
| `InAttachActor` | `AActor *` |
| `InTransform` | `const FTransform &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySoundByTag(const FGameplayTag & SoundTag,AActor * InAttachActor,const FTransform & InTransform);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 播放音效

---

### 函数 `PlaySoundByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundID` | `FName` |
| `InAttachActor` | `AActor *` |
| `InTransform` | `const FTransform &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySoundByID(FName SoundID,AActor * InAttachActor,const FTransform & InTransform);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PlaySound2DByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySound2DByID(FName SoundID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 播放UI音乐

---

### 函数 `PlaySound2DByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundTag` | `const FGameplayTag &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySound2DByTag(const FGameplayTag & SoundTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PlaySoundEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Event` | `ESoundChangeEvent` |
| `InEventActor` | `AActor *` |
| `InTransform` | `FTransform` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySoundEvent(ESoundChangeEvent Event,AActor * InEventActor,FTransform InTransform);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过事件改变音效组

---

### 函数 `PlaySoundEventByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventID` | `FName` |
| `InEventActor` | `AActor *` |
| `InTransform` | `FTransform` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlaySoundEventByID(FName EventID,AActor * InEventActor,FTransform InTransform);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PlayAkAudioSoundByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundTag` | `const FGameplayTag &` |
| `InAttachActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSoundByTag(const FGameplayTag & SoundTag,AActor * InAttachActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 播放AK音效

---

### 函数 `PlayAkAudioSoundByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundID` | `FName` |
| `InAttachActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSoundByID(FName SoundID,AActor * InAttachActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PlayAkAudioSound2DByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSound2DByID(FName SoundID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 播放UIAk音效

---

### 函数 `PlayAkAudioSound2DByTag`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundTag` | `const FGameplayTag &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSound2DByTag(const FGameplayTag & SoundTag);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PlayAkAudioSoundEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Event` | `ESoundChangeEvent` |
| `InEventActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSoundEvent(ESoundChangeEvent Event,AActor * InEventActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过事件改变AK音效组

---

### 函数 `PlayAkAudioSoundEventByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventID` | `FName` |
| `InEventActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PlayAkAudioSoundEventByID(FName EventID,AActor * InEventActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PostAkAudioSoundEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AkAudioEvent` | `UAkAudioEvent *` |
| `InEventActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,Category="PlaySoundSystem") void PostAkAudioSoundEvent(UAkAudioEvent * AkAudioEvent,AActor * InEventActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RemoveAllSoundActorByAttachActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InAttachActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveAllSoundActorByAttachActor(AActor * InAttachActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除所有附加到此Actor上的音效

---

### 函数 `SetAllSoundPause`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bPause` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetAllSoundPause(bool bPause);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置所有音效暂停

---

### 函数 `SetAkAudioRTPCValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RTPCValue` | `const UAkRtpc*` |
| `InAttachActor` | `AActor *` |
| `InValue` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetAkAudioRTPCValue(const UAkRtpc* RTPCValue,AActor * InAttachActor,float InValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置音效播放参数

---

### 函数 `StopSoundByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundID` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StopSoundByID(FName SoundID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 停止播放对应ID的音效

---

### 函数 `PlayVoiceByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PlaySoundSystem" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `VoiceID` | `FName` |
| `InAttachActor` | `AActor*` |
| `false` | `bool bCheckPlaying =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "PlaySoundSystem") void PlayVoiceByID(FName VoiceID, AActor* InAttachActor,bool bCheckPlaying = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `StopVoiceByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `VoiceID` | `FName` |
| `InAttachActor` | `AActor *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StopVoiceByID(FName VoiceID,AActor * InAttachActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 停止播放对应ID的音效

---
