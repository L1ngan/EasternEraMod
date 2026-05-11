# `class` `UPlaySoundSystemSetUp`

**源码头文件：** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `SoundChangeEventPreset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ESoundChangeEvent,FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Sound") TMap<ESoundChangeEvent,FName> SoundChangeEventPreset;` |

**源码注释：**

> 预设音效切换事件 Key 事件类型  Value 事件操作 读取SoundChangeEventConfig 配置表

---

### 属性 `ConcurrenceSetup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag, int32>` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Sound") TMap<FGameplayTag, int32> ConcurrenceSetup;` |

**源码注释：**

> 并发设置  Key 分组标签  Value 数量

---

### 属性 `EnvironmentalSound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FVector,FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Sound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Sound") TMap<FVector,FName> EnvironmentalSound;` |

**源码注释：**

> 环境音效 key 播放的位置 value 播放的音乐 读取GameSoundInfo 配置表

---

### 属性 `AkAudioSoundChangeEventPreset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ESoundChangeEvent,FName>` |
| 反射说明符 | BlueprintReadWrite, Category="AkAudioSound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="AkAudioSound") TMap<ESoundChangeEvent,FName> AkAudioSoundChangeEventPreset;` |

**源码注释：**

> AK音效切换预设

---

### 属性 `EnvironmentalSoundStartEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAkAudioEvent *` |
| 反射说明符 | BlueprintReadWrite, Category="AkAudioSound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") class UAkAudioEvent * EnvironmentalSoundStartEvent = nullptr;` |

**源码注释：**

> 环境音开始

---

### 属性 `EnvironmentalSoundEndEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAkAudioEvent *` |
| 反射说明符 | BlueprintReadWrite, Category="AkAudioSound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") class UAkAudioEvent * EnvironmentalSoundEndEvent = nullptr;` |

**源码注释：**

> 环境音结束

---

### 属性 `SeasonalTransitionEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<EERWSeason,class UAkAudioEvent*>` |
| 反射说明符 | BlueprintReadWrite, Category="AkAudioSound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") TMap<EERWSeason,class UAkAudioEvent*> SeasonalTransitionEvent;` |

**源码注释：**

> 季节切换的事件

---

### 属性 `TimeHourRTP`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UAkRtpc *` |
| 反射说明符 | BlueprintReadWrite, Category="AkAudioSound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AkAudioSound") UAkRtpc * TimeHourRTP = nullptr;` |

**源码注释：**

> 设置当前小时

---

### 属性 `PlayerCameraHeightRTP`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UAkRtpc *` |
| 反射说明符 | BlueprintReadWrite, Category="AkAudioSound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AkAudioSound") UAkRtpc * PlayerCameraHeightRTP = nullptr;` |

**源码注释：**

> 设置玩家相机高度百分比

---

### 属性 `ChooseMapAkAudioEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAkAudioEvent *` |
| 反射说明符 | BlueprintReadWrite, Category="AkAudioSound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") class UAkAudioEvent * ChooseMapAkAudioEvent = nullptr;` |

**源码注释：**

> 地图切换事件

---

### 属性 `OtherAkAudioEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<class UAkAudioEvent*>` |
| 反射说明符 | BlueprintReadWrite, Category="AkAudioSound" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "AkAudioSound") TArray<class UAkAudioEvent*> OtherAkAudioEvent;` |

**源码注释：**

> 地图中其他额外的事件 例如门派比武中 预览对决界面切换到战斗界面

---
